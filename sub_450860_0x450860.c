// 函数名称: sub_450860
// 虚拟地址: 0x450860
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_450860(int32_t arg1, char* arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    *(arg3 + 0x28) += 1
    int32_t edi = *(arg3 + 0x28)
    int32_t esi = edi << 2
    int32_t var_18 = esi
    int32_t var_1c = *(arg3 + 0x40)
    int32_t eax_1 = sub_57fb2f()
    int32_t var_20 = esi
    int32_t var_24 = *(arg3 + 0x44)
    *(arg3 + 0x40) = eax_1
    int32_t eax_2 = sub_57fb2f()
    int32_t var_28 = esi
    int32_t var_2c = *(arg3 + 0x90)
    *(arg3 + 0x44) = eax_2
    *(arg3 + 0x90) = sub_57fb2f()
    *((edi << 2) + 0xfffffffc + *(arg3 + 0x90)) = __strdup(arg2)
    *((edi << 2) + 0xfffffffc + *(arg3 + 0x40)) = arg4
    int32_t* eax_6 = *(arg3 + 0x48)
    int32_t* ecx_4 = *(arg3 + 0x44)
    
    if (arg4 s>= 0)
        *(ecx_4 + (edi << 2) + 0xfffffffc) = eax_6[arg4]
        int32_t eax_8 = *(arg3 + 0x48)
        *(eax_8 + (arg4 << 2)) += 1
        return eax_8
    
    *(ecx_4 + (edi << 2) + 0xfffffffc) = *eax_6
    int32_t i = 0
    
    if (*(arg3 + 0x38) s> 0)
        do
            int32_t ecx_5 = *(arg3 + 0x48)
            *(ecx_5 + (i << 2)) += 1
            i += 1
        while (i s< *(arg3 + 0x38))
    
    return i
}
