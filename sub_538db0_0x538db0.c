// 函数名称: sub_538db0
// 虚拟地址: 0x538db0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_538db0(void* arg1)
{
    // 第一条实际指令: int32_t result = Ordinal_DSOUND_11(0, arg1 + 4, 0)
    int32_t result = Ordinal_DSOUND_11(0, arg1 + 4, 0)
    
    if (result != 0x88780078)
        if (result != 0)
            int32_t result_1 = result
            return sub_4894d0("DirectSoundCreate8 error:%x")
        
        int32_t* eax = *(arg1 + 4)
        result = (*(*eax + 0x18))(eax, data_1150b8c, 2)
        
        if (result != 0)
            sub_489550(result, &data_5b2591, "hr == S_OK", 
                "d:\ax\trunk\ax2017\engine\windows\windowssound.cpp", 0x65, 
                "WindowsSoundInterface::SoundInterfaceAttach")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    
    return result
}
