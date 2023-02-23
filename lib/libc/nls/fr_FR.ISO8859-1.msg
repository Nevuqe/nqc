$ $NQC$
$
$ Message catalog for fr_FR.ISO8859-1 locale
$
$ strerror() support catalog
$
$set 1
$ EPERM
1 Op�ration non autoris�e
$ ENOENT
2 Fichier ou r�pertoire inexistant
$ ESRCH
3 Processus inconnu
$ EINTR
4 Appel syst�me interrompu
$ EIO
5 Erreur d'entr�e/sortie
$ ENXIO
6 Dispositif non configur�
$ E2BIG
7 Liste d'arguments trop longue
$ ENOEXEC
8 Format d'ex�cutable invalide
$ EBADF
9 Mauvais descripteur de fichier
$ ECHILD
10 Pas de processus fils
$ EDEADLK
11 �treinte mortelle d�tect�e
$ ENOMEM
12 Impossible d'allouer de la m�moire
$ EACCES
13 Permission refus�e
$ EFAULT
14 Mauvaise adresse
$ ENOTBLK
15 Dispositif en mode bloc requis
$ EBUSY
16 Dispositif occup�
$ EEXIST
17 Le fichier existe
$ EXDEV
18 Lien inter-unit�s
$ ENODEV
19 Op�ration non support�e par le dispositif
$ ENOTDIR
20 Pas un r�pertoire
$ EISDIR
21 Est un r�pertoire
$ EINVAL
22 Argument invalide
$ ENFILE
23 Trop de fichiers ouverts sur le syst�me
$ EMFILE
24 Trop de fichiers ouverts
$ ENOTTY
25 Fonction inadapt�e au dispositif
$ ETXTBSY
26 Fichier en cours d'utilisation
$ EFBIG
27 Fichier trop grand
$ ENOSPC
28 Plus d'espace disponible
$ ESPIPE
29 Recherche ill�gale
$ EROFS
30 Syst�me de fichier en lecture seulement
$ EMLINK
31 Trop de liens
$ EPIPE
32 Tube d�connect�
$ EDOM
33 Argument num�rique hors d�finition
$ ERANGE
34 R�sultat trop grand
$ EAGAIN, EWOULDBLOCK
35 Ressource indisponible temporairement
$ EINPROGRESS
36 Op�ration en cours
$ EALREADY
37 Op�ration d�j� en cours
$ ENOTSOCK
38 Op�ration de type socket sur un descripteur de fichier
$ EDESTADDRREQ
39 Adresse de destination obligatoire
$ EMSGSIZE
40 Message trop long
$ EPROTOTYPE
41 Mauvais type de protocole pour la socket
$ ENOPROTOOPT
42 Protocole non disponible
$ EPROTONOSUPPORT
43 Protocole non support�
$ ESOCKTNOSUPPORT
44 Type de socket non support�
$ EOPNOTSUPP
45 Op�ration non support�e
$ EPFNOSUPPORT
46 Famille de protocole non support�e
$ EAFNOSUPPORT
47 Famille d'adresse non support�e par la famille de protocole
$ EADDRINUSE
48 Adresse en cours d'utilisation
$ EADDRNOTAVAIL
49 Impossible d'assigner l'adresse demand�e
$ ENETDOWN
50 Plus de r�seau
$ ENETUNREACH
51 R�seau inaccessible
$ ENETRESET
52 Connexion coup�e par le r�seau
$ ECONNABORTED
53 Connexion interrompue
$ ECONNRESET
54 Connexion interrompue par l'h�te distant
$ ENOBUFS
55 Tampon satur�
$ EISCONN
56 La socket est d�j� connect�e
$ ENOTCONN
57 La socket n'est pas connect�e
$ ESHUTDOWN
58 Impossible d'envoyer apr�s la coupure
$ ETOOMANYREFS
59 Trop de r�f�rences�: lien impossible
$ ETIMEDOUT
60 D�passement du d�lai d'attente
$ ECONNREFUSED
61 Connexion refus�e
$ ELOOP
62 Trop de niveaux de liens symboliques
$ ENAMETOOLONG
63 Nom de fichier trop long
$ EHOSTDOWN
64 H�te distant arr�t�
$ EHOSTUNREACH
65 Pas de route vers l'h�te distant
$ ENOTEMPTY
66 R�pertoire non vide
$ EPROCLIM
67 Trop de processus
$ EUSERS
68 Trop d'utilisateurs
$ EDQUOT
69 Quota de disque d�pass�
$ ESTALE
70 Identificateur de fichier NFS p�rim�
$ EREMOTE
71 Trop de niveaux ext�rieurs dans le path
$ EBADRPC
72 Mauvaise structure RPC
$ ERPCMISMATCH
73 Mauvaise version RPC
$ EPROGUNAVAIL
74 Prog. RPC indisponible
$ EPROGMISMATCH
75 Mauvaise version de programme
$ EPROCUNAVAIL
76 Mauvaise proc�dure pour le programme
$ ENOLCK
77 Plus de verrous disponibles
$ ENOSYS
78 Fonction non impl�ment�e
$ EFTYPE
79 Type de fichier ou format inappropri�
$ EAUTH
80 Erreur d'authentification
$ ENEEDAUTH
81 Authentification requise
$ EIDRM
82 Identifiant retir�
$ ENOMSG
83 Aucun message du type souhait�
$ EOVERFLOW
84 Valeur trop grande pour le type de donn�e
$ ECANCELED
85 Op�ration annul�e
$ EILSEQ
86 S�quence d'octets ill�gale
$ ENOATTR
87 Attribut non trouv�
$ EDOOFUS
88 Erreur de programmation
$
$ strsignal() support catalog
$
$set 2
$ SIGHUP
1 Fin de connexion
$ SIGINT
2 Interruption
$ SIGQUIT
3 Quitter
$ SIGILL
4 Instruction ill�gale
$ SIGTRAP
5 Trace/BPT trap
$ SIGABRT
6 Abort trap
$ SIGEMT
7 EMT trap
$ SIGFPE
8 Exception sur virgule flottante
$ SIGKILL
9 Tu�
$ SIGBUS
10 Bus error
$ SIGSEGV
11 Segmentation fault
$ SIGSYS
12 Bad system call
$ SIGPIPE
13 Broken pipe
$ SIGALRM
14 Alarm clock
$ SIGTERM
15 Termin�
$ SIGURG
16 Urgent I/O condition
$ SIGSTOP
17 Suspended (signal)
$ SIGTSTP
18 Suspended
$ SIGCONT
19 Continued
$ SIGCHLD
20 Child exited
$ SIGTTIN
21 Stopped (tty input)
$ SIGTTOU
22 Stopped (tty output)
$ SIGIO
23 I/O possible
$ SIGXCPU
24 Cputime limit exceeded
$ SIGXFSZ
25 Filesize limit exceeded
$ SIGVTALRM
26 Virtual timer expired
$ SIGPROF
27 Profiling timer expired
$ SIGWINCH
28 Window size changes
$ SIGINFO
29 Information request
$ SIGUSR1
30 User defined signal 1
$ SIGUSR2
31 User defined signal 2
