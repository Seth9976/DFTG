// 函数名称: sub_539b40
// 虚拟地址: 0x539b40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __stdcallsub_539b40(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* eax_1 = *(arg1 + 8)
    int32_t* eax_1 = *(arg1 + 8)
    int32_t result = (*(*eax_1 + 0x4c))(eax_1, arg2, arg3, 0, 0)
    
    if (result == 0)
        return result
    
    sub_489550(result, &data_5b2591, "hr == S_OK", 
        "d:\ax\trunk\ax2017\engine\windows\windowssound.cpp", 0x2bf, 
        "WindowsSoundInterface::SoundInterfaceWriteUnlock")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
