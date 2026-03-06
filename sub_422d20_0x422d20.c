// 函数名称: sub_422d20
// 虚拟地址: 0x422d20
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_422d20(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_2 = sub_437f10(*(data_6d00d8 + 0xbe4))
    int32_t var_1c = 0
    int32_t var_18 = arg1
    int32_t var_14 = *(eax_2 + (arg1 << 2) + 0x2c8)
    int32_t var_c = *(eax_2 + (arg1 << 2) + 0x2e8)
    void* result = data_6cfe4c
    int32_t var_10 = *(eax_2 + (arg1 << 2) + 0x2d8)
    
    if (result == 0)
        sub_489550(result, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (*(result + 0x18) == 3)
        result = *(result + 0x14)
        void* ecx_4 = data_aca0dc
        
        if (result != 0)
            uint32_t edx_1 = zx.d(result.w)
            
            if (edx_1 u< *(ecx_4 + 4))
                void* esi_2 = edx_1 * 0x4c + *ecx_4
                
                if (*(esi_2 + 0x48) == result)
                    int32_t var_28_1 = 0xf42b5
                    sub_48be40(result, 0x14, esi_2 + 0x3c)
                    result = sub_48bc20(&var_1c, 0x14, esi_2 + 0x3c, &var_1c)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
