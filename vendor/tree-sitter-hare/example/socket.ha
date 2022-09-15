export type sa_family_t = u16;

export type in_addr = struct {
	s_addr: u32
};

export type sockaddr_in = struct {
	sin_family: sa_family_t,
	sin_port: u16,
	sin_addr: in_addr,
	__pad: [16]char,
};

export type in6_addr = struct {
	union {
		s6_addr: [16]u8,
		s6_addr16: [8]u16,
		s6_addr32: [4]u32,
	}
};

export type sockaddr_in6 = struct {
	sin6_family: sa_family_t,
	sin6_port: u16,
	sin6_flowinfo: u32,
	sin6_addr: in6_addr,
	sin6_scope_id: u32,
};

export def UNIX_PATH_MAX: size = 108;

export type sockaddr_un = struct {
	sun_family: sa_family_t,
	sun_path: [UNIX_PATH_MAX]char,
};

export type sockaddr = struct {
	union {
		in: sockaddr_in,
		in6: sockaddr_in6,
		un: sockaddr_un,
	},
};

// domain for socket(2)
export def AF_UNSPEC: u16 = 0;
export def AF_UNIX: u16 = 1;	// Unix domain sockets
export def AF_LOCAL: u16 = 1;	// POSIX name for AF_UNIX
export def AF_INET: u16 = 2;	// Internet IP Protocol
export def AF_AX25: u16 = 3;	// Amateur Radio AX.25
export def AF_IPX: u16 = 4;	// Novell IPX
export def AF_APPLETALK: u16 = 5;	// AppleTalk DDP
export def AF_NETROM: u16 = 6;	// Amateur Radio NET/ROM
export def AF_BRIDGE: u16 = 7;	// Multiprotocol bridge
export def AF_ATMPVC: u16 = 8;	// ATM PVCs
export def AF_X25: u16 = 9;	// Reserved for X.25 project
export def AF_INET6: u16 = 10;	// IP version 6
export def AF_ROSE: u16 = 11;	// Amateur Radio X.25 PLP
export def AF_DECnet: u16 = 12;	// Reserved for DECnet project
export def AF_NETBEUI: u16 = 13;	// Reserved for 802.2LLC project
export def AF_SECURITY: u16 = 14;	// Security callback pseudo AF
export def AF_KEY: u16 = 15;      // PF_KEY key management API
export def AF_NETLINK: u16 = 16;
export def AF_ROUTE: u16 = AF_NETLINK; // Alias to emulate 4.4BSD
export def AF_PACKET: u16 = 17;	// Packet family
export def AF_ASH: u16 = 18;	// Ash
export def AF_ECONET: u16 = 19;	// Acorn Econet
export def AF_ATMSVC: u16 = 20;	// ATM SVCs
export def AF_RDS: u16 = 21;	// RDS sockets
export def AF_SNA: u16 = 22;	// Linux SNA Project (nutters!)
export def AF_IRDA: u16 = 23;	// IRDA sockets
export def AF_PPPOX: u16 = 24;	// PPPoX sockets
export def AF_WANPIPE: u16 = 25;	// Wanpipe API Sockets
export def AF_LLC: u16 = 26;	// Linux LLC
export def AF_IB: u16 = 27;	// Native InfiniBand address
export def AF_MPLS: u16 = 28;	// MPLS
export def AF_CAN: u16 = 29;	// Controller Area Network
export def AF_TIPC: u16 = 30;	// TIPC sockets
export def AF_BLUETOOTH: u16 = 31;	// Bluetooth sockets
export def AF_IUCV: u16 = 32;	// IUCV sockets
export def AF_RXRPC: u16 = 33;	// RxRPC sockets
export def AF_ISDN: u16 = 34;	// mISDN sockets
export def AF_PHONET: u16 = 35;	// Phonet sockets
export def AF_IEEE802154: u16 = 36;	// IEEE802154 sockets
export def AF_CAIF: u16 = 37;	// CAIF sockets
export def AF_ALG: u16 = 38;	// Algorithm sockets
export def AF_NFC: u16 = 39;	// NFC sockets
export def AF_VSOCK: u16 = 40;	// vSockets
export def AF_KCM: u16 = 41;	// Kernel Connection Multiplexor
export def AF_QIPCRTR: u16 = 42;	// Qualcomm IPC Router
export def AF_SMC: u16 = 43;	// smc sockets
export def AF_XDP: u16 = 44;	// XDP sockets

// type for socket(2)
export def SOCK_STREAM: int = 1;
export def SOCK_DGRAM: int = 2;
export def SOCK_RAW: int = 3;
export def SOCK_RDM: int = 4;
export def SOCK_SEQPACKET: int = 5;
export def SOCK_DCCP: int = 6;
export def SOCK_PACKET: int = 10;

