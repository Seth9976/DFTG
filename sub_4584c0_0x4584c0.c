// 函数名称: sub_4584c0
// 虚拟地址: 0x4584c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_4584c0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* eax_1 = sub_452b90(arg2) + 8
    void* eax_1 = sub_452b90(arg2) + 8
    int32_t edx = arg1 * 3
    void* eax_2 = eax_1 + (edx << 2)
    int32_t var_c
    char const* const var_8
    char* ecx_1
    
    if (*(eax_1 + (edx << 2) + 0x10) == arg1)
        eax_2 = *(eax_2 + 0x14) - 1
        uint32_t result
        
        if (eax_2 u> 0xc)
            var_8 = "IsTrayLarge"
            var_c = 0x1a58
            ecx_1 = "Halt"
        else
            switch (eax_2)
                case nullptr, 1, 2, 3, 4
                    result.b = 0
                    return result
                case 5, 6, 7, 8, 9, 0xa, 0xb, 0xc
                    result.b = 1
                    return result
    else
        var_8 = "GetCurrentTrayState"
        var_c = 0x1a37
        ecx_1 = "trays.trays[type].type == type"
    
    sub_489550(eax_2, &data_5b2591, ecx_1, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_c, 
        var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
