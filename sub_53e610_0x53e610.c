// 函数名称: sub_53e610
// 虚拟地址: 0x53e610
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __thiscallsub_53e610(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* result = arg1
    int32_t* result = arg1
    int32_t var_c
    char const* const ecx
    
    if (arg2 != 0)
        uint32_t ecx_1 = zx.d(arg2.w)
        
        if (ecx_1 u< result[1])
            result = *result + ecx_1 * 0x24c
            
            if (result[0x92] == arg2)
                return result
        
        char const* const var_8_1 = "DataArray<struct Dx11BufferData>::DataArrayGet"
        var_c = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_8 = "DataArray<struct Dx11BufferData>::DataArrayGet"
        var_c = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_489550(result, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\dataarray.h", var_c, 
        "DataArray<struct Dx11BufferData>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
