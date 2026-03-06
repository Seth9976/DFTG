// 函数名称: sub_438ce0
// 虚拟地址: 0x438ce0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_438ce0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59dc10
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = data_6cfe4c
    
    if (eax_3 == 0)
        sub_489550(eax_3, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (*(eax_3 + 0x834) != 1)
        sub_489550(eax_3, &data_5b2591, "GetClient().activeGame.gameType == GAME_LOCAL", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x2f8, "LocalGameSaveFiles")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t edi = *(eax_3 + 0x838)
    int32_t var_28 = edi
    int32_t var_2c = *(sub_437f10(*(data_6d00d8 + 0xbe4)) + 0x240)
    int32_t var_30 = sub_489c60()
    char* var_14
    sub_48a9d0(&var_14, "%sgamelocal_%d_%d.xml")
    int32_t var_8_1 = 0
    sub_48a560(arg1, &var_14)
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        char* eax_6 = var_14
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_48a080(&var_14)
            int32_t temp0_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
    
    int32_t var_8_3 = 0xffffffff
    int32_t var_28_2 = edi
    int32_t var_2c_1 = *(sub_437f10(*(data_6d00d8 + 0xbe4)) + 0x240)
    int32_t var_30_1 = sub_489c60()
    char* var_18
    sub_48a9d0(&var_18, "%sgamelocal_%d_%d.bin")
    int32_t var_8_4 = 2
    sub_48a560(&arg1[1], &var_18)
    int32_t var_8_5 = 3
    
    if (data_aca1f4 != 0)
        char* eax_10 = var_18
        
        if (eax_10 != 0 && *eax_10 != 0)
            char* eax_11 = sub_48a080(&var_18)
            int32_t temp1_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_4984f0(eax_11, *(eax_11 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 2
}
