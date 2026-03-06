// 函数名称: sub_4729f0
// 虚拟地址: 0x4729f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4729f0()
{
    // 第一条实际指令: __alloca_probe(0x1014)
    __alloca_probe(0x1014)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t* entry_ebx
    int32_t* var_8_1 = entry_ebx
    int32_t edi = 0
    int32_t* i_2 = nullptr
    sub_481430(&data_62d6c4, &i_2)
    int32_t var_100c[0x3fc]
    int32_t* i
    
    for (i = i_2; i != 0xffffffff; i = i_2)
        var_100c[edi] = i
        edi += 1
        sub_481430(&data_62d6c4, &i_2)
    
    int32_t result = sub_436380(i, &var_100c[edi], &var_100c, edi, sub_4722b0)
    int32_t esi = 0
    char const* const var_1c
    int32_t var_18_1
    char const* const var_14_4
    char* ecx_6
    
    if (edi s<= 0)
    label_472b06:
        entry_ebx.b = data_114e7d9
        
        if (entry_ebx.b != 0)
            int32_t edi_1 = data_aca74c
            int32_t* var_14_3 = &i_2
            data_aca74c = 0x4e200000
            i_2 = nullptr
            result = sub_4815c0(&data_632824, var_14_3)
            int32_t* i_1 = i_2
            
            if (i_1 != 0xffffffff)
                do
                    if (sub_4556f0(i_1) != 0)
                        int32_t eax_4 = *i_1
                        result = eax_4 - 2
                        
                        if (eax_4 != 2)
                            var_14_4 = "DrawEffects"
                            var_18_1 = 0xd9e
                            var_1c = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                            ecx_6 = "Halt"
                            goto label_472c0f
                        
                        sub_4d9be0(i_1[1], nullptr)
                    else
                        int32_t ecx_5 = data_632830
                        data_632830 = zx.d(i_1[6].w)
                        i_1[6] = ecx_5
                        data_632834 -= 1
                    
                    result = sub_4815c0(&data_632824, &i_2)
                    i_1 = i_2
                while (i_1 != 0xffffffff)
                
                entry_ebx.b = data_114e7d9
            
            if (entry_ebx.b != 0)
                data_aca74c = edi_1
                @__security_check_cookie@4(var_8_1 ^ &__saved_ebp)
                return result
        
        var_14_4 = "Draw3DLayer"
        var_18_1 = 0x327
        ecx_6 = "gDraw3DData.submittingRenderItems"
        var_1c = "d:\ax\trunk\ax2017\engine\draw3d.cpp"
    else
        while (true)
            entry_ebx = var_100c[esi]
            result = *entry_ebx
            int32_t ecx_2
            
            switch (result)
                case 0
                    result = sub_46b510(entry_ebx)
                    
                    if (result.b == 0)
                        result = sub_4543d0(entry_ebx)
                        
                        if (result u> 6)
                            var_14_4 = "DrawTile"
                            var_18_1 = 0x58de
                            var_1c = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                            ecx_6 = "Halt"
                            break
                        
                        result = zx.d(lookup_table_472c40[result])
                        
                        switch (result)
                            case 0
                                ecx_2 = entry_ebx[1]
                            case 1
                                result = entry_ebx[0x11]
                                ecx_2 = *((result << 2) + &data_62d288)
                        
                        if (ecx_2 != 0)
                            result = sub_4a7800(ecx_2)
                case 1
                    result = sub_46b510(entry_ebx)
                    
                    if (result.b == 0)
                        result = sub_454600(entry_ebx)
                        ecx_2 = *result
                        
                        if (ecx_2 != 0)
                            result = sub_4a7800(ecx_2)
                case 2, 3
                    ecx_2 = entry_ebx[1]
                    result = sub_4a7800(ecx_2)
            
            esi += 1
            
            if (esi s>= edi)
                goto label_472b06
    
    label_472c0f:
    sub_489550(result, &data_5b2591, ecx_6, var_1c, var_18_1, var_14_4)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
