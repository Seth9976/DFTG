// 函数名称: sub_4ca9f0
// 虚拟地址: 0x4ca9f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __convention("regparm")sub_4ca9f0(int32_t arg1, int32_t arg2, void* arg3, int128_t* arg4)
{
    // 第一条实际指令: int32_t eax = *(arg3 + 0x1900)
    int32_t eax = *(arg3 + 0x1900)
    
    if (eax s<= 0)
        sub_489550(eax, &data_5b2591, "stack.numEntries > 0", "d:\ax\trunk\ax2017\engine\uidef.cpp", 
            0x69c, "Peek")
        
        if (IsDebuggerPresent() != 1)
            noreturn sub_489700() __tailcall
        
        breakpoint
    
    void* ecx = arg3 + eax * 0x64
    *arg4 = *(ecx - 0x64)
    arg4[1] = *(ecx - 0x54)
    arg4[2] = *(ecx - 0x44)
    arg4[3] = *(ecx - 0x34)
    arg4[4] = *(ecx - 0x24)
    arg4[5] = *(ecx - 0x14)
    return arg4
}
