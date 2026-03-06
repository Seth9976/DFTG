// 函数名称: sub_4bbe80
// 虚拟地址: 0x4bbe80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_4bbe80(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c = arg1
    int32_t var_c = arg1
    int32_t var_20
    uint32_t result
    char const* const ecx
    
    if (arg1 != 0)
        uint32_t edx_1 = zx.d(arg1.w)
        
        if (edx_1 u< data_63e5ac)
            int32_t esi_1 = data_63e5a8
            result = edx_1 * 0x1418 + esi_1
            
            if (*(result + 0x1410) == arg1)
                void* ebx_1 = edx_1 * 0x1418 + esi_1
                
                if (*(ebx_1 + 0xfec) != 3 || *(ebx_1 + 0xf8c) != 1 || *(ebx_1 + 0xf8d) != 1)
                    int32_t esi_2 = 0
                    
                    if (*(ebx_1 + 0x1190) s<= 0)
                    label_4bbf21:
                        result.b = 0
                        return result
                    
                    void* edi_1 = ebx_1 + 0x1194
                    
                    while (true)
                        *edi_1
                        
                        if (sub_4bbe80().b == 1)
                            break
                        
                        esi_2 += 1
                        edi_1 += 4
                        
                        if (esi_2 s>= *(ebx_1 + 0x1190))
                            goto label_4bbf21
                else
                    sub_4aee70(result, nullptr, arg1, 0)
                
                result.b = 1
                return result
        
        char const* const var_1c_1 = "DataArray<struct UI2>::DataArrayGet"
        var_20 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_1c = "DataArray<struct UI2>::DataArrayGet"
        var_20 = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_489550(result, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\dataarray.h", var_20, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
