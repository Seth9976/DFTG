// 函数名称: sub_4652b0
// 虚拟地址: 0x4652b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4652b0(int32_t arg1, void* arg2, int32_t* arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?_Getffld@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABAHPADAAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AAVios_base@2@PAH@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_a4 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_88 = arg3
    int32_t var_8_1 = 0
    int32_t* var_90 = arg3
    int32_t var_8c = 0
    sub_4648f0(arg5, arg2, arg3, arg4, arg5)
    int32_t var_8_2 = 0
    char const* const var_84
    int32_t* edi = &var_84
    int32_t var_8c_1 = 1
    var_84 = "[normal_prompt]"
    char const* const var_80 = "{normal_prompt}"
    char const* const var_7c = "{normal_prompt_night}"
    char const* const var_78 = "[bold_prompt]"
    char const* const var_74 = "{bold_prompt}"
    char const* const var_70 = "{bold_prompt_night}"
    char const* const var_6c = "[explore]"
    char const* const var_68 = "{explore}"
    char const* const var_64 = "{explore_night}"
    char const* const var_60 = "[develop]"
    char const* const var_5c = "{develop}"
    char const* const var_58 = "{develop_night}"
    char const* const var_54 = "[settle]"
    char const* const var_50 = "{settle}"
    char const* const var_4c = "{settle_night}"
    char const* const var_48 = "[produce]"
    char const* const var_44 = "{produce}"
    char const* const var_40 = "{produce_night}"
    char const* const var_3c = "[ship]"
    char const* const var_38 = "{ship}"
    char const* const var_34 = "{ship_night}"
    char const* const var_30 = "[wild]"
    char const* const var_2c = "{wild}"
    char const* const var_28 = "{wild_night}"
    char const* const var_24 = "[citizenry]"
    char const* const var_20 = "{citizenry}"
    char const* const var_1c = "{citizenry_night}"
    void* eax_4
    
    while (true)
        eax_4 = data_6d00d0
        
        if (eax_4 == 0)
            break
        
        char* ecx_2
        
        if (*(eax_4 + 0x2d) == 0)
            ecx_2 = edi[2]
        else
            ecx_2 = edi[1]
        
        char* eax_5 = *arg3
        char* const edx = &data_5b2591
        
        if (eax_5 != 0)
            edx = eax_5
        
        char** eax_6 = sub_48aa40(eax_5, edx, &var_88, *edi, ecx_2)
        int32_t var_8_3 = 1
        char* const edx_1 = &data_5b2591
        char* eax_7 = *arg3
        char* const ecx_4 = &data_5b2591
        
        if (eax_7 != 0)
            edx_1 = eax_7
        
        char* eax_8 = *eax_6
        
        if (eax_8 != 0)
            ecx_4 = eax_8
        
        if (edx_1 != ecx_4)
            if (data_aca1f4 != 0)
                char* eax_9 = *arg3
                
                if (eax_9 != 0 && *eax_9 != 0)
                    char* eax_10 = sub_48a080(arg3)
                    int32_t temp1_1 = *(eax_10 + 4)
                    *(eax_10 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_4984f0(eax_10, *(eax_10 + 0xc) + 0x10)
                        *arg3 = &data_5b2591
            
            char* eax_11 = *eax_6
            *arg3 = eax_11
            
            if (eax_11 != 0 && *eax_11 != 0)
                char* eax_12 = sub_48a080(arg3)
                *(eax_12 + 4) += 1
        
        int32_t var_8_4 = 2
        
        if (data_aca1f4 != 0)
            char* eax_13 = var_88
            
            if (eax_13 != 0 && *eax_13 != 0)
                char* eax_14 = sub_48a080(&var_88)
                int32_t temp0_1 = *(eax_14 + 4)
                *(eax_14 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_4984f0(eax_14, *(eax_14 + 0xc) + 0x10)
                    var_88 = &data_5b2591
        
        edi = &edi[3]
        var_8_4.b = 0
        void var_18
        
        if (edi == &var_18)
            fsbase->NtTib.ExceptionList = ExceptionList
            @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
            return arg3
    
    sub_489550(eax_4, &data_5b2591, "gGameSettings.localSettings", 
        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, "GetLocalSettings")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
