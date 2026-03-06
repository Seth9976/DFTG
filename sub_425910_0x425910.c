// 函数名称: sub_425910
// 虚拟地址: 0x425910
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_425910(char* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void var_4c
    _strncpy(&var_4c, arg1, 0x40)
    void* result = data_6cfe4c
    int16_t var_d = 0x100
    
    if (result == 0)
        sub_489550(result, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (*(result + 0x18) == 3)
        result = *(result + 0x14)
        void* ecx = data_aca0dc
        
        if (result != 0)
            uint32_t edx_1 = zx.d(result.w)
            
            if (edx_1 u< *(ecx + 4))
                void* esi_2 = edx_1 * 0x4c + *ecx
                
                if (*(esi_2 + 0x48) == result)
                    int32_t var_54_1 = 0xf42a6
                    sub_48be40(result, 0x41, esi_2 + 0x3c)
                    result = sub_48bc20(&var_4c, 0x41, esi_2 + 0x3c, &var_4c)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
