// 函数名称: sub_42f080
// 虚拟地址: 0x42f080
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_42f080(int32_t arg1, int32_t* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d6a0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_20 = arg2
    
    if (arg2[0x39] s< 2)
        sub_489550(&ExceptionList, &data_5b2591, "setup.numPlayers >= 2", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0xfe3, "DisplayNetworkGame")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t i = 0
    int32_t var_1c = 0
    
    do
        if (i s>= arg2[0x39])
            char* const var_18
            sub_48a2c0(&var_18, &data_5b2591)
            int32_t var_8_4 = 3
            sub_4a8930(&var_18, &data_62bfc4, arg3, &var_18, i)
            int32_t var_8_5 = 4
            
            if (data_aca1f4 != 0)
                char* eax_15 = var_18
                
                if (eax_15 != 0 && *eax_15 != 0)
                    char* eax_16 = sub_48a080(&var_18)
                    int32_t temp0_1 = *(eax_16 + 4)
                    *(eax_16 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_4984f0(eax_16, *(eax_16 + 0xc) + 0x10)
                        var_18 = &data_5b2591
        else
            int32_t var_24
            int32_t* var_38_1 = &var_24
            void* ebx_2 = i * 0x2c + arg2
            char* var_14
            sub_421310(ebx_2 + 8, arg2, &var_14, ebx_2 + 8)
            int32_t var_8_1 = 0
            sub_4a8930(&var_14, &data_62bfc4, arg3, &var_14, i)
            
            if (i == 0)
                sub_465a40(var_24)
                int32_t i_1 = i
                sub_4a8570(arg3)
            
            int32_t eax_7 = *(ebx_2 + 0x1c)
            
            if (eax_7 != 0)
                var_1c += 1
                int32_t i_3
                
                if (eax_7 == 2)
                    int32_t eax_10 = *(ebx_2 + 0x20)
                    
                    if (eax_10 == 0 || eax_10 == 1)
                        i_3 = i
                        sub_4a8570(arg3)
                else if (eax_7 == 1)
                    if (*(ebx_2 + 0x28) == eax_7)
                        int32_t i_2 = i
                        sub_4a8570(arg3)
                    
                    void* eax_11 = sub_437f10(*(data_6d00d8 + 0xbe4))
                    int32_t ecx_9 = *(ebx_2 + 0x20)
                    
                    if (ecx_9 == *(eax_11 + 0x230))
                        i_3 = i
                        sub_4a8570(arg3)
                    else if (sub_425c70(ecx_9) == 1)
                        i_3 = i
                        sub_4a8570(arg3)
                int32_t var_8_3 = 2
            else
                int32_t var_8_2 = 1
            
            if (data_aca1f4 != 0)
                char* eax_8 = var_14
                
                if (eax_8 != 0 && *eax_8 != 0)
                    char* eax_9 = sub_48a080(&var_14)
                    int32_t temp2_1 = *(eax_9 + 4)
                    *(eax_9 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_4984f0(eax_9, *(eax_9 + 0xc) + 0x10)
                        var_14 = &data_5b2591
        
        arg2 = var_20
        i += 1
        int32_t var_8_6 = 0xffffffff
    while (i s< 5)
    
    sub_4a8830(var_1c, &data_62c1f4, arg3, var_1c, 0xffffffff)
    
    if (arg4 == 1)
        int32_t var_38_3 = 0xffffffff
        sub_4a8570(arg3)
    
    int32_t result = sub_42eeb0(arg3, var_20)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
