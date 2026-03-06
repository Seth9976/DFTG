// 函数名称: sub_480bb0
// 虚拟地址: 0x480bb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_480bb0(int32_t arg1, uint32_t arg2)
{
    // 第一条实际指令: int32_t* ecx_2 = data_632804 + ((arg1 * 3 + 0x231) << 2)
    int32_t* ecx_2 = data_632804 + ((arg1 * 3 + 0x231) << 2)
    
    if (arg2 == 0xffffffff)
        int32_t eax
        eax.b = *(ecx_2 + 7)
        
        if (eax.b != 0 && eax.b != 1)
            sub_489550(eax, &data_5b2591, "t.side == 0 || t.side == 1", 
                "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x8cd1, "TileGetName")
            
            if (IsDebuggerPresent() != 1)
                noreturn sub_489700() __tailcall
            
            breakpoint
        
        arg2 = zx.d(eax.b)
    
    return *(*ecx_2 + (arg2 << 2))
}
