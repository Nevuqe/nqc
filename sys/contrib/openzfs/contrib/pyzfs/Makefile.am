dist_noinst_DATA += %D%/libzfs_core %D%/README %D%/LICENSE %D%/docs
SUBSTFILES += %D%/setup.py

if PYZFS_ENABLED
ALL_LOCAL += pyzfs-all-local
pyzfs_V_1 = -v
pyzfs-all-local: %D%/setup.py
	cd %D% && $(PYTHON) setup.py -q $(pyzfs_V_$(V)) egg_info -e . build

#
# On Debian (Ubuntu, and other downstream distros) the install location of
# Python packages is "../dist-packages" instead of "../site-packages" [1].
# The install location used by "$(PYTHON) setup.py install" must match the
# location specified in the ZFS specfile (RPM macro "%{python_sitelib}") to
# avoid errors during the rpmbuild process.
# However we cannot pass "--install-layout=deb" to the setup script here because
# it is not supported on RPM-based distros; we use the combination of
# "--prefix", "--root" and "--install-lib" parameters instead which should work
# on every supported system.
#
# [1] https://wiki.debian.org/Python#Deviations_from_upstream
#
# Using "--no-compile" will not generate .pyc files which, in turn, will not be
# packaged: this could result in failures during the uninstall phase if these
# files are later created by manually loading the Python modules.
#
install-exec-local:
	cd %D% && $(PYTHON) setup.py egg_info -e . install \
	  --prefix $(prefix) \
	  --root $(DESTDIR)/ \
	  --install-lib $(pythonsitedir) \
	  --single-version-externally-managed \
	  --verbose

CLEAN_LOCAL += pyzfs-clean-local
pyzfs-clean-local:
	-$(RM) -r %D%/build/ %D%/pyzfs.egg-info/
endif
