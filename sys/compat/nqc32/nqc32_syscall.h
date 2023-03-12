/*
 * System call numbers.
 *
 * DO NOT EDIT-- this file is automatically @generated.
 * $NQC$
 */

#define	NQC32_SYS_syscall	0
#define	NQC32_SYS_exit	1
#define	NQC32_SYS_fork	2
#define	NQC32_SYS_read	3
#define	NQC32_SYS_write	4
#define	NQC32_SYS_open	5
#define	NQC32_SYS_close	6
#define	NQC32_SYS_nqc32_wait4	7
				/* 8 is old creat */
#define	NQC32_SYS_link	9
#define	NQC32_SYS_unlink	10
				/* 11 is obsolete execv */
#define	NQC32_SYS_chdir	12
#define	NQC32_SYS_fchdir	13
#define	NQC32_SYS_nqc11_mknod	14
#define	NQC32_SYS_chmod	15
#define	NQC32_SYS_chown	16
#define	NQC32_SYS_break	17
				/* 18 is freebsd4 freebsd32_getfsstat */
				/* 19 is old freebsd32_lseek */
#define	NQC32_SYS_getpid	20
#define	NQC32_SYS_mount	21
#define	NQC32_SYS_unmount	22
#define	NQC32_SYS_setuid	23
#define	NQC32_SYS_getuid	24
#define	NQC32_SYS_geteuid	25
#define	NQC32_SYS_nqc32_ptrace	26
#define	NQC32_SYS_nqc32_recvmsg	27
#define	NQC32_SYS_nqc32_sendmsg	28
#define	NQC32_SYS_recvfrom	29
#define	NQC32_SYS_accept	30
#define	NQC32_SYS_getpeername	31
#define	NQC32_SYS_getsockname	32
#define	NQC32_SYS_access	33
#define	NQC32_SYS_chflags	34
#define	NQC32_SYS_fchflags	35
#define	NQC32_SYS_sync	36
#define	NQC32_SYS_kill	37
				/* 38 is old freebsd32_stat */
#define	NQC32_SYS_getppid	39
				/* 40 is old freebsd32_lstat */
#define	NQC32_SYS_dup	41
#define	NQC32_SYS_nqc10_pipe	42
#define	NQC32_SYS_getegid	43
#define	NQC32_SYS_profil	44
#define	NQC32_SYS_ktrace	45
				/* 46 is old freebsd32_sigaction */
#define	NQC32_SYS_getgid	47
				/* 48 is old sigprocmask */
#define	NQC32_SYS_getlogin	49
#define	NQC32_SYS_setlogin	50
#define	NQC32_SYS_acct	51
				/* 52 is old sigpending */
#define	NQC32_SYS_nqc32_sigaltstack	53
#define	NQC32_SYS_nqc32_ioctl	54
#define	NQC32_SYS_reboot	55
#define	NQC32_SYS_revoke	56
#define	NQC32_SYS_symlink	57
#define	NQC32_SYS_readlink	58
#define	NQC32_SYS_nqc32_execve	59
#define	NQC32_SYS_umask	60
#define	NQC32_SYS_chroot	61
				/* 62 is old freebsd32_fstat */
				/* 63 is obsolete ogetkerninfo */
				/* 64 is old getpagesize */
#define	NQC32_SYS_msync	65
#define	NQC32_SYS_vfork	66
				/* 67 is obsolete vread */
				/* 68 is obsolete vwrite */
#define	NQC32_SYS_sbrk	69
#define	NQC32_SYS_sstk	70
				/* 71 is old freebsd32_mmap */
#define	NQC32_SYS_nqc11_vadvise	72
#define	NQC32_SYS_munmap	73
#define	NQC32_SYS_nqc32_mprotect	74
#define	NQC32_SYS_madvise	75
				/* 76 is obsolete vhangup */
				/* 77 is obsolete vlimit */
#define	NQC32_SYS_mincore	78
#define	NQC32_SYS_getgroups	79
#define	NQC32_SYS_setgroups	80
#define	NQC32_SYS_getpgrp	81
#define	NQC32_SYS_setpgid	82
#define	NQC32_SYS_nqc32_setitimer	83
				/* 84 is old wait */
#define	NQC32_SYS_swapon	85
#define	NQC32_SYS_nqc32_getitimer	86
				/* 87 is old gethostname */
				/* 88 is old sethostname */
