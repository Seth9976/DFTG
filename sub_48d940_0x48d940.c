// 函数名称: sub_48d940
// 虚拟地址: 0x48d940
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOL __fastcallsub_48d940(HANDLE arg1)
{
    // 第一条实际指令: BOOL result = ReleaseSemaphore(arg1, 1, nullptr)
    BOOL result = ReleaseSemaphore(arg1, 1, nullptr)
    
    if (result != 0)
        return result
    
    sub_489550(result, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\coroutine.cpp", 0x83, 
        "mutex_release")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
