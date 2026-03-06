// 函数名称: sub_4bd6d0
// 虚拟地址: 0x4bd6d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_4bd6d0(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59f8d0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    
    if (data_aca1f4 != 0)
        result = *(arg1 + 0x1134)
        
        if (result != 0 && *result != 0)
            result = sub_48a080(arg1 + 0x1134)
            int32_t temp0_1 = result[1]
            result[1] -= 1
            
            if (temp0_1 == 1)
                result = sub_4984f0(result, &result[3][2])
                *(arg1 + 0x1134) = &data_5b2591
    
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        int32_t* ecx_2 = *(arg1 + 0x1120)
        
        if (ecx_2 != 0)
            int32_t eax_3 = *(arg1 + 0x1128)
            *(arg1 + 0x1124) = 0
            result = sub_4984f0(ecx_2, eax_3 * 0x18)
    
    int32_t var_8_3 = 2
    
    if (data_aca1f4 != 0)
        int32_t* ecx_3 = *(arg1 + 0x1114)
        
        if (ecx_3 != 0)
            int32_t eax_4 = *(arg1 + 0x111c)
            *(arg1 + 0x1118) = 0
            result = sub_4984f0(ecx_3, eax_4 * 0x1c)
    
    int32_t var_8_4 = 3
    
    if (data_aca1f4 != 0)
        int32_t* ecx_4 = *(arg1 + 0x1108)
        
        if (ecx_4 != 0)
            int32_t eax_5 = *(arg1 + 0x1110)
            *(arg1 + 0x110c) = 0
            result = sub_4984f0(ecx_4, eax_5 * 0x1c)
    
    int32_t var_8_5 = 4
    
    if (data_aca1f4 != 0)
        result = *(arg1 + 0xff0)
        
        if (result != 0 && *result != 0)
            result = sub_48a080(arg1 + 0xff0)
            int32_t temp1_1 = result[1]
            result[1] -= 1
            
            if (temp1_1 == 1)
                result = sub_4984f0(result, &result[3][2])
                *(arg1 + 0xff0) = &data_5b2591
    
    int32_t var_8_6 = 5
    int32_t* ecx_7 = *(arg1 + 0xfdc)
    
    if (ecx_7 != 0)
        result = sub_4984f0(ecx_7, *(arg1 + 0xfe0) - ecx_7)
    
    *(arg1 + 0xfdc) = 0
    *(arg1 + 0xfe0) = 0
    *(arg1 + 0xfe4) = 0
    int32_t var_8_7 = 6
    
    if (data_aca1f4 != 0)
        result = *(arg1 + 0xfd8)
        
        if (result != 0 && *result != 0)
            result = sub_48a080(arg1 + 0xfd8)
            int32_t temp2_1 = result[1]
            result[1] -= 1
            
            if (temp2_1 == 1)
                result = sub_4984f0(result, &result[3][2])
                *(arg1 + 0xfd8) = &data_5b2591
    
    int32_t var_8_8 = 7
    
    if (data_aca1f4 != 0)
        result = *(arg1 + 0xfd4)
        
        if (result != 0 && *result != 0)
            result = sub_48a080(arg1 + 0xfd4)
            int32_t temp3_1 = result[1]
            result[1] -= 1
            
            if (temp3_1 == 1)
                result = sub_4984f0(result, &result[3][2])
                *(arg1 + 0xfd4) = &data_5b2591
    
    int32_t var_8_9 = 8
    
    if (data_aca1f4 != 0)
        result = *(arg1 + 0xe34)
        
        if (result != 0 && *result != 0)
            result = sub_48a080(arg1 + 0xe34)
            int32_t temp4_1 = result[1]
            result[1] -= 1
            
            if (temp4_1 == 1)
                result = sub_4984f0(result, &result[3][2])
                *(arg1 + 0xe34) = &data_5b2591
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
