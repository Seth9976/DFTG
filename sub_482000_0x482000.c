// 函数名称: sub_482000
// 虚拟地址: 0x482000
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int64_t** __convention("regparm")sub_482000(int32_t arg1, int32_t* arg2, int64_t** arg3, void* arg4, int32_t arg5)
{
    // 第一条实际指令: void* edi = arg4
    void* edi = arg4
    void* eax_1 = edi - 0xc
    int64_t* ebx_1 = &arg2[(((edi - arg2) s/ 0xc) s>> 1) * 3]
    int32_t eax_5 = (eax_1 - arg2) s/ 0xc
    
    if (eax_5 s<= 0x28)
        int32_t var_24_1 = arg5
        sub_4826a0(edi - 0xc, ebx_1, arg2, edi - 0xc)
    else
        int32_t eax_7 = (eax_5 + 1) s>> 3
        int32_t edi_2 = eax_7 * 0xc
        int32_t* eax_9 = &arg2[eax_7 * 6]
        int32_t var_24 = arg5
        sub_4826a0(eax_9, &arg2[eax_7 * 3], arg2, eax_9)
        int32_t var_2c_1 = arg5
        int32_t* eax_10 = edi_2 + ebx_1
        sub_4826a0(eax_10, ebx_1, ebx_1 - edi_2, eax_10)
        int32_t* eax_11 = eax_1
        int32_t var_34_1 = arg5
        void* eax_12 = eax_11 - eax_7 * 0x18
        int64_t* edx_7 = eax_11 - edi_2
        int32_t var_3c_1 = arg5
        sub_4826a0(sub_4826a0(eax_12, edx_7, eax_12, eax_11), ebx_1, &arg2[eax_7 * 3], edx_7)
        edi = arg4
    
    int32_t* edx_10 = arg2
    void* i = ebx_1 + 0xc
    int64_t* eax_15 = ebx_1
    
    if (edx_10 u< ebx_1)
        do
            int32_t ecx_14 = *ebx_1
            
            if (*(ebx_1 - 0xc) == 2 && ecx_14 != 2)
                break
            
            if (ecx_14 == 2 && *(ebx_1 - 0xc) != ecx_14 && ecx_14 == ecx_14)
                break
            
            ebx_1 = eax_15 - 0xc
            eax_15 = ebx_1
        while (edx_10 u< eax_15)
    
    for (; i u< edi; i += 0xc)
        int32_t ecx_15 = *eax_15
        
        if (*i == 2)
            if (ecx_15 != 2)
                break
            
            goto label_482113
        
        if (ecx_15 == 2)
        label_482113:
            
            if (*i != 2)
                break
    
    int64_t* ecx_16 = ebx_1
    void* i_1 = i
    int64_t* var_c_1 = ecx_16
    
    while (true)
        if (i_1 u< edi)
            do
                int32_t edx_11 = *ebx_1
                int32_t ecx_17 = *i_1
                
                if (edx_11 != 2)
                    if (ecx_17 == 2 && edx_11 != 2)
                        break
                    
                label_48214b:
                    
                    if (i != i_1)
                        int64_t xmm1_1 = *i
                        int32_t edx_12 = *(i + 8)
                        *i = *i_1
                        *(i + 8) = *(i_1 + 8)
                        *i_1 = xmm1_1
                        *(i_1 + 8) = edx_12
                    
                    i += 0xc
                else if (ecx_17 == edx_11)
                    if (edx_11 != 2)
                        break
                    
                    goto label_48214b
                
                i_1 += 0xc
            while (i_1 u< edi)
            
            ecx_16 = var_c_1
            edx_10 = arg2
        
        bool cond:1_1 = ecx_16 != edx_10
        
        if (ecx_16 u> edx_10)
            void* edi_3 = ecx_16 - 0xc
            
            do
                if (*edi_3 != 2)
                    if (*ebx_1 == 2)
                        break
                    
                label_482191:
                    ebx_1 -= 0xc
                    
                    if (ebx_1 != edi_3)
                        int32_t edx_13 = ebx_1[1].d
                        int64_t xmm1_2 = *ebx_1
                        *ebx_1 = *edi_3
                        ebx_1[1].d = *(edi_3 + 8)
                        ecx_16 = var_c_1
                        *edi_3 = xmm1_2
                        *(edi_3 + 8) = edx_13
                        edx_10 = arg2
                else if (*ebx_1 == 2)
                    goto label_482191
                
                ecx_16 -= 0xc
                edi_3 -= 0xc
                var_c_1 = ecx_16
            while (edx_10 u< ecx_16)
            
            edi = arg4
            cond:1_1 = ecx_16 != edx_10
        
        if (cond:1_1)
            var_c_1 = ecx_16 - 0xc
            
            if (i_1 != edi)
                int32_t edx_18 = *(i_1 + 8)
                int64_t xmm1_7 = *i_1
                *i_1 = *(ecx_16 - 0xc)
                var_c_1 = ecx_16 - 0xc
                *(i_1 + 8) = *(ecx_16 - 4)
                i_1 += 0xc
                ecx_16 = var_c_1
                *ecx_16 = xmm1_7
                ecx_16[1].d = edx_18
                edx_10 = arg2
            else
                ebx_1 -= 0xc
                
                if (ecx_16 - 0xc != ebx_1)
                    int64_t xmm1_5 = *(ecx_16 - 0xc)
                    int32_t edx_16 = *(ecx_16 - 4)
                    *(ecx_16 - 0xc) = *ebx_1
                    var_c_1[1].d = ebx_1[1].d
                    edi = arg4
                    *ebx_1 = xmm1_5
                    ebx_1[1].d = edx_16
                
                int32_t edx_17 = ebx_1[1].d
                i -= 0xc
                int64_t xmm1_6 = *ebx_1
                *ebx_1 = *i
                ebx_1[1].d = *(i + 8)
                ecx_16 = var_c_1
                *i = xmm1_6
                *(i + 8) = edx_17
                edx_10 = arg2
        else
            if (i_1 == edi)
                break
            
            if (i != i_1)
                int64_t xmm1_3 = *ebx_1
                int32_t edx_14 = ebx_1[1].d
                *ebx_1 = *i
                ebx_1[1].d = *(i + 8)
                *i = xmm1_3
                *(i + 8) = edx_14
            
            int32_t edx_15 = ebx_1[1].d
            i += 0xc
            int64_t xmm1_4 = *ebx_1
            *ebx_1 = *i_1
            ebx_1[1].d = *(i_1 + 8)
            ebx_1 += 0xc
            ecx_16 = var_c_1
            *i_1 = xmm1_4
            *(i_1 + 8) = edx_15
            i_1 += 0xc
            edx_10 = arg2
    
    arg3[1] = i
    *arg3 = ebx_1
    return arg3
}
