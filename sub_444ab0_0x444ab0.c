// 函数名称: sub_444ab0
// 虚拟地址: 0x444ab0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_444ab0(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t eax = arg2 * 0x1bc
    int32_t eax = arg2 * 0x1bc
    int32_t result = 0
    int32_t i_1 = *(eax + arg3 + 0x164)
    
    if (i_1 s> 0)
        char* ecx_1 = arg3 + 0x24 + eax
        int32_t i
        
        do
            if (zx.d(ecx_1[1]) == arg4 && zx.d(*ecx_1) == arg5)
                result += 1
            
            ecx_1 = &ecx_1[8]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
