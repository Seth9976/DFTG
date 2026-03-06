// 函数名称: sub_532a10
// 虚拟地址: 0x532a10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_532a10(void* arg1, void* arg2)
{
    // 第一条实际指令: if (*(arg2 + 0x68) != 0)
    if (*(arg2 + 0x68) != 0)
        return 
    
    if (*(arg2 + 8) != 0)
        sub_532a10()
    
    *(arg2 + 0x68) = 1
    int32_t ecx = *(arg1 + 0x5c)
    int32_t eax_1 = *(arg1 + 0x60)
    
    if (ecx == eax_1)
        int32_t eax_2 = eax_1 * 2
        *(arg1 + 0x60) = eax_2
        int32_t var_c_1 = eax_2 << 3
        int32_t var_10_1 = *(arg1 + 0x64)
        int32_t eax_4 = sub_57fb2f()
        ecx = *(arg1 + 0x5c)
        *(arg1 + 0x64) = eax_4
    
    int32_t eax = *(arg1 + 0x64)
    *(eax + (ecx << 3)) = 0
    *(eax + (ecx << 3) + 4) = arg2
    *(arg1 + 0x5c) += 1
}
