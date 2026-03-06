// 函数名称: sub_4d9320
// 虚拟地址: 0x4d9320
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4d9320(uint32_t arg1, int32_t arg2)
{
    // 第一条实际指令: uint32_t eax = arg1
    uint32_t eax = arg1
    int32_t edx = *(eax + 0x18)
    int32_t var_14
    char* ecx
    
    if (edx != 0)
        uint32_t ecx_1 = zx.d(edx.w)
        
        if (ecx_1 u< data_6c9ba0)
            int32_t esi_1 = data_6c9b9c
            eax = ecx_1 * 3
            
            if (*(esi_1 + (eax << 3) + 0x14) == edx)
                void* ecx_2 = esi_1 + ecx_1 * 0x18
                int32_t result = arg2 - 2
                
                if (result u<= 1)
                    result = *(ecx_2 + 0xc)
                    
                    if (result == 1)
                        *(ecx_2 + 0x10) = 0x101
                    else if (result == 2)
                        *(ecx_2 + 0x10) = 1
                
                return result
        
        char const* const var_10_1 = "DataArray<struct Spine>::DataArrayGet"
        var_14 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_10 = "DataArray<struct Spine>::DataArrayGet"
        var_14 = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\dataarray.h", var_14, 
        "DataArray<struct Spine>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
