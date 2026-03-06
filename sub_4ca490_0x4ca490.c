// 函数名称: sub_4ca490
// 虚拟地址: 0x4ca490
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_4ca490(int32_t arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    uint32_t edx_1 = zx.d(arg1.w)
    uint32_t eax
    int32_t esi_1
    
    if (edx_1 u< data_6c9d94)
        esi_1 = data_6c9d90
        eax = edx_1 * 0x438
    
    char const* const var_34
    int32_t var_30
    char const* const var_2c_1
    char* ecx_1
    
    if (edx_1 u>= data_6c9d94 || *(eax + esi_1 + 0x434) != arg1)
        var_2c_1 = "DataArray<struct UIState>::DataArrayGet"
        var_30 = 0x6d
        var_34 = "d:\ax\trunk\ax2017\engine\dataarray.h"
        ecx_1 = "DataArrayTryToGet(id) != NULL"
    label_4ca619:
        sub_489550(eax, &data_5b2591, ecx_1, var_34, var_30, var_2c_1)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* edi_2 = edx_1 * 0x438 + esi_1
    void* var_10_1 = edi_2
    int32_t* ecx = *(edi_2 + 4)
    
    if (ecx[1] != 0x1e)
        var_2c_1 = "UIDefGet"
        var_30 = 0x126
        var_34 = "d:\ax\trunk\ax2017\engine\uidef.cpp"
        ecx_1 = "ptr->assetType == ASSET_TYPE_UI"
        goto label_4ca619
    
    int32_t* edx_2 = sub_4981f0(ecx)
    uint32_t (* i)[0x4] = nullptr
    int32_t* var_c_1 = edx_2
    uint32_t (* i_1)[0x4] = nullptr
    
    if (edx_2[2] s> 0)
        int32_t ecx_2 = 0
        int32_t var_14_1 = 0
        
        do
            void* esi_3 = *edx_2 + ecx_2
            uint32_t (* eax_2)[0x4] = sub_4ca090(i, i, edi_2, *(esi_3 + 8))
            int32_t ecx_4 = *(esi_3 + 4)
            
            if (ecx_4 == 2)
                uint32_t* esi_4 = &(*eax_2)[0x29]
                int32_t j_1 = 0x1e
                int32_t j
                
                do
                    *esi_4
                    sub_4ca490()
                    esi_4 = &esi_4[1]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                edi_2 = var_10_1
            else if (ecx_4 == 8)
                void* eax_4 = sub_4f9740((*eax_2)[0x27])
                
                if (eax_4 != 0)
                    sub_4f97b0(eax_4)
            else if (ecx_4 == 9)
                void* eax_3 = sub_4fd250(eax_2[0xa][0])
                
                if (eax_3 != 0)
                    sub_4fd2f0(eax_3)
            
            sub_4c99f0(eax_2)
            uint32_t ecx_14 = data_6c9d80
            edx_2 = var_c_1
            data_6c9d80 = zx.d((*eax_2)[0x6f].w)
            (*eax_2)[0x6f] = ecx_14
            i = i_1 + 1
            data_6c9d84 -= 1
            ecx_2 = var_14_1 + 0x178
            i_1 = i
            var_14_1 = ecx_2
        while (i s< edx_2[2])
    
    int32_t ecx_16 = data_6c9d9c
    data_6c9d9c = zx.d(*(edi_2 + 0x434))
    *(edi_2 + 0x434) = ecx_16
    data_6c9da0 -= 1
}
