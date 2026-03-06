// 函数名称: sub_4d95f0
// 虚拟地址: 0x4d95f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4d95f0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_2c
    int32_t var_2c
    uint32_t eax
    char const* const ecx
    
    if (arg1 != 0)
        uint32_t ecx_1 = zx.d(arg1.w)
        
        if (ecx_1 u< data_6c9ba0)
            int32_t edi_1 = data_6c9b9c
            eax = ecx_1 * 3
            
            if (*(edi_1 + (eax << 3) + 0x14) == arg1)
                void* esi_1 = *(edi_1 + ecx_1 * 0x18 + 8)
                void* eax_1 = *(esi_1 + 0x24)
                int32_t ecx_2 = *(eax_1 + 0x10)
                int32_t ecx_3 = 0
                *(eax_1 + 0x10) = 1
                int32_t edx_1 = *(esi_1 + 4)
                int32_t var_14 = edx_1
                int32_t var_c = 0
                
                if (edx_1 s> 0)
                    do
                        if (ecx_3 s< *(esi_1 + 4))
                            void* i_3 = *(*(esi_1 + 8) + (ecx_3 << 2))
                            
                            if (i_3 != 0)
                                int32_t* edi_2 = *(esi_1 + 0x24)
                                sub_5304d0(edi_2)
                                *(edi_2[1] + (edi_2[2] << 2)) = 2
                                edi_2[2] += 1
                                sub_5304d0(edi_2)
                                *(edi_2[1] + (edi_2[2] << 2)) = i_3
                                void* eax_5 = *edi_2
                                edi_2[2] += 1
                                *(eax_5 + 0x34) = 1
                                sub_531d20(esi_1, i_3)
                                void* i_1 = i_3
                                
                                for (void* i = *(i_3 + 8); i != 0; i = *(i + 8))
                                    int32_t* edi_3 = *(esi_1 + 0x24)
                                    sub_5304d0(edi_3)
                                    *(edi_3[1] + (edi_3[2] << 2)) = 2
                                    edi_3[2] += 1
                                    sub_5304d0(edi_3)
                                    *(edi_3[1] + (edi_3[2] << 2)) = i
                                    void* eax_8 = *edi_3
                                    edi_3[2] += 1
                                    *(eax_8 + 0x34) = 1
                                    void* i_2 = i_1
                                    i_1 = i
                                    *(i_2 + 8) = 0
                                    *(i_2 + 0xc) = 0
                                
                                *(*(esi_1 + 8) + (*(i_3 + 0x14) << 2)) = 0
                                sub_530590(*(esi_1 + 0x24))
                                ecx_3 = var_c
                                edx_1 = var_14
                        
                        ecx_3 += 1
                        var_c = ecx_3
                    while (ecx_3 s< edx_1)
                
                void* eax_10 = *(esi_1 + 0x24)
                *(esi_1 + 4) = 0
                *(eax_10 + 0x10) = ecx_2
                return sub_530590(*(esi_1 + 0x24))
        
        char const* const var_28_1 = "DataArray<struct Spine>::DataArrayGet"
        var_2c = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_28 = "DataArray<struct Spine>::DataArrayGet"
        var_2c = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\dataarray.h", var_2c, 
        "DataArray<struct Spine>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
