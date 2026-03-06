// 函数名称: sub_480110
// 虚拟地址: 0x480110
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*sub_480110(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59e258
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4b2440(arg1, sub_47fe20)
    int32_t eax_3 = data_a755e8
    char* result_3 = data_a755f0
    int32_t ebx = eax_3 - 1
    
    if (result_3 != 0)
        ebx = eax_3
    
    int32_t esi = data_a755ec
    
    if (esi s>= ebx)
        esi = eax_3 - 1
        
        if (result_3 != 0)
            esi = eax_3
    
    char* const result_2 = &data_5b2591
    
    if (ebx != eax_3)
        result_3 = 0x10
    
    char* result_1 = result_3
    int32_t var_8_1 = 0
    char* var_1c
    
    if (esi != 0)
        int32_t eax_9 = sub_425e70()
        void* ecx_4 = data_6cfe4c
        
        if (ecx_4 == 0)
            sub_489550(eax_9, &data_5b2591, "gClient", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        uint32_t eax_10 = zx.d(data_632a4c)
        var_8_1.b = 3
        sub_48a560(&result_2, 
            sub_4863d0(eax_10, esi * 0x15e7c + 0x7091c0, &var_1c, esi, ebx, result_1, *(ecx_4 + 0xa68), 
                eax_9, eax_10.b))
        var_8_1.b = 4
    else
        int32_t eax_4 = sub_425e70()
        void* ecx_1 = data_6cfe4c
        
        if (ecx_1 == 0)
            sub_489550(eax_4, &data_5b2591, "gClient", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        uint32_t eax_5 = zx.d(data_632a4c)
        var_8_1.b = 1
        sub_48a560(&result_2, 
            sub_485d70(eax_5, &data_a75520, &var_1c, esi, ebx, result_1, *(ecx_1 + 0xa68), eax_4, 
                eax_5.b))
        var_8_1.b = 2
    
    if (data_aca1f4 != 0)
        char* eax_12 = var_1c
        
        if (eax_12 != 0 && *eax_12 != 0)
            char* eax_13 = sub_48a080(&var_1c)
            int32_t temp0_1 = *(eax_13 + 4)
            *(eax_13 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_13, *(eax_13 + 0xc) + 0x10)
    
    var_8_1.b = 0
    sub_4a8930(&result_2, &data_639cbc, arg1, &result_2, 0xffffffff)
    
    if (data_632a4c != 0)
        int32_t var_34_4 = 0xffffffff
        sub_4a8570(arg1)
    
    if (esi != 0)
        int32_t var_34_5 = 0xffffffff
        sub_4a8570(arg1)
    
    if (esi != ebx)
        int32_t var_34_6 = 0xffffffff
        sub_4a8570(arg1)
    
    sub_48a2c0(&result_1, "Game Setup")
    var_8_1.b = 5
    
    if (esi s> 0)
        int32_t var_34_7 = ebx
        int32_t var_38_3 = esi
        var_8_1.b = 6
        sub_48a560(&result_1, sub_48a9d0(&var_1c, "Round %d/%d"))
        var_8_1.b = 7
        
        if (data_aca1f4 != 0)
            char* eax_16 = var_1c
            
            if (eax_16 != 0 && *eax_16 != 0)
                char* eax_17 = sub_48a080(&var_1c)
                int32_t temp2_1 = *(eax_17 + 4)
                *(eax_17 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_4984f0(eax_17, *(eax_17 + 0xc) + 0x10)
                    var_1c = &data_5b2591
        
        var_8_1.b = 5
    
    char* result = sub_4a8930(&result_1, &data_639d10, arg1, &result_1, 0xffffffff)
    var_8_1.b = 8
    
    if (data_aca1f4 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp1_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp1_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    int32_t var_8_2 = 9
    
    if (data_aca1f4 != 0)
        result = result_2
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_2)
            int32_t temp3_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp3_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
