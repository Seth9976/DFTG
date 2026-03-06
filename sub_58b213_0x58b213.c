// 函数名称: sub_58b213
// 虚拟地址: 0x58b213
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_58b213(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t edi
    int32_t var_14 = edi
    int32_t edi_2 = arg1 s>> 6
    int32_t edx = (arg1 & 0x3f) * 0x30
    int32_t esi = (&data_6cfb08)[edi_2]
    int32_t eax_1
    eax_1.b = *(esi + edx + 0x28)
    int32_t ebx
    ebx.b = *(esi + edx + 0x29)
    int32_t ecx_2 = zx.d(eax_1.b) & 0x80
    
    if (arg2 == 0x4000)
        eax_1.b |= 0x80
        *(esi + edx + 0x28) = eax_1.b
        *((&data_6cfb08)[edi_2] + edx + 0x29) = 0
    else if (arg2 == 0x8000)
        eax_1.b &= 0x7f
        *(esi + edx + 0x28) = eax_1.b
    else if (arg2 == 0x10000 || arg2 == 0x20000)
        eax_1.b |= 0x80
        *(esi + edx + 0x28) = eax_1.b
        *((&data_6cfb08)[edi_2] + edx + 0x29) = 2
    else if (arg2 == 0x40000)
        eax_1.b |= 0x80
        *(esi + edx + 0x28) = eax_1.b
        *((&data_6cfb08)[edi_2] + edx + 0x29) = 1
    
    if (ecx_2 == 0)
        return 0x8000
    
    if (ebx.b == 0)
        return 0x4000
    
    int32_t eax_5
    eax_5.b = ebx.b != 1
    return ((eax_5 - 1) & 0x30000) + 0x10000
}
