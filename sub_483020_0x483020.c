// 函数名称: sub_483020
// 虚拟地址: 0x483020
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_483020(int32_t arg1)
{
    // 第一条实际指令: void* eax_11 = data_6d00d0
    void* eax_11 = data_6d00d0
    char const* const var_c
    int32_t var_8
    char const* const var_4
    char* ecx
    
    if (eax_11 == 0)
        var_4 = "GetLocalSettings"
        var_8 = 0x24c
        var_c = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp"
        ecx = "gGameSettings.localSettings"
    else if (*(eax_11 + 0x2c) == 0)
        if (arg1 u> 5)
            var_4 = "TileKindToFancyText"
            var_8 = 0x192
            ecx = "Halt"
            var_c = "d:\ax\trunk\ax2017\jams\roll\code\rolllog.cpp"
        else
            switch (arg1)
                case 0
                    return "{development}"
                case 1
                    return "{world_grey}"
                case 2
                    return "{world_blue}"
                case 3
                    return "{world_brown}"
                case 4
                    return "{world_green}"
                case 5
                    return "{world_yellow}"
    else if (arg1 u> 5)
        var_4 = "TileKindToFancyText"
        var_8 = 0x17e
        ecx = "Halt"
        var_c = "d:\ax\trunk\ax2017\jams\roll\code\rolllog.cpp"
    else
        switch (arg1)
            case 0
                return "{development}"
            case 1
                return "{world_grey}"
            case 2
                return "{world_blue_colorblind}"
            case 3
                return "{world_brown_colorblind}"
            case 4
                return "{world_green_colorblind}"
            case 5
                return "{world_yellow_colorblind}"
    
    sub_489550(eax_11, &data_5b2591, ecx, var_c, var_8, var_4)
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
