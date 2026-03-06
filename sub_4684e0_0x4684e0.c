// 函数名称: sub_4684e0
// 虚拟地址: 0x4684e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_4684e0(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* esi = arg2
    int32_t* esi = arg2
    int32_t var_10_1
    char const* const var_c_1
    int32_t* eax
    
    if (*esi == 2)
        if (esi[0x12] == 0)
            return 
        
        arg2.b = 0
        int32_t ecx_1
        eax, ecx_1 = sub_467410(esi, arg2.b)
        
        if (*esi == 2)
            int32_t var_c_2 = ecx_1
            int32_t var_10_2 = 0
            sub_4744b0(eax, esi, ecx_1)
            data_632a50 = 0
            return 
        
        var_c_1 = "ShipActionTrayMoveTile"
        var_10_1 = 0x4cde
    else
        var_c_1 = "TrayIsAt"
        var_10_1 = 0x4bfe
    
    sub_489550(eax, &data_5b2591, "gfx.type == ROLLGFX_TRAY_SHIPPING", 
        "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_10_1, var_c_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
