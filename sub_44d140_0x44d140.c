// 函数名称: sub_44d140
// 虚拟地址: 0x44d140
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_44d140(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* esi = arg2 * 0x1bc
    int32_t* var_730 = arg3 + (arg5 + 0xbb) * 0xc
    void* edi = esi + arg3
    void* eax_6 = esi + (arg4 << 3)
    *(eax_6 + arg3 + 0x2a) = arg5.b
    *(eax_6 + arg3 + 0x25) = 3
    var_730[2].b += 1
    int32_t var_72c[0xc8]
    void* result
    void* edx
    result, edx = sub_4453c0(&var_72c, arg2, arg3, &var_72c, 4)
    void* result_1 = result
    int32_t esi_1 = 0
    
    if (result s> 0)
        do
            var_728
            edx = *(&var_728 + (esi_1 << 3))
            result = *(edx + 4)
            
            if ((result.b & 1) != 0)
                if ((result & 0x200) == 0)
                label_44d1f1:
                    result = *(edx + 8)
                    *(edi + 0x18c) += result
                    *(edi + 0x1ac) += result
                    
                    if (*(edi + 0x18c) s> 0xa)
                        result += 0xa - *(edi + 0x18c)
                        *(edi + 0x18c) = 0xa
                    
                    int32_t ecx_4 = *(arg3 + 0x10)
                    
                    if (ecx_4 == 0)
                        if (result != 0)
                            result = sub_444430(result, ecx_4 + 0x25, arg3, arg2, var_72c[esi_1 * 2], 
                                result, ecx_4, ecx_4)
                            ecx_4 = *(arg3 + 0x10)
                        
                        if (ecx_4 == 0)
                            result, edx = sub_444430(result, ecx_4 + 0x15, arg3, arg2, 
                                var_72c[esi_1 * 2], 1, *(edx + 8), ecx_4)
                else
                    result = *var_730
                    
                    if (*(result + 0x18) == 6)
                        goto label_44d1f1
            
            esi_1 += 1
        while (esi_1 s< result_1)
    
    if (*(arg3 + 0x10) == 0)
        uint32_t ecx_6 = zx.d(*(var_730 + 7))
        int32_t var_750_3 = *(*var_730 + (ecx_6 << 2))
        int32_t var_754_3 = *(edi + 0x18)
        void var_40c
        sub_41da20(&var_40c, edx, ecx_6, &var_40c, "%s produces on %s.\n")
        result = sub_4892e0(&var_40c)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
