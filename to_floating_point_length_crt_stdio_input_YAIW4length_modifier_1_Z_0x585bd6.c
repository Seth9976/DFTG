// 函数名称: ?to_floating_point_length@__crt_stdio_input@@YAIW4length_modifier@1@@Z
// 虚拟地址: 0x585bd6
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t?to_floating_point_length@__crt_stdio_input@@YAIW4length_modifier@1@@Z(int32_t arg1) __pure
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 4
    
    if (arg1 != 3 && arg1 != 8)
        return 0
    
    return 8
}