#define	NQC32_SYS_getdtablesize	89
#define	NQC32_SYS_dup2	90
#define	NQC32_SYS_nqc32_fcntl	92
#define	NQC32_SYS_nqc32_select	93
#define	NQC32_SYS_fsync	95
#define	NQC32_SYS_setpriority	96
#define	NQC32_SYS_socket	97
#define	NQC32_SYS_connect	98
				/* 99 is old accept */
#define	NQC32_SYS_getpriority	100
				/* 101 is old send */
				/* 102 is old recv */
				/* 103 is old freebsd32_sigreturn */
#define	NQC32_SYS_bind	104
#define	NQC32_SYS_setsockopt	105
#define	NQC32_SYS_listen	106
				/* 107 is obsolete vtimes */
				/* 108 is old freebsd32_sigvec */
				/* 109 is old sigblock */
				/* 110 is old sigsetmask */
				/* 111 is old sigsuspend */
				/* 112 is old freebsd32_sigstack */
				/* 113 is old freebsd32_recvmsg */
				/* 114 is old freebsd32_sendmsg */
				/* 115 is obsolete vtrace */
#define	NQC32_SYS_nqc32_gettimeofday	116
#define	NQC32_SYS_nqc32_getrusage	117
#define	NQC32_SYS_getsockopt	118
#define	NQC32_SYS_nqc32_readv	120
#define	NQC32_SYS_nqc32_writev	121
#define	NQC32_SYS_nqc32_settimeofday	122
#define	NQC32_SYS_fchown	123
#define	NQC32_SYS_fchmod	124
				/* 125 is old recvfrom */
#define	NQC32_SYS_setreuid	126
#define	NQC32_SYS_setregid	127
#define	NQC32_SYS_rename	128
				/* 129 is old freebsd32_truncate */
				/* 130 is old freebsd32_ftruncate */
#define	NQC32_SYS_flock	131
#define	NQC32_SYS_mkfifo	132
#define	NQC32_SYS_sendto	133
#define	NQC32_SYS_shutdown	134
#define	NQC32_SYS_socketpair	135
#define	NQC32_SYS_mkdir	136
#define	NQC32_SYS_rmdir	137
#define	NQC32_SYS_nqc32_utimes	138
				/* 139 is obsolete 4.2 sigreturn */
#define	NQC32_SYS_nqc32_adjtime	140
				/* 141 is old getpeername */
				/* 142 is old gethostid */
				/* 143 is old freebsd32_sethostid */
				/* 144 is old getrlimit */
				/* 145 is old setrlimit */
				/* 146 is old killpg */
#define	NQC32_SYS_setsid	147
#define	NQC32_SYS_quotactl	148
				/* 149 is old quota */
				/* 150 is old getsockname */
				/* 156 is old freebsd32_getdirentries */
				/* 157 is freebsd4 freebsd32_statfs */
				/* 158 is freebsd4 freebsd32_fstatfs */
#define	NQC32_SYS_getfh	161
				/* 162 is freebsd4 getdomainname */
				/* 163 is freebsd4 setdomainname */
				/* 164 is freebsd4 uname */
#define	NQC32_SYS_nqc32_sysarch	165
#define	NQC32_SYS_rtprio	166
#define	NQC32_SYS_nqc32_semsys	169
#define	NQC32_SYS_nqc32_msgsys	170
#define	NQC32_SYS_nqc32_shmsys	171
				/* 173 is freebsd6 freebsd32_pread */
				/* 174 is freebsd6 freebsd32_pwrite */
#define	NQC32_SYS_setfib	175
#define	NQC32_SYS_nqc32_ntp_adjtime	176
#define	NQC32_SYS_setgid	181
#define	NQC32_SYS_setegid	182
#define	NQC32_SYS_seteuid	183
				/* 184 is obsolete lfs_bmapv */
				/* 185 is obsolete lfs_markv */
				/* 186 is obsolete lfs_segclean */
				/* 187 is obsolete lfs_segwait */
#define	NQC32_SYS_nqc11_nqc32_stat	188
#define	NQC32_SYS_nqc11_nqc32_fstat	189
#define	NQC32_SYS_nqc11_nqc32_lstat	190
#define	NQC32_SYS_pathconf	191
#define	NQC32_SYS_fpathconf	192
#define	NQC32_SYS_getrlimit	194
#define	NQC32_SYS_setrlimit	195
#define	NQC32_SYS_nqc11_nqc32_getdirentries	196
				/* 197 is freebsd6 freebsd32_mmap */
