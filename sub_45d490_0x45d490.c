// 函数名称: sub_45d490
// 虚拟地址: 0x45d490
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_45d490(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t var_14 = 0xffffffff
    sub_4a8570(arg3)
    void* eax_1 = arg4 - 1
    int32_t var_18
    
    if (eax_1 u> 9)
        char const* const var_14_19 = "RollTraySyncUIState"
        var_18 = 0x2f77
    else
        switch (eax_1)
            case 1, 2
                goto label_45d4d3
            case 4
                int32_t var_14_1 = 0xffffffff
                sub_4a8570(arg3)
            label_45d4d3:
                int32_t var_14_2 = 0xffffffff
                sub_4a8570(arg3)
                int32_t var_14_3 = 0xffffffff
                return sub_4a8570(arg3)
            case 5
                int32_t var_14_11 = 0xffffffff
                *((arg2 << 2) + &data_6329c4) = sub_45d1b0(arg2)
                sub_4a8570(arg3)
            label_45d5cc:
                eax_1 = *((arg2 << 2) + &data_6329c4)
                
                if (eax_1 u> 5)
                    char const* const var_14_18 = "RollTraySyncUIState"
                    var_18 = 0x2f72
                else
                    switch (eax_1)
                        case nullptr
                            int32_t var_14_12 = 0xffffffff
                            return sub_4a8570(arg3)
                        case 1
                            int32_t var_14_13 = 0xffffffff
                            return sub_4a8570(arg3)
                        case 2
                            int32_t var_14_14 = 0xffffffff
                            return sub_4a8570(arg3)
                        case 3
                            int32_t var_14_15 = 0xffffffff
                            return sub_4a8570(arg3)
                        case 4
                            int32_t var_14_16 = 0xffffffff
                            return sub_4a8570(arg3)
                        case 5
                            int32_t var_14_17 = 0xffffffff
                            return sub_4a8570(arg3)
            case 6, 9
                goto label_45d5cc
            case 7, 8
                eax_1 = sub_45d1b0(arg2)
                *((arg2 << 2) + &data_6329c4) = eax_1
                
                if (eax_1 u> 5)
                    char const* const var_14_10 = "RollTraySyncUIState"
                    var_18 = 0x2f4d
                else
                    switch (eax_1)
                        case nullptr
                            int32_t var_14_4 = 0xffffffff
                            return sub_4a8570(arg3)
                        case 1
                            int32_t var_14_5 = 0xffffffff
                            return sub_4a8570(arg3)
                        case 2
                            int32_t var_14_6 = 0xffffffff
                            return sub_4a8570(arg3)
                        case 3
                            int32_t var_14_7 = 0xffffffff
                            return sub_4a8570(arg3)
                        case 4
                            int32_t var_14_8 = 0xffffffff
                            return sub_4a8570(arg3)
                        case 5
                            int32_t var_14_9 = 0xffffffff
                            return sub_4a8570(arg3)
    
    sub_489550(eax_1, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_18, 
        "RollTraySyncUIState")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
