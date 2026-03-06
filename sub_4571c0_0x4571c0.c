// 函数名称: sub_4571c0
// 虚拟地址: 0x4571c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_4571c0()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_4 = ecx
    int32_t* result = sub_4570b0(ecx)
    
    if (result != 0)
        return result
    
    sub_489550(result, &data_5b2591, "tile", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
        0x1138, "LookupTile")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
