// 函数名称: sub_41ed90
// 虚拟地址: 0x41ed90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int64_t* __convention("regparm")sub_41ed90(int32_t arg1, int32_t* arg2, void* arg3, int64_t* arg4)
{
    // 第一条实际指令: bool cond:0 = *(arg3 + 0xbf0) == 0
    bool cond:0 = *(arg3 + 0xbf0) == 0
    int64_t* eax = arg4
    *eax = 0
    eax[1].d = 0
    *(eax + 4) = 0xffffffff
    
    if (not(cond:0))
        int32_t xmm1_1 = *(arg3 + 0xbc0)
        int32_t xmm0_1 = *(arg3 + 0xbc8)
        int32_t xmm2_1
        int32_t xmm3_1
        
        if (not(xmm0_1 f< xmm1_1))
            xmm3_1 = *(arg3 + 0xbc4)
            xmm2_1 = *(arg3 + 0xbcc)
        
        char const* const var_34
        int32_t var_30
        char const* const var_2c
        char* ecx_3
        
        if (xmm0_1 f< xmm1_1 || xmm2_1 f< xmm3_1)
        label_41ef76:
            var_2c = "RectContains"
            var_30 = 0xa4
            var_34 = "d:\ax\trunk\ax2017\engine\rect.cpp"
            ecx_3 = "RectIsNormalized(r)"
        label_41ef8f:
            sub_489550(eax, &data_5b2591, ecx_3, var_34, var_30, var_2c)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t xmm5_1 = *arg2
        
        if (not(xmm5_1 f< xmm1_1))
            int32_t xmm4_1 = arg2[1]
            
            if (not(xmm4_1 f< xmm3_1) && not(xmm0_1 f< xmm5_1) && not(xmm2_1 f< xmm4_1))
                int64_t* ebx_1 = *(arg3 + 0x960)
                int32_t esi_1 = 0
                
                if (ebx_1 s> 0)
                    int32_t edi_1 = data_63e5a8
                    void* ebx_2 = arg3 + 0x964
                    eax = ebx_1
                    
                    while (true)
                        int32_t ecx = *ebx_2
                        
                        if (ecx != 0)
                            uint32_t edx = zx.d(ecx.w)
                            
                            if (edx u>= data_63e5ac)
                            label_41ef3a:
                                var_2c = "DataArray<struct UI2>::DataArrayGet"
                                var_30 = 0x6d
                                var_34 = "d:\ax\trunk\ax2017\engine\dataarray.h"
                                ecx_3 = "DataArrayTryToGet(id) != NULL"
                                break
                            
                            eax = edx * 0x1418
                            
                            if (*(eax + edi_1 + 0x1410) != ecx)
                                goto label_41ef3a
                            
                            eax = edx * 0x1418
                            
                            if (*(eax + edi_1 + 0x1190) s<= 0)
                                var_2c = "UI2GetRectTransformed"
                                var_30 = 0x4088
                                var_34 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                                ecx_3 = "root.numChildren > 0"
                                break
                            
                            int32_t ecx_1 = *(eax + edi_1 + 0x1194)
                            
                            if (ecx_1 == 0)
                                var_2c = "DataArray<struct UI2>::DataArrayGet"
                                var_30 = 0x6c
                                var_34 = "d:\ax\trunk\ax2017\engine\dataarray.h"
                                ecx_3 = "id != DATAID_NULL"
                                break
                            
                            uint32_t edx_1 = zx.d(ecx_1.w)
                            
                            if (edx_1 u>= data_63e5ac)
                                goto label_41ef3a
                            
                            eax = edx_1 * 0x1418
                            
                            if (*(eax + edi_1 + 0x1410) != ecx_1)
                                goto label_41ef3a
                            
                            eax = edx_1 * 0x1418
                            float xmm1_2[0x4] = *(eax + edi_1 + 0x10a0)
                            int128_t xmm0_2 = *(eax + edi_1 + 0x10a0)
                            float xmm3_3 = _mm_shuffle_ps(xmm1_2, xmm1_2, 0xaa)
                            int128_t var_1c_1 = xmm0_2
                            
                            if (xmm3_3 f< xmm1_2)
                                goto label_41ef76
                            
                            float xmm2_2 = xmm1_2[3]
                            float xmm0_3 = xmm1_2[1]
                            
                            if (xmm2_2 < xmm0_3)
                                goto label_41ef76
                            
                            if (not(xmm5_1 f< xmm1_2) && not(xmm4_1 f< xmm0_3) && not(xmm3_3 f< xmm5_1)
                                    && xmm2_2 f>= xmm4_1)
                                *(arg4 + 4) = esi_1
                                *arg4 = arg3
                                arg4[1].d = 0x2710
                                return arg4
                            
                            eax = ebx_1
                        
                        esi_1 += 1
                        ebx_2 += 4
                        
                        if (esi_1 s>= eax)
                            return arg4
                    
                    goto label_41ef8f
    
    return eax
}
