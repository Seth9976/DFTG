// 函数名称: sub_5227d0
// 虚拟地址: 0x5227d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_5227d0(char* arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59fe40
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_28 = arg1
    int32_t var_8_1 = 0
    char* result_1
    char* result_2
    sub_521e60(sub_521e60(sub_4892e0("Compiling opengl shader %s"), arg1, &result_1, 0), arg1, 
        &result_2, 1)
    var_8_1.b = 1
    char* result_3 = result_1
    int32_t ecx_3
    
    if (result_3 == 0 || *result_3 == 0)
        ecx_3 = 0
    else
        ecx_3 = *(sub_48a080(&result_1) + 8)
    
    *(arg2 + 0x30) = ecx_3 + 1
    char* eax_6 = sub_4c2e40(ecx_3 + 1)
    char* result_5 = result_1
    char* const result_8 = &data_5b2591
    *(arg2 + 0x38) = eax_6
    char* const result_7 = &data_5b2591
    
    if (result_5 != 0)
        result_7 = result_5
    
    sub_579300(eax_6, result_7, *(arg2 + 0x30))
    char* result_4 = result_2
    int32_t ecx_6
    
    if (result_4 == 0 || *result_4 == 0)
        ecx_6 = 0
    else
        ecx_6 = *(sub_48a080(&result_2) + 8)
    
    *(arg2 + 0x40) = ecx_6 + 1
    char* eax_8 = sub_4c2e40(ecx_6 + 1)
    char* result_6 = result_2
    *(arg2 + 0x48) = eax_8
    
    if (result_6 != 0)
        result_8 = result_6
    
    sub_579300(eax_8, result_8, *(arg2 + 0x40))
    var_8_1.b = 2
    char* result
    
    if (data_aca1f4 != 0)
        result = result_2
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_2)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(result, *(result + 0xc) + 0x10)
                result_2 = &data_5b2591
    
    int32_t var_8_2 = 3
    
    if (data_aca1f4 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp1_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp1_1 == 1)
                sub_4984f0(result, *(result + 0xc) + 0x10)
    
    result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
