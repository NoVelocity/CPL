//
// Created by Robo_Start on 16.09.2026.
//

#include <IPAddr.h>


IPAddr::IPAddr(const uint8_t ipBlock1, const uint8_t ipBlock2, const uint8_t ipBlock3, const uint8_t ipBlock4) {
    ip[0] = ipBlock1;
    ip[1] = ipBlock2;
    ip[2] = ipBlock3;
    ip[3] = ipBlock4;
}

IPAddr::IPAddr(String ipString) {
    String data = "";
    for (int j = 0, i = 0; i < 4; j++) {
        if (ipString[j] == '.') {
            ip[i] = data.toInt();
            data = "";
            i++;
        } else {
            data += ipString[j];
        }
    }
}

String IPAddr::toString() const {
    return String(ip[0]) + "." +
           String(ip[1]) + "." +
           String(ip[2]) + "." +
           String(ip[3]);
}