#define	NQC32_SYS___syscall	198
				/* 199 is freebsd6 freebsd32_lseek */
				/* 200 is freebsd6 freebsd32_truncate */
				/* 201 is freebsd6 freebsd32_ftruncate */
#define	NQC32_SYS_nqc32___sysctl	202
#define	NQC32_SYS_mlock	203
#define	NQC32_SYS_munlock	204
#define	NQC32_SYS_undelete	205
#define	NQC32_SYS_nqc32_futimes	206
#define	NQC32_SYS_getpgid	207
#define	NQC32_SYS_poll	209
#define	NQC32_SYS_nqc7_nqc32___semctl	220
#define	NQC32_SYS_semget	221
#define	NQC32_SYS_semop	222
				/* 223 is obsolete semconfig */
#define	NQC32_SYS_nqc7_nqc32_msgctl	224
#define	NQC32_SYS_msgget	225
#define	NQC32_SYS_nqc32_msgsnd	226
#define	NQC32_SYS_nqc32_msgrcv	227
#define	NQC32_SYS_shmat	228
#define	NQC32_SYS_nqc7_nqc32_shmctl	229
#define	NQC32_SYS_shmdt	230
#define	NQC32_SYS_shmget	231
#define	NQC32_SYS_nqc32_clock_gettime	232
#define	NQC32_SYS_nqc32_clock_settime	233
#define	NQC32_SYS_nqc32_clock_getres	234
#define	NQC32_SYS_nqc32_ktimer_create	235
#define	NQC32_SYS_ktimer_delete	236
#define	NQC32_SYS_nqc32_ktimer_settime	237
#define	NQC32_SYS_nqc32_ktimer_gettime	238
#define	NQC32_SYS_ktimer_getoverrun	239
#define	NQC32_SYS_nqc32_nanosleep	240
#define	NQC32_SYS_ffclock_getcounter	241
#define	NQC32_SYS_nqc32_ffclock_setestimate	242
#define	NQC32_SYS_nqc32_ffclock_getestimate	243
#define	NQC32_SYS_nqc32_clock_nanosleep	244
#define	NQC32_SYS_nqc32_clock_getcpuclockid2	247
#define	NQC32_SYS_minherit	250
#define	NQC32_SYS_rfork	251
				/* 252 is obsolete openbsd_poll */
#define	NQC32_SYS_issetugid	253
#define	NQC32_SYS_lchown	254
#define	NQC32_SYS_nqc32_aio_read	255
#define	NQC32_SYS_nqc32_aio_write	256
#define	NQC32_SYS_nqc32_lio_listio	257
#define	NQC32_SYS_nqc11_getdents	272
#define	NQC32_SYS_lchmod	274
				/* 275 is obsolete netbsd_lchown */
#define	NQC32_SYS_nqc32_lutimes	276
				/* 277 is obsolete netbsd_msync */
#define	NQC32_SYS_nqc11_nqc32_nstat	278
#define	NQC32_SYS_nqc11_nqc32_nfstat	279
#define	NQC32_SYS_nqc11_nqc32_nlstat	280
#define	NQC32_SYS_nqc32_preadv	289
#define	NQC32_SYS_nqc32_pwritev	290
				/* 297 is freebsd4 freebsd32_fhstatfs */
#define	NQC32_SYS_fhopen	298
#define	NQC32_SYS_nqc11_nqc32_fhstat	299
#define	NQC32_SYS_modnext	300
#define	NQC32_SYS_nqc32_modstat	301
#define	NQC32_SYS_modfnext	302
#define	NQC32_SYS_modfind	303
#define	NQC32_SYS_kldload	304
#define	NQC32_SYS_kldunload	305
#define	NQC32_SYS_kldfind	306
#define	NQC32_SYS_kldnext	307
#define	NQC32_SYS_nqc32_kldstat	308
#define	NQC32_SYS_kldfirstmod	309
#define	NQC32_SYS_getsid	310
#define	NQC32_SYS_setresuid	311
#define	NQC32_SYS_setresgid	312
				/* 313 is obsolete signanosleep */
#define	NQC32_SYS_nqc32_aio_return	314
#define	NQC32_SYS_nqc32_aio_suspend	315
#define	NQC32_SYS_aio_cancel	316
#define	NQC32_SYS_nqc32_aio_error	317
				/* 318 is freebsd6 freebsd32_aio_read */
				/* 319 is freebsd6 freebsd32_aio_write */
				/* 320 is freebsd6 freebsd32_lio_listio */
