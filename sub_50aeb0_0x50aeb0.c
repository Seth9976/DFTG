// 函数名称: sub_50aeb0
// 虚拟地址: 0x50aeb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_50aeb0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d928
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t* result_1 = arg1
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_3 = arg1[0x52]
    
    if (eax_3 s<= 0)
        sub_489550(eax_3, &data_5b2591, "emitResults.currentFunctionStackDepth > 0", 
            "d:\ax\trunk\ax2017\engine\materialfndef.cpp", 0x358, "EmitFnLine")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* esi = &arg1[2 + arg1[eax_3 + 0x41] * 2]
    int32_t var_8_1 = 0
    int32_t* result = sub_48a560(esi, sub_48a860(arg2, &result_1, esi))
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp0_1 = result[1]
            result[1] -= 1
            
            if (temp0_1 == 1)
                result = sub_4984f0(result, result[3] + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
