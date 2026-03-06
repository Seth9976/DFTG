// 函数名称: sub_577e70
// 虚拟地址: 0x577e70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_577e70(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t* ecx_1 = *(arg1 - 0x14)
    int32_t* ecx_1 = *(arg1 - 0x14)
    int32_t eax_1 = **ecx_1
    *(arg1 - 0x20) = eax_1
    return __seh_filter_exe(eax_1, ecx_1)
}
