// 函数名称: sub_4fba90
// 虚拟地址: 0x4fba90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_4fba90(int32_t arg1, int32_t* arg2, void* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: void* eax_2 = *arg2 + arg4 * 0x38
    void* eax_2 = *arg2 + arg4 * 0x38
    
    if (arg5 == 4)
        return *(eax_2 + 0x20)
    
    if (arg5 == 5)
        return *(eax_2 + 0x24)
    
    int32_t var_14
    char const* const var_10
    char* ecx_1
    
    if (arg5 != 6)
        if (arg5 == 7)
            return *(eax_2 + 0x30)
        
        var_10 = "FlanimCompressGetInt"
        var_14 = 0x583
        ecx_1 = "Halt"
    else
        int32_t esi_2 = *(eax_2 + 0x28)
        eax_2 = nullptr
        int32_t edx_1 = *(arg3 + 0x48)
        
        if (edx_1 s> 0)
            int32_t* ecx = *(arg3 + 0x40)
            
            do
                if (*ecx == esi_2)
                    return eax_2
                
                eax_2 += 1
                ecx = &ecx[2]
            while (eax_2 s< edx_1)
        
        if (edx_1 s< 0xc8)
            *(*(arg3 + 0x40) + (edx_1 << 3)) = esi_2
            *(arg3 + 0x48) += 1
            return edx_1
        
        var_10 = "FlanimGetOrAddImage"
        var_14 = 0x564
        ecx_1 = "pFlanimDef->mImageCount < MAX_IMAGES_IN_FLANIM"
    
    sub_489550(eax_2, &data_5b2591, ecx_1, "d:\ax\trunk\ax2017\engine\flanim.cpp", var_14, var_10)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
