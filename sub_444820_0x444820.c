// 函数名称: sub_444820
// 虚拟地址: 0x444820
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_444820(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: void* edi_1 = arg2 * 0x1bc + arg3
    void* edi_1 = arg2 * 0x1bc + arg3
    int32_t ecx = *(edi_1 + 0x18c)
    
    if (arg4 s> ecx)
        sub_444530("Spent too many credits!\n")
        noreturn
    
    *(edi_1 + 0x18c) = ecx - arg4
    
    if (arg3[4] == 0)
        int32_t eax_1 = neg.d(arg4)
        
        if (arg6 != 0)
            sub_444430(eax_1, 0x28, arg3, arg2, 0xffffffff, eax_1, 0, 0)
        else if (eax_1 != 0)
            sub_444430(eax_1, 0x29, arg3, arg2, 0xffffffff, eax_1, 0, 0)
    
    void* result = *arg3
    int32_t ecx_3 = 1
    
    if (*(result + 8) == 0)
        ecx_3 = arg5
    
    if (ecx_3 != 0 && *(edi_1 + 0x18c) s< 1)
        *(edi_1 + 0x18c) = 1
        
        if (arg3[4] == 0)
            return sub_444430(result, 0x28, arg3, arg2, 0xffffffff, 1, 0, 0)
    
    return result
}
