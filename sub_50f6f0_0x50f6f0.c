// 函数名称: sub_50f6f0
// 虚拟地址: 0x50f6f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_50f6f0()
{
    // 第一条实际指令: int32_t* eax = sub_50ca90()
    int32_t* eax = sub_50ca90()
    int32_t var_14
    char const* const ecx_1
    
    if (eax == 0)
    label_50f7ca:
        char const* const var_10_1 = "EditorClampNodeValues"
        var_14 = 0x6bb
        ecx_1 = "pNode"
    else
        int32_t esi_1 = data_1151084
        
        if (esi_1 s< 0 || esi_1 s>= eax[2])
            goto label_50f7ca
        
        int32_t esi_2 = esi_1 << 4
        int32_t* esi_3 = esi_2 + *eax
        
        if (esi_2 == neg.d(*eax))
            goto label_50f7ca
        
        int32_t xmm0_1 = *esi_3
        
        if (not(xmm0_1 f<= esi_3[1]))
            esi_3[1] = xmm0_1
        
        eax = sub_50ca90()
        
        if (eax != 0)
            int32_t xmm0_2 = esi_3[2]
            
            if (not(0 f<= xmm0_2))
                esi_3[2] = 0
                xmm0_2 = (zx.o(0)).d
            
            if (not(xmm0_2 f<= 1f))
                esi_3[2] = 0x3f800000
                xmm0_2 = 0x3f800000
            
            int32_t edx = data_1151084
            int32_t xmm1 = xmm0_2
            
            if (edx s> 0)
                int32_t xmm2_1 = *(*eax + edx * 0x10 - 8)
                
                if (not(xmm2_1 f<= xmm0_2))
                    esi_3[2] = xmm2_1
                    xmm1 = xmm2_1
                    edx = data_1151084
            
            int32_t result = eax[2] - 1
            
            if (edx s< result)
                result = *eax
                int32_t xmm0_3 = *(result + edx * 0x10 + 0x18)
                
                if (not(xmm1 f<= xmm0_3))
                    esi_3[2] = xmm0_3
            
            return result
        
        char const* const var_10 = "EditorClampNodeValues"
        var_14 = 0x6c3
        ecx_1 = "pTrack"
    
    sub_489550(eax, &data_5b2591, ecx_1, "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", var_14, 
        "EditorClampNodeValues")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
