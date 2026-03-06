// 函数名称: sub_49a8e0
// 虚拟地址: 0x49a8e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (* __fastcallsub_49a8e0(uint32_t arg1, int32_t arg2))[0x4]
{
    // 第一条实际指令: int32_t esi = arg1 + (arg2 << 2)
    int32_t esi = arg1 + (arg2 << 2)
    uint32_t edx = *(esi + 0x13ec)
    int32_t var_c
    uint32_t (* result)[0x4]
    char const* const ecx
    
    if (edx != 0)
    label_49a911:
        result = zx.d(edx.w)
        
        if (result u< data_63e5ac)
            result = data_63e5a8 + result * 0x1418
            
            if (result[0x141][0] == edx)
                return result
        
        char const* const var_8_1 = "DataArray<struct UI2>::DataArrayGet"
        var_c = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        result = sub_49a520(arg1)
        edx = result[0x141][0]
        *(esi + 0x13ec) = edx
        
        if (edx != 0)
            goto label_49a911
        
        char const* const var_8 = "DataArray<struct UI2>::DataArrayGet"
        var_c = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_489550(result, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\dataarray.h", var_c, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
