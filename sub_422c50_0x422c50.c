// 函数名称: sub_422c50
// 虚拟地址: 0x422c50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_422c50(int32_t arg1)
{
    // 第一条实际指令: void var_118
    void var_118
    int32_t eax_1 = __security_cookie ^ &var_118
    void* result = data_6cfe4c
    __builtin_memcpy(&var_118, arg1, 0x108)
    int32_t var_18 = 2
    
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
                    int32_t var_124_1 = 0xf42ac
                    sub_48be40(result, 0x108, esi_2 + 0x3c)
                    result = sub_48bc20(&var_118, 0x108, esi_2 + 0x3c, &var_118)
    
    @__security_check_cookie@4(eax_1 ^ &var_118)
    return result
}