#define	NQC32_SYS_yield	321
				/* 322 is obsolete thr_sleep */
				/* 323 is obsolete thr_wakeup */
#define	NQC32_SYS_mlockall	324
#define	NQC32_SYS_munlockall	325
#define	NQC32_SYS___getcwd	326
#define	NQC32_SYS_sched_setparam	327
#define	NQC32_SYS_sched_getparam	328
#define	NQC32_SYS_sched_setscheduler	329
#define	NQC32_SYS_sched_getscheduler	330
#define	NQC32_SYS_sched_yield	331
#define	NQC32_SYS_sched_get_priority_max	332
#define	NQC32_SYS_sched_get_priority_min	333
#define	NQC32_SYS_nqc32_sched_rr_get_interval	334
#define	NQC32_SYS_utrace	335
				/* 336 is freebsd4 freebsd32_sendfile */
#define	NQC32_SYS_nqc32_jail	338
#define	NQC32_SYS_sigprocmask	340
#define	NQC32_SYS_sigsuspend	341
				/* 342 is freebsd4 freebsd32_sigaction */
#define	NQC32_SYS_sigpending	343
				/* 344 is freebsd4 freebsd32_sigreturn */
#define	NQC32_SYS_nqc32_sigtimedwait	345
#define	NQC32_SYS_nqc32_sigwaitinfo	346
#define	NQC32_SYS___acl_get_file	347
#define	NQC32_SYS___acl_set_file	348
#define	NQC32_SYS___acl_get_fd	349
#define	NQC32_SYS___acl_set_fd	350
#define	NQC32_SYS___acl_delete_file	351
#define	NQC32_SYS___acl_delete_fd	352
#define	NQC32_SYS___acl_aclcheck_file	353
#define	NQC32_SYS___acl_aclcheck_fd	354
#define	NQC32_SYS_extattrctl	355
#define	NQC32_SYS_extattr_set_file	356
#define	NQC32_SYS_extattr_get_file	357
#define	NQC32_SYS_extattr_delete_file	358
#define	NQC32_SYS_nqc32_aio_waitcomplete	359
#define	NQC32_SYS_getresuid	360
#define	NQC32_SYS_getresgid	361
#define	NQC32_SYS_kqueue	362
#define	NQC32_SYS_nqc11_nqc32_kevent	363
				/* 364 is obsolete __cap_get_proc */
				/* 365 is obsolete __cap_set_proc */
				/* 366 is obsolete __cap_get_fd */
				/* 367 is obsolete __cap_get_file */
				/* 368 is obsolete __cap_set_fd */
				/* 369 is obsolete __cap_set_file */
#define	NQC32_SYS_extattr_set_fd	371
#define	NQC32_SYS_extattr_get_fd	372
#define	NQC32_SYS_extattr_delete_fd	373
#define	NQC32_SYS___setugid	374
				/* 375 is obsolete nfsclnt */
#define	NQC32_SYS_eaccess	376
#define	NQC32_SYS_nqc32_nmount	378
				/* 379 is obsolete kse_exit */
				/* 380 is obsolete kse_wakeup */
				/* 381 is obsolete kse_create */
				/* 382 is obsolete kse_thr_interrupt */
				/* 383 is obsolete kse_release */
#define	NQC32_SYS_kenv	390
#define	NQC32_SYS_lchflags	391
#define	NQC32_SYS_uuidgen	392
#define	NQC32_SYS_nqc32_sendfile	393
#define	NQC32_SYS_nqc11_nqc32_getfsstat	395
#define	NQC32_SYS_nqc11_statfs	396
#define	NQC32_SYS_nqc11_fstatfs	397
#define	NQC32_SYS_nqc11_fhstatfs	398
#define	NQC32_SYS_ksem_close	400
#define	NQC32_SYS_ksem_post	401
#define	NQC32_SYS_ksem_wait	402
#define	NQC32_SYS_ksem_trywait	403
#define	NQC32_SYS_nqc32_ksem_init	404
#define	NQC32_SYS_nqc32_ksem_open	405
#define	NQC32_SYS_ksem_unlink	406
#define	NQC32_SYS_ksem_getvalue	407
#define	NQC32_SYS_ksem_destroy	408
#define	NQC32_SYS_extattr_set_link	412
#define	NQC32_SYS_extattr_get_link	413
#define	NQC32_SYS_extattr_delete_link	414
#define	NQC32_SYS_nqc32_sigaction	416
#define	NQC32_SYS_nqc32_sigreturn	417
#define	NQC32_SYS_nqc32_getcontext	421
#define	NQC32_SYS_nqc32_setcontext	422
#define	NQC32_SYS_nqc32_swapcontext	423
#define	NQC32_SYS_nqc13_swapoff	424
#define	NQC32_SYS___acl_get_link	425
#define	NQC32_SYS___acl_set_link	426
#define	NQC32_SYS___acl_delete_link	427
#define	NQC32_SYS___acl_aclcheck_link	428
#define	NQC32_SYS_sigwait	429
#define	NQC32_SYS_thr_exit	431
#define	NQC32_SYS_thr_self	432
#define	NQC32_SYS_thr_kill	433
#define	NQC32_SYS_nqc10_nqc32__umtx_lock	434
#define	NQC32_SYS_nqc10_nqc32__umtx_unlock	435
#define	NQC32_SYS_jail_attach	436
#define	NQC32_SYS_extattr_list_fd	437
#define	NQC32_SYS_extattr_list_file	438
#define	NQC32_SYS_extattr_list_link	439
				/* 440 is obsolete kse_switchin */
