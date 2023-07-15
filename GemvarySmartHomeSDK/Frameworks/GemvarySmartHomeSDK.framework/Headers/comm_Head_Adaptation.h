
#ifndef COMM_HEAD_ADAPTATION_H_
#define COMM_HEAD_ADAPTATION_H_

#ifdef  __cplusplus
extern "C" {
#endif

#include "comm_type.h"
//#include "systemstruct.h"
//#include "comm_controlrecv.h"

#define COMM_MAC_LEN_MAX 32
#define COMM_MAC_LEN_MIN 1

typedef struct COMM_CALLBACK_FUN {
    xlink_debug_fn DebugPrintf;
    unsigned char in_internet;
    unsigned short maclen;
    char mac[COMM_MAC_LEN_MAX];
    
    unsigned char pipetype;
    unsigned short devicetype;
    
    void (*houman_sendData)(unsigned char *data, int datalen);
    void (*tcp_recv_data_cb)(unsigned char * Buffer, unsigned int BufferLen);
    void (*tcp_connect_status_cb)(unsigned char val);
        
} COMM_USER_CONFIG;

int smarthomeCommInit(const char *str, COMM_USER_CONFIG *config);
int sendUdpMessage(const char *str);
int sendTcpMessage(const char *str);
int searchMainCenter(const char *str);
int ModifyMainCenter(const char *str );
int getTcpConnStatus();

void  hcomm_tcp_disconnect();

#ifdef  __cplusplus
}
#endif

#endif /* SRC_XLINK_HEAD_ADAPTATION_H_ */
