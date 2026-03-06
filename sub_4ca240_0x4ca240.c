// 函数名称: sub_4ca240
// 虚拟地址: 0x4ca240
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_4ca240(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = data_6c9da0
    int32_t eax = data_6c9da0
    char const* const var_30
    int32_t var_2c
    char const* const var_28_1
    char* ecx
    
    if (eax u< data_6c9d98)
        eax = data_6c9d9c
        int32_t esi_1 = data_6c9d94
        
        if (eax u<= esi_1)
            int32_t ecx_1 = data_6c9d90
            int32_t eax_1
            
            if (eax != esi_1)
                esi_1 = eax
                eax_1 = *(eax * 0x438 + ecx_1 + 0x434)
            else
                eax_1 = esi_1 + 1
                data_6c9d94 = eax_1
            
            data_6c9d9c = eax_1
            uint32_t (* edi_2)[0x4] = esi_1 * 0x438 + ecx_1
            uint32_t (* var_10_1)[0x4] = edi_2
            _memset(edi_2, 0, 0x434)
            (*edi_2)[0x10d] = data_6c9da4 << 0x10 | esi_1
            eax = data_6c9da4 + 1
            
            if (eax == 0x10000)
                eax = 1
            
            data_6c9da0 += 1
            data_6c9da4 = eax
            (*edi_2)[1] = arg1
            
            if (arg1[1] == 0x1e)
                int32_t* ebx_1 = sub_4981f0(arg1)
                int32_t* var_14_1 = ebx_1
                eax = ebx_1[2]
                
                if (eax s< 0x100)
                    uint32_t (* i)[0x4] = nullptr
                    uint32_t (* i_1)[0x4] = nullptr
                    
                    if (eax s> 0)
                        int32_t eax_8 = 0
                        int32_t var_c_1 = 0
                        
                        do
                            void* ebx_3 = *ebx_1 + eax_8
                            int32_t eax_9 = *(ebx_3 + 4)
                            
                            if (eax_9 == 6)
                                uint32_t (* eax_19)[0x4] = sub_4ca090(eax_9 - 6, i, edi_2, *(ebx_3 + 8))
                                uint32_t ecx_10
                                
                                if ((*eax_19)[2] s<= *eax_19)
                                    ecx_10.b = *(ebx_3 + 0x44)
                                else
                                    ecx_10.b = (*eax_19)[3].b
                                
                                if (ecx_10.b == 0)
                                    eax_19[1][0] = 0x3f800000
                                else
                                    eax_19[1][0] = 0
                            else if (eax_9 == 8)
                                uint32_t (* eax_16)[0x4] = sub_4ca090(eax_9 - 8, i, edi_2, *(ebx_3 + 8))
                                int32_t* eax_17 = sub_4f9600(*(ebx_3 + 0x48))
                                sub_4fa5f0(eax_17, *(ebx_3 + 0x50), eax_17, *(ebx_3 + 0x5c), 
                                    *(ebx_3 + 0x58))
                                i = i_1
                                (*eax_16)[0x27] = eax_17[0x24]
                                edi_2 = var_10_1
                            else if (eax_9 == 9)
                                uint32_t (* eax_13)[0x4] = sub_4ca090(eax_9 - 9, i, edi_2, *(ebx_3 + 8))
                                int32_t* ecx_4 = *(ebx_3 + 0x60)
                                
                                if (ecx_4 != 0)
                                    int32_t* eax_14 = sub_4fd1f0(ecx_4, &data_5d27f8)
                                    eax_14[8] = 1
                                    eax_14[0x1d].w = 0
                                    eax_13[0xa][0] = eax_14[0x1e]
                            
                            ebx_1 = var_14_1
                            i += 1
                            eax_8 = var_c_1 + 0x178
                            i_1 = i
                            var_c_1 = eax_8
                        while (i s< ebx_1[2])
                    
                    return (*edi_2)[0x10d]
                
                var_28_1 = "UIStateLoad"
                var_2c = 0x579
                ecx = "layout.numElements < MAX_UI_ELEMENTS"
            else
                var_28_1 = "UIDefGet"
                var_2c = 0x126
                ecx = "ptr->assetType == ASSET_TYPE_UI"
            
            var_30 = "d:\ax\trunk\ax2017\engine\uidef.cpp"
        else
            var_28_1 = "DataArray<struct UIState>::DataArrayAlloc"
            var_2c = 0xf5
            var_30 = "d:\ax\trunk\ax2017\engine\dataarray.h"
            ecx = "mFreeListHead <= mMaxUsedCount"
    else
        var_28_1 = "DataArray<struct UIState>::DataArrayAlloc"
        var_2c = 0xf4
        var_30 = "d:\ax\trunk\ax2017\engine\dataarray.h"
        ecx = "mUsedCount < mMaxSize"
    
    sub_489550(eax, &data_5b2591, ecx, var_30, var_2c, var_28_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
