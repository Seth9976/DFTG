// 函数名称: _wcsncmp
// 虚拟地址: 0x58b577
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t_wcsncmp(int16_t* arg1, int16_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t result = arg3
    int32_t result = arg3
    
    if (result == 0)
        return result
    
    int16_t* ecx = arg2
    int16_t* edx = arg1
    
    while (true)
        int32_t result_1 = result
        result -= 1
        int16_t esi_1
        
        if (result_1 != 1)
            esi_1 = *edx
        
        if (result_1 == 1 || esi_1 == 0 || esi_1 != *ecx)
            return zx.d(*edx) - zx.d(*ecx)
        
        edx = &edx[1]
        ecx = &ecx[1]
}
