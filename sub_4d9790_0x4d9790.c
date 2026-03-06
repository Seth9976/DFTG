// 函数名称: sub_4d9790
// 虚拟地址: 0x4d9790
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_4d9790(int32_t arg1)
{
    // 第一条实际指令: int32_t var_2c_1
    int32_t var_2c_1
    uint32_t eax
    char const* const ecx
    
    if (arg1 != 0)
        uint32_t ecx_1 = zx.d(arg1.w)
        
        if (ecx_1 u< data_6c9ba0)
            int32_t esi_1 = data_6c9b9c
            eax = ecx_1 * 3
            
            if (*(esi_1 + (eax << 3) + 0x14) == arg1)
                uint32_t eax_1 = ecx_1 * 3
                int32_t i = 0
                void* ebx = *(esi_1 + (eax_1 << 3) + 8)
                void* edi = esi_1 + (eax_1 << 3)
                int32_t i_1 = 0
                
                if (*(ebx + 4) s> 0)
                    do
                        void* j_2 = *(*(ebx + 8) + (i << 2))
                        void* j_1 = j_2
                        
                        if (j_2 != 0)
                            void* j
                            
                            do
                                void* k_1 = *(j_2 + 8)
                                j = *(j_2 + 4)
                                
                                if (k_1 != 0)
                                    void* k
                                    
                                    do
                                        k = *(k_1 + 8)
                                        int32_t eax_3 = *(j_2 + 0x10)
                                        
                                        if (eax_3 != 0)
                                            eax_3(ebx, 4, k_1, 0)
                                        
                                        int32_t eax_4 = *(ebx + 0xc)
                                        
                                        if (eax_4 != 0)
                                            eax_4(ebx, 4, k_1, 0)
                                        
                                        void* edi_1 = *(k_1 + 0x6c)
                                        _free(*(edi_1 + 8))
                                        _free(edi_1)
                                        void* edi_2 = *(k_1 + 0x70)
                                        _free(*(edi_2 + 8))
                                        _free(edi_2)
                                        _free(*(k_1 + 0x74))
                                        _free(k_1)
                                        j_2 = j_1
                                        k_1 = k
                                    while (k != 0)
                                
                                int32_t eax_6 = *(j_2 + 0x10)
                                
                                if (eax_6 != 0)
                                    eax_6(ebx, 4, j_2, 0)
                                
                                int32_t eax_7 = *(ebx + 0xc)
                                
                                if (eax_7 != 0)
                                    eax_7(ebx, 4, j_2, 0)
                                
                                void* esi_2 = *(j_2 + 0x6c)
                                _free(*(esi_2 + 8))
                                _free(esi_2)
                                void* esi_3 = *(j_2 + 0x70)
                                _free(*(esi_3 + 8))
                                _free(esi_3)
                                _free(*(j_2 + 0x74))
                                _free(j_2)
                                j_1 = j
                                j_2 = j
                            while (j != 0)
                            i = i_1
                        
                        i += 1
                        i_1 = i
                    while (i s< *(ebx + 4))
                
                _free(*(ebx + 8))
                void* esi_4 = *(ebx + 0x24)
                _free(*(esi_4 + 4))
                _free(esi_4)
                _free(*(ebx + 0x20))
                _free(*(ebx + 0x28))
                _free(ebx)
                sub_5328a0(*(edi + 4))
                uint32_t result = zx.d(*(edi + 0x14))
                int32_t ecx_3 = data_6c9ba8
                data_6c9ba8 = result
                *(edi + 0x14) = ecx_3
                data_6c9bac -= 1
                return result
        
        char const* const var_28_20 = "DataArray<struct Spine>::DataArrayGet"
        var_2c_1 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_28_1 = "DataArray<struct Spine>::DataArrayGet"
        var_2c_1 = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\dataarray.h", var_2c_1, 
        "DataArray<struct Spine>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
