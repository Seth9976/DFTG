// 函数名称: sub_444d70
// 虚拟地址: 0x444d70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_444d70(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    for (int32_t i = *(arg2 * 0x1bc + arg3 + 0x170); i != 0xffffffff; 
            i = sx.d(*(arg3 + i * 0xc + 0x8ca)))
        int32_t eax_2 = (i + 0xbb) * 3
        int32_t* ecx = arg3 + (eax_2 << 2)
        
        if (*(arg3 + (eax_2 << 2) + 7) == 1 && *(*ecx + 0x18) == arg4)
            result += zx.d(ecx[2].b)
    
    return result
}
