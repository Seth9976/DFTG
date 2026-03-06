// 函数名称: sub_4f87b0
// 虚拟地址: 0x4f87b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_4f87b0(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$??0system_error@std@@QAE@HABVerror_category@1@PBD@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_18 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* result = `eh vector vbase constructor iterator'(arg1 + 0x10, 0xc, 4, sub_41c530)
    int32_t var_8_1 = 0
    
    if (data_aca1f4 != 0)
        result = *(arg1 + 0xc)
        
        if (result != 0 && *result != 0)
            result = sub_48a080(arg1 + 0xc)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
                *(arg1 + 0xc) = &data_5b2591
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
