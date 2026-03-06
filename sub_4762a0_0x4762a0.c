// 函数名称: sub_4762a0
// 虚拟地址: 0x4762a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4762a0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: void var_108
    void var_108
    int32_t* eax_1 = __security_cookie ^ &var_108
    int32_t* var_14 = eax_1
    void* ecx = data_6cfe4c
    char const* const var_11c_2
    int32_t var_118_2
    char const* const var_114_2
    char* ecx_9
    
    if (ecx == 0)
    label_47675e:
        var_114_2 = "GetClient"
        var_118_2 = 0x75
        ecx_9 = "gClient"
        var_11c_2 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
    label_476774:
        sub_489550(eax_1, &data_5b2591, ecx_9, var_11c_2, var_118_2, var_114_2)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* eax_2 = sub_452b90(*(ecx + 0xa68))
    int32_t esi_1 = 0
    
    for (int32_t i = *(eax_2 + 0x2ac); i != 0; i = *(sub_452de0(i) + 0x10))
        esi_1 += 1
    
    *arg1 = esi_1
    int32_t esi_2 = 0
    
    for (int32_t i_1 = *(eax_2 + 0x2b0); i_1 != 0; i_1 = *(sub_452de0(i_1) + 0x10))
        esi_2 += 1
    
    *arg2 = esi_2
    void* result = data_632564
    
    if (result == 0)
        @__security_check_cookie@4(var_14 ^ &var_108)
        return result
    
    uint32_t ecx_3 = zx.d(result.w)
    
    if (ecx_3 u>= data_62d6c8)
        @__security_check_cookie@4(var_14 ^ &var_108)
        return result
    
    int32_t* esi_4 = ecx_3 * 0x8ac + data_62d6c4
    
    if (esi_4[0x22a] != result)
        @__security_check_cookie@4(var_14 ^ &var_108)
        return result
    
    int32_t eax_7 = *esi_4
    int32_t var_104_1 = 0
    
    if (eax_7 == 2)
        var_104_1 = 4
    else if (eax_7 == 0)
        int32_t eax_8 = sub_453650(eax_2)
        int32_t eax_9
        
        if (eax_8 != 9)
            eax_9 = sub_453650(eax_2)
            var_104_1 = 3
        
        if (eax_8 == 9 || eax_9 == 0x1d)
            var_104_1 = 2
    
    int32_t* var_f8
    
    if (sub_489e40(&var_f8) != 0)
        data_632570 = var_f8
        int32_t var_f4
        data_632574 = var_f4
    
    char var_105_1 = 0
    int32_t var_c8[0x9]
    int32_t* eax_14 = sub_4732b0(&var_c8, var_104_1, esi_4, &var_c8, arg1, arg2)
    char edx_1 = *(esi_4 + 0x881)
    int128_t xmm1_1 = *eax_14
    int64_t xmm0_1 = *(eax_14 + 0x10)
    int32_t var_d8_1 = eax_14[6]
    eax_1 = xmm1_1
    int128_t var_f0 = xmm1_1
    int64_t var_e0_1 = xmm0_1
    char ecx_8
    
    if (eax_1 u> 0x16)
    label_476445:
        eax_1.b = 1
    label_476447:
        ecx_8 = var_105_1
    else
        eax_1 = zx.d(*(eax_1 + sub_4767a0))
        
        switch (eax_1)
            case nullptr
                eax_1.b = 0
                goto label_476447
            case 1
                if (*esi_4 == 1)
                    eax_1.b = esi_4[4] != 7
                    goto label_476447
                
                var_114_2 = "RollGameDragUpdate"
                var_118_2 = 0x70b2
                var_11c_2 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                ecx_9 = "drag->type == ROLLGFX_DIE"
                goto label_476774
            case 2
                ecx_8 = 1
                eax_1.b = 1
            case 3
                goto label_476445
    
    *(esi_4 + 0x881) = eax_1.b
    bool cond:0_1 = eax_1.b == 0
    eax_1 = var_f0.d
    
    if (not(cond:0_1) && (esi_4[0x221] != eax_1 || edx_1 == 0))
        void* ecx_11
        
        if (ecx_8 == 0)
            void var_44
            sub_4c5670(data_126bd5c, &var_44)
            ecx_11 = &var_44
        else if (eax_1 != 0x10)
            void var_74
            sub_4c5670(data_126bda0, &var_74)
            ecx_11 = &var_74
        else
            void var_a4
            sub_4c5670(data_126bda4, &var_a4)
            ecx_11 = &var_a4
        
        sub_4c5920(ecx_11)
        eax_1 = var_f0.d
    
    if (*(esi_4 + 0x881) != 0)
        esi_4[0x221] = eax_1
    
    int32_t ecx_14 = var_104_1
    
    if (eax_1 == 0xf && ecx_14 != 2)
        int32_t edx_5 = esi_4[0xd]
        
        if (edx_5 == 4)
            *arg1 -= 1
            edx_5 = esi_4[0xd]
        
        if (edx_5 == 5)
            *arg2 -= 1
    
    esi_4[0x21e] = 0
    
    if (ecx_14 == 3)
        if (eax_1 == 0x12)
            if (esi_4[0xe] != 0)
                void* ecx_15 = data_6cfe4c
                
                if (ecx_15 == 0)
                    goto label_47675e
                
                if (esi_4[0xf] == *(ecx_15 + 0xa68))
                    data_126be64
                    sub_4c5ce0()
                
                sub_46a420(6)
                esi_4[0xe] = 0
                esi_4[0x223] = 0x3f800000
                esi_4[0x224].b = 1
            
            esi_4[0x21f] = var_f0:4.d
            int32_t eax_17
            eax_17.b = var_f0:8.b
            esi_4[0x21e] = 4
            esi_4[0x220].b = eax_17.b
            
            if (sub_453650(eax_2) == 1)
                eax_1 = sub_454aa0(esi_4)
                var_f8 = eax_1
                
                if (eax_1[0xe] != 1)
                    if (data_6cfe4c == 0)
                        goto label_47675e
                    
                    sub_46a420(6)
                    int32_t* eax_19 = var_f8
                    eax_19[0xe] = 1
                    eax_19[0x223] = 0x3f800000
                    sub_4554e0(eax_19, eax_19, eax_2, 5, 0, 5, 1, 0, 0)
                    *arg2 += 1
                    *arg1 -= 1
                    esi_4[0x21f] -= 1
        else if (eax_1 == 0x13)
            if (esi_4[0xe] != 1)
                void* ecx_20 = data_6cfe4c
                
                if (ecx_20 == 0)
                    goto label_47675e
                
                if (esi_4[0xf] == *(ecx_20 + 0xa68))
                    data_126be64
                    sub_4c5ce0()
                
                sub_46a420(6)
                esi_4[0xe] = 1
                esi_4[0x223] = 0
                esi_4[0x224].b = 1
            
            esi_4[0x21f] = var_f0:4.d
            int32_t eax_23
            eax_23.b = var_f0:8.b
            esi_4[0x21e] = 5
            esi_4[0x220].b = eax_23.b
            
            if (sub_453650(eax_2) == 1)
                eax_1 = sub_454aa0(esi_4)
                var_f8 = eax_1
                
                if (eax_1[0xe] != 0)
                    if (data_6cfe4c == 0)
                        goto label_47675e
                    
                    sub_46a420(6)
                    int32_t* eax_25 = var_f8
                    eax_25[0xe] = 0
                    eax_25[0x223] = 0
                    sub_4554e0(eax_25, eax_25, eax_2, 4, 0, 5, 1, 0, 0)
                    *arg1 += 1
                    *arg2 -= 1
                    esi_4[0x21f] -= 1
        
        int32_t eax_27 = sub_453650(eax_2)
        int32_t eax_28
        
        if (eax_27 != 0xb)
            eax_28 = sub_453650(eax_2)
        
        if (eax_27 == 0xb || eax_28 == 0xd)
            sub_475ef0(&var_f0)
        
        ecx_14 = var_104_1
    
    result = data_114e840
    
    if ((*(result + 0xc) & 1) == 0)
    label_47671a:
        esi_4[0x224].b = 0
        sub_475060(result, &var_f0, esi_4, ecx_14)
        result = data_632564
        
        if (result != 0)
            data_63255c = result
            data_632564 = 0
        
        data_63e5f4 = 0
    else
        result = data_aca1f0
        
        if (*(result + 0x18) == 0)
            goto label_47671a
    
    @__security_check_cookie@4(var_14 ^ &var_108)
    return result
}
