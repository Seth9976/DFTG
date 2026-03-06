// 函数名称: sub_444b00
// 虚拟地址: 0x444b00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_444b00(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: void* edi_1 = arg2 * 0x1bc + arg3
    void* edi_1 = arg2 * 0x1bc + arg3
    int32_t esi = 0
    char* eax = edi_1 + 0x24
    
    while (*eax != 0)
        esi += 1
        eax = &eax[8]
        
        if (esi s>= 0x28)
            sub_444530("Could not find empty die spot!\n")
            noreturn
    
    if (esi s>= *(edi_1 + 0x164))
        *(edi_1 + 0x164) = esi + 1
    
    *(edi_1 + (esi << 3) + 0x2b) |= 2
    *(edi_1 + (esi << 3) + 0x24) = arg4.b
    *(edi_1 + (esi << 3) + 0x25) = 4
    *(edi_1 + (esi << 3) + 0x29) = arg5.b
    
    if (*(arg3 + 0x10) != 0)
        return arg4
    
    return sub_444430(arg4, 0x2c, arg3, arg2, esi, arg4, arg5, arg6)
}
