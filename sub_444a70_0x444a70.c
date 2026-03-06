// 函数名称: sub_444a70
// 虚拟地址: 0x444a70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_444a70(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t eax = arg2 * 0x1bc
    int32_t eax = arg2 * 0x1bc
    int32_t result = 0
    int32_t i_1 = *(eax + arg3 + 0x164)
    
    if (i_1 s> 0)
        char* edx_1 = arg3 + 0x25 + eax
        int32_t i
        
        do
            int32_t result_1 = result + 1
            bool cond:0_1 = zx.d(*edx_1) != arg4
            edx_1 = &edx_1[8]
            
            if (cond:0_1)
                result_1 = result
            
            result = result_1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
