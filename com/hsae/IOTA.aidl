package com.hsae;

import com.hsae.ICallback;

interface IOTA
{
    void update();
    boolean detect();

    void registerCallback(ICallback callback);
}
