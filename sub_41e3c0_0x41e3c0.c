// 函数名称: sub_41e3c0
// 虚拟地址: 0x41e3c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_41e3c0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result = *(arg1 + 0xbd0)
    int32_t result = *(arg1 + 0xbd0)
    
    if (arg2 == result)
        return result
    
    int32_t xmm1_1 = *(arg1 + 0xbd4)
    int32_t xmm0_1
    
    if (arg2 != *(arg1 + 0xbd8))
        xmm0_1 = (zx.o(0)).d
    else
        xmm0_1 = *(arg1 + 0xbdc)
    
    *(arg1 + 0xbd8) = result
    *(arg1 + 0xbdc) = xmm1_1
    *(arg1 + 0xbd0) = arg2
    *(arg1 + 0xbd4) = xmm0_1
    int32_t eax
    int32_t edx
    eax, edx = sub_4ad640(*(arg1 + 0xbe0))
    int32_t ecx_1 = *(arg1 + 0xbd0)
    *(arg1 + 0xbe4) = 0
    int32_t edx_1 = eax
    int32_t var_1c_1 = edx
    
    if (ecx_1 != 0xffffffff && (ecx_1 s< eax || ecx_1 s> edx))
        int32_t edx_3 = edx - eax
        int32_t var_1c_2
        int32_t var_18_1
        
        if (ecx_1 s>= eax)
            var_18_1 = ecx_1
            var_1c_2 = ecx_1 - edx_3
        else
            var_1c_2 = ecx_1
            var_18_1 = ecx_1 + edx_3
        
        int32_t var_10 = var_1c_2
        float eax_7
        int32_t edx_5
        eax_7, edx_5 = sub_4ad4b0(*(arg1 + 0xbe0), &var_10)
        edx_1 = var_10
        *(arg1 + 0xbe8) = eax_7
        var_1c_1 = var_18_1
        *(arg1 + 0xbec) = edx_5
        *(arg1 + 0xbe4) = 1
    
    int32_t var_2c_1 = var_1c_1
    int32_t var_30_1 = edx_1
    int32_t var_34_1 = arg2
    int32_t var_38_1 = edx
    int32_t var_3c_1 = eax
    return sub_4892e0("range %d %d, slot %d newRange %d %d")
}
