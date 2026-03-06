// 函数名称: sub_4fd5b0
// 虚拟地址: 0x4fd5b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4fd5b0(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: void* esi = *(arg3 + 0x2e0)
    void* esi = *(arg3 + 0x2e0)
    
    if (esi != 0)
        arg1 = sub_4981f0(**(esi + 0x2e4))
        int32_t* edx_1 = *(esi + 0x2dc) * 0x168 + *arg1
        
        if (*(edx_1 + arg2 + 0x14) != 0)
            int32_t* eax_1 = sub_4f0e70(arg1, edx_1, &data_626728, data_12bad4c, arg2)
            int32_t eax_2 = sub_48dd80()
            *arg4 =
                sub_526200(eax_1, 0, *(*(arg3 + 0x2e0) + 0x2e8), ((eax_2 & 0x7fffff) | 0x3f800000) - 1f)
            int32_t* eax_5
            eax_5.b = 1
            return eax_5
    
    arg1.b = 0
    return arg1
}
