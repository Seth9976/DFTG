// 函数名称: sub_459a70
// 虚拟地址: 0x459a70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_459a70(void* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_59dd08
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_10c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    bool cond:0 = *(arg1 + 0x892) != 0
    void* eax_3 = data_aca1ec
    int32_t var_9c = 0
    int32_t var_98 = 0
    int32_t var_94 = _mm_cvtepi32_ps(zx.o(*(eax_3 + 0x14)))
    int32_t var_90 = _mm_cvtepi32_ps(zx.o(*(eax_3 + 0x18)))
    
    if (not(cond:0))
        sub_49ec40(&var_9c, arg1 + 4, "token", data_126c278, &var_9c, &var_9c, 0x2c0c, nullptr, 1)
        
        switch (*(arg1 + 0x68))
            case 5, 8, 0xa
                int32_t var_110_1 = 0xffffffff
                sub_4a8570(*(arg1 + 4))
        
        sub_4a4740(*(arg1 + 4), 0, (zx.o(0)).d)
        *(arg1 + 0x892) = 1
    
    void var_100
    int128_t* eax_9 = sub_481680(&var_100, 
        sub_49ec40(&var_9c, arg1 + 4, "token", data_126c278, &var_9c, &var_9c, 0x2c0c, nullptr, 1), 
        arg1 + 0x174, &var_100)
    int32_t ecx_3 = *(arg1 + 4)
    int128_t var_88 = *eax_9
    int128_t var_78 = eax_9[1]
    int128_t var_68 = eax_9[2]
    int128_t var_58 = eax_9[3]
    int128_t var_48 = eax_9[4]
    int128_t var_38 = eax_9[5]
    sub_4a8700(ecx_3, &var_88)
    int32_t eax_10 = *(arg1 + 0x58)
    
    if (eax_10 != 0 && eax_10 != 1)
        sub_489550(eax_10 - 1, &data_5b2591, "Halt", 
            "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x1f9c, "DeclareToken")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t var_110_2 = 0xffffffff
    sub_4a8570(*(arg1 + 4))
    int32_t eax_13 = sub_459a20()
    
    if (eax_13 != 0 && eax_13 != 1 && eax_13 != 2)
        sub_489550(eax_13 - 2, &data_5b2591, "Halt", 
            "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x1f68, "GetSpeedState")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t var_110_3 = 0xffffffff
    sub_4a8570(*(arg1 + 4))
    int32_t eax_18
    int32_t edx_13
    edx_13:eax_18 = sx.q(*(arg1 + 0x60))
    int32_t var_110_4 = (eax_18 ^ edx_13) - edx_13
    char* const var_8c
    sub_48a9d0(&var_8c, &data_5efc90)
    int32_t var_14_1 = 0
    sub_4a8930(&var_8c, &data_637088, *(arg1 + 4), &var_8c, 0xffffffff)
    int32_t var_14_2 = 1
    
    if (data_aca1f4 != 0)
        char* eax_22 = var_8c
        
        if (eax_22 != 0 && *eax_22 != 0)
            char* eax_23 = sub_48a080(&var_8c)
            int32_t temp5_1 = *(eax_23 + 4)
            *(eax_23 + 4) -= 1
            
            if (temp5_1 == 1)
                sub_4984f0(eax_23, *(eax_23 + 0xc) + 0x10)
                var_8c = &data_5b2591
    
    int32_t var_14_3 = 0xffffffff
    
    switch (*(arg1 + 0x68))
        case 5, 8, 0xa
            int32_t var_110_5 = 0xffffffff
            sub_4a8570(*(arg1 + 4))
    
    uint32_t result = sub_4a4740(*(arg1 + 4), 0, data_620d84)
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
