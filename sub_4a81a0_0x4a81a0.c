// 函数名称: sub_4a81a0
// 虚拟地址: 0x4a81a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_4a81a0(int32_t arg1)
{
    // 第一条实际指令: if (data_643654 == 1)
    if (data_643654 == 1)
        if ((0x8000 & GetKeyState(0x11)) == 0 || *(data_aca1f0 + 0x18) == 0)
        label_4a81f5:
            
            if ((0x8000 & GetKeyState(0x12)) == 0 || *(data_aca1f0 + 0x18) == 0)
            label_4a8225:
                int32_t var_c
                sub_489e40(&var_c)
                int32_t edi_1 = data_642654
                int32_t edi_2 = edi_1 - 1
                int32_t var_14 = var_c
                uint32_t result_2
                uint32_t result = result_2
                uint32_t result_1 = result
                
                if (edi_1 - 1 s>= 0)
                    int32_t temp1_1
                    
                    do
                        result = sub_4a80d0(result, data_642624, data_642620, edi_2)
                        uint32_t result_3 = result
                        
                        if (*(result_3 + 6) == 0 && *(result_3 + 7) == 0)
                            void* ecx_2 = *(result_3 + 0x112c)
                            
                            if (ecx_2 != 0)
                                result = sub_4a8170(ecx_2)
                            
                            if (ecx_2 == 0 || result.b != 0)
                                result = sub_41f010(result_3 + 0x10a0, &var_14)
                                
                                if (result.b != 0)
                                    int32_t ecx_4 = *(result_3 + 0x1410)
                                    
                                    if (ecx_4 == 0)
                                        break
                                    
                                    uint32_t edx_3 = zx.d(ecx_4.w)
                                    
                                    if (edx_3 u< data_63e5ac)
                                        int32_t esi_1 = data_63e5a8
                                        result = edx_3 * 0x1418
                                        
                                        if (*(result + esi_1 + 0x1410) == ecx_4)
                                            data_642654 = *(edx_3 * 0x1418 + esi_1 + 0xff8)
                                            return sub_579300(&(&data_64264c)[data_6c4468 * 0x407], 
                                                &data_642650, 0x1018)
                                    
                                    sub_489550(result, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                                        "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, 
                                        "DataArray<struct UI2>::DataArrayGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_489700()
                                    noreturn
                        
                        temp1_1 = edi_2
                        edi_2 -= 1
                    while (temp1_1 - 1 s>= 0)
                
                if (arg1 == 0)
                    if (data_64365c.b != arg1.b || data_64365e != arg1.b)
                        return result
                    
                    data_6c4468
                    data_643654 = arg1
                    return sub_579300(&(&data_64264c)[data_6c4468 * 0x407], &data_642650, 0x1018)
            else
                HWND eax_6 = GetFocus()
                
                if (eax_6 != data_1150b8c && eax_6 != 0)
                    goto label_4a8225
        else
            HWND eax_3 = GetFocus()
            
            if (eax_3 != data_1150b8c && eax_3 != 0)
                goto label_4a81f5
    
    return sub_4adc50(arg1)
}
