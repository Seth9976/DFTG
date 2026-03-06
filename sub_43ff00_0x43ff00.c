// 函数名称: sub_43ff00
// 虚拟地址: 0x43ff00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_43ff00(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, void* arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void var_378
    __builtin_memcpy(&var_378, arg6, 0x138)
    int32_t esi_1 = arg2 * 0x1bc
    int32_t edx_1 = 0
    int32_t i = *(esi_1 + arg3 + 0x174)
    int32_t var_128[0x47]
    
    while (i != 0xffffffff)
        var_128[edx_1] = i
        i = sx.d(*(arg3 + i * 0xc + 0x8ca))
        edx_1 += 1
    
    int32_t i_1 = *(esi_1 + arg3 + 0x178)
    int32_t edi = 0
    
    if (i_1 != 0xffffffff)
        void* esi_2 = &var_128[edx_1]
        
        do
            *esi_2 = i_1
            i_1 = sx.d(*(arg3 + i_1 * 0xc + 0x8ca))
            esi_2 += 4
            edi += 1
        while (i_1 != 0xffffffff)
    
    int32_t result_1 = edi + edx_1
    int32_t var_248 = 0
    uint128_t xmm0 = sub_43fbf0(&var_378, arg2, arg3, arg4, arg5, &var_378)
    int32_t result = result_1
    int32_t ebx_1 = 0
    int32_t var_38c = 1
    int32_t var_240[0x46]
    uint128_t xmm1_1
    
    do
        int64_t var_3a0_1 = xmm0.q
        xmm1_1 = xmm0
        int64_t var_3a8_1 = xmm1_1.q
        int32_t edx_3 = ebx_1
        int32_t var_248_1 = edx_3
        int32_t var_360[0x46]
        
        if (ebx_1 s> 0)
            __builtin_memcpy(&var_360, &var_240, ebx_1 << 2)
            edx_3 = var_248_1
        
        int32_t edi_1 = 0
        int32_t var_388_1 = 0
        
        if (result s> 0)
            do
                int32_t eax_6 = 0
                int32_t ecx_3 = 0
                
                if (ebx_1 s> 0)
                    do
                        if (var_240[ecx_3] == var_128[edi_1])
                            eax_6 = var_38c
                        
                        ecx_3 += 1
                    while (ecx_3 s< ebx_1)
                
                if (ebx_1 s<= 0 || eax_6 == 0)
                    var_360[edx_3] = var_128[edi_1]
                    int32_t var_248_2 = var_248_1 + 1
                    xmm0 = sub_43fbf0(&var_378, arg2, arg3, arg4, arg5, &var_378)
                    
                    if (xmm0 f<= var_3a0_1)
                        xmm0 = zx.o(var_3a0_1)
                    else
                        if (var_248_2 s> 0)
                            __builtin_memcpy(&var_240, &var_360, var_248_2 << 2)
                            edi_1 = var_388_1
                        
                        ebx_1 = var_248_2
                        var_3a0_1 = xmm0.q
                    
                    edx_3 = var_248_2 - 1
                    var_248_1 = edx_3
                
                edi_1 += 1
                var_388_1 = edi_1
            while (edi_1 s< result_1)
            
            xmm1_1 = zx.o(var_3a8_1)
            result = result_1
    while (xmm1_1 f< xmm0)
    *(arg6 + 0x130) = ebx_1
    
    if (ebx_1 s> 0)
        __builtin_memcpy(arg6 + 0x18, &var_240, ebx_1 << 2)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
