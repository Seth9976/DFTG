// 函数名称: sub_42a550
// 虚拟地址: 0x42a550
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*sub_42a550()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (data_62bbd4 == 1)
        sub_48a560(sub_437f10(*(data_6d00d8 + 0xbe4)) + 4, &data_62bbd8)
        void* eax_3 = data_62bbd8
        void* ecx_3 = &data_5b2591
        
        if (eax_3 != 0)
            ecx_3 = eax_3
        
        sub_425910(ecx_3)
        void* ecx_4 = data_6d00d8
        data_62bbd4 = 2
        char* eax_4 = sub_437ba0(ecx_4)
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return eax_4
    
    if (data_62bbe0 != 1)
        sub_489550(eax_1, &data_5b2591, "Halt", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0x9e2, 
            "GameProfileAccountOK")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* eax_5 = data_62bbdc
    void* ecx_7 = &data_5b2591
    
    if (eax_5 != 0)
        ecx_7 = eax_5
    
    void var_14
    _strncpy(&var_14, ecx_7, 9)
    void* eax_6 = data_6cfe4c
    char var_c = 0
    
    if (eax_6 == 0)
        sub_489550(eax_6, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (*(eax_6 + 0x18) == 3)
        eax_6 = *(eax_6 + 0x14)
        void* ecx_8 = data_aca0dc
        
        if (eax_6 != 0)
            uint32_t edx_1 = zx.d(eax_6.w)
            
            if (edx_1 u< *(ecx_8 + 4))
                void* esi_2 = edx_1 * 0x4c + *ecx_8
                
                if (*(esi_2 + 0x48) == eax_6)
                    int32_t var_1c_1 = 0xf42a7
                    sub_48be40(eax_6, 9, esi_2 + 0x3c)
                    eax_6 = sub_48bc20(&var_14, 9, esi_2 + 0x3c, &var_14)
    
    data_62bbe0 = 2
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_6
}
