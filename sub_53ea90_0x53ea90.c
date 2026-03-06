// 函数名称: sub_53ea90
// 虚拟地址: 0x53ea90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_53ea90(void* arg1, void* arg2)
{
    // 第一条实际指令: int16_t eax = *(arg1 + 6)
    int16_t eax = *(arg1 + 6)
    int16_t ecx = *(arg2 + 6)
    
    if (eax u<= ecx)
        if (eax u< ecx)
            return 1
        
        uint32_t eax_3 = zx.d(*(arg1 + 4))
        int16_t ecx_1 = *(arg2 + 4)
        bool c_1 = eax_3.w u< ecx_1
        
        if (eax_3.w == ecx_1 || c_1)
            return neg.d(sbb.d(eax_3, eax_3, c_1))
    
    return 0xffffffff
}
