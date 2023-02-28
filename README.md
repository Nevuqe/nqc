What is NQC?
============

Nevuqe Core (NQC) is an operating system that is based on the FreeBSD operating system. This means that it
leverages the features and functionality of FreeBSD to provide a stable and secure environment for running
various applications and services.

For more information and resources on NQC, you can visit the Nevuqe developer site at [developer.nevuqe.com](https://developer.nevuqe.com).
Here, you will find detailed documentation, guides, and other information to help you get started with NQC.

If you have any questions or need support with NQC, you can contact Nevuqe at [hello@nevuqe.com](mailto:hello@nevuqe.com).

For security-related enquiries, it is required that you encrypt your email using Nevuqe's PGP key,
which can be found at [developer.nevuqe.com](https://developer.nevuqe.com/keys/signing-key.asc), and
please contact us at [security@nevuqe.com](mailto:security@nevuqe.com).

NQC Source Tree
---------------

| Directory | Description |
| --------- | ----------- |
| bin | System/user commands |
| cddl | Various commands and libraries under the Common Development and Distribution License |
| contrib | Packages contributed by 3rd parties |
| etc | Template files for /etc |
| gnu | Commands and libraries under the GNU General Public License (GPL) or Lesser General Public License (LGPL) |
| include | System include files |
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

Licensing
---------

This software is governed by the Nevuqe Open Source License (NOSL).

You can find a full copy of the license, [here](./LICENSE).
