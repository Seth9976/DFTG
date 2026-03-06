// 函数名称: sub_48d990
// 虚拟地址: 0x48d990
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __stdcallsub_48d990(int32_t* arg1)
{
    // 第一条实际指令: enum WAIT_EVENT eax = WaitForSingleObject(arg1[3], 0xffffffff)
    enum WAIT_EVENT eax = WaitForSingleObject(arg1[3], 0xffffffff)
    int32_t var_10_1
    char const* const var_c
    
    if (eax == WAIT_OBJECT_0)
        arg1[1](arg1[2])
        *arg1 = 2
        eax = ReleaseSemaphore(arg1[4], 1, nullptr)
        
        if (eax != WAIT_OBJECT_0)
            return 0
        
        var_c = "mutex_release"
        var_10_1 = 0x83
    else
        var_c = "mutex_lock"
        var_10_1 = 0x78
    
    sub_489550(eax, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\coroutine.cpp", var_10_1, var_c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
