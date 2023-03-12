/*      $OpenBSD: if_rtwn.c,v 1.6 2015/08/28 00:03:53 deraadt Exp $     */

/*-
 * Copyright (c) 2010 Damien Bergamini <damien.bergamini@free.fr>
 * Copyright (c) 2015 Stefan Sperling <stsp@openbsd.org>
 * Copyright (c) 2016 Andriy Voskoboinyk <avos@FreeBSD.org>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#include <sys/cdefs.h>
__NQCID("$NQC$");

#include <sys/param.h>
#include <sys/lock.h>
#include <sys/mutex.h>
#include <sys/mbuf.h>
#include <sys/kernel.h>
#include <sys/socket.h>
#include <sys/systm.h>
#include <sys/malloc.h>
#include <sys/queue.h>
#include <sys/taskqueue.h>
#include <sys/bus.h>
#include <sys/endian.h>

#include <machine/bus.h>
#include <machine/resource.h>
#include <sys/rman.h>

#include <net/if.h>
#include <net/ethernet.h>
#include <net/if_media.h>

#include <net80211/ieee80211_var.h>
#include <net80211/ieee80211_radiotap.h>

#include <dev/rtwn/if_rtwnvar.h>

#include <dev/rtwn/pci/rtwn_pci_var.h>
#include <dev/rtwn/pci/rtwn_pci_reg.h>

int
rtwn_pci_write_1(struct rtwn_softc *sc, uint16_t addr, uint8_t val)
{
	struct rtwn_pci_softc *pc = RTWN_PCI_SOFTC(sc);

	bus_space_write_1(pc->pc_st, pc->pc_sh, addr, val);

	return (0);
}

int
rtwn_pci_write_2(struct rtwn_softc *sc, uint16_t addr, uint16_t val)
{
	struct rtwn_pci_softc *pc = RTWN_PCI_SOFTC(sc);

	val = htole16(val);
	bus_space_write_2(pc->pc_st, pc->pc_sh, addr, val);

	return (0);
}

int
rtwn_pci_write_4(struct rtwn_softc *sc, uint16_t addr, uint32_t val)
{
	struct rtwn_pci_softc *pc = RTWN_PCI_SOFTC(sc);

	val = htole32(val);
	bus_space_write_4(pc->pc_st, pc->pc_sh, addr, val);

	return (0);
}

uint8_t
rtwn_pci_read_1(struct rtwn_softc *sc, uint16_t addr)
{
	struct rtwn_pci_softc *pc = RTWN_PCI_SOFTC(sc);

	return (bus_space_read_1(pc->pc_st, pc->pc_sh, addr));
}

uint16_t
rtwn_pci_read_2(struct rtwn_softc *sc, uint16_t addr)
{
	struct rtwn_pci_softc *pc = RTWN_PCI_SOFTC(sc);
	uint16_t val;

	val = bus_space_read_2(pc->pc_st, pc->pc_sh, addr);
	return le16toh(val);
}

uint32_t
rtwn_pci_read_4(struct rtwn_softc *sc, uint16_t addr)
{
	struct rtwn_pci_softc *pc = RTWN_PCI_SOFTC(sc);
	uint32_t val;

	val = bus_space_read_4(pc->pc_st, pc->pc_sh, addr);
	return le32toh(val);
}

void
rtwn_pci_delay(struct rtwn_softc *sc, int usec)
{
	if (usec < 1000)
		DELAY(usec);
	else {
		(void) mtx_sleep(sc, &sc->sc_mtx, 0, "rtwn_pci",
		    msecs_to_ticks(usec / 1000));
	}
}
