// 函数名称: sub_4d99b0
// 虚拟地址: 0x4d99b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_4d99b0(uint32_t arg1, int32_t* arg2, int32_t arg3, float arg4 @ xmm3, int32_t* arg5, float arg6)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t var_8 = arg3
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    char const* const ecx
    
    if (arg3 != 0)
        uint32_t ecx_1 = zx.d(arg3.w)
        
        if (ecx_1 u< data_6c9ba0)
            int32_t ebx = data_6c9b9c
            arg1 = ecx_1 * 3
            
            if (*(ebx + (arg1 << 3) + 0x14) == arg3)
                uint32_t edi = ecx_1 * 3
                
                if (*(ebx + (edi << 3) + 0x11) != 0)
                    return sub_4d9790(arg3)
                
                float xmm3 = arg4 * arg6
                *(*(ebx + (edi << 3) + 4) + 0x54) = *arg2
                *(*(ebx + (edi << 3) + 4) + 0x58) = arg2[1]
                *(*(ebx + (edi << 3) + 4) + 0x4c) = *arg5
                *(*(ebx + (edi << 3) + 4) + 0x50) = arg5[1]
                void* eax_5 = *(ebx + (edi << 3) + 4)
                *(eax_5 + 0x48) = *(eax_5 + 0x48) + xmm3
                sub_5308a0(*(ebx + (edi << 3) + 8), xmm3)
                uint32_t eax = sub_530bf0(*(ebx + (edi << 3) + 8), *(ebx + (edi << 3) + 4))
                void* ebx_1 = *(ebx + (edi << 3) + 4)
                int32_t* i = nullptr
                int32_t esi_1 = *(ebx_1 + 0x70)
                
                if (*(ebx_1 + 0x68) s> 0)
                    do
                        void* ecx_10 = *(esi_1 + (i << 2))
                        i += 1
                        *(ecx_10 + 0x30) = *(ecx_10 + 0x14)
                        *(ecx_10 + 0x34) = *(ecx_10 + 0x18)
                        *(ecx_10 + 0x38) = *(ecx_10 + 0x1c)
                        *(ecx_10 + 0x3c) = *(ecx_10 + 0x20)
                        *(ecx_10 + 0x40) = *(ecx_10 + 0x24)
                        *(ecx_10 + 0x44) = *(ecx_10 + 0x28)
                        eax = *(ecx_10 + 0x2c)
                        *(ecx_10 + 0x48) = eax
                        *(ecx_10 + 0x4c) = 1
                    while (i s< *(ebx_1 + 0x68))
                
                int32_t i_1 = 0
                
                if (*(ebx_1 + 0x5c) s<= 0)
                    return eax
                
                void* eax_12
                
                do
                    int32_t ecx_11 = *(ebx_1 + 0x64)
                    eax_12 = *(ecx_11 + (i_1 << 3))
                    float var_20
                    float var_1c
                    float var_18
                    
                    switch (eax_12)
                        case nullptr
                            int32_t* ecx_12 = *(ecx_11 + (i_1 << 3) + 4)
                            eax_12, i = sub_52f800(eax_12, i, ecx_12, ecx_12[5], ecx_12[6], ecx_12[7], 
                                (*(ecx_12 + 0x20)).d, var_20, var_1c, var_18)
                        case 1
                            i = *(ecx_11 + (i_1 << 3) + 4)
                            int32_t eax_13 = i[1]
                            
                            if (eax_13 == 1)
                                void* eax_16 = *i
                                void* esi_2 = i[3]
                                int32_t var_18_2 = ecx_11
                                var_18 = i[7]
                                var_1c = *(eax_16 + 0x24)
                                var_20 = i[6]
                                eax_12, i =
                                    sub_575530(eax_16, i[5], *i[2], *(esi_2 + 0x58), *(esi_2 + 0x64))
                                int16_t top = top - 1
                                unimplemented  {call 0x575530}
                            else
                                eax_12 = eax_13 - 2
                                
                                if (eax_13 == 2)
                                    void* eax_15 = i[3]
                                    int32_t** ecx_13 = i[2]
                                    var_18 = i[7]
                                    var_1c = i[8]
                                    var_20 = i[6]
                                    eax_12, i = sub_5757b0(eax_15, ecx_13[1], *ecx_13, 
                                        *(eax_15 + 0x58), *(eax_15 + 0x64), i[4], var_20, var_1c, 
                                        var_18)
                        case 2
                            eax_12, i = sub_572940(*(ecx_11 + (i_1 << 3) + 4))
                        case 3
                            eax_12, i = sub_575320(*(ecx_11 + (i_1 << 3) + 4))
                    
                    i_1 += 1
                while (i_1 s< *(ebx_1 + 0x5c))
                
                return eax_12
        
        char const* const var_18_3 = "DataArray<struct Spine>::DataArrayGet"
        int32_t var_1c_2 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_18_1 = "DataArray<struct Spine>::DataArrayGet"
        int32_t var_1c_1 = 0x6c
        ecx = "id != DATAID_NULL"
    
    char const* const var_20_1 = "d:\ax\trunk\ax2017\engine\dataarray.h"
    sub_489550(arg1, &data_5b2591, ecx)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
