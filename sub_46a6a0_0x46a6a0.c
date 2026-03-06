// 函数名称: sub_46a6a0
// 虚拟地址: 0x46a6a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_46a6a0()
{
    // 第一条实际指令: void* eax = data_6cfe4c
    void* eax = data_6cfe4c
    
    if (eax == 0)
        sub_489550(eax, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (*(eax + 0x834) == 1)
        void** var_8
        int32_t eax_2 = sub_488450(sub_425d50()[0x3e], &var_8)
        int32_t ecx_2 = data_632820
        
        if (ecx_2 s< eax_2)
            return &var_8[ecx_2 * 0xc]
    
    return 0
}
