// 函数名称: sub_525800
// 虚拟地址: 0x525800
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_525800(int32_t arg1, int32_t* arg2, void* arg3, int128_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ecx_1 = *(arg3 + 4)
    int32_t var_3c = ecx_1
    
    if (ecx_1 == 0)
        var_3c = arg4[1].d
    
    int32_t edi = 1
    
    if (*(arg3 + 0x10) == 1)
        edi = 6
    
    *arg2 = *(arg4 + 4)
    int32_t eax_4 = *(arg4 + 8)
    arg2[0xf] = edi
    int32_t edi_1 = edi << 4
    arg2[1] = eax_4
    arg2[4] = 1
    uint32_t (* eax_5)[0x4] = sub_4c2e40(edi_1)
    int32_t ecx_4 = _memset(eax_5, 0, edi_1)
    int32_t var_94 = arg5
    arg2[0x12] = eax_5
    int32_t* esi_1 = arg2
    esi_1[5] = 6
    esi_1[6] = var_3c
    int32_t eax_8 = *(arg3 + 0x10)
    esi_1[7] = eax_8
    int32_t ecx_5 = sub_523dc0(eax_8, arg4, ecx_4)
    
    if (*(arg3 + 0x10) != 1)
        int32_t** edx_23 = esi_1[0x12]
        *edx_23 = nullptr
        sub_56d490(arg4, edx_23)
    else
        int32_t eax_9 = arg4[1].d
        int128_t var_60 = *arg4
        int32_t var_50_1 = eax_9
        int32_t eax_10 = *(arg3 + 0x14)
        int128_t var_38
        __builtin_memset(&var_38, 0, 0x18)
        bool cond:2_1
        
        if (eax_10 == 0)
            int32_t edi_3 = *(arg4 + 8)
            int32_t edx_1 = *(arg4 + 4)
            ecx_5 = edi_3 * 3
            
            if (edx_1 * 2 == ecx_5)
                goto label_5258fa
            
            int32_t edi_4 = edi_3 << 2
            eax_10 = edx_1 * 3
            
            if (eax_10 == edi_4)
                goto label_52595e
            
            cond:2_1 = edx_1 != edi_4
            goto label_5259c0
        
        int32_t var_40_1
        int32_t var_3c_1
        int32_t var_20
        int32_t edi_6
        int32_t var_18
        
        if (eax_10 != 1)
            if (eax_10 != 2)
                cond:2_1 = eax_10 != 3
            label_5259c0:
                
                if (cond:2_1)
                    sub_489550(eax_10, &data_5b2591, "Halt", 
                        "d:\ax\trunk\ax2017\engine\textureimport.cpp", 0x5b5, "sTextureImportToPng")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                sub_525450(ecx_5, arg4)
                int32_t eax_32 = *(arg4 + 4)
                int32_t ecx_9 = *(arg4 + 0xc)
                var_40_1 = eax_32
                var_60:4.d = eax_32
                int32_t eax_33
                int32_t edx_15
                edx_15:eax_33 = muls.dp.d(0x2aaaaaab, *(arg4 + 8))
                int32_t i = 0
                var_60:0xc.d = ecx_9
                var_20 = 0
                edi_6 = (edx_15 u>> 0x1f) + edx_15
                var_3c_1 = edi_6
                int32_t edx_17 = edi_6 * ecx_9
                bool cond:1_1 = data_6cf684 s< 2
                var_60:8.d = edi_6
                int32_t var_1c_3 = edx_17
                uint32_t xmm1_1[0x4] = _mm_shuffle_epi32(zx.o(edx_17), 0)
                
                if (cond:1_1)
                    int32_t ecx_10 = edx_17 * 2
                    
                    do
                        (&var_18)[i] = ecx_10
                        i += 1
                        ecx_10 += edx_17
                    while (i s< 4)
                else
                    var_18.o = _mm_mullo_epi32(xmm1_1, __paddd_xmmdq_memdq(data_60c870, data_60c850))
                
                goto label_525a3d
            
        label_52595e:
            int32_t eax_23
            int32_t edx_7
            edx_7:eax_23 = sx.q(*(arg4 + 4))
            int32_t eax_25 = (eax_23 + (edx_7 & 3)) s>> 2
            var_40_1 = eax_25
            var_60:4.d = eax_25
            int32_t eax_26
            int32_t edx_9
            edx_9:eax_26 = muls.dp.d(0x55555556, *(arg4 + 8))
            edi_6 = (edx_9 u>> 0x1f) + edx_9
            int32_t eax_28
            int32_t edx_10
            edx_10:eax_28 = sx.q(var_60:0xc.d)
            var_3c_1 = edi_6
            var_60:8.d = edi_6
            int32_t edx_13 = edi_6 * var_60:0xc.d
            int32_t esi_6 = ((edx_10 & 3) + eax_28) s>> 2
            int32_t var_10_2 = esi_6
            var_20 = edx_13
            int32_t var_1c_2 = edx_13 + (esi_6 << 1)
            int32_t var_14_2 = esi_6 * 3 + edx_13
            esi_1 = arg2
            var_18 = edx_13 + esi_6
            int32_t var_c_2 = esi_6 + (edx_13 << 1)
        label_525a3d:
            int32_t var_28_1 = 2
            var_38:8.d = 2
            var_38:4.d = 3
            var_38.d = 1
        else
        label_5258fa:
            var_20 = 0
            int32_t eax_12
            int32_t edx_2
            edx_2:eax_12 = muls.dp.d(0x55555556, *(arg4 + 4))
            int32_t eax_15 = (edx_2 u>> 0x1f) + edx_2
            var_40_1 = eax_15
            var_60:4.d = eax_15
            int32_t eax_17
            int32_t edx_3
            edx_3:eax_17 = sx.q(*(arg4 + 8))
            edi_6 = (eax_17 - edx_3) s>> 1
            var_3c_1 = edi_6
            int32_t esi_4 = var_60:0xc.d s/ 3
            var_60:8.d = edi_6
            var_18 = esi_4
            int32_t edx_6 = edi_6 * var_60:0xc.d
            int32_t ecx_6 = esi_4 * 2
            int32_t var_1c_1 = ecx_6
            int32_t var_c_1 = edx_6
            esi_1 = arg2
            int32_t var_10_1 = edx_6 + esi_4
            int32_t var_14_1 = ecx_6 + edx_6
        esi_1[1] = edi_6
        int32_t i_1 = 0
        *esi_1 = var_40_1
        int32_t ecx_12 = 0
        int32_t var_4c_1 = 0
        
        do
            int32_t eax_34 = *(&var_20 + ecx_12)
            int32_t* esi_8 = esi_1[0x12] + i_1
            *esi_8 = 0
            var_60.d = eax_34 + *arg4
            int32_t eax_36 = *(&var_38 + ecx_12)
            
            if (eax_36 == 0)
                sub_56d490(&var_60, esi_8)
            else
                int32_t var_70_1 = var_3c_1
                int32_t var_74_1 = var_40_1
                int32_t var_68_1 = eax_9
                int32_t var_6c_1 = sub_5234e0(var_40_1, eax_9)
                void* eax_42 = sub_4c2e40(sub_5235a0(eax_9, var_3c_1, var_40_1, eax_9))
                void* var_78 = eax_42
                sub_524e40(eax_42, &var_78, &var_60, eax_36)
                sub_56d490(&var_78, esi_8)
                void* eax_43 = var_78
                
                if (eax_43 != 0)
                    _aligned_free_base(eax_43)
            
            i_1 += 0x10
            esi_1 = arg2
            ecx_12 = var_4c_1 + 4
            var_4c_1 = ecx_12
        while (i_1 s< 0x60)
    
    int32_t result = *arg4
    
    if (result != 0)
        _aligned_free_base(result)
    
    result.b = 1
    *arg4 = 0
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
