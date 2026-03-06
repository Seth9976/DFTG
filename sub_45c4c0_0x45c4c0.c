// 函数名称: sub_45c4c0
// 虚拟地址: 0x45c4c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

voidsub_45c4c0()
{
    // 第一条实际指令: if (data_632a64 == 0xffffffff || sub_45c330().b == 0)
    if (data_632a64 == 0xffffffff || sub_45c330().b == 0)
        return 
    
    int64_t* eax = data_6cfe4c
    
    if (eax == 0)
        sub_489550(eax, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t ecx_1 = data_632a64
    
    if (ecx_1 != eax[0x14d].d)
        sub_421710(ecx_1)
    
    data_632a64 = 0xffffffff
}
