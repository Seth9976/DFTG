// 函数名称: sub_448d60
// 虚拟地址: 0x448d60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_448d60(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4, int32_t arg5, int32_t arg6, char arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* result = __security_cookie ^ &__saved_ebp
    int32_t* result_2 = result
    int32_t var_414 = arg2
    int32_t ecx = 0
    int32_t var_41c = 0
    
    if (arg6 s> 0)
        result = arg4
        int32_t* edi_1 = arg5 - arg4
        int32_t* result_1 = result
        int32_t* var_424_1 = edi_1
        
        do
            int32_t edi_2 = *(edi_1 + result)
            int32_t ebx_2 = edi_2 & 0xffffff7f
            int32_t edi_3 = edi_2 & 0x80
            *(arg3 + *result * 0xc + 0x8cb) = ebx_2.b
            int32_t ecx_1
            ecx_1.b = edi_3 == 0
            int32_t eax_5
            eax_5.b = ebx_2 != 0
            sub_445280(eax_5 + 3, arg4[ecx], arg3, arg2, (eax_5 + 3).b, ecx_1)
            
            if (*(arg3 + 0x10) == 0)
                int32_t ecx_4 = sub_444430(result_1, 0x1a, arg3, var_414, *result_1, ebx_2, edi_3, 0)
                
                if (edi_3 != 0)
                    int32_t eax_8 = *(arg3 + 0xc44)
                    ecx_4 = sub_444430(eax_8, 0x11, arg3, var_414, *(eax_8 + var_414 * 0x1c0 + 0x20), 
                        2, 2, 0)
                
                int32_t edx_3 = var_414 * 0x1bc
                void var_40c
                
                if (arg7 == 0)
                    int32_t ecx_7 = *result_1
                    void* const eax_16 = &data_5d577c
                    
                    if (edi_3 == 0)
                        eax_16 = "bottom"
                    
                    void* const var_438_3 = eax_16
                    int32_t var_43c_4 = *(*(arg3 + ecx_7 * 0xc + 0x8c4) + (ebx_2 << 2))
                    int32_t var_440_3 = ecx_7
                    int32_t var_444_4 = *(edx_3 + arg3 + 0x18)
                    sub_41da20(&var_40c, edx_3, ecx_7, &var_40c, "%s takes tile %d %s on %s.\n")
                    sub_4892e0(&var_40c)
                else
                    int32_t var_438_2 = *(*(arg3 + (*arg4 + 0xbb) * 0xc) + (ebx_2 << 2))
                    int32_t var_43c_3 = *(edx_3 + arg3 + 0x18)
                    sub_41da20(&var_40c, edx_3, ecx_4, &var_40c, "%s takes extra tile %s.\n")
                    sub_4892e0(&var_40c)
            
            ecx = var_41c + 1
            arg2 = var_414
            result = &result_1[1]
            edi_1 = var_424_1
            var_41c = ecx
            result_1 = result
        while (ecx s< arg6)
    
    @__security_check_cookie@4(result_2 ^ &__saved_ebp)
    return result
}
