// 函数名称: sub_4cd640
// 虚拟地址: 0x4cd640
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4cd640(int32_t arg1, uint32_t arg2 @ xmm2)
{
    // 第一条实际指令: uint32_t (* eax)[0x4]
    uint32_t (* eax)[0x4]
    eax.b = data_1511adc
    char var_10 = eax.b
    char const* const var_38
    int32_t var_34
    char const* const var_30_1
    char* ecx
    
    if (arg1 != 0)
        uint32_t ebx_1 = zx.d(arg1.w)
        
        if (ebx_1 u>= data_6c9d94)
        label_4cd74e:
            var_30_1 = "DataArray<struct UIState>::DataArrayGet"
            ecx = "DataArrayTryToGet(id) != NULL"
            var_34 = 0x6d
            var_38 = "d:\ax\trunk\ax2017\engine\dataarray.h"
        else
            int32_t edx_1 = data_6c9d90
            eax = ebx_1 * 0x438
            
            if (*(eax + edx_1 + 0x434) != arg1)
                goto label_4cd74e
            
            eax = ebx_1 * 0x438
            uint32_t (* var_14_1)[0x4] = eax
            int32_t* ecx_1 = *(eax + edx_1 + 4)
            
            if (ecx_1[1] == 0x1e)
                int32_t* result = sub_4981f0(ecx_1)
                uint32_t (* esi_1)[0x4] = nullptr
                int32_t* result_1 = result
                
                if (result[2] s<= 0)
                    return result
                
                int32_t edi_1 = 0
                
                while (true)
                    int32_t eax_1 = *result
                    
                    if (*(eax_1 + edi_1 + 4) == 6)
                        eax = sub_4cd480(eax_1, esi_1, arg1, var_10)
                        
                        if (ebx_1 u>= data_6c9d94)
                            break
                        
                        int32_t edx_3 = data_6c9d90
                        eax = ebx_1 * 0x438
                        
                        if (*(eax + edx_3 + 0x434) != arg1)
                            break
                        
                        uint32_t (* eax_2)[0x4] = sub_4ca090(eax, esi_1, var_14_1 + edx_3, &data_5b2591)
                        
                        if (not(arg2 f< 0))
                            (*eax_2)[5] = arg2
                            eax_2[1][0] = arg2
                    
                    result = result_1
                    esi_1 += 1
                    edi_1 += 0x178
                    
                    if (esi_1 s>= result[2])
                        return result
                
                goto label_4cd74e
            
            var_30_1 = "UIDefGet"
            var_34 = 0x126
            var_38 = "d:\ax\trunk\ax2017\engine\uidef.cpp"
            ecx = "ptr->assetType == ASSET_TYPE_UI"
    else
        var_30_1 = "DataArray<struct UIState>::DataArrayGet"
        var_34 = 0x6c
        ecx = "id != DATAID_NULL"
        var_38 = "d:\ax\trunk\ax2017\engine\dataarray.h"
    
    sub_489550(eax, &data_5b2591, ecx, var_38, var_34, var_30_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
