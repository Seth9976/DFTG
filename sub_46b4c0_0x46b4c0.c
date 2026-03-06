// 函数名称: sub_46b4c0
// 虚拟地址: 0x46b4c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_46b4c0(void* arg1)
{
    // 第一条实际指令: int32_t edx = *(arg1 + 0x8a8)
    int32_t edx = *(arg1 + 0x8a8)
    int32_t ecx = data_632564
    uint32_t result
    
    if (edx != ecx)
        if (ecx == 0)
            result.b = 0
            return result
        
        result = zx.d(ecx.w)
        
        if (result u>= data_62d6c8)
            result.b = 0
            return result
        
        result = result * 0x8ac + data_62d6c4
        
        if (*(result + 0x8a8) != ecx || *result != 2)
            result.b = 0
            return result
        
        if (*(result + 0x54) != edx && *(result + 0x50) != edx)
            result.b = 0
            return result
    
    result.b = 1
    return result
}
