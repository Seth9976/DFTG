// 函数名称: sub_4bacb0
// 虚拟地址: 0x4bacb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t*sub_4bacb0(int128_t* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t eax
    char* edx
    int32_t eax_1 = sub_4ad220(eax, edx, ecx, 0)
    int32_t edx_1 = eax_1
    
    if (edx_1 == 0)
        *arg1 = data_5d2760
        return arg1
    
    uint32_t ecx_2 = zx.d(edx_1.w)
    
    if (ecx_2 u< data_63e5ac)
        int32_t esi_1 = data_63e5a8
        eax_1 = ecx_2 * 0x1418
        
        if (*(eax_1 + esi_1 + 0x1410) == edx_1)
            *arg1 = *(ecx_2 * 0x1418 + esi_1 + 0x10a0)
            return arg1
    
    sub_489550(eax_1, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
        "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
