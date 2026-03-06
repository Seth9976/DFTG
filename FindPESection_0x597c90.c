// 函数名称: __FindPESection
// 虚拟地址: 0x597c90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*__FindPESection(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t edx = 0
    int32_t edx = 0
    void* ecx_1 = *(arg1 + 0x3c) + arg1
    uint32_t ebx = zx.d(*(ecx_1 + 6))
    void* result = zx.d(*(ecx_1 + 0x14)) + 0x18 + ecx_1
    
    if (ebx != 0)
        do
            int32_t esi_1 = *(result + 0xc)
            
            if (arg2 u>= esi_1 && arg2 u< *(result + 8) + esi_1)
                return result
            
            edx += 1
            result += 0x28
        while (edx u< ebx)
    
    return nullptr
}
