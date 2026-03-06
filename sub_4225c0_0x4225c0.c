// 函数名称: sub_4225c0
// 虚拟地址: 0x4225c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*sub_4225c0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59cfd8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = data_6cfe4c
    
    if (esi == 0)
        sub_489550(&ExceptionList, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    float xmm1 = data_620d84
    float xmm0_1 = xmm1 * 1000f
    float xmm0_2
    
    if (0 f<= xmm0_1)
        xmm0_2 = xmm0_1 + 0.5f
    else
        xmm0_2 = xmm0_1 - 0.5f
    
    int32_t eax_5
    int32_t edx
    edx:eax_5 = sx.q(int.d(xmm0_2))
    int32_t temp0 = *esi
    *esi += eax_5
    int32_t eax_6 = esi[6]
    esi[1] = adc.d(esi[1], edx, temp0 + eax_5 u< temp0)
    
    if (eax_6 u> 3)
        sub_489550(eax_6, &data_5b2591, "Halt", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameclient.cpp", 0x191, "ClientNetworkUpdate")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    char* const var_14
    
    switch (eax_6)
        case 0, 3
            char* eax_7
            int32_t ecx_3
            eax_7, ecx_3 = sub_437f10(*(data_6d00d8 + 0xbe4))
            
            if (*(eax_7 + 0x248) == 0)
                if (esi[6] == 3 && esi[5] == esi[0x29b])
                    int32_t ecx_4 = *esi
                    ecx_3 = ecx_4 - esi[0x29c]
                    bool c_1 = ecx_4 u< esi[0x29c]
                    int32_t eax_8 = esi[1]
                    int32_t temp4_1 = esi[0x29d]
                    bool s_1 = sbb.d(eax_8, temp4_1, c_1) s< 0
                    bool o_1 = unimplemented  {sbb eax, dword [esi+0xa74]}
                    var_14 = sbb.d(eax_8, temp4_1, c_1)
                    
                    if (not(s_1)
                            && ((sbb.d(eax_8, temp4_1, c_1) != 0 && s_1 == o_1) || ecx_3 u> 0x3a98))
                        ecx_3.b = 1
                        eax_7, ecx_3 = sub_41fe10(ecx_3.b, 1)
                        xmm1 = data_620d84
                
                float xmm0_5 = _mm_max_ss(esi[0x29e] f- xmm1, 0)
                xmm0_5 f- 0
                esi[0x29e] = xmm0_5
                eax_7:1.b = (xmm0_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_5, 0f) ? 1 : 0) << 2
                    | (xmm0_5 < 0f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (not(p_2))
                    int32_t eax_9 = esi[6]
                    
                    if (eax_9 == 0)
                        int32_t eax_10 = esi[7]
                        
                        if (eax_10 u> 7)
                            sub_489550(eax_10, &data_5b2591, "Halt", 
                                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameclient.cpp", 0x17a, 
                                "ClientKeepConnected")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        switch (eax_10)
                            case 0, 1, 2
                                sub_41fd00()
                                esi[0x29e] = 0x3f800000
                            case 4, 5, 6
                                sub_41fd00()
                                esi[0x29e] = 0x41700000
                            case 7
                                sub_41fd00()
                                esi[0x29e] = 0x42700000
                    else if (eax_9 == 3)
                        ecx_3.b = data_62b224 == 0x11
                        sub_4201b0(ecx_3)
    
    sub_421e60(esi)
    void* eax_11 = data_6cfe4c
    
    if (eax_11 == 0)
        sub_489550(eax_11, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t ecx_6
    
    if (*(eax_11 + 0x834) == 2)
        ecx_6 = *sub_425de0()
    else
        ecx_6 = 0
    
    int32_t var_24 = ___std_fs_get_file_attributes_by_handle@8(ecx_6)
    sub_4268f0()
    sub_4360b0(data_620d84)
    sub_476990()
    esi[0x29f].b = 0
    
    if (esi[0x2a0] == 1)
        var_14 = &data_5b2591
        int32_t var_8_1 = 0
        sub_48a180(&data_5b2591, 2, &var_14, 0)
        char* const eax_13 = var_14
        *eax_13 = 0x4350
        eax_13[2] = 0
        sub_422e10(&var_14)
        esi[0x2a0] = 0
        int32_t var_8_2 = 1
        
        if (data_aca1f4 != 0)
            char* const eax_14 = var_14
            
            if (eax_14 != 0 && *eax_14 != 0)
                char* eax_15 = sub_48a080(&var_14)
                int32_t temp5_1 = *(eax_15 + 4)
                *(eax_15 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_4984f0(eax_15, *(eax_15 + 0xc) + 0x10)
        
        int32_t var_8_3 = 0xffffffff
    
    void* esi_1 = data_63c5fc
    char* result = esi_1 + 1
    
    if (result u> 1)
        void* ecx_12 = data_6d00d8
        data_63c5fc = 0
        *(sub_437f10(*(ecx_12 + 0xbe4)) + 0x250) = esi_1
        result = sub_437ba0(data_6d00d8)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
