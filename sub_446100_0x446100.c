// 函数名称: sub_446100
// 虚拟地址: 0x446100
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_446100(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4, int32_t arg5, int32_t* arg6, int32_t arg7, int32_t* arg8)
{
    // 第一条实际指令: int32_t* esi = arg4
    int32_t* esi = arg4
    int32_t i = *esi
    void* i_7
    
    if (i != 0xffffffff)
        int32_t i_1 = esi[1]
        int32_t i_6 = i_1
        int32_t ecx = 0
        int32_t edx_1 = *arg6
        int32_t i_5 = i
        i_7 = 1
        int32_t var_14 = 1
        int32_t eax_3
        int32_t ecx_1
        
        if (edx_1 s> 0)
            while (*(arg5 + (ecx << 2)) != i)
                ecx += 1
                
                if (ecx s>= edx_1)
                    goto label_4463cd
            
            *arg6 = edx_1 - 1
            *(arg5 + (ecx << 2)) = *(arg5 + ((edx_1 - 1) << 2))
            ecx_1 = 0
            eax_3 = *arg8
        
        if (edx_1 s<= 0 || eax_3 s<= 0)
        label_4463cd:
            sub_444530("missing element")
            noreturn
        
        while (*(arg7 + (ecx_1 << 2)) != i_1)
            ecx_1 += 1
            
            if (ecx_1 s>= eax_3)
                goto label_4463cd
        
        *arg8 = eax_3 - 1
        *(arg7 + (ecx_1 << 2)) = *(arg7 + ((eax_3 - 1) << 2))
        sub_445bb0(&i_5, arg2, arg3, &i_5, &var_14, &i_6, &i_7)
        esi = arg4
    else
        sub_445bb0(i, arg2, arg3, arg5, arg6, arg7, arg8)
    
    if (*esi != 0xffffffff)
        uint32_t i_2 = esi[2]
        i_7 = &esi[2]
        int32_t eax_8 = esi[3]
        char var_c_2 = eax_8.b
        
        while (i_2 != 0xffffffff)
            void* eax_10 = *(arg3 + i_2 * 0xc + 0x8c4)
            sub_444430(eax_10, 0x1e, arg3, arg2, i_2, *(eax_10 + 0xc), eax_8, 0)
            uint32_t eax_11 = i_2 * 3
            *(arg3 + (eax_11 << 2) + 0x8cb) = var_c_2
            sub_445590(eax_11, arg2, arg3, i_2, nullptr, 0)
            void* i_8 = i_7 + 8
            i_7 = i_8
            i_2 = *i_8
            eax_8 = *(i_8 + 4)
            var_c_2 = eax_8.b
        
        esi = arg4
    
    void* var_c_3 = &esi[0x32]
    void* i_3 = esi[0x32]
    i_7 = i_3
    
    if (i_3 != 0xffffffff)
    label_4462fa:
        
        do
            void* eax_16 = i_3 * 3
            void* esi_4 = arg3 + (eax_16 << 2)
            *(esi_4 + 0x8cb) = 0
            sub_445280(eax_16, i_3, arg3, arg2, 3, 0)
            void* i_9 = i_7
            void* eax_19 = *(arg3 + i_9 * 0xc + 0x8c4)
            sub_444430(eax_19, 0x1f, arg3, arg2, i_9, *(eax_19 + 0xc), zx.d(*(esi_4 + 0x8cb)), 0)
            void** eax_21 = var_c_3 + 4
            var_c_3 = eax_21
            i_3 = *eax_21
            i_7 = i_3
        while (i_3 != 0xffffffff)
        
        esi = arg4
    label_446305:
        void** var_c_4 = &esi[0x22]
        void* i_4 = esi[0x22]
        i_7 = i_4
        
        if (i_4 != 0xffffffff)
            do
                void* eax_22 = i_4 * 3
                void* esi_5 = arg3 + (eax_22 << 2)
                *(esi_5 + 0x8cb) = 1
                sub_445280(eax_22, i_4, arg3, arg2, 4, 0)
                void* i_10 = i_7
                void* eax_25 = *(arg3 + i_10 * 0xc + 0x8c4)
                sub_444430(eax_25, 0x1f, arg3, arg2, i_10, *(eax_25 + 0xc), zx.d(*(esi_5 + 0x8cb)), 0)
                void** eax_27 = &var_c_4[1]
                var_c_4 = eax_27
                i_4 = *eax_27
                i_7 = i_4
            while (i_4 != 0xffffffff)
            
            esi = arg4
    else
        if (esi[0x22] != i_3)
            if (i_3 == 0xffffffff)
                goto label_446305
            
            goto label_4462fa
        
        sub_445af0(arg3, arg2)
        int32_t ecx_8 = arg2 * 0x1bc
        
        if (*(ecx_8 + arg3 + 0x1c4) s>= *(ecx_8 + arg3 + 0x1c0))
            int32_t eax_15 = *(*(ecx_8 + arg3 + 0x1c) + 0xc)
            
            if (eax_15 != 0)
                eax_15(arg3, arg2)
        
        sub_4459f0(arg3, arg2)
    
    void* result = &esi[0x42]
    
    if (esi[0x42] != 0xffffffff)
        result = sub_445f50(result, arg2, arg3, result)
    
    int32_t ecx_16 = esi[0xf3]
    
    if (ecx_16 != 0)
        result = arg2 * 0x1bc
        *(result + arg3 + 0x18c) = ecx_16
        
        if (*(arg3 + 0x10) == 0)
            return sub_444430(result, 8, arg3, arg2, ecx_16, 0, 0, 0)
    
    return result
}
