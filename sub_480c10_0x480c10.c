// 函数名称: sub_480c10
// 虚拟地址: 0x480c10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_480c10(int32_t arg1, uint32_t arg2)
{
    // 第一条实际指令: int32_t* eax = data_632804 + ((arg1 * 3 + 0x231) << 2)
    int32_t* eax = data_632804 + ((arg1 * 3 + 0x231) << 2)
    
    if (arg2 == 0xffffffff)
        arg2 = zx.d(*(eax + 7))
    
    if (arg2 == 0)
        return 0
    
    int32_t eax_3 = *(*eax + 0x18)
    
    switch (eax_3)
        case 0
            return 1
        case 3
            return 2
        case 4
            return 3
        case 5
            return 4
        case 6
            return 5
    
    sub_489550(eax_3, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x8cf6, 
        "TileGetKind")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
