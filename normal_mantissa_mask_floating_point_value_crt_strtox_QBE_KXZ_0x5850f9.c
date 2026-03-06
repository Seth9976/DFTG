// 函数名称: ?normal_mantissa_mask@floating_point_value@__crt_strtox@@QBE_KXZ
// 虚拟地址: 0x5850f9
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcall?normal_mantissa_mask@floating_point_value@__crt_strtox@@QBE_KXZ(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 4) == 0)
    if (*(arg1 + 4) == 0)
        return 0xffffff
    
    return 0xffffffff
}
