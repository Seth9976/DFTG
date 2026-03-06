// 函数名称: sub_48a930
// 虚拟地址: 0x48a930
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __thiscallsub_48a930(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t edi = ___stdio_common_vsprintf(data_6cfe38 | 2, data_6cfe3c, nullptr, 0, arg2, nullptr, arg3)
    int32_t edi =
        ___stdio_common_vsprintf(data_6cfe38 | 2, data_6cfe3c, nullptr, 0, arg2, nullptr, arg3)
    
    if (edi s< 0)
        edi = 0xffffffff
    
    if (edi s> 0)
        Mod1::CheckFCreateWriter(sub_48a180(0xffffffff, edi, arg1, 0), edi + 1, *arg1, arg2, arg3)
        return arg1
    
    if (data_aca1f4 != 0)
        char* eax_1 = *arg1
        
        if (eax_1 != 0 && *eax_1 != 0)
            char* eax_2 = sub_48a080(arg1)
            int32_t temp1_1 = *(eax_2 + 4)
            *(eax_2 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_4984f0(eax_2, *(eax_2 + 0xc) + 0x10)
    
    *arg1 = &data_5b2591
    return arg1
}
