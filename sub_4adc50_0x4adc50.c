// 函数名称: sub_4adc50
// 虚拟地址: 0x4adc50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_4adc50(int32_t arg1)
{
    // 第一条实际指令: int32_t eax = sub_4adab0(arg1)
    int32_t eax = sub_4adab0(arg1)
    int32_t var_14
    char const* const ecx
    
    if (arg1 != 0)
        int32_t ecx_1 = data_63e5ac
        uint32_t edx_1 = zx.d(arg1.w)
        
        if (edx_1 u< ecx_1)
            int32_t edi_1 = data_63e5a8
            eax = edx_1 * 0x1418
            
            if (*(eax + edi_1 + 0x1410) == arg1)
                void* ebx_2 = edx_1 * 0x1418 + edi_1
                eax = *(ebx_2 + 0xff8)
                data_642654 = eax
                data_643654 = 1
                
                if (edx_1 u< ecx_1)
                    eax = edx_1 * 0x1418
                    
                    if (*(eax + edi_1 + 0x1410) == arg1)
                        data_643658 = sub_4ad9d0(ebx_2)
                        return sub_579300(&(&data_64264c)[data_6c4468 * 0x407], &data_642650, 0x1018)
        
        char const* const var_10_1 = "DataArray<struct UI2>::DataArrayGet"
        ecx = "DataArrayTryToGet(id) != NULL"
        var_14 = 0x6d
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
