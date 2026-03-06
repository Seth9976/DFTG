// 函数名称: sub_53ead0
// 虚拟地址: 0x53ead0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_53ead0(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ecx = *(arg1 + 0xc)
    int32_t ecx = *(arg1 + 0xc)
    int32_t edx = *(arg2 + 0xc)
    
    if (ecx s< edx)
        return 0xffffffff
    
    int32_t result
    result.b = ecx s> edx
    return result
}