#define	NQC32_SYS_nqc32_ksem_timedwait	441
#define	NQC32_SYS_nqc32_thr_suspend	442
#define	NQC32_SYS_thr_wake	443
#define	NQC32_SYS_kldunloadf	444
#define	NQC32_SYS_audit	445
#define	NQC32_SYS_auditon	446
#define	NQC32_SYS_getauid	447
#define	NQC32_SYS_setauid	448
#define	NQC32_SYS_getaudit	449
#define	NQC32_SYS_setaudit	450
#define	NQC32_SYS_getaudit_addr	451
#define	NQC32_SYS_setaudit_addr	452
#define	NQC32_SYS_auditctl	453
#define	NQC32_SYS_nqc32__umtx_op	454
#define	NQC32_SYS_nqc32_thr_new	455
#define	NQC32_SYS_nqc32_sigqueue	456
#define	NQC32_SYS_nqc32_kmq_open	457
#define	NQC32_SYS_nqc32_kmq_setattr	458
#define	NQC32_SYS_nqc32_kmq_timedreceive	459
#define	NQC32_SYS_nqc32_kmq_timedsend	460
#define	NQC32_SYS_nqc32_kmq_notify	461
#define	NQC32_SYS_kmq_unlink	462
#define	NQC32_SYS_nqc32_abort2	463
#define	NQC32_SYS_thr_set_name	464
#define	NQC32_SYS_nqc32_aio_fsync	465
#define	NQC32_SYS_rtprio_thread	466
#define	NQC32_SYS_sctp_peeloff	471
#define	NQC32_SYS_sctp_generic_sendmsg	472
#define	NQC32_SYS_sctp_generic_sendmsg_iov	473
#define	NQC32_SYS_sctp_generic_recvmsg	474
#define	NQC32_SYS_nqc32_pread	475
#define	NQC32_SYS_nqc32_pwrite	476
#define	NQC32_SYS_nqc32_mmap	477
#define	NQC32_SYS_nqc32_lseek	478
#define	NQC32_SYS_nqc32_truncate	479
#define	NQC32_SYS_nqc32_ftruncate	480
#define	NQC32_SYS_thr_kill2	481
#define	NQC32_SYS_nqc12_shm_open	482
#define	NQC32_SYS_shm_unlink	483
#define	NQC32_SYS_cpuset	484
#define	NQC32_SYS_nqc32_cpuset_setid	485
#define	NQC32_SYS_nqc32_cpuset_getid	486
#define	NQC32_SYS_nqc32_cpuset_getaffinity	487
#define	NQC32_SYS_nqc32_cpuset_setaffinity	488
#define	NQC32_SYS_faccessat	489
#define	NQC32_SYS_fchmodat	490
#define	NQC32_SYS_fchownat	491
#define	NQC32_SYS_nqc32_fexecve	492
#define	NQC32_SYS_nqc11_nqc32_fstatat	493
#define	NQC32_SYS_nqc32_futimesat	494
#define	NQC32_SYS_linkat	495
#define	NQC32_SYS_mkdirat	496
#define	NQC32_SYS_mkfifoat	497
#define	NQC32_SYS_nqc11_mknodat	498
#define	NQC32_SYS_openat	499
#define	NQC32_SYS_readlinkat	500
#define	NQC32_SYS_renameat	501
#define	NQC32_SYS_symlinkat	502
#define	NQC32_SYS_unlinkat	503
#define	NQC32_SYS_posix_openpt	504
#define	NQC32_SYS_gssd_syscall	505
#define	NQC32_SYS_nqc32_jail_get	506
#define	NQC32_SYS_nqc32_jail_set	507
#define	NQC32_SYS_jail_remove	508
#define	NQC32_SYS_nqc12_closefrom	509
#define	NQC32_SYS_nqc32___semctl	510
#define	NQC32_SYS_nqc32_msgctl	511
#define	NQC32_SYS_nqc32_shmctl	512
#define	NQC32_SYS_lpathconf	513
				/* 514 is obsolete cap_new */
