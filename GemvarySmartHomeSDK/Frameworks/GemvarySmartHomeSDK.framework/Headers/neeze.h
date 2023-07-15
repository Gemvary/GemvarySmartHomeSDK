
#ifndef __NEEZE_H__
#define __NEEZE_H__

//#include <inttypes.h>

/* set packet interval in ms. default 8ms */
int set_packet_interval(int ms);

/* send neeze */
int send_neeze(const char* ssid, uint32_t ssid_len, 
        const char* pwd, uint32_t pwd_len, 
        const char* key, uint32_t key_len,
        uint32_t ip);

/* with port */
int send_neeze_with_port(const char* ssid, uint32_t ssid_len, 
        const char* pwd, uint32_t pwd_len, 
        const char* key, uint32_t key_len,
        uint32_t ip, uint32_t port);

#endif /* __NEEZE_H__ */
