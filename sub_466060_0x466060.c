// 函数名称: sub_466060
// 虚拟地址: 0x466060
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_466060(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59deb8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* result_2 = arg3
    char* result_1 = result_2
    void* ecx = data_6cfe4c
    
    if (ecx == 0)
        sub_489550(&ExceptionList, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* eax_4 = sub_452b90(*(ecx + 0xa68))
    sub_4a8830(sub_4a8830(eax_4, &data_637ce8, result_2, arg2, 0xffffffff), &data_637d04, result_2, 
        arg4, 0xffffffff)
    int32_t ecx_4 = *(eax_4 + 0x2fc)
    
    if (ecx_4 == 0)
        ecx_4 = *(eax_4 + 0x2f8)
    
    int32_t var_34 = *(eax_4 + 0x304) - *(eax_4 + 0x314) + *(eax_4 + 0x30c) + ecx_4
    char* const var_14
    sub_48a9d0(&var_14, &data_5efc90)
    int32_t var_8_1 = 0
    sub_4a8930(&var_14, &data_637b0c, result_2, &var_14, 0xffffffff)
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        char* eax_11 = var_14
        
        if (eax_11 != 0 && *eax_11 != 0)
            char* eax_12 = sub_48a080(&var_14)
            int32_t temp0_1 = *(eax_12 + 4)
            *(eax_12 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_12, *(eax_12 + 0xc) + 0x10)
                var_14 = &data_5b2591
    
    int32_t var_8_3 = 0xffffffff
    int32_t var_34_1 = *(eax_4 + 0x304) - *(eax_4 + 0x314) + *(eax_4 + 0x30c)
    sub_48a9d0(&var_14, &data_5efc90)
    int32_t var_8_4 = 2
    sub_4a8930(&var_14, &data_637b28, result_2, &var_14, 0xffffffff)
    int32_t var_8_5 = 3
    
    if (data_aca1f4 != 0)
        char* const eax_17 = var_14
        
        if (eax_17 != 0 && *eax_17 != 0)
            char* eax_18 = sub_48a080(&var_14)
            int32_t temp1_1 = *(eax_18 + 4)
            *(eax_18 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_4984f0(eax_18, *(eax_18 + 0xc) + 0x10)
                var_14 = &data_5b2591
    
    int32_t var_8_6 = 0xffffffff
    int32_t edi_4 = *(eax_4 + 0x320) - *(eax_4 + 0x310) + *(eax_4 + 0x308) + *(eax_4 + 0x300)
    int32_t eax_19 = *(eax_4 + 0x328)
    
    if ((eax_19 == 0 || edi_4 s< 0xa) && edi_4 s> 0xa)
    label_466226:
        
        if ((eax_19 == 0 || edi_4 s< 0xa) && edi_4 s> 0xa)
            edi_4 = 0xa
        else if (eax_19 != 0 && edi_4 s>= 0xa)
            edi_4 = 9
    else if (eax_19 == 0)
        if (edi_4 s>= 0)
            goto label_466226
        
        edi_4 = 0
    else
        if (edi_4 s>= 0xa || edi_4 s>= 0)
            goto label_466226
        
        edi_4 = 0
    
    int32_t var_34_2 = edi_4
    sub_48a9d0(&var_14, &data_5efc90)
    int32_t var_8_7 = 4
    sub_4a8930(&var_14, &data_637b60, result_2, &var_14, 0xffffffff)
    int32_t var_8_8 = 5
    
    if (data_aca1f4 != 0)
        char* const eax_21 = var_14
        
        if (eax_21 != 0 && *eax_21 != 0)
            char* eax_22 = sub_48a080(&var_14)
            int32_t temp2_1 = *(eax_22 + 4)
            *(eax_22 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_4984f0(eax_22, *(eax_22 + 0xc) + 0x10)
                var_14 = &data_5b2591
    
    int32_t var_8_9 = 0xffffffff
    void* eax_23 = data_6cfe4c
    
    if (eax_23 == 0)
        sub_489550(eax_23, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t var_1c
    
    if (*(eax_23 + 0x834) != 0)
        int32_t* eax_24 = sub_425d50()
        void* eax_25 = sub_425fe0(&eax_24[2], *eax_4)
        int32_t* var_34_3 = &var_1c
        sub_421310(eax_25, &eax_24[2], &var_14, eax_25)
        int32_t var_8_10 = 6
        
        if (data_aca1f4 != 0)
            char* const eax_26 = var_14
            
            if (eax_26 != 0 && *eax_26 != 0)
                char* eax_27 = sub_48a080(&var_14)
                int32_t temp3_1 = *(eax_27 + 4)
                *(eax_27 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_4984f0(eax_27, *(eax_27 + 0xc) + 0x10)
                    var_14 = &data_5b2591
        
        int32_t var_8_11 = 0xffffffff
        result_2 = result_1
        char* eax_28 = sub_426e60(0x15142b0, result_2, "group_playerInfo")
        var_14 = eax_28
        
        if (eax_28 != 0)
            sub_465a40(var_1c)
            int32_t var_34_4 = 0xffffffff
            sub_4a8570(var_14)
    
    sub_426240(result_2, *eax_4)
    
    if (data_632a44.b != 0)
        int32_t var_34_5 = 0xffffffff
        sub_4a8570(result_2)
    
    if (data_632a44:1.b != 0)
        int32_t var_34_6 = 0xffffffff
        sub_4a8570(result_2)
    
    int32_t var_34_7 = 0xffffffff
    sub_4a8570(result_2)
    int32_t edi_5 = 0
    int32_t ecx_25 = *(sub_452b90(*eax_4) + 0x2a8)
    int32_t* ecx_26
    
    if (ecx_25 == 0)
        ecx_26 = nullptr
    else
        ecx_26 = sub_452cc0(ecx_25)
    
    int32_t* eax_34 = Unlock(&var_1c)
    int32_t esi_1 = var_1c
    
    while (ecx_26 != esi_1)
        if (ecx_26 == 0)
            sub_489550(eax_34, &data_5b2591, "gfx", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
                0x2ac, "Tiles::TileIt::operator *")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t edx_15 = 0
        eax_34 = ecx_26[0xe] + 1
        
        if (eax_34 u> 5)
            sub_489550(eax_34, &data_5b2591, "Halt", 
                "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x481d, "CalcTableauVP")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        switch (eax_34)
            case 1, 3, 5
                eax_34 = ecx_26[0xc]
                edx_15 = eax_34[5]
            case 2, 4
                eax_34 = ecx_26[0xc]
                edx_15 = eax_34[0xb]
        
        ecx_26 = ecx_26[0x10]
        edi_5 += edx_15
        
        if (ecx_26 != 0)
            eax_34 = sub_452cc0(ecx_26)
            ecx_26 = eax_34
    
    int32_t esi_2 = *(eax_4 + 0x2fc)
    
    if (esi_2 == 0)
        esi_2 = *(eax_4 + 0x2f8)
    
    int32_t var_34_9 = edi_5
    sub_48a9d0(&var_14, &data_5efc90)
    int32_t var_8_12 = 7
    char* result_3 = result_1
    sub_4a8930(&var_14, &data_638864, result_3, &var_14, 0xffffffff)
    int32_t var_8_13 = 8
    
    if (data_aca1f4 != 0)
        char* const eax_37 = var_14
        
        if (eax_37 != 0 && *eax_37 != 0)
            char* eax_38 = sub_48a080(&var_14)
            int32_t temp4_1 = *(eax_38 + 4)
            *(eax_38 + 4) -= 1
            
            if (temp4_1 == 1)
                sub_4984f0(eax_38, *(eax_38 + 0xc) + 0x10)
    
    int32_t var_34_10 = esi_2 - edi_5
    int32_t var_8_14 = 0xffffffff
    sub_48a9d0(&result_1, &data_5efc90)
    int32_t var_8_15 = 9
    char* result = sub_4a8930(&result_1, &data_638880, result_3, &result_1, 0xffffffff)
    int32_t var_8_16 = 0xa
    
    if (data_aca1f4 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp5_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp5_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
