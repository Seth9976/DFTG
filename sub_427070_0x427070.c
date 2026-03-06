// 函数名称: sub_427070
// 虚拟地址: 0x427070
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_427070(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d1d0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_538 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = arg1
    void* var_520 = eax_3
    int32_t* ecx = eax_3 + 8
    int32_t var_518 = 0
    int32_t* var_528 = ecx
    int32_t ebx = 0x64
    int32_t var_514[0x140]
    int32_t eax_7
    
    while (true)
        int32_t esi_1 = 0
        int32_t* edi_1 = ecx
        
        while (true)
            int32_t var_524
            int32_t* var_53c_1 = &var_524
            char* const var_51c
            sub_421310(eax_3, eax_3, &var_51c, edi_1)
            int32_t var_8_1 = 0
            
            if (data_aca1f4 != 0)
                char* eax_4 = var_51c
                
                if (eax_4 != 0 && *eax_4 != 0)
                    char* eax_5 = sub_48a080(&var_51c)
                    int32_t temp3_1 = *(eax_5 + 4)
                    *(eax_5 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_4984f0(eax_5, *(eax_5 + 0xc) + 0x10)
                        var_51c = &data_5b2591
            
            int32_t var_8_2 = 0xffffffff
            
            if (var_524 == ebx)
                eax_7 = var_518
                break
            
            eax_3 = var_520
            esi_1 += 1
            edi_1 = &edi_1[0xb]
            
            if (esi_1 s>= 5)
                var_514[var_518] = ebx
                eax_7 = var_518 + 1
                var_518 = eax_7
                break
        
        ecx = var_528
        ebx += 1
        
        if (ebx s>= 0x73)
            break
        
        eax_3 = var_520
    
    if (eax_7 s> 0)
        int32_t result = var_514[modu.dp.d(0:(sub_48dd80()), var_518)]
        fsbase->NtTib.ExceptionList = ExceptionList
        @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
        return result
    
    sub_489550(eax_7, &data_5b2591, "numAvatars > 0", 
        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0xf4, "RandomUnusedAvatar")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
