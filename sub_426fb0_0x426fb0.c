// 函数名称: sub_426fb0
// 虚拟地址: 0x426fb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_426fb0()
{
    // 第一条实际指令: int32_t eax_11 = data_6d00ac
    int32_t eax_11 = data_6d00ac
    
    if (eax_11 == 0)
        return sub_437f10(*(data_6d00d8 + 0xbe4)) + 0x10
    
    if (eax_11 != 1)
        int32_t esi_1 = data_6d00b4
        void* eax_2 = sub_41c5b0()
        
        if (esi_1 != 0)
            uint32_t eax_3 = zx.d(esi_1.w)
            
            if (eax_3 u< *(eax_2 + 0x84c))
                void* eax_5 = eax_3 * 0x1e8 + *(eax_2 + 0x848)
                
                if (*(eax_5 + 0x1e0) == esi_1)
                    if (data_6d00ac == 2)
                        return &sub_4218b0(data_6d00b4)[2]
                    
                    sub_489550(eax_5, &data_5b2591, "gCreateDlg.style == DISPLAY_MULTIPAYER", 
                        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0xbf, 
                        "GetActiveGameSetup")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
    
    return sub_437f10(*(data_6d00d8 + 0xbe4)) + 0x118
}
