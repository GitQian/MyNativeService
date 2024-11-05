#include "DiskManager.h"
using namespace std;
using namespace DiskFind;
DiskManager::DiskManager()
{
}

DiskManager::~DiskManager()
{
}

DiskManager &DiskManager::getInstance()
{
    static DiskManager instance;
    return instance;
}

void DiskManager::registerListener(DiskListener *listener)
{
    auto it = std::find(listeners.begin(), listeners.end(), listener); // 检查监听器是否已经存在
    if (it == listeners.end()){
        listeners.push_back(listener);
    }
}

void DiskFind::DiskManager::findUdisk()
{
    for (DiskFind::DiskListener* listener : listeners)
    {
        listener->onUdiskStateChanged(1, "U盘已插入"); // 通知所有监听器找到U盘
    }
}
