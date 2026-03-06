// 函数名称: sub_4d9540
// 虚拟地址: 0x4d9540
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4d9540(uint32_t arg1, char* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_20_1
    int32_t var_20_1
    char const* const ecx
    
    if (arg3 != 0)
        uint32_t ecx_1 = zx.d(arg3.w)
        
        if (ecx_1 u< data_6c9ba0)
            int32_t edx = data_6c9b9c
            arg1 = ecx_1 * 3
            
            if (*(edx + (arg1 << 3) + 0x14) == arg3)
                uint32_t eax = ecx_1 * 3
                int32_t* ebx = *(edx + (eax << 3) + 8)
                int32_t* result = sub_52f700(**ebx, arg2)
                
                if (result != 0)
                    int32_t edx_2
                    edx_2.b = arg4 == 0
                    result = sub_531a10(result, edx_2, ebx, result, edx_2)
                    *(edx + (eax << 3) + 0xc) = arg4
                
                return result
        
        char const* const var_1c_3 = "DataArray<struct Spine>::DataArrayGet"
        var_20_1 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_1c_1 = "DataArray<struct Spine>::DataArrayGet"
        var_20_1 = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_489550(arg1, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\dataarray.h", var_20_1, 
        "DataArray<struct Spine>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