// protocol for socket(2)
export def IPPROTO_IP: int = 0;		// Dummy protocol for TCP
export def IPPROTO_ICMP: int = 1;	// Internet Control Message Protocol
export def IPPROTO_IGMP: int = 2;	// Internet Group Management Protocol
export def IPPROTO_IPIP: int = 4;	// IPIP tunnels (older KA9Q tunnels use 94)
export def IPPROTO_TCP: int = 6;	// Transmission Control Protocol
export def IPPROTO_EGP: int = 8;	// Exterior Gateway Protocol
export def IPPROTO_PUP: int = 12;	// PUP protocol
export def IPPROTO_UDP: int = 17;	// User Datagram Protocol
export def IPPROTO_IDP: int = 22;	// XNS IDP protocol
export def IPPROTO_TP: int = 29;	// SO Transport Protocol Class 4
export def IPPROTO_DCCP: int = 33;	// Datagram Congestion Control Protocol
export def IPPROTO_IPV6: int = 41;	// IPv6-in-IPv4 tunnelling
export def IPPROTO_RSVP: int = 46;	// RSVP Protocol
export def IPPROTO_GRE: int = 47;	// Cisco GRE tunnels (rfc 1701,1702)
export def IPPROTO_ESP: int = 50;	// Encapsulation Security Payload protocol
export def IPPROTO_AH: int = 51;	// Authentication Header protocol
export def IPPROTO_MTP: int = 92;	// Multicast Transport Protocol
export def IPPROTO_BEETPH: int = 94;	// IP option pseudo header for BEET
export def IPPROTO_ENCAP: int = 98;	// Encapsulation Header
export def IPPROTO_PIM: int = 103;	// Protocol Independent Multicast
export def IPPROTO_COMP: int = 108;	// Compression Header Protocol
export def IPPROTO_SCTP: int = 132;	// Stream Control Transport Protocol
export def IPPROTO_UDPLITE: int = 136;	// UDP-Lite (RFC 3828)
export def IPPROTO_MPLS: int = 137;	// MPLS in IP (RFC 4023)
export def IPPROTO_ETHERNET: int = 143;	// Ethernet-within-IPv6 Encapsulation
export def IPPROTO_RAW: int = 255;	// Raw IP packets
export def IPPROTO_MPTCP: int = 262;	// Multipath TCP connection

// send/rcv flags
export def MSG_OOB: int = 1;
export def MSG_PEEK: int = 2;
export def MSG_DONTROUTE: int = 4;
export def MSG_TRYHARD: int = 4;       // Synonym for MSG_DONTROUTE for DECnet
export def MSG_CTRUNC: int = 8;
export def MSG_PROBE: int = 0x10;	// Do not send. Only probe path f.e. for MTU
export def MSG_TRUNC: int = 0x20;
export def MSG_DONTWAIT: int = 0x40;	// Nonblocking io
export def MSG_EOR: int = 0x80;	// End of record
export def MSG_WAITALL: int = 0x100;	// Wait for a full request
export def MSG_FIN: int = 0x200;
export def MSG_SYN: int = 0x400;
export def MSG_CONFIRM: int = 0x800;	// Confirm path validity
export def MSG_RST: int = 0x1000;
export def MSG_ERRQUEUE: int = 0x2000;	// Fetch message from error queue
export def MSG_NOSIGNAL: int = 0x4000;	// Do not generate SIGPIPE
export def MSG_MORE: int = 0x8000;	// Sender will send more
export def MSG_WAITFORONE: int = 0x10000;	// recvmmsg(): block until 1+ packets avail
export def MSG_SENDPAGE_NOPOLICY: int = 0x10000; // sendpage() internal : do no apply policy
export def MSG_SENDPAGE_NOTLAST: int = 0x20000; // sendpage() internal : not the last page
export def MSG_BATCH: int = 0x40000; // sendmmsg(): more messages coming
export def MSG_EOF: int = MSG_FIN;
export def MSG_NO_SHARED_FRAGS: int = 0x80000; // sendpage() internal : page frags are not shared
export def MSG_SENDPAGE_DECRYPTED: int = 0x100000; // sendpage() internal : page may carry * plain text and require encryption
export def MSG_ZEROCOPY: int = 0x4000000;	// Use user data in kernel path
export def MSG_FASTOPEN: int = 0x20000000;	// Send data in TCP SYN
export def MSG_CMSG_CLOEXEC: int = 0x40000000;	// Set close_on_exec for file descriptor received through SCM_RIGHTS

// setsockopt levels
export def SOL_SOCKET: int = 1;

// setsockopt options
export def SO_DEBUG: int = 1;
export def SO_REUSEADDR: int = 2;
export def SO_TYPE: int = 3;
export def SO_ERROR: int = 4;
export def SO_DONTROUTE: int = 5;
export def SO_BROADCAST: int = 6;
export def SO_SNDBUF: int = 7;
export def SO_RCVBUF: int = 8;
export def SO_SNDBUFFORCE: int = 32;
export def SO_RCVBUFFORCE: int = 33;
export def SO_KEEPALIVE: int = 9;
export def SO_OOBINLINE: int = 10;
export def SO_NO_CHECK: int = 11;
export def SO_PRIORITY: int = 12;
export def SO_LINGER: int = 13;
export def SO_BSDCOMPAT: int = 14;
export def SO_REUSEPORT: int = 15;

// the following differ on ppc
export def SO_PASSCRED: int = 16;
export def SO_PEERCRED: int = 17;
export def SO_RCVLOWAT: int = 18;
export def SO_SNDLOWAT: int = 19;
export def SO_RCVTIMEO_OLD: int = 20;
export def SO_SNDTIMEO_OLD: int = 21;
