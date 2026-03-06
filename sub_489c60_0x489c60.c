// 函数名称: sub_489c60
// 虚拟地址: 0x489c60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_489c60()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (data_621f8c != 0)
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return "xsave\"
    
    if (data_1511988 == 0)
        uint8_t pszPath[0x104]
        HRESULT eax_2
        int32_t ecx_1
        int32_t edx_1
        eax_2, ecx_1, edx_1 = SHGetFolderPathA(nullptr, 0x801a, nullptr, 0, &pszPath)
        
        if (eax_2 s< 0)
            sub_489550(eax_2, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\xplatformpc.cpp", 0x13c, 
                "XGetSaveGameFolder")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t var_110_2 = *(data_aca1ec + 8)
        uint8_t (* var_114_1)[0x104] = &pszPath
        sub_41da20(&pszPath, edx_1, ecx_1, &data_1511988, "%s\TempleGates\%s\")
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return &data_1511988
}
