// 函数名称: sub_4b6440
// 虚拟地址: 0x4b6440
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_4b6440(void* arg1)
{
    // 第一条实际指令: void* var_4 = arg1
    void* var_4 = arg1
    int32_t edx = *(arg1 + 0x1190)
    
    if (edx == 0)
        return 0
    
    int32_t edx_1 = *(arg1 + (edx << 2) + 0x1190)
    int32_t var_c
    uint32_t result
    char const* const ecx_1
    
    if (edx_1 != 0)
        result = zx.d(edx_1.w)
        
        if (result u< data_63e5ac)
            result = data_63e5a8 + result * 0x1418
            
            if (*(result + 0x1410) == edx_1)
                return result
        
        char const* const var_8_1 = "DataArray<struct UI2>::DataArrayGet"
        var_c = 0x6d
        ecx_1 = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_8 = "DataArray<struct UI2>::DataArrayGet"
        var_c = 0x6c
        ecx_1 = "id != DATAID_NULL"
    
    sub_489550(result, &data_5b2591, ecx_1, "d:\ax\trunk\ax2017\engine\dataarray.h", var_c, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
