// 函数名称: sub_449670
// 虚拟地址: 0x449670
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_449670(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* ecx = arg4
    int32_t result = arg2 * 0x1bc + 0x18 + arg3
    int32_t* var_41c = ecx
    int32_t edi = 0
    int32_t result_1 = result
    
    if (arg6 s> 0)
        do
            result = sub_445280(result, ecx[edi], arg3, 0xffffffff, 1, 0)
            ecx = var_41c
            edi += 1
        while (edi s< arg6)
    
    int32_t ebx_1 = 0
    
    if (arg6 s> 0)
        int32_t* var_414_1 = arg5 - ecx
        int32_t* edi_1 = ecx
        
        do
            void* eax_7 = arg3 + ecx[ebx_1] * 0xc
            void var_410
            
            if (*(var_414_1 + edi_1) != 0)
                *(eax_7 + 0x8cb) = 1
                result = sub_445280(eax_7, ecx[ebx_1], arg3, arg2, 4, 1)
                
                if (*(arg3 + 0x10) == 0)
                    int32_t edx_6 = *edi_1
                    int32_t ecx_7 = *(var_414_1 + edi_1)
                    int32_t var_434_4 = *(*(arg3 + edx_6 * 0xc + 0x8c4) + (ecx_7 << 2))
                    int32_t var_438_3 = edx_6
                    int32_t var_43c_5 = *result_1
                    sub_41da20(&var_410, edx_6, ecx_7, &var_410, "%s rearranges tile %d %s.\n")
                    int32_t var_434_6 = 0
                    int32_t var_438_4 = 0
                    result = sub_444430(sub_4892e0(&var_410), 0x1a, arg3, arg2, *edi_1, 1, 0, 0)
            else
                *(eax_7 + 0x8cb) = 0
                result = sub_445280(eax_7, ecx[ebx_1], arg3, arg2, 3, 1)
                
                if (*(arg3 + 0x10) == 0)
                    int32_t edx_4 = *edi_1
                    int32_t ecx_4 = *(var_414_1 + edi_1)
                    int32_t var_434_1 = *(*(arg3 + edx_4 * 0xc + 0x8c4) + (ecx_4 << 2))
                    int32_t var_438_1 = edx_4
                    int32_t var_43c_2 = *result_1
                    sub_41da20(&var_410, edx_4, ecx_4, &var_410, "%s rearranges tile %d %s.\n")
                    int32_t var_434_3 = 0
                    int32_t var_438_2 = 0
                    result = sub_444430(sub_4892e0(&var_410), 0x1a, arg3, arg2, *edi_1, 0, 0, 0)
            ecx = var_41c
            ebx_1 += 1
            edi_1 = &edi_1[1]
        while (ebx_1 s< arg6)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
