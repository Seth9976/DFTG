// 函数名称: sub_461ad0
// 虚拟地址: 0x461ad0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_461ad0(int32_t arg1, int32_t* arg2, int32_t arg3, uint32_t arg4)
{
    // 第一条实际指令: uint32_t ecx
    uint32_t ecx
    uint32_t var_8 = ecx
    
    if (*(arg2 + 0x22) == 0)
        return sub_45a830(arg1, arg2, ecx, 3, false, arg4, 5, 1, arg3)
    
    uint32_t eax = sub_45a830(arg1, arg2, ecx, 1, false, 1, 5, 1, arg3)
    
    if (arg3.b == 0)
        return eax
    
    if (arg2[1] != 0)
        sub_49a5a0(&arg2[1])
    
    uint32_t eax_1 = zx.d(arg2[0x22a].w)
    int32_t ecx_2 = data_62d6d0
    data_62d6d0 = eax_1
    arg2[0x22a] = ecx_2
    data_62d6d4 -= 1
    return eax_1
}
