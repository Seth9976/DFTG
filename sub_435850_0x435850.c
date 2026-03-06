// 函数名称: sub_435850
// 虚拟地址: 0x435850
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*sub_435850(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d968
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_3 = sub_4b2440(arg1, sub_434230)
    void* ebx = data_6cfe4c
    
    if (ebx == 0)
        sub_489550(eax_3, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* result_3 = sub_437f10(*(data_6d00d8 + 0xbe4))
    void* result_1 = result_3
    
    if (*(result_3 + 0x244) != 0)
        int32_t var_30_1 = 0xffffffff
        sub_4a8570(arg1)
    
    char* eax_4 = *result_3
    char* edx_2 = &data_5b2591
    
    if (eax_4 != 0)
        edx_2 = eax_4
    
    char* var_1c
    sub_48a2c0(&var_1c, edx_2)
    int32_t var_8_1 = 0
    char* esi_1 = var_1c
    
    if (esi_1 == 0 || *esi_1 == 0)
        int32_t var_30_2 = 0xffffffff
        sub_4a8570(arg1)
    else
        sub_4a8930(&var_1c, &data_62b7ac, arg1, &var_1c, 0xffffffff)
    
    if (*(ebx + 0x1c) != 6)
        int32_t var_30_3 = 0xffffffff
        sub_4a8570(arg1)
    
    sub_465a40(*(result_1 + 8))
    int32_t var_30_4 = 0xffffffff
    sub_4a8570(arg1)
    int32_t eax_7 = sub_42a2b0()
    
    if (eax_7 u> 3)
        sub_489550(eax_7, &data_5b2591, "Halt", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0x1784, "TitleUpdate")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t eax_8
    
    switch (eax_7)
        case 0
            int32_t var_30_5 = 0xffffffff
            eax_8 = sub_4a8570(arg1)
        case 1
            int32_t var_30_6 = 0xffffffff
            sub_4a8570(arg1)
            int32_t var_34_2 = 0xffffffff
            eax_8 = sub_4a8570(arg1)
        case 2
            int32_t var_30_7 = 0xffffffff
            sub_4a8570(arg1)
        label_4359b5:
            int32_t var_34_3 = 0xffffffff
            sub_4a8570(arg1)
            int32_t var_38_1 = 0xffffffff
            eax_8 = sub_4a8570(arg1)
        case 3
            int32_t var_30_8 = 0xffffffff
            sub_4a8570(arg1)
            goto label_4359b5
    
    result_1 = &data_5b2591
    char* result_2 = &data_5b2591
    var_8_1.b = 2
    void* ebx_1 = data_6cfe4c
    
    if (ebx_1 == 0)
        sub_489550(eax_8, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t* eax_10 = sub_48a560(&result_2, ebx_1 + 0x20)
    
    if (*(ebx_1 + 0x18) u> 3)
        sub_489550(eax_10, &data_5b2591, "Halt", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0x168f, "ServerStatusMsg")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    char const* const eax_12
    
    if (*(sub_437f10(*(data_6d00d8 + 0xbe4)) + 0x248) != 1)
        if (*(sub_437f10(*(data_6d00d8 + 0xbe4)) + 0x248) != 2)
            switch (*(ebx_1 + 0x1c) - 1)
                case 0, 3
                    eax_12 = "Server unavailable"
                case 1
                    eax_12 = "Network unavailable"
                case 2
                    eax_12 = "Update available"
                case 4
                    eax_12 = "Server full"
                case 6
                    eax_12 = "Server updating"
                default
                    eax_12 = &data_5b2591
        else
            eax_12 = "Forced Offline"
    else
        eax_12 = "Always Offline"
    
    data_6cedd8 = eax_12
    sub_48a5e0(&result_1, eax_12)
    sub_4a8930(&result_2, &data_62b774, arg1, &result_2, 0xffffffff)
    char* result = sub_4a8930(&result_1, &data_62b758, arg1, &result_1, 0xffffffff)
    var_8_1.b = 3
    
    if (data_aca1f4 != 0)
        result = result_2
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_2)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    var_8_1.b = 4
    
    if (data_aca1f4 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp1_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp1_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    int32_t var_8_2 = 5
    
    if (data_aca1f4 != 0 && esi_1 != 0 && *esi_1 != 0)
        result = sub_48a080(&var_1c)
        int32_t temp2_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp2_1 == 1)
            result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
