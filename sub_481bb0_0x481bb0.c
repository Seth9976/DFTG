// 函数名称: sub_481bb0
// 虚拟地址: 0x481bb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_481bb0(int32_t arg1, int64_t* arg2, int64_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int64_t* ebx = arg2
    int64_t* ebx = arg2
    int64_t* edi = arg3
    int64_t* var_28 = ebx
    int32_t eax_3 = (ebx - edi) s/ 0xc
    int64_t* var_20
    int64_t var_14
    
    if (eax_3 s<= 0x20)
    label_481c85:
        
        if (eax_3 s>= 2 && edi != ebx)
            int64_t* esi_7 = edi + 0xc
            
            if (esi_7 != ebx)
                do
                    int64_t xmm0_1 = *esi_7
                    int64_t* edx_11 = esi_7
                    int32_t ecx_9 = esi_7[1].d
                    var_14 = xmm0_1
                    int32_t ebx_1 = var_14.d
                    var_20.q = xmm0_1
                    
                    if (ebx_1 != 2 || *edi == ebx_1)
                        int64_t* eax_30 = esi_7
                        
                        while (true)
                            eax_30 -= 0xc
                            
                            if (ebx_1 != 2)
                                break
                            
                            if (*eax_30 == ebx_1)
                                break
                            
                            *edx_11 = *eax_30
                            edx_11[1].d = eax_30[1].d
                            edx_11 = eax_30
                        
                        eax_3 = ecx_9
                        *edx_11 = var_20.q
                        edx_11[1].d = eax_3
                    else
                        sub_579a90(edi + 0xc, edi, esi_7 - edi)
                        eax_3 = ecx_9
                        *edi = var_20.q
                        edi[1].d = eax_3
                    
                    esi_7 += 0xc
                while (esi_7 != var_28)
    else
        int32_t i = arg4
        
        while (i s> 0)
            sub_482000(eax_3, edi, &var_20, ebx, arg5)
            i = (i s>> 1) + (i s>> 2)
            int64_t* var_1c
            
            if ((var_20 - edi) s/ 0xc s>= (ebx - var_1c) s/ 0xc)
                sub_481bb0(i, arg5)
                ebx = var_20
                var_28 = ebx
            else
                sub_481bb0(i, arg5)
                edi = var_1c
            
            eax_3 = (ebx - edi) s/ 0xc
            
            if (eax_3 s<= 0x20)
                goto label_481c85
        
        if (eax_3 s<= 0x20)
            goto label_481c85
        
        int32_t edx_12
        edx_12:eax_3 = muls.dp.d(0x2aaaaaab, ebx - edi)
        int32_t i_3 = (ebx - edi) s/ 0xc
        int32_t i_1 = i_3 s>> 1
        
        if (i_1 s> 0)
            eax_3 = edi + i_1 * 0xc
            
            do
                int64_t xmm0_3 = *(eax_3 - 0xc)
                int32_t var_3c_4 = arg5
                var_20 = eax_3 - 0xc
                i_1 -= 1
                var_14 = xmm0_3
                int32_t var_c_1 = *(eax_3 - 4)
                sub_4825b0(&var_14, i_1, edi, i_3, &var_14)
                eax_3 = var_20
            while (i_1 s> 0)
            
            ebx = var_28
        
        if (i_3 s>= 2)
            void* esi_9 = ebx - 0xc
            int32_t i_2
            
            do
                if (i_3 s>= 2)
                    int32_t var_c_2 = *(esi_9 + 8)
                    var_14 = *esi_9
                    *esi_9 = *edi
                    *(esi_9 + 8) = edi[1].d
                    int32_t var_3c_5 = arg5
                    int32_t eax_26 = (esi_9 - edi) s/ 0xc
                    sub_4825b0(eax_26, 0, edi, eax_26, &var_14)
                
                esi_9 -= 0xc
                i_2 = (esi_9 - edi + 0xc) s/ 0xc
                i_3 = i_2
            while (i_2 s>= 2)
            
            return i_2
    return eax_3
}
