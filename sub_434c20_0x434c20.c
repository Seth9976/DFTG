// 函数名称: sub_434c20
// 虚拟地址: 0x434c20
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_434c20(char** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d8d0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* result = `eh vector vbase constructor iterator'(&arg1[3], 4, 4, sub_48a3d0)
    int32_t var_8_1 = 0
    
    if (data_aca1f4 != 0)
        result = arg1[2]
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&arg1[2])
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
                arg1[2] = &data_5b2591
    
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        result = arg1[1]
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&arg1[1])
            int32_t temp1_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp1_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
                arg1[1] = &data_5b2591
    
    int32_t var_8_3 = 2
    
    if (data_aca1f4 != 0)
        result = *arg1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(arg1)
            int32_t temp2_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp2_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
                *arg1 = &data_5b2591
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
