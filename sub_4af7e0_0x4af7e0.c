// 函数名称: sub_4af7e0
// 虚拟地址: 0x4af7e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_4af7e0(int32_t arg1, int32_t* arg2, void* arg3, int32_t arg4, char* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_514
    void var_510
    void* ecx
    void* result = sub_4f0e70(sub_4ac920(&var_514, &var_510, ecx, &var_514), arg2, &data_6218dc, 
        data_126cc94, 0x70)
    void* result_1 = result
    
    if (result_1 != 0)
        int32_t ecx_2 = arg4 - var_514
        int32_t eax_4
        int32_t edx_2
        edx_2:eax_4 = muls.dp.d(0x66666667, ecx_2)
        int32_t edx_3 = edx_2 s>> 1
        result = arg3 - 0x71
        int32_t* esi_5 = ((ecx_2 s/ 5) << 4) + *(result_1 + 8)
        int32_t ecx_3
        
        switch (result)
            case nullptr
                result = sub_4d05c0(&data_5d24e0, arg5)
                
                if (result != 0)
                    int32_t edi_1 = *(result_1 + 0x10)
                    ecx_3 = 0
                    int32_t edx_5 = *result
                    
                    if (edi_1 s> 0)
                        result = *(result_1 + 8)
                        
                        do
                            if (*result == edx_5)
                                goto label_4af922
                            
                            ecx_3 += 1
                            result += 0x10
                        while (ecx_3 s< edi_1)
                    
                    *esi_5 = edx_5
                    ecx_3.b = 1
                    result = sub_4a7e20(ecx_3.b)
            case 1
                int32_t* var_524_1 = &var_514
                result, ecx_3 = sub_48d8d0(&var_514, edx_3, ecx_2, arg5, &data_5f3188)
                
                if (result == 1)
                    esi_5[1] = __maxss_xmmss_memss(var_514, 0)
                    ecx_3.b = 1
                    result = sub_4a7e20(ecx_3.b)
            case 2
                int32_t* var_524_2 = &var_514
                result, ecx_3 = sub_48d8d0(&var_514, edx_3, ecx_2, arg5, &data_5f3188)
                
                if (result == 1)
                    esi_5[2] = __maxss_xmmss_memss(var_514, 0)
                    ecx_3.b = 1
                    result = sub_4a7e20(ecx_3.b)
            case 3
                result, ecx_3 = sub_4d05c0(&data_5d2928, arg5)
                
                if (result != 0)
                    esi_5[3] = *result
                    ecx_3.b = 1
                    result = sub_4a7e20(ecx_3.b)
    
    label_4af922:
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
