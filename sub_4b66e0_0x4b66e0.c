// 函数名称: sub_4b66e0
// 虚拟地址: 0x4b66e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_4b66e0()
{
    // 第一条实际指令: int32_t edx = data_642624
    int32_t edx = data_642624
    int32_t var_c
    uint32_t eax
    char const* const ecx_1
    
    if (edx != 0)
        eax = zx.d(edx.w)
        
        if (eax u< data_63e5ac)
            void* ecx_3 = eax * 0x1418 + data_63e5a8
            
            if (*(ecx_3 + 0x1410) == edx)
                sub_4b6440(ecx_3)
                int32_t esi
                return sub_4b5ca0(esi, &data_5d27f8)
        
        char const* const var_8_1 = "DataArray<struct UI2>::DataArrayGet"
        var_c = 0x6d
        ecx_1 = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_8 = "DataArray<struct UI2>::DataArrayGet"
        var_c = 0x6c
        ecx_1 = "id != DATAID_NULL"
    
    sub_489550(eax, &data_5b2591, ecx_1, "d:\ax\trunk\ax2017\engine\dataarray.h", var_c, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
