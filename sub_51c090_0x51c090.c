// 函数名称: sub_51c090
// 虚拟地址: 0x51c090
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_51c090(void* arg1)
{
    // 第一条实际指令: int32_t* eax = *(arg1 + 0x2d0)
    int32_t* eax = *(arg1 + 0x2d0)
    int32_t result
    
    if (eax == 0)
        result = *(arg1 + 0x2d4)
    else
        void* var_c
        int32_t* var_10_1 = &var_c
        int32_t* var_8
        sub_4889e0(&var_8, eax, 0x15)
        result = *(var_c + 0x38)
        eax = var_8
        
        if (eax != 0)
            eax[7] -= 1
            var_8 = nullptr
    
    if (result != 0)
        return result
    
    sub_489550(eax, &data_5b2591, "pSoundData", "d:\ax\trunk\ax2017\engine\soundogg.cpp", 0xfd, 
        "SoundOggReaderGetSoundData")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
