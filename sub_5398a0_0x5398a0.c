// 函数名称: sub_5398a0
// 虚拟地址: 0x5398a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __stdcallsub_5398a0(void* arg1)
{
    // 第一条实际指令: int32_t* eax_1 = *(arg1 + 8)
    int32_t* eax_1 = *(arg1 + 8)
    int32_t result = (*(*eax_1 + 0x48))(eax_1)
    
    if (result == 0)
        return result
    
    sub_489550(result, &data_5b2591, "hr == S_OK", 
        "d:\ax\trunk\ax2017\engine\windows\windowssound.cpp", 0x283, 
        "WindowsSoundInterface::SoundInterfaceStop")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
