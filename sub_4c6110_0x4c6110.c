// 函数名称: sub_4c6110
// 虚拟地址: 0x4c6110
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_4c6110(int32_t arg1, int32_t arg2, int32_t* arg3, uint32_t (* arg4)[0x4])
{
    // 第一条实际指令: uint32_t result
    uint32_t result
    
    if (_fseek(*arg3, arg3[1], 0) == 0)
        result = _fread(arg4, arg2, 1, *arg3)
        
        if (result == 1)
            arg3[1] += arg2
            result.b = result.b
            return result
    
    result.b = 0
    return result
}
