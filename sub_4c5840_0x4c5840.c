// 函数名称: sub_4c5840
// 虚拟地址: 0x4c5840
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4c5840(int32_t* arg1)
{
    // 第一条实际指令: void* eax = data_114e838
    void* eax = data_114e838
    float var_8 = *(eax + 0x1c)
    
    if (*(arg1 + 0x5b) != 0)
        var_8 = *(eax + 0x20)
    
    int32_t* ecx = *arg1
    
    if (ecx[1] == 0x15)
        eax = sub_4981f0(ecx)
        int32_t* ecx_1 = arg1[1]
        
        if (ecx_1[1] == 0x15)
            void* eax_1 = sub_4981f0(ecx_1)
            float xmm1 = *(eax + 4)
            
            if (eax_1 != eax)
                xmm1 = xmm1 f* *(eax_1 + 4)
            
            void* result = data_114e838
            float xmm3 = *(result + 0x24)
            
            if (*(arg1 + 0x5d) != 0)
                xmm3 = 1f
            
            float xmm0_6 = arg1[0x11] f* var_8 * xmm1 * xmm3 f* arg1[0xf]
            
            if (not(0 f> xmm0_6))
                _mm_min_ss(0x3f800000, xmm0_6)
            
            return result
    
    sub_489550(eax, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_SOUND", 
        "d:\ax\trunk\ax2017\engine\sound.cpp", 0x33a, "SoundGetDef")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
