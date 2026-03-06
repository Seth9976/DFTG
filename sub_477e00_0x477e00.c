// 函数名称: sub_477e00
// 虚拟地址: 0x477e00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_477e00(int32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, int32_t arg5, uint32_t arg6, uint32_t arg7)
{
    // 第一条实际指令: uint32_t var_8 = arg3
    uint32_t var_8 = arg3
    uint32_t (* eax)[0x4] = sub_481490(&data_62d6c4)
    *eax = 1
    (*eax)[0xb] = arg3
    (*eax)[2] = arg4
    (*eax)[6] = arg2
    (*eax)[3] = 0
    uint32_t eax_1 = eax[1][0]
    
    if (eax_1 != 0)
        (*eax)[5] = eax_1
        eax[1][0] = 0
    
    (*eax)[3] = arg6
    *(eax + 0x22) = 1
    (*eax)[9] = arg7
    void* eax_4 = sub_452b90(arg2)
    return sub_45b8e0(eax_4, eax, eax_4, arg5)
}
