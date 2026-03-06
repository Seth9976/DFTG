// 函数名称: sub_440720
// 虚拟地址: 0x440720
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int64_t* __convention("regparm")sub_440720(int32_t arg1, int64_t* arg2, int32_t arg3, int32_t* arg4, int32_t* arg5, int32_t* arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* eax_2 = arg4
    int32_t esi = 0
    int32_t ebx = 0
    int64_t* var_e94 = arg2
    int32_t i_2 = *arg5
    int32_t* var_e98 = eax_2
    int64_t* var_ea0 = nullptr
    int64_t var_eb8 = -0x4010000000000000
    
    if (i_2 s> 0)
        do
            void var_e90
            sub_43a6c0(eax_2, arg3, &var_e90, arg2)
            int32_t edx_2 = var_e98[ebx]
            int32_t eax_3 = edx_2 * 3
            char var_5c5[0x385]
            var_5c5[eax_3 << 2] = 0
            sub_445280(eax_3, edx_2, &var_e90, var_e94, 3, 1)
            int32_t* eax_4
            int64_t xmm0_1
            eax_4, xmm0_1 = sub_43c700()
            sub_43a6c0(eax_4, arg3, &var_e90, var_e94)
            int32_t edx_5 = var_e98[ebx]
            int32_t eax_6 = edx_5 * 3
            var_5c5[eax_6 << 2] = 1
            sub_445280(eax_6, edx_5, &var_e90, var_e94, 4, 1)
            int64_t xmm0_2
            eax_2, xmm0_2 = sub_43c700()
            
            if (not(xmm0_2 f<= xmm0_1))
                esi |= 1 << (ebx u% 0x20)
            
            arg2 = var_e94
            ebx += 1
        while (ebx s< i_2)
        
        eax_2 = var_e98
    
    if (i_2 s> 8)
        i_2 = 8
    
    if (arg7 != 0 && i_2 s> 6)
        i_2 = 6
    
    void var_240
    void var_128
    int64_t* result = sub_4404c0(eax_2, arg2, arg3, eax_2, i_2, arg7, esi, 0, &var_128, &var_240, 0, 
        nullptr, &var_eb8, &var_ea0)
    int32_t i_1 = 0
    
    if (i_2 s> 0)
        int64_t var_eb0
        var_eb0:4.d = i_2
        result = var_e98 - arg6
        int32_t ebx_1 = 1
        int32_t* edx_7 = arg6
        int64_t* result_1 = result
        int32_t i
        
        do
            void* ecx_8 = result + edx_7
            *ecx_8 = *(ecx_8 + &var_128 - var_e98)
            int32_t eax_11 = ebx_1 & esi
            int32_t eax_12 = neg.d(eax_11)
            int32_t eax_14 = neg.d(sbb.d(eax_12, eax_12, eax_11 != 0))
            *edx_7 = eax_14
            
            if ((var_ea0 & ebx_1) != 0)
                *edx_7 = eax_14 | 0x80
            
            result = result_1
            edx_7 = &edx_7[1]
            ebx_1 = rol.d(ebx_1, 1)
            i = i_2
            i_2 -= 1
        while (i != 1)
        i_1 = var_eb0:4.d
    
    for (; i_1 s< *arg5; i_1 += 1)
        int32_t eax_17 = 1 << i_1.b & esi
        int32_t eax_18 = neg.d(eax_17)
        result = neg.d(sbb.d(eax_18, eax_18, eax_17 != 0))
        arg6[i_1] = result
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
