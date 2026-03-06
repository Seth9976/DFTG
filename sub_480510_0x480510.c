// 函数名称: sub_480510
// 虚拟地址: 0x480510
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_480510(void** arg1)
{
    // 第一条实际指令: void** var_c = arg1
    void** var_c = arg1
    void* eax = data_6cfe4c
    
    if (eax == 0)
        sub_489550(eax, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (*(eax + 0x834) != 0 && *(data_114e818 + 0x20) != 0)
        eax = *arg1
        
        if (eax == 0)
            int32_t ecx = arg1[1]
            
            if (ecx == 0x73)
                eax.b = data_632840 == eax.b
                data_632840 = eax.b
                
                if (eax.b == 0)
                    sub_4361a0(3)
                    int32_t eax_1
                    eax_1.b = 1
                    return eax_1
                
                data_62b220 = 0x24
                eax.b = 1
                return eax
            
            if (ecx == 0x65)
                sub_47f910(0)
                int32_t* eax_2
                eax_2.b = 1
                return eax_2
            
            if (eax == 0)
                if (arg1[1] == 0x64)
                    sub_480b90()
                
                if ((arg1[1] != 0x64 || *arg1 == 0) && arg1[1] == 0x65)
                    int32_t eax_3 = sub_425f70(3)
                    int32_t ecx_2
                    eax, ecx_2 = sub_452b90(eax_3)
                    void** esi_1 = data_15118a0
                    int32_t* ebx_1 = eax
                    
                    if (esi_1 != 0)
                        int32_t i = 0
                        
                        if (esi_1 s> 0)
                            do
                                int32_t var_1c_4 = ecx_2
                                eax, ecx_2 = sub_455d90(eax, *((i << 2) + &data_15155f8), ebx_1, 3)
                                i += 1
                            while (i s< data_15118a0)
                        
                        esi_1 = nullptr
                        data_15118a0 = 0
                    else
                        var_c = esi_1
                        int32_t ecx_3
                        eax, ecx_3 = sub_481430(&data_62d6c4, &var_c)
                        
                        if (eax.b != 0)
                            do
                                eax = var_c
                                
                                if (*eax == 0 && *(eax + 0x3c) == eax_3 && *(eax + 0x34) == 3
                                        && *(eax + 0x1e0) != 0)
                                    *((esi_1 << 2) + &data_15155f8) = eax
                                    esi_1 += 1
                                    
                                    if (esi_1 == 1)
                                        break
                                
                                eax, ecx_3 = sub_481430(&data_62d6c4, &var_c)
                            while (eax.b != 0)
                            
                            data_15118a0 = esi_1
                        
                        int32_t edi_2 = 0
                        
                        if (esi_1 s> 0)
                            do
                                int32_t var_1c_3 = ecx_3
                                eax, ecx_3 = sub_455e80(eax, *((edi_2 << 2) + &data_15155f8), ebx_1, 
                                    edi_2, esi_1)
                                esi_1 = data_15118a0
                                edi_2 += 1
                            while (edi_2 s< esi_1)
                            
                            ebx_1[0x2f6] = esi_1
                            eax.b = 0
                            return eax
                    
                    ebx_1[0x2f6] = esi_1
    
    eax.b = 0
    return eax
}
