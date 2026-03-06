// 函数名称: sub_477060
// 虚拟地址: 0x477060
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_477060(int32_t arg1, int32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5)
{
    // 第一条实际指令: uint32_t var_8 = arg3
    uint32_t var_8 = arg3
    
    if (data_632a00 != 0)
        sub_489550(arg1, &data_5b2591, "!gRollClient.threadRunning", 
            "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x72ca, "NotifyUILocal")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    uint32_t eax = data_632810
    
    if (eax != 1 && eax != 0)
        return sub_47dd90(eax, 0xffffffff, arg3, arg4, arg5, nullptr, 0, 1)
    
    int32_t eax_2 = data_6fadf0
    data_6fadf0 = eax_2 + 1
    (&data_6d36fc)[eax_2 * 8] = arg4
    (&data_6d36f4)[eax_2 * 8] = arg3
    (&data_6d36f8)[eax_2 * 8] = 0xffffffff
    (&data_6d3700)[eax_2 * 8] = arg5
    (&data_6d3704)[eax_2 * 8] = 0
    (&data_6d3708)[eax_2 * 8] = 0
    *((eax_2 << 5) + 0x6d370c) = 0
    return arg5
}
