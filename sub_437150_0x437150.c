// 函数名称: sub_437150
// 虚拟地址: 0x437150
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_437150(char** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d9c0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    
    if (data_aca1f4 != 0)
        result = arg1[0x8f]
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&arg1[0x8f])
            int32_t temp0_1 = result[1]
            result[1] -= 1
            
            if (temp0_1 == 1)
                result = sub_4984f0(result, &result[3][2])
                arg1[0x8f] = &data_5b2591
    
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        result = arg1[0x8e]
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&arg1[0x8e])
            int32_t temp1_1 = result[1]
            result[1] -= 1
            
            if (temp1_1 == 1)
                result = sub_4984f0(result, &result[3][2])
                arg1[0x8e] = &data_5b2591
    
    int32_t var_8_3 = 2
    
    if (data_aca1f4 != 0)
        result = arg1[0x8d]
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&arg1[0x8d])
            int32_t temp2_1 = result[1]
            result[1] -= 1
            
            if (temp2_1 == 1)
                result = sub_4984f0(result, &result[3][2])
                arg1[0x8d] = &data_5b2591
    
    int32_t var_8_4 = 3
    
    if (data_aca1f4 != 0)
        result = arg1[0x89]
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&arg1[0x89])
            int32_t temp3_1 = result[1]
            result[1] -= 1
            
            if (temp3_1 == 1)
                result = sub_4984f0(result, &result[3][2])
                arg1[0x89] = &data_5b2591
    
    int32_t var_8_5 = 4
    
    if (data_aca1f4 != 0)
        result = arg1[0x88]
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&arg1[0x88])
            int32_t temp4_1 = result[1]
            result[1] -= 1
            
            if (temp4_1 == 1)
                result = sub_4984f0(result, &result[3][2])
                arg1[0x88] = &data_5b2591
    
    int32_t var_8_6 = 5
    
    if (data_aca1f4 != 0)
        result = arg1[1]
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&arg1[1])
            int32_t temp5_1 = result[1]
            result[1] -= 1
            
            if (temp5_1 == 1)
                result = sub_4984f0(result, &result[3][2])
                arg1[1] = &data_5b2591
    
    int32_t var_8_7 = 6
    
    if (data_aca1f4 != 0)
        result = *arg1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(arg1)
            int32_t temp6_1 = result[1]
            result[1] -= 1
            
            if (temp6_1 == 1)
                result = sub_4984f0(result, &result[3][2])
                *arg1 = &data_5b2591
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
