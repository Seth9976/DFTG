// 函数名称: __ischartype_l
// 虚拟地址: 0x57f194
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t__ischartype_l(int32_t arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: if (arg3 != 0 && *(*arg3 + 4) s> 1)
    if (arg3 != 0 && *(*arg3 + 4) s> 1)
        return __isctype_l(arg1, arg2, arg3)
    
    return __chvalidchk_l(arg1.b, arg2, arg3)
}
