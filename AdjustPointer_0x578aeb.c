// 函数名称: ___AdjustPointer
// 虚拟地址: 0x578aeb
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*___AdjustPointer(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* esi = arg2[1]
    int32_t* esi = arg2[1]
    void* result = *arg2 + arg1
    
    if (esi s< 0)
        return result
    
    return result + *(*(esi + arg1) + arg2[2]) + esi
}
