// 函数名称: sub_45c030
// 虚拟地址: 0x45c030
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_45c030()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_10 = 0
    int32_t ecx
    int32_t var_c = ecx
    int32_t var_14 = *sub_425de0()
    void* eax_4 = data_6cfe4c
    
    if (eax_4 == 0)
        sub_489550(eax_4, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* result = *(eax_4 + 0x14)
    void* ecx_1 = data_aca0dc
    
    if (result != 0)
        uint32_t edx_1 = zx.d(result.w)
        
        if (edx_1 u< *(ecx_1 + 4))
            void* esi_2 = edx_1 * 0x4c + *ecx_1
            
            if (*(esi_2 + 0x48) == result)
                int32_t var_1c_1 = 0xf42b3
                sub_48be40(result, 0xc, esi_2 + 0x3c)
                result = sub_48bc20(&var_14, 0xc, esi_2 + 0x3c, &var_14)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