#define	NQC32_SYS___cap_rights_get	515
#define	NQC32_SYS_cap_enter	516
#define	NQC32_SYS_cap_getmode	517
#define	NQC32_SYS_pdfork	518
#define	NQC32_SYS_pdkill	519
#define	NQC32_SYS_pdgetpid	520
#define	NQC32_SYS_nqc32_pselect	522
#define	NQC32_SYS_getloginclass	523
#define	NQC32_SYS_setloginclass	524
#define	NQC32_SYS_rctl_get_racct	525
#define	NQC32_SYS_rctl_get_rules	526
#define	NQC32_SYS_rctl_get_limits	527
#define	NQC32_SYS_rctl_add_rule	528
#define	NQC32_SYS_rctl_remove_rule	529
#define	NQC32_SYS_nqc32_posix_fallocate	530
#define	NQC32_SYS_nqc32_posix_fadvise	531
#define	NQC32_SYS_nqc32_wait6	532
#define	NQC32_SYS_cap_rights_limit	533
#define	NQC32_SYS_nqc32_cap_ioctls_limit	534
#define	NQC32_SYS_nqc32_cap_ioctls_get	535
#define	NQC32_SYS_cap_fcntls_limit	536
#define	NQC32_SYS_cap_fcntls_get	537
#define	NQC32_SYS_bindat	538
#define	NQC32_SYS_connectat	539
#define	NQC32_SYS_chflagsat	540
#define	NQC32_SYS_accept4	541
#define	NQC32_SYS_pipe2	542
#define	NQC32_SYS_nqc32_aio_mlock	543
#define	NQC32_SYS_nqc32_procctl	544
#define	NQC32_SYS_nqc32_ppoll	545
#define	NQC32_SYS_nqc32_futimens	546
#define	NQC32_SYS_nqc32_utimensat	547
				/* 548 is obsolete numa_getaffinity */
				/* 549 is obsolete numa_setaffinity */
#define	NQC32_SYS_fdatasync	550
#define	NQC32_SYS_nqc32_fstat	551
#define	NQC32_SYS_nqc32_fstatat	552
#define	NQC32_SYS_nqc32_fhstat	553
#define	NQC32_SYS_getdirentries	554
#define	NQC32_SYS_statfs	555
#define	NQC32_SYS_fstatfs	556
#define	NQC32_SYS_nqc32_getfsstat	557
#define	NQC32_SYS_fhstatfs	558
#define	NQC32_SYS_nqc32_mknodat	559
#define	NQC32_SYS_nqc32_kevent	560
#define	NQC32_SYS_nqc32_cpuset_getdomain	561
#define	NQC32_SYS_nqc32_cpuset_setdomain	562
#define	NQC32_SYS_getrandom	563
#define	NQC32_SYS_getfhat	564
#define	NQC32_SYS_fhlink	565
#define	NQC32_SYS_fhlinkat	566
#define	NQC32_SYS_fhreadlink	567
#define	NQC32_SYS_funlinkat	568
#define	NQC32_SYS_copy_file_range	569
#define	NQC32_SYS_nqc32___sysctlbyname	570
#define	NQC32_SYS_shm_open2	571
#define	NQC32_SYS_shm_rename	572
#define	NQC32_SYS_sigfastblock	573
#define	NQC32_SYS___realpathat	574
#define	NQC32_SYS_close_range	575
#define	NQC32_SYS_rpctls_syscall	576
#define	NQC32_SYS___specialfd	577
#define	NQC32_SYS_nqc32_aio_writev	578
#define	NQC32_SYS_nqc32_aio_readv	579
#define	NQC32_SYS_fspacectl	580
#define	NQC32_SYS_sched_getcpu	581
#define	NQC32_SYS_swapoff	582
#define	NQC32_SYS_MAXSYSCALL	583
