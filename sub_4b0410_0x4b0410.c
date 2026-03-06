// 函数名称: sub_4b0410
// 虚拟地址: 0x4b0410
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4b0410(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59f618
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_44 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = sub_4a9c40(arg1)
    char* var_34
    void* eax_4
    
    if (eax_3 == 0)
        if (sub_4a9b60(arg1, &var_34) != 1)
            eax_4 = sub_498ef0(arg1)
        else
            sub_48a320(&var_34, var_34)
            int32_t var_8_1 = 0
            void* eax_6 = sub_4a9a50(arg1, &var_34)
            int32_t var_8_2 = 1
            
            if (data_aca1f4 != 0)
                char* ecx_3 = var_34
                
                if (ecx_3 != 0 && *ecx_3 != 0)
                    char* eax_7 = sub_48a080(&var_34)
                    int32_t temp0_1 = *(eax_7 + 4)
                    *(eax_7 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
                        var_34 = &data_5b2591
            
            int32_t var_8_3 = 0xffffffff
            eax_4 = eax_6 + 8
    else
        eax_4 = eax_3 + 8
    
    void* eax_8 = sub_4f0e70(eax_4, eax_4, &data_6218dc, data_126cc94, 0x70)
    
    if (eax_8 == 0)
        sub_489550(eax_8, &data_5b2591, "transition", "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x2ea7, 
            "GetNewAnimationField")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t edx_6 = 7
    int32_t i_1 = *(eax_8 + 0x10)
    int128_t var_30
    __builtin_memcpy(&var_30, 
        "\x75\x00\x00\x00\x7b\x00\x00\x00\x7d\x00\x00\x00\x82\x00\x00\x00\x8a\x00\x00\x00\xd9\x00\x00\x00\x"
    "6c\x00\x00\x00", 
        0x1c)
    
    if (i_1 s> 0)
        int32_t* edi_1 = *(eax_8 + 8)
        int32_t eax_9
        int32_t i
        
        do
            int32_t esi_2 = *edi_1
            eax_9 = 0
            
            if (edx_6 s> 0)
                do
                    if (*(&var_30 + (eax_9 << 2)) == esi_2)
                        int32_t ecx_7 = (&var_34)[edx_6]
                        edx_6 -= 1
                        *(&var_30 + (eax_9 << 2)) = ecx_7
                        eax_9 -= 1
                    
                    eax_9 += 1
                while (eax_9 s< edx_6)
            
            edi_1 = &edi_1[4]
            i = i_1
            i_1 -= 1
        while (i != 1)
        
        if (edx_6 s<= 0)
            sub_489550(eax_9, &data_5b2591, "numAttribs > 0", "d:\ax\trunk\ax2017\engine\ui2.cpp", 
                0x2eb1, "GetNewAnimationField")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    
    int32_t result = var_30.d
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
