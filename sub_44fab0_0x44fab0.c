// 函数名称: sub_44fab0
// 虚拟地址: 0x44fab0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_44fab0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ecx = *(arg3 + (arg2 << 2) + 8)
    do
        int32_t ecx = *(arg3 + (arg2 << 2) + 8)
        int32_t* edx = arg3 + (arg2 << 2)
        int32_t eax = *edx
        void* edx_1 = &edx[3]
        
        if (ecx s> 0)
            edx_1 += ecx << 2
        
        int32_t ecx_1 = *edx_1
        void* edx_2 = edx_1 + 4
        
        if (ecx_1 s> 0)
            edx_2 += ecx_1 << 2
        
        if (eax != 3 && eax != 4 && eax != 1)
            return (edx_2 - arg3) s>> 2
        
        arg2 = (edx_2 - arg3) s>> 2
    while (arg2 != arg4)
    
    return 0xffffffff
}
