// 函数名称: sub_4ae780
// 虚拟地址: 0x4ae780
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4ae780(int32_t arg1)
{
    // 第一条实际指令: int32_t eax = data_63e5ac
    int32_t eax = data_63e5ac
    int32_t edx = 0
    int32_t ebx = data_63e5a8
    int32_t edi = data_643654
    
    if (edi s> 0)
        do
            if (arg1 == 0)
                goto label_4ae7e6
            
            uint32_t ecx = zx.d(arg1.w)
            
            if (ecx u>= eax)
                goto label_4ae88e
            
            eax = ecx * 0x1418
            
            if (*(eax + ebx + 0x1410) != arg1)
                goto label_4ae88e
            
            if ((&data_642654)[edx] == *(ecx * 0x1418 + ebx + 0xff8))
                data_643654 = edi - 1
                int32_t result = (&data_642654)[edi - 1]
                (&data_642654)[edx] = result
                return result
            
            eax = data_63e5ac
            edx += 1
        while (edx s< edi)
    
    int32_t var_14
    char const* const ecx_2
    
    if (arg1 != 0)
        uint32_t edx_1 = zx.d(arg1.w)
        
        if (edx_1 u< eax)
            eax = edx_1 * 0x1418
            
            if (*(eax + ebx + 0x1410) == arg1)
                void* ecx_4 = edx_1 * 0x1418 + ebx
                eax = *(ecx_4 + 0xff8)
                (&data_642654)[edi] = eax
                data_643654 += 1
                
                if (edx_1 u< data_63e5ac)
                    eax = edx_1 * 0x1418
                    
                    if (*(eax + ebx + 0x1410) == arg1)
                        data_643658 = sub_4ad9d0(ecx_4)
                        sub_579300(&(&data_64264c)[data_6c4468 * 0x407], &data_642650, 0x1018)
                        return sub_4adab0(arg1) __tailcall
        
    label_4ae88e:
        char const* const var_10_1 = "DataArray<struct UI2>::DataArrayGet"
        ecx_2 = "DataArrayTryToGet(id) != NULL"
        var_14 = 0x6d
    else
    label_4ae7e6:
        char const* const var_10 = "DataArray<struct UI2>::DataArrayGet"
        var_14 = 0x6c
        ecx_2 = "id != DATAID_NULL"
    
    sub_489550(eax, &data_5b2591, ecx_2, "d:\ax\trunk\ax2017\engine\dataarray.h", var_14, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
