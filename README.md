What is NQC?
=============

NQC (Nevuqe Core) is a kernel based on FreeBSD. NQC runs on numerous architectures for single and multi-processor configurations.

Documentation can be found on our developer site, [developer.nevuqe.com](https://developer.nevuqe.com)

For any enquiries, contact hello@nevuqe.com.

<<<<<<< HEAD
And for security-related enquiries, please encrypt your email using our [GPG key](https://developer.nevuqe.com/keys/signing-key.asc) and contact security@nevuqe.com.

NQC Source Tree
================
| Directory | Description |
| --------- | ----------- |
| bin | System/user commands |
| cddl | Various commands and libraries under the Common Development and Distribution License |
| contrib | Packages contributed by 3rd parties |
| crypto | Cryptography files (see [crypto/README](crypto/README)) |
| etc | Template files for /etc |
| gnu | Commands and libraries under the GNU General Public License (GPL) or Lesser General Public License (LGPL) |
| include | System include files |
| kerberos5 | Kerberos5 (Heimdal) package |
| lib | System libraries |
| libexec | System daemons |
| release | Release building Makefile & associated tools |
| rescue | Build system for statically linked /rescue utilities |
| sbin | System commands |
| secure | Cryptographic libraries and commands |
| share | Shared resources |
| stand | Boot loader sources |
| sys | Kernel sources (see [sys/README.md](sys/README.md)) |
| targets | Support for experimental `DIRDEPS_BUILD` |
| tests | Regression tests which can be run by Kyua (see [tests/README](tests/README) for additional information) |
| tools | Utilities for regression testing and miscellaneous tasks |
| usr.bin | User commands |
| usr.sbin | System administration commands |
=======
For information on the CPU architectures and platforms supported by FreeBSD, see the [FreeBSD
website's Platforms page](https://www.freebsd.org/platforms/).

Source Roadmap:
---------------
| Directory | Description |
| --------- | ----------- |
| bin | System/user commands. |
| cddl | Various commands and libraries under the Common Development and Distribution License. |
| contrib | Packages contributed by 3rd parties. |
| crypto | Cryptography stuff (see [crypto/README](crypto/README)). |
| etc | Template files for /etc. |
| gnu | Commands and libraries under the GNU General Public License (GPL) or Lesser General Public License (LGPL). Please see [gnu/COPYING](gnu/COPYING) and [gnu/COPYING.LIB](gnu/COPYING.LIB) for more information. |
| include | System include files. |
| kerberos5 | Kerberos5 (Heimdal) package. |
| lib | System libraries. |
| libexec | System daemons. |
| release | Release building Makefile & associated tools. |
| rescue | Build system for statically linked /rescue utilities. |
| sbin | System commands. |
| secure | Cryptographic libraries and commands. |
| share | Shared resources. |
| stand | Boot loader sources. |
| sys | Kernel sources (see [sys/README.md](sys/README.md)). |
| targets | Support for experimental `DIRDEPS_BUILD` |
| tests | Regression tests which can be run by Kyua.  See [tests/README](tests/README) for additional information. |
| tools | Utilities for regression testing and miscellaneous tasks. |
| usr.bin | User commands. |
| usr.sbin | System administration commands. |

For information on synchronizing your source tree with one or more of the FreeBSD Project's development branches, please see [FreeBSD Handbook](https://docs.freebsd.org/en/books/handbook/cutting-edge/#current-stable).
>>>>>>> other/main
