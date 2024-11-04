#include "OTAServer.h"

int main(int argc, char const *argv[])
{

    // sp<IServiceManager> sm = defaultServiceManager();
    OTAService::publishAndJoinThreadPool();
    /* code */
    return 0;
}