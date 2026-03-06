// 函数名称: sub_425de0
// 虚拟地址: 0x425de0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_425de0()
{
    // 第一条实际指令: void* ecx = data_6cfe4c
    void* ecx = data_6cfe4c
    char const* const var_10
    int32_t var_c
    char const* const var_8
    int32_t eax
    char* ecx_1
    
    if (ecx != 0)
        eax = *(ecx + 0x834) - 1
        
        if (eax u> 3)
            var_8 = "ActiveGame"
            var_c = 0xb50
            var_10 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameclient.cpp"
            ecx_1 = "Halt"
        else
            switch (eax)
                case 0, 2, 3
                    return ecx + 0x868
                case 1
                    return sub_425d00(ecx + 0x834)
    else
        var_8 = "GetClient"
        var_c = 0x75
        var_10 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_1 = "gClient"
    
    sub_489550(eax, &data_5b2591, ecx_1, var_10, var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
