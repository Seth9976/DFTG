// 函数名称: sub_4e9680
// 虚拟地址: 0x4e9680
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4e9680(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_14 = ebx
    int32_t edi = *arg1
    char* esi_1 = arg1[2] + edi
    int32_t edi_2 = arg1[1] + *arg1
    
    if (esi_1 u< edi_2)
        while (true)
            ebx.b = *esi_1
            int32_t var_24
            char const* const var_20
            uint32_t eax
            
            if (ebx.b u< 0x80)
            label_4e96c2:
                char* var_8 = esi_1
                
                if (sub_4eae80(&var_8) != 0x20)
                    if (esi_1 u>= edi_2)
                        break
                    
                    while (true)
                        if (ebx.b u>= 0x80)
                            eax.b = ebx.b
                            eax.b &= 0xe0
                            
                            if (eax.b != 0xc0)
                                eax.b = ebx.b
                                eax.b &= 0xf0
                                
                                if (eax.b != 0xe0)
                                    eax.b = ebx.b
                                    eax.b &= 0xf8
                                    
                                    if (eax.b != 0xf0)
                                        goto label_4e970e
                        
                        var_8 = esi_1
                        eax = sub_4eae80(&var_8)
                        
                        if (eax == 0xd)
                            return esi_1 - edi
                        
                        if (eax == 0x20)
                            return esi_1 - edi
                        
                        if (eax == 0x7b)
                            return esi_1 - edi
                        
                        var_8 = esi_1
                        
                        if (ebx.b u>= 0x80)
                            eax.b = ebx.b
                            eax.b &= 0xe0
                            
                            if (eax.b != 0xc0)
                                eax.b = ebx.b
                                eax.b &= 0xf0
                                
                                if (eax.b != 0xe0)
                                    ebx.b &= 0xf8
                                    
                                    if (ebx.b != 0xf0)
                                        break
                        
                        sub_4eae80(&var_8)
                        esi_1 = var_8
                        
                        if (esi_1 u>= edi_2)
                            return esi_1 - edi
                        
                        ebx.b = *esi_1
                else
                    var_8 = esi_1
                    
                    if (ebx.b u< 0x80)
                    label_4e96f6:
                        sub_4eae80(&var_8)
                        esi_1 = var_8
                        
                        if (esi_1 u>= edi_2)
                            break
                        
                        continue
                    else
                        eax.b = ebx.b
                        eax.b &= 0xe0
                        
                        if (eax.b == 0xc0)
                            goto label_4e96f6
                        
                        eax.b = ebx.b
                        eax.b &= 0xf0
                        
                        if (eax.b == 0xe0)
                            goto label_4e96f6
                        
                        ebx.b &= 0xf8
                        
                        if (ebx.b == 0xf0)
                            goto label_4e96f6
                
                var_20 = "Xutf8_next"
                var_24 = 0x219
            else
                eax.b = ebx.b
                eax.b &= 0xe0
                
                if (eax.b == 0xc0)
                    goto label_4e96c2
                
                eax.b = ebx.b
                eax.b &= 0xf0
                
                if (eax.b == 0xe0)
                    goto label_4e96c2
                
                eax.b = ebx.b
                eax.b &= 0xf8
                
                if (eax.b == 0xf0)
                    goto label_4e96c2
                
            label_4e970e:
                var_20 = "Xutf8_peek_next"
                var_24 = 0x213
            
            sub_489550(eax, &data_5b2591, "!Xutf8_is_invalid_lead_char(str)", 
                "d:\ax\trunk\ax2017\engine\xutf8.cpp", var_24, var_20)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    
    return esi_1 - edi
}
