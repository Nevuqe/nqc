$ $NQC$
$
$ Message catalog for es_ES.ISO8859-1 locale
$
$ strerror() support catalog
$
$set 1
$ EPERM
1 Operaci�n no permitida
$ ENOENT
2 Fichero o directorio inexistente
$ ESRCH
3 Proceso inexistente
$ EINTR
4 Llamada del sistema interrumpida
$ EIO
5 Error de Entrada/Salida
$ ENXIO
6 Dispositivo no configurado
$ E2BIG
7 La lista de argumentos es demasiado larga
$ ENOEXEC
8 Error en el formato del ejecutable
$ EBADF
9 Descriptor incorrecto de fichero
$ ECHILD
10 No hay procesos hijo
$ EDEADLK
11 Se ha evitado el bloqueo del recurso
$ ENOMEM
12 No se pudo asignar memoria
$ EACCES
13 Permiso denegado
$ EFAULT
14 Direcci�n incorrecta
$ ENOTBLK
15 Se necesita un dispositivo de bloques
$ EBUSY
16 Dispositivo ocupado
$ EEXIST
17 El fichero ya existe
$ EXDEV
18 Enlace entre dispositivos
$ ENODEV
19 Operaci�n inadecuada para este dispositivo
$ ENOTDIR
20 No es un directorio
$ EISDIR
21 Es un directorio
$ EINVAL
22 Argumento inadecuado
$ ENFILE
23 Hay demasiados ficheros abiertos en el sistema
$ EMFILE
24 Hay demasiados ficheros abiertos
$ ENOTTY
25 ioctl inapropiado para el dispositivo
$ ETXTBSY
26 Fichero de texto ocupado
$ EFBIG
27 Fichero demasiado grande
$ ENOSPC
28 No queda espacio libre en el dispositivo
$ ESPIPE
29 B�squeda ilegal
$ EROFS
30 Sistema de ficheros de solo lectura
$ EMLINK
31 Demasiados enlaces
$ EPIPE
32 Canal (pipe) roto
$ EDOM
33 Argumento num�rico fuera de rango
$ ERANGE
34 El resultado es demasiado grande
$ EAGAIN, EWOULDBLOCK
35 el recurso no est� disponible temporalmente
$ EINPROGRESS
36 Operaci�n en proceso
$ EALREADY
37 La operaci�n ya se est� ejecutando
$ ENOTSOCK
38 Operaci�n de socket inaceptable para el dispositivo
$ EDESTADDRREQ
39 Se necesita una direcci�n de destino
$ EMSGSIZE
40 Mensaje demasiado largo
$ EPROTOTYPE
41 Tipo err�neo de protocolo para el socket
$ ENOPROTOOPT
42 Protocolo no disponible
$ EPROTONOSUPPORT
43 Protocolo no contemplado
$ ESOCKTNOSUPPORT
44 Tipo de socket no contemplado
$ EOPNOTSUPP
45 Operaci�n no contemplada
$ EPFNOSUPPORT
46 Familia de protocolos no contemplada
$ EAFNOSUPPORT
47 Familia de direcciones no contemplada por la familia de protocolos
$ EADDRINUSE
48 La direcci�n ya est� siendo usada
$ EADDRNOTAVAIL
49 No se pudo asignar la direcci�n requerida
$ ENETDOWN
50 La red no funciona
$ ENETUNREACH
51 No se ha podido acceder a la red
$ ENETRESET
52 La conexi�n de red se ha interrumpido al reinicializar
$ ECONNABORTED
53 Conexi�n perdida por problemas en el software
$ ECONNRESET
54 El interlocutor ha reinicializado la conexi�n
$ ENOBUFS
55 No queda espacio en el b�fer
$ EISCONN
56 El socket ya estaba conectado
$ ENOTCONN
57 El socket no est� conectado
$ ESHUTDOWN
58 No se puede enviar tras la desconexi�n del socket
$ ETOOMANYREFS
59 Demasiadas referencias: no se pueden unir
$ ETIMEDOUT
60 El tiempo de conexi�n ha expirado
$ ECONNREFUSED
61 Conexi�n rehusada
$ ELOOP
62 Demasiados niveles de enlaces simb�licos
$ ENAMETOOLONG
63 Nombre de fichero demasiado largo
$ EHOSTDOWN
64 La m�quina est� fuera de servicio
$ EHOSTUNREACH
65 No hay ruta hasta la m�quina
$ ENOTEMPTY
66 Directorio no vac�o
$ EPROCLIM
67 Demasiados procesos
$ EUSERS
68 Demasiados usuarios
$ EDQUOT
69 Cuota de disco sobrepasada
$ ESTALE
70 Descriptor de fichero NFS inv�lido
$ EREMOTE
71 Ruta con demasiados niveles
$ EBADRPC
72 La estructura de la RPC es err�nea
$ ERPCMISMATCH
73 La vers�n de la RPC es err�nea
$ EPROGUNAVAIL
74 La RPC no est� accesible
$ EPROGMISMATCH
75 Versi�n err�nea del programa
$ EPROCUNAVAIL
76 Procedimiento err�neo para el programa
$ ENOLCK
77 No hay bloqueos disponibles
$ ENOSYS
78 Funci�n no realizada
$ EFTYPE
79 Tipo de fichero o formato inapropiado
$ EAUTH
80 Error de autentificaci�n
$ ENEEDAUTH
81 Se necesita un autenticador
$ EIDRM
82 Identificador eliminado
$ ENOMSG
83 No hay mensajes del tipo deseado
$ EOVERFLOW
84 Valor demasiado grande para almacenarse en el tipo deseado
$ ECANCELED
85 Operaci�n cancelada
$ EILSEQ
86 Secuencia de bytes ilegal
$ ENOATTR
87 Atributo no encontrado
$ EDOOFUS
88 Error de programaci�n
$ EBADMSG
89 Mensaje inv�lido
$ EMULTIHOP
90 Intento de hop multiple
$ ENOLINK
91 El enlace se ha roto
$ EPROTO
92 Fallo de protocolo
$ ENOTCAPABLE
93 Habilidades insuficientes
$
$ strsignal() support catalog
$
$set 2
$ SIGHUP
1 Fin de l�nea (Hangup)
$ SIGINT
2 Interrumpido
$ SIGQUIT
3 Terminado
$ SIGILL
4 Instrucci�n ilegal
$ SIGTRAP
5 Trace/BPT trap
$ SIGABRT
6 Abort trap
$ SIGEMT
7 EMT trap
$ SIGFPE
8 Excepci�n de coma flotante
$ SIGKILL
9 Matado
$ SIGBUS
10 Error en el bus
$ SIGSEGV
11 Fallo de segmentaci�n
$ SIGSYS
12 Llamada al sistema err�nea
$ SIGPIPE
13 Canal (pipe) roto
$ SIGALRM
14 Alarma del reloj
$ SIGTERM
15 Terminado
$ SIGURG
16 Condici�n urgente de E/S
$ SIGSTOP
17 Detenido (se�al)
$ SIGTSTP
18 Detenido
$ SIGCONT
19 Continuando
$ SIGCHLD
20 Proceso hijo terminado
$ SIGTTIN
21 Detenido (entrada tty)
$ SIGTTOU
22 Detenido (salida tty)
$ SIGIO
23 E/S posible
$ SIGXCPU
24 Se ha sobrepasado el tiempo l�mite de la CPU
$ SIGXFSZ
25 Se ha sobrepasado el l�mite de tama�o de fichero
$ SIGVTALRM
26 Temporizador virtual expirado
$ SIGPROF
27 Temporizador de perfilaci�n expirado
$ SIGWINCH
28 Cambios en el tama�o de ventana
$ SIGINFO
29 Petici�n de informaci�n
$ SIGUSR1
30 Se�al definida por el usuario n1
$ SIGUSR2
31 Se�al definida por el usuario n2
$
$ gai_strerror() support catalog
$
$set 3
$ 1 (obsoleto)
1 Tipo de direcci�n no contemplado
$ EAI_AGAIN
2 Error transitorio en la resoluci�n de nombres
$ EAI_BADFLAGS
3 Valor inv�lido de ai_flags
$ EAI_FAIL
4 Error no recuperable en la resoluci�n de nombres
$ EAI_FAMILY
5 ai_family no contemplado
$ EAI_MEMORY
6 Error en la asignaci�n de memoria
$ 7 (obsoleto)
7 No hay direcci�n asociada con el nombre de m�quina
$ EAI_NONAME
8 No se dispone nombre de m�quina, ni nombre de servicio
$ EAI_SERVICE
9 Nombre de servicio no contemplado en ai_socktype
$ EAI_SOCKTYPE
10 ai_socktype no contemplado
$ EAI_SYSTEM
11 Error de sistema devuelto en errno
$ EAI_BADHINTS
12 Valor inv�lido de hints
$ EAI_PROTOCOL
13 Protocolo resuelto desconocido
$ EAI_OVERFLOW
14 B�fer de argumentos sobrepasado
$ 0
32766 �xito
$ NL_MSGMAX
32767 Error desconocido
