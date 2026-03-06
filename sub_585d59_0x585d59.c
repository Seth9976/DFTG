// 函数名称: sub_585d59
// 虚拟地址: 0x585d59
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_585d59(void* arg1)
{
    // 第一条实际指令: int32_t eax_2 = *(arg1 + 8)
    int32_t eax_2 = *(arg1 + 8)
    
    if (eax_2 != 0 && eax_2 u<= *(arg1 + 4))
        eax_2.b = 1
        return eax_2
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    int32_t eax_1
    eax_1.b = 0
    return eax_1
}
