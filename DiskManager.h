#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

namespace DiskFind
{
    class DiskListener
    {
    private:
    public:
        virtual void onUdiskStateChanged(int usbState, string usbPath) = 0; // U盘状态改变时的回调函数
        virtual ~DiskListener() {}                                          // 添加虚析构函数
    };

    class DiskManager
    {
    private:
        // 单例，需要私有化构造方法
        DiskManager();
        ~DiskManager();

        vector<DiskListener *> listeners; // 监听器列表

        // 禁止拷贝构造函数和赋值操作符
        DiskManager(const DiskManager &) = delete;
        DiskManager &operator=(const DiskManager &) = delete;

    public:
        static DiskManager &getInstance();             // 获取单例对象
        void registerListener(DiskListener *listener); // 注册监听器
        void findUdisk();                              // 查找U盘
    };

}

