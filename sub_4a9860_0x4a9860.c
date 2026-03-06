// 函数名称: sub_4a9860
// 虚拟地址: 0x4a9860
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4a9860(int32_t arg1, void* arg2, int32_t arg3, int32_t* arg4, int32_t* arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t i_2 = arg6
    int32_t i_2 = arg6
    
    if (i_2 s> 0)
        void* esi_1 = arg2
        int32_t i
        
        do
            int32_t ecx = *(arg5 - arg2 + esi_1)
            esi_1 += 4
            *(esi_1 - 4) = *(sub_4a7d60(ecx) + 0x1410)
            i = i_2
            i_2 -= 1
        while (i != 1)
        i_2 = arg6
    
    int32_t* eax_3 = arg4
    *eax_3 = i_2
    int32_t var_28_1
    char* ecx_1
    
    if (arg3 != 0)
        uint32_t esi_2 = zx.d(arg3.w)
        
        if (esi_2 u< data_63e5ac)
            eax_3 = esi_2 * 0x1418 + data_63e5a8
            int32_t edx = eax_3[0x504]
            
            if (edx == arg3)
                int32_t* result = nullptr
                arg6.b = 0
                void* ecx_3 = esi_2 * 0x1418 + data_63e5a8
                void* var_10_1 = ecx_3
                
                if (i_2 s> 0)
                    do
                        if (*(arg2 + (result << 2)) == edx)
                            arg6.b = 1
                            break
                        
                        result += 1
                    while (result s< i_2)
                
                int32_t i_1 = 0
                
                if (*(ecx_3 + 0x1190) s> 0)
                    do
                        void* eax_4 = sub_49e970(ecx_3, i_1)
                        result = sub_4a97d0(eax_4, arg2, eax_4, arg4, arg6.b)
                        ecx_3 = var_10_1
                        i_1 += 1
                    while (i_1 s< *(ecx_3 + 0x1190))
                
                return result
        
        char const* const var_24_3 = "DataArray<struct UI2>::DataArrayGet"
        var_28_1 = 0x6d
        ecx_1 = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_24_1 = "DataArray<struct UI2>::DataArrayGet"
        var_28_1 = 0x6c
        ecx_1 = "id != DATAID_NULL"
    
    sub_489550(eax_3, &data_5b2591, ecx_1, "d:\ax\trunk\ax2017\engine\dataarray.h", var_28_1, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
