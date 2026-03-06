// 函数名称: sub_43fbf0
// 虚拟地址: 0x43fbf0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_43fbf0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, void* arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* ebx = arg6
    int32_t i = 0
    void* var_d14 = ebx
    int32_t i_2 = 0
    int32_t var_d10 = 0
    void var_d00
    sub_43a6c0(arg2, arg3, &var_d00, arg2)
    int32_t edi = arg5
    
    if (*(ebx + 0xc) != 0 && *(ebx + 0x10) s> 0 && edi s> 0)
        int32_t edx_2 = arg2 * 0x1bc
        int32_t var_d08_1 = edx_2
        
        do
            void var_cdc
            
            if (*(&var_cdc + edx_2 + (*(arg4 + (i << 2)) << 3)) == 6)
                void var_b74
                int32_t eax_6 = *(&var_b74 + edx_2)
                int32_t ecx_1 = 1
                void var_b54
                *(&var_b54 + edx_2) += 1
                *(&var_b74 + edx_2) = eax_6 + 1
                
                if (eax_6 + 1 s> 0xa)
                    *(&var_b74 + edx_2) = 0xa
                    ecx_1 = 0xb - (eax_6 + 1)
                
                int32_t var_cf0
                
                if (var_cf0 == 0 && ecx_1 != 0)
                    sub_444430(arg4, 0x27, &var_d00, arg2, *(arg4 + (i << 2)), ecx_1, 0, 0)
                    edx_2 = var_d08_1
            
            i += 1
        while (i s< edi)
        
        ebx = var_d14
        i = 0
    
    int32_t ecx_3 = 0
    int32_t var_b0[0x29]
    
    if (edi s> 0)
        while (i != *(ebx + 0x14))
            int32_t edx_3 = *(arg4 + (ecx_3 << 2))
            
            if ((&__saved_ebp)[arg2 * 0x6f - 0x336 + edx_3 * 2].b == 6)
                if (*(ebx + 0xc) == 0 || *(ebx + 0x10) s<= 0 || var_d10 != 0)
                    var_b0[i] = edx_3
                    i += 1
                else
                    var_d10 = 1
            
            ecx_3 += 1
            
            if (ecx_3 s>= edi)
                break
        
        i_2 = i
    
    int32_t ecx_4 = 0
    
    if (edi s> 0)
        int32_t eax_12 = *(ebx + 0x14)
        int32_t var_d08_2 = eax_12
        
        while (i != eax_12)
            int32_t edx_4 = *(arg4 + (ecx_4 << 2))
            
            if ((&__saved_ebp)[arg2 * 0x6f - 0x336 + edx_4 * 2].b != 6)
                var_b0[i] = edx_4
                i += 1
            
            eax_12 = var_d08_2
            ecx_4 += 1
            
            if (ecx_4 s>= edi)
                break
        
        ebx = var_d14
        i_2 = i
    
    int32_t edx_6 = *(ebx + 0x10)
    int32_t var_b50[0x2a8]
    
    if (edx_6 s> 0 && *(ebx + 0x130) s> 0)
        int32_t eax_16 = arg2 * 0x1bc
        void* esi = ebx + 0x18
        int32_t i_1 = 0
        int32_t var_d08_3 = eax_16
        
        do
            sub_445280(eax_16, *esi, &var_d00, 0xffffffff, 1, 0)
            eax_16 = var_d08_3
            esi += 4
            i_1 += 1
            *(&var_b50 + eax_16) += 1
        while (i_1 s< *(ebx + 0x130))
        
        edx_6 = *(ebx + 0x10)
        i = i_2
        edi = arg5
    
    int32_t ecx_6 = 0
    var_b48
    
    if (edx_6 s> 0)
        int32_t eax_18 = arg2 * 0x1bc
        int32_t ebx_3 = *(&var_b48 + eax_18)
        
        do
            int32_t eax_19 = *(ebx + 0x130) + ecx_6
            ecx_6 += 1
            ebx_3 = ebx_3 + 1 + eax_19
        while (ecx_6 s< edx_6)
        
        edi = arg5
        var_b50[arg2 * 0x6f] += edx_6
        *(&var_b48 + eax_18) = ebx_3
    
    int32_t ebx_5 = arg2 * 0x1bc
    
    if (*(&var_b48 + ebx_5) s> 0x23)
        *(&var_b48 + ebx_5) = 0x23
    
    sub_448220(arg2, arg2, &var_d00, &var_b0, i)
    int32_t ecx_9 = 0
    
    if (edi s> 0)
        do
            int32_t eax_23 = *(arg4 + (ecx_9 << 2))
            ecx_9 += 1
            char var_cdb[0x167]
            var_cdb[ebx_5 + (eax_23 << 3)] = 2
        while (ecx_9 s< edi)
    
    int32_t* result = sub_43c700()
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
