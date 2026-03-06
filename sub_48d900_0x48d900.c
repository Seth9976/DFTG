// 函数名称: sub_48d900
// 虚拟地址: 0x48d900
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

enum WAIT_EVENT __fastcallsub_48d900(HANDLE arg1)
{
    // 第一条实际指令: enum WAIT_EVENT result = WaitForSingleObject(arg1, 0xffffffff)
    enum WAIT_EVENT result = WaitForSingleObject(arg1, 0xffffffff)
    
    if (result == WAIT_OBJECT_0)
        return result
    
    sub_489550(result, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\coroutine.cpp", 0x78, 
        "mutex_lock")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
