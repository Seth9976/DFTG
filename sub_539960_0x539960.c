// 函数名称: sub_539960
// 虚拟地址: 0x539960
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __stdcallsub_539960(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[1] != 0x15)
    if (arg1[1] != 0x15)
        int32_t eax
        sub_489550(eax, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_SOUND", 
            "d:\ax\trunk\ax2017\engine\sound.cpp", 0x33a, "SoundGetDef")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* result = sub_4981f0(arg1)
    void* result_1 = result
    int32_t* edx = *(result_1 + 0x28)
    
    if (edx != 0)
        result = (*(*edx + 8))(edx)
        *(result_1 + 0x28) = 0
    
    return result
}
