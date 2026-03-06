// 函数名称: sub_43f6c0
// 虚拟地址: 0x43f6c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_43f6c0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t* arg5, int32_t arg6, void* arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t result = 0
    int32_t esi = 0
    int32_t edi = *arg5
    int32_t ecx = arg4
    int32_t var_b0 = ecx
    int32_t var_ac[0x29]
    
    if (edi s> 0)
        do
            int32_t edx_1 = *(ecx + (esi << 2))
            uint32_t ecx_3 = zx.d(*(arg2 * 0x1bc + (edx_1 << 3) + arg3 + 0x24))
            
            if (*(arg7 + (ecx_3 << 2) + 0xc) != 0 && ecx_3 != *(arg7 + 0x38))
                var_ac[result] = edx_1
                result += 1
            
            ecx = var_b0
            esi += 1
        while (esi s< edi)
    
    int32_t ebx_4 = arg6
    int32_t edx_2 = 0
    
    if (edi s> 0)
        int32_t ecx_5 = *(arg7 + 0x38)
        
        do
            int32_t esi_1 = *(var_b0 + (edx_2 << 2))
            ebx_4 = arg6
            
            if (zx.d(*(arg2 * 0x1bc + (esi_1 << 3) + arg3 + 0x24)) == ecx_5)
                var_ac[result] = esi_1
                result += 1
                
                if (result == ebx_4)
                    break
            
            edx_2 += 1
        while (edx_2 s< edi)
    
    if (result s> 0)
        __builtin_memcpy(var_b0, &var_ac, result << 2)
    
    *arg5 = result
    
    if (result != ebx_4)
        result = sub_4394f0(result, edx_2, arg5, "Incorrect size of recruit list!\n")
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
