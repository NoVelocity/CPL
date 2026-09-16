//
// Created by Robo_Start on 16.09.2026.
//

#ifndef IPADDR_H
#define IPADDR_H
#include <WString.h>

class IPAddr {
public:
    uint8_t ip[4];

    static char **split(char **argv, int *argc, char *string, char delimiter, int allowEmpty);

    IPAddr(const uint8_t ipBlock1, const uint8_t ipBlock2, const uint8_t ipBlock3, const uint8_t ipBlock4);

    IPAddr(String ipString);

    String toString() const;
};

#endif //IPADDR_H
