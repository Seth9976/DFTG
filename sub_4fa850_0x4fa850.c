// 函数名称: sub_4fa850
// 虚拟地址: 0x4fa850
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

float __convention("regparm")sub_4fa850(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* esi_2 = (arg2 << 4) + arg3
    int32_t* esi_2 = (arg2 << 4) + arg3
    uint32_t eax = esi_2[3]
    int32_t var_28
    char const* const var_24
    char* ecx_1
    
    if (eax == 1)
        if (arg4 s>= 0)
            eax = esi_2[2] u>> 3
            
            if (arg4 s< eax)
                int32_t edx = *esi_2
                *(edx + (arg4 << 3) + 4)
                return *(edx + (arg4 << 3))
        
        var_24 = "FlanimGetUncompressedParamVec2"
        var_28 = 0x32b
        ecx_1 = "frameIndex >= 0 && frameIndex < numFrames"
    else if (eax != 3)
        var_24 = "FlanimGetUncompressedParamVec2"
        var_28 = 0x335
        ecx_1 = "Halt"
    else
        int32_t ebx_1 = *esi_2
        int32_t edx_2
        edx_2:eax = muls.dp.d(0x66666667, esi_2[2])
        int32_t edx_3 = edx_2 s>> 2
        int32_t edi_3 = (edx_3 u>> 0x1f) + edx_3
        
        if (edi_3 s> 0)
            int32_t ecx_2 = 1
            
            if (edi_3 != 1)
                while (zx.d(*(ebx_1 + (edi_3 << 3) + (ecx_2 << 1))) s<= arg4)
                    ecx_2 += 1
                    
                    if (ecx_2 == edi_3)
                        break
            
            float var_c = fconvert.s(fconvert.t(*(ebx_1 + (ecx_2 << 3) - 4)))
            return fconvert.s(fconvert.t(*(ebx_1 + (ecx_2 << 3) - 8)))
        
        var_24 = "FlanimGetUncompressedConstantVec2"
        var_28 = 0x319
        ecx_1 = "numValues > 0"
    
    sub_489550(eax, &data_5b2591, ecx_1, "d:\ax\trunk\ax2017\engine\flanim.cpp", var_28, var_24)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
