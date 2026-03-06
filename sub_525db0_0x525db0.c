// 函数名称: sub_525db0
// 虚拟地址: 0x525db0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_525db0(int32_t arg1, int32_t arg2, char* arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a2778
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    char* const result_5 = &data_5b2591
    int32_t result_1
    int32_t result_2 = result_1
    
    if (result_2 != 0)
        result_5 = result_2
    
    int32_t eax_3 = sub_523d70(result_5)
    int32_t* ebx = arg4
    ebx[3] = 1f f/ arg5[7]
    int32_t result
    
    if (eax_3 == 4)
        eax_3 = *arg5
        
        if (eax_3 == 0 || eax_3 == 8)
            result = sub_524440(eax_3, ebx, arg5, result_5)
        else
        label_525e61:
            char* result_6 = result_5
            
            if (*arg5 != 9)
                result = sub_525b80(eax_3, ebx, arg5, result_6)
            else
                result = ___std_parallel_algorithms_hw_threads@0(eax_3, arg5, arg3, ebx, result_6)
    else if (eax_3 != 5)
        if (eax_3 != 0xa)
            goto label_525e61
        
        eax_3 = *arg5
        
        if (eax_3 != 0 && eax_3 != 0xa)
            goto label_525e61
        
        result = sub_524440(eax_3, ebx, arg5, result_5)
    else
        if (arg5[6] != 0)
            goto label_525e61
        
        eax_3 = *arg5
        
        if (eax_3 != 0 && eax_3 != 5)
            goto label_525e61
        
        result = sub_524440(eax_3, ebx, arg5, result_5)
    
    if (result.b != 0)
        ebx.b = 1
    else
        int32_t i = 0
        
        if (ebx[0xf] s> 0)
            int32_t* esi = nullptr
            
            do
                int32_t ebx_1 = ebx[0x12]
                int32_t eax_4 = *(esi + ebx_1 + 8)
                
                if (eax_4 != 0)
                    _aligned_free_base(eax_4)
                    *(esi + ebx_1 + 8) = 0
                
                *(esi + ebx_1) = 0
                i += 1
                ebx = arg4
                esi = &esi[4]
            while (i s< ebx[0xf])
        
        int32_t result_3 = result_1
        int32_t result_4 = &data_5b2591
        
        if (result_3 != 0)
            result_4 = result_3
        
        int32_t result_7 = result_4
        sub_4892e0("texture reimport failed to read '%s'")
        ebx.b = 0
    
    int32_t var_8_2 = 2
    
    if (data_aca1f4 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(result, *(result + 0xc) + 0x10)
    
    result.b = ebx.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
