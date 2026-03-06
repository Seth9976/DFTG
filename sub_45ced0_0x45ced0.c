// 函数名称: sub_45ced0
// 虚拟地址: 0x45ced0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_45ced0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    int32_t eax
    
    if (data_62b1ac != 0x21)
        eax = 0
        
        if (data_62b1bc == 0x21)
            eax = data_62b1c0
    else
        eax = data_62b1b0
    
    int32_t var_c_2
    
    if (arg1 u> 0xc)
        char const* const var_8_2 = "RollTrayGetLocalUI"
        var_c_2 = 0x2caa
    else
        switch (arg1)
            case 0
                return 0
            case 1
                return sub_426e60(0x1513df4, eax, "group_cit")
            case 2
                return sub_426e60(0x1513e18, eax, "group_cup")
            case 3
                if (arg2 == 0)
                    return sub_426e60(0x1513e3c, eax, "group_dev")
                
                if (arg2 == 1)
                    return sub_426e60(0x1513e60, eax, "group_tray_dev")
                
                if (arg2 == 2)
                    return sub_426e60(0x1513e84, eax, "tbl_playerDev")
                
                char const* const var_8 = "RollTrayGetLocalUI"
                var_c_2 = 0x2c62
            case 4
                if (arg2 == 0)
                    return sub_426e60(0x1513ea8, eax, "group_settle")
                
                if (arg2 == 1)
                    return sub_426e60(0x1513ecc, eax, "group_tray_settle")
                
                if (arg2 == 2)
                    return sub_426e60(0x1513ef0, eax, "tbl_playerSettle")
                
                char const* const var_8_1 = "RollTrayGetLocalUI"
                var_c_2 = 0x2c79
            case 5
                return sub_426e60(0x1513f14, eax, "tbl_trays_explore")
            case 6
                return sub_426e60(0x1513f38, eax, "tbl_trays_develop")
            case 7
                return sub_426e60(0x1513f5c, eax, "tbl_trays_settle")
            case 8
                return sub_426e60(0x1513f80, eax, "tbl_trays_produce")
            case 9
                return sub_426e60(0x1513fa4, eax, "tbl_trays_ship")
            case 0xa
                return sub_426e60(0x1513fc8, eax, "group_dictate")
            case 0xb
                return sub_426e60(0x1514010, eax, "group_explore")
            case 0xc
                return sub_426e60(0x1513fec, eax, "group_ship")
    
    sub_489550(eax, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_c_2, 
        "RollTrayGetLocalUI")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
