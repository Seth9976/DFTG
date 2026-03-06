// 函数名称: sub_56da60
// 虚拟地址: 0x56da60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_56da60(int32_t arg1, int32_t arg2, int32_t arg3, float arg4 @ xmm2, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t result = arg5
    int32_t temp0 = divs.dp.d(sx.q(arg2), result)
    int32_t edi = 0
    int32_t esi_1 = temp0 - 2
    
    if (temp0 == 2)
        return result
    
    int32_t edx_2 = esi_1
    
    while (true)
        int32_t edx_3 = edx_2 s>> 1
        int32_t ecx = edx_3 + 1
        float temp3_1 = *(arg3 + ((ecx * result) << 2))
        arg4 - temp3_1
        result = arg5
        
        if (arg4 < temp3_1)
            ecx = edi
        
        if (arg4 < temp3_1)
            esi_1 = edx_3
        
        edi = ecx
        
        if (edi == esi_1)
            break
        
        edx_2 = edi + esi_1
    
    return (edi + 1) * result
}
