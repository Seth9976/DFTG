// 函数名称: sub_4af600
// 虚拟地址: 0x4af600
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_4af600(int32_t arg1, int32_t* arg2, int32_t arg3, char* arg4, char* arg5)
{
    // 第一条实际指令: if (arg3 != 0xf9)
    if (arg3 != 0xf9)
        sub_489550(arg1, &data_5b2591, "attribTag == UIATTRIB_SLOT_BINDING", 
            "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x2d5c, "UI2CommitBinding")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    char const (** ecx)[0xa] = &data_6218dc
    int32_t* eax = sub_4f0e70(arg1, arg2, &data_6218dc, data_12bab48, 0xf8)
    void** var_2c = eax
    
    if (eax == 0)
        int128_t var_20
        char* eax_1
        int32_t edx_1
        edx_1:eax_1 = &var_20
        var_20 = zx.o(0)
        ecx = &data_6218dc
        eax = sub_4f0e70(sub_4f0910(eax_1, arg2, &data_6218dc, 0xf8, eax_1, edx_1), arg2, &data_6218dc, 
            data_12bab48, 0xf8)
        var_2c = eax
        
        if (eax == 0)
            sub_489550(eax, &data_5b2591, "bindings", "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x2d65, 
                "UI2CommitBinding")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    
    int32_t edi = eax[2]
    int32_t esi_1 = 0
    
    if (edi s> 0)
        char const (*** eax_3)[0xa] = *eax
        char const (*** edi_1)[0xa] = eax_3
        
        while (true)
            char* eax_4 = arg4
            ecx = *edi_1
            int32_t eax_6
            
            while (true)
                char edx = *ecx
                char temp0_1 = *eax_4
                bool c_1 = edx u< temp0_1
                
                if (edx == temp0_1)
                    if (edx == 0)
                        eax_6 = 0
                        break
                    
                    edx = *(ecx + 1)
                    char temp1_1 = eax_4[1]
                    c_1 = edx u< temp1_1
                    
                    if (edx == temp1_1)
                        ecx += 2
                        eax_4 = &eax_4[2]
                        
                        if (edx != 0)
                            continue
                        
                        eax_6 = 0
                        break
                
                eax_6 = sbb.d(eax_4, eax_4, c_1) | 1
                break
            
            if (eax_6 == 0)
                void* eax_11 = sub_4cf8e0(data_12bab44, 8)
                return sub_4cf950(eax_11, arg5, &eax_3[2 + esi_1 * 4], eax_11)
            
            esi_1 += 1
            edi_1 = &edi_1[4]
            
            if (esi_1 s>= edi)
                break
    
    char const (** var_48_3)[0xa] = ecx
    int32_t* eax_7 = sub_4cf8e0(data_12bab48, 0)
    sub_518870(eax_7, eax_7, var_2c, edi)
    void* esi_3 = *var_2c
    int32_t edi_2 = edi << 4
    void* eax_8 = sub_4cf8e0(data_12bab44, 0)
    sub_4cf950(eax_8, arg4, edi_2 + esi_3, eax_8)
    void* esi_5 = *var_2c
    void* eax_9 = sub_4cf8e0(data_12bab44, 8)
    return sub_4cf950(eax_9, arg5, esi_5 + 8 + edi_2, eax_9)
}
