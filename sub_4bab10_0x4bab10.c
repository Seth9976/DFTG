// 函数名称: sub_4bab10
// 虚拟地址: 0x4bab10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4bab10(int32_t arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    char* edx
    void* eax = sub_4baa30(ecx, edx)
    void* edx_1 = eax
    
    if (edx_1 != 0)
        uint32_t ecx_2 = zx.d(edx_1.w)
        
        if (ecx_2 u< data_63e5ac)
            eax = ecx_2 * 0x1418 + data_63e5a8
        
        char const* const var_14
        int32_t var_10
        char const* const var_c
        char* ecx_4
        
        if (ecx_2 u>= data_63e5ac || *(eax + 0x1410) != edx_1)
            var_c = "DataArray<struct UI2>::DataArrayGet"
            var_10 = 0x6d
            var_14 = "d:\ax\trunk\ax2017\engine\dataarray.h"
            ecx_4 = "DataArrayTryToGet(id) != NULL"
        label_4bab94:
            sub_489550(eax, &data_5b2591, ecx_4, var_14, var_10, var_c)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        eax = ecx_2 * 0x1418 + data_63e5a8
        
        if (arg1 s< 0)
            var_c = "UI2GetHandle"
            var_10 = 0x4000
            var_14 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
            ecx_4 = "idx >= 0"
            goto label_4bab94
        
        if (arg1 s< *(eax + 0x1190))
            return *(eax + (arg1 << 2) + 0x1194)
    
    return 0
}
