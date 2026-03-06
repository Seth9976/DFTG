// 函数名称: sub_421bc0
// 虚拟地址: 0x421bc0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*sub_421bc0()
{
    // 第一条实际指令: uint32_t var_118[0x4]
    uint32_t var_118[0x4]
    int32_t eax_1 = __security_cookie ^ &var_118
    void* edi = data_6cfe4c
    
    if (edi == 0)
        sub_489550(eax_1, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    _memset(&var_118, 0, 0x108)
    int32_t var_fc = 0x3e8
    int32_t var_f8 = *(sub_437f10(*(data_6d00d8 + 0xbe4)) + 0x240)
    int32_t edx = *sub_488530(*(edi + 0x830))
    
    if (edx s> 1)
        void var_cc
        void* eax_5 = &var_cc
        int32_t i_1 = edx - 1
        int32_t i
        
        do
            *(eax_5 - 4) = 3
            eax_5 += 0x2c
            *(eax_5 - 0x2c) = 0
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t eax_6 = *(edi + 0x830)
    int32_t var_34 = edx
    *(edi + 0x834) = 1
    *(edi + 0x838) = 0x7fffffff
    int32_t var_28 = eax_6
    *(edi + 0x868) = 0x7fffffff
    sub_436a90(eax_6, edi + 0x868, &var_118, edx, 0xffffffff)
    sub_45d9c0(edi + 0x868, 0x5b4f80)
    char* result = sub_438a30(edi + 0x868, 0x7fffffff)
    @__security_check_cookie@4(eax_1 ^ &var_118)
    return result
}
