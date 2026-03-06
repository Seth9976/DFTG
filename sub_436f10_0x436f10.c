// 函数名称: sub_436f10
// 虚拟地址: 0x436f10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_436f10(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d998
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_30 = arg1
    sub_48a2c0(&var_30, "localsettings.xml")
    void var_18
    int32_t* eax_3 = sub_4cfce0(&var_18, 0)
    int32_t var_8_1 = 0
    
    if (*arg1 != 0)
        var_30 = "LocalSettingsLoad"
        sub_489550(eax_3, &data_5b2591, "gLocalSettings == NULL", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0xfb, var_30)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    char** esi = data_126b918
    int32_t* eax_4 = sub_4d8120(esi, &var_18)
    int32_t* esi_1
    
    if (eax_4 != 0)
        esi_1 = sub_4d60d0(eax_4, esi)
        sub_4d4bb0(eax_4)
    else
        esi_1 = nullptr
    
    *arg1 = esi_1
    
    if (esi_1 == 0)
        esi_1 = sub_4cf0b0(data_126b918)
        *arg1 = esi_1
    
    int32_t ecx_6 = esi_1[7]
    
    if (ecx_6 s< 0x300)
        ecx_6 = 0x300
    else if (ecx_6 s> 0x1000)
        ecx_6 = 0x1000
    
    void* esi_2 = data_aca1ec
    *(esi_2 + 0x18) = ecx_6
    int32_t edx_3
    int32_t eax_9
    
    if (*(*arg1 + 0x14) == 0)
        edx_3:eax_9 = muls.dp.d(0x55555556, ecx_6 << 2)
    else
        int32_t eax_8
        int32_t edx_2
        edx_2:eax_8 = muls.dp.d(0x38e38e39, ecx_6 << 4)
        edx_3 = edx_2 s>> 1
    *(esi_2 + 0x14) = (edx_3 u>> 0x1f) + edx_3
    int32_t result
    result.b = *(*arg1 + 0x18)
    *(esi_2 + 0x23) = result.b
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        int32_t result_1
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
