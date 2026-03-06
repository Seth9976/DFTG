// 函数名称: sub_4d72c0
// 虚拟地址: 0x4d72c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_4d72c0(int32_t arg1, char* arg2, uint32_t arg3, void* arg4, int32_t* arg5, int32_t* arg6)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a03a1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_840 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* i_3 = arg2
    void* i = arg4
    void* i_2 = i
    
    if ((arg5[0xa].b & 8) == 0)
        int32_t* i_12 = *arg5 + arg2
        i = sub_4d7100(i_3, arg5)
        
        if (i.b == 0 || arg6 != 0)
            uint32_t eax_4 = sub_4ce110(i_2)
            char* i_10
            
            if (eax_4.b == 0)
                int32_t ecx_3 = *(i_2 + 0x10)
                uint32_t eax_5 = ecx_3 - 5
                
                if (eax_5 u> 0xf)
                label_4d7720:
                    
                    if (ecx_3 s> 0 && ecx_3 s< 0x12)
                        i_10 = "DefParseTreeMakeFromDefinitionSubField"
                        sub_489550(eax_5, &data_5b2591, "!DefTypeIsBuiltIn(pDefMap)", 
                            "d:\ax\trunk\ax2017\engine\defparsetree.cpp", 0x819, i_10)
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    char* i_6 = sub_4d6130(arg3, arg5[1])
                    void* esi_1 = data_114e86c
                    i_3 = i_6
                    *(i_6 + 0xc) = arg5
                    *(esi_1 + 0x1c) += 1
                    char** ecx_20 = *(esi_1 + 0x10)
                    
                    if (ecx_20 == 0)
                        sub_4d7960(esi_1 + 0x10)
                        ecx_20 = *(esi_1 + 0x10)
                    
                    char* eax_23 = *ecx_20
                    i_10 = arg6
                    *(esi_1 + 0x10) = eax_23
                    i = i_3
                    ecx_20[2] = 0
                    ecx_20[3] = 0
                    ecx_20[4] = 0
                    *ecx_20 = &data_5b2591
                    ecx_20[1] = 0
                    ecx_20[2] = 0
                    ecx_20[3] = 0
                    *(i + 8) = ecx_20
                    i = sub_4d7860(i, i_12, ecx_20, i_2, arg5[1], i_10)
                else
                    eax_5 = zx.d(lookup_table_4d784c[eax_5])
                    char* i_18
                    void* i_1
                    char* i_15
                    
                    switch (eax_5)
                        case 0
                            int32_t* eax_13 = arg5[4]
                            char* i_8 = i_3
                            i_10 = arg6
                            i = sub_4d6cf0(eax_13, *i_12, arg3, arg5, *(eax_13 + i_8), i_10)
                        case 1
                            i_10 = arg6
                            i = sub_4d6cf0(eax_5, &i_3[*arg5], arg3, arg5, arg5[7], i_10)
                        case 2
                            i = *arg5
                            
                            if (*(i_3 + i) != 0)
                                i_10 = arg6
                                i = sub_4d7860(i, i_12, arg3, i_2, arg5[1], i_10)
                        case 3
                            int32_t* eax_14 = sub_4d6130(arg3, arg5[1])
                            i_10 = i_12
                            i = sub_48a5e0(&eax_14[1], i_10)
                        case 4
                            void* ebx_3 = &i_3[*arg5]
                            int32_t* eax_6 = sub_4d62d0(arg3, arg5[1])
                            i_10 = *(ebx_3 + 0xc)
                            i_3 = eax_6[2]
                            sub_48a9d0(&i_15, &data_5efc90)
                            char* const i_13 = &data_5b2591
                            int32_t var_8_1 = 0
                            char* i_16 = i_15
                            
                            if (i_16 != 0)
                                i_13 = i_16
                            
                            int32_t* eax_8 = sub_4d6130(i_3, "mFreeListHead")
                            i_10 = i_13
                            sub_48a5e0(&eax_8[1], i_10)
                            int32_t var_8_2 = 1
                            
                            if (data_aca1f4 != 0)
                                char* i_19 = i_15
                                
                                if (i_19 != 0 && *i_19 != 0)
                                    char* eax_9 = sub_48a080(&i_15)
                                    int32_t temp0_1 = *(eax_9 + 4)
                                    *(eax_9 + 4) -= 1
                                    
                                    if (temp0_1 == 1)
                                        sub_4984f0(eax_9, *(eax_9 + 0xc) + 0x10)
                            
                            int32_t var_8_3 = 0xffffffff
                            i_10 = *(ebx_3 + 0x10)
                            sub_48a9d0(&i_1, &data_5efc90)
                            void* i_9 = &data_5b2591
                            int32_t var_8_4 = 2
                            void* i_4 = i_1
                            
                            if (i_4 != 0)
                                i_9 = i_4
                            
                            int32_t* eax_10 = sub_4d6130(i_3, "mUsedCount")
                            i_10 = i_9
                            sub_48a5e0(&eax_10[1], i_10)
                            int32_t var_8_5 = 3
                            
                            if (data_aca1f4 != 0)
                                void* i_5 = i_1
                                
                                if (i_5 != 0 && *i_5 != 0)
                                    char* eax_11 = sub_48a080(&i_1)
                                    int32_t temp1_1 = *(eax_11 + 4)
                                    *(eax_11 + 4) -= 1
                                    
                                    if (temp1_1 == 1)
                                        sub_4984f0(eax_11, *(eax_11 + 0xc) + 0x10)
                            
                            int32_t var_8_6 = 0xffffffff
                            i_10 = *(ebx_3 + 0x14)
                            sub_48a9d0(&i_18, &data_5efc90)
                            char* i_14 = &data_5b2591
                            int32_t var_8_7 = 4
                            char* i_17 = i_18
                            
                            if (i_17 != 0)
                                i_14 = i_17
                            
                            int32_t* eax_12 = sub_4d6130(i_3, "mNextKey")
                            i_10 = i_14
                            char* i_20 = sub_48a5e0(&eax_12[1], i_10)
                            int32_t var_8_8 = 5
                            
                            if (data_aca1f4 != 0)
                                i_20 = i_18
                                
                                if (i_20 != 0 && *i_20 != 0)
                                    i_20 = sub_48a080(&i_18)
                                    int32_t temp2_1 = *(i_20 + 4)
                                    *(i_20 + 4) -= 1
                                    
                                    if (temp2_1 == 1)
                                        i_20 = sub_4984f0(i_20, *(i_20 + 0xc) + 0x10)
                            
                            char* i_7 = i_3
                            int32_t var_8_9 = 0xffffffff
                            i_10 = *(ebx_3 + 4)
                            i = sub_4d6e10(i_20, *ebx_3, i_7, arg5, i_10)
                        case 5
                            i_10 = arg5[0xa]
                            int32_t* eax_15 = arg5[7]
                            int32_t* edx_15 = arg6
                            
                            if (eax_15 != 0)
                                edx_15 = eax_15
                            
                            i = sub_4d6f80(eax_15, edx_15, arg3, i_12, arg5[1], i_10.b)
                        case 6
                            int32_t* eax_16 = arg5[7]
                            int32_t* ecx_24 = arg6
                            
                            if (eax_16 != 0)
                                ecx_24 = eax_16
                            
                            int32_t eax_17 = arg5[0xa]
                            char* i_21 = arg5[1]
                            i_10 = 0x400
                            i_18 = i_21
                            uint32_t var_418[0x40][0x4]
                            _memset(&var_418, 0, i_10)
                            uint32_t var_818 = arg3
                            i_10 = 0x3fc
                            uint32_t var_814[0x3f][0x4]
                            i = _memset(&var_814, 0, i_10)
                            int32_t j = 0
                            i_1 = nullptr
                            
                            if (i_12[2] s> 0)
                                char* i_11 = nullptr
                                i_15 = nullptr
                                
                                do
                                    var_418[0][j] -= 1
                                    j += 1
                                    char* i_22 = i_18
                                    int32_t* edi_2 = *i_12 + i_11
                                    i_10 = i_11
                                    
                                    if (i_22 == 0)
                                        sub_489550(i_22, &data_5b2591, "str", 
                                            "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x94, 
                                            "XString::XString")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_489700()
                                        noreturn
                                    
                                    sub_48a2c0(&i_10, i_22)
                                    char* ecx_27 = sub_4d63c0((&i_3)[j])
                                    (&var_818)[j] = ecx_27
                                    i_10 = eax_17 | 0x40
                                    int32_t* i_23 = i_18
                                    sub_4d6f80(i_23, ecx_24, ecx_27, edi_2, i_23, i_10.b)
                                    int32_t eax_21 = edi_2[4]
                                    var_418[0][j] = eax_21
                                    
                                    if (eax_21 == 0)
                                        while (j s> 0)
                                            j -= 1
                                            
                                            if (var_418[0][j] != 0)
                                                break
                                    
                                    i = i_1 + 1
                                    i_11 = &i_15[0x18]
                                    i_1 = i
                                    i_15 = i_11
                                while (i s< i_12[2])
                        case 7
                            goto label_4d7720
            else
                i_10 = arg5[7]
                i = sub_4d6590(eax_4, i_12, arg3, i_2, arg5[1], arg5[0xa], i_10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return i
}
