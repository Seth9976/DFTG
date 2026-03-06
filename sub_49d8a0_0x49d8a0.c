// 函数名称: sub_49d8a0
// 虚拟地址: 0x49d8a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_49d8a0(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$??0system_error@std@@QAE@HABVerror_category@1@PBD@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_18 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    
    if (data_aca1f4 != 0)
        result = *(arg1 + 0x154)
        
        if (result != 0 && *result != 0)
            result = sub_48a080(arg1 + 0x154)
            int32_t temp0_1 = result[1]
            result[1] -= 1
            
            if (temp0_1 == 1)
                result = sub_4984f0(result, &result[3][2])
                *(arg1 + 0x154) = &data_5b2591
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
