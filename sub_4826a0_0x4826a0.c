// 函数名称: sub_4826a0
// 虚拟地址: 0x4826a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4826a0(int32_t arg1, int64_t* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: if (*arg2 == 2 && *arg3 != 2)
    if (*arg2 == 2 && *arg3 != 2)
        int64_t xmm1_1 = *arg2
        int32_t ecx = arg2[1].d
        *arg2 = *arg3
        arg2[1].d = arg3[2]
        *arg3 = xmm1_1
        arg3[2] = ecx
    
    int32_t result = *arg2
    
    if (*arg4 == 2 && result != 2)
        int64_t xmm1_2 = *arg4
        int32_t edi_1 = arg4[2]
        *arg4 = *arg2
        result = arg2[1].d
        arg4[2] = result
        *arg2 = xmm1_2
        arg2[1].d = edi_1
        
        if (*arg2 == 2 && *arg3 != 2)
            *arg2 = *arg3
            result = arg3[2]
            arg2[1].d = result
            *arg3 = xmm1_2
            arg3[2] = edi_1
    
    return result
}
