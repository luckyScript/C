* create a socket
* socket address
* bind
* use socket

A sockaddr_in is a struct contains:
    struct sockaddr_in {
        short sin_family;
        u_short sin_port;
        struct in_addr sin_addr;
        char sin_zero[8];
    }
A hostent is a struct contains:
    struct hostent {
        char *h_name;
        char **h_aliases;
        int h_addrtype;
        int h_length;
        char **h_addr_list;
    }
