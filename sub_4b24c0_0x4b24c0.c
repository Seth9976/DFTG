// 函数名称: sub_4b24c0
// 虚拟地址: 0x4b24c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4b24c0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    int32_t var_14
    int32_t eax
    char const* const ecx
    
    if (arg1 != 0)
        uint32_t edx = zx.d(arg1.w)
        
        if (edx u< data_63e5ac)
            int32_t esi_1 = data_63e5a8
            eax = edx * 0x1418
            
            if (*(eax + esi_1 + 0x1410) == arg1)
                int32_t result = edx * 0x1418
                *(result + esi_1 + 0x1408) = arg2
                return result
        
        char const* const var_10_1 = "DataArray<struct UI2>::DataArrayGet"
        var_14 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_10 = "DataArray<struct UI2>::DataArrayGet"
        var_14 = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\dataarray.h", var_14, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
