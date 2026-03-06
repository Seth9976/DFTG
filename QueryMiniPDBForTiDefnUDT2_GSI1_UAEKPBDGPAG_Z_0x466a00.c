// 函数名称: ?QueryMiniPDBForTiDefnUDT2@GSI1@@UAEKPBDGPAG@Z
// 虚拟地址: 0x466a00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")?QueryMiniPDBForTiDefnUDT2@GSI1@@UAEKPBDGPAG@Z(int32_t arg1, char* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59df18
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_40 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_18 = arg2
    int32_t eax_3 = sub_425e70()
    void* ecx = data_6cfe4c
    
    if (ecx == 0)
        sub_489550(eax_3, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* eax_5 = arg2 - *(ecx + 0xa68)
    void* ecx_1 = eax_5 + eax_3
    
    if (arg2 - *(ecx + 0xa68) s>= 0)
        ecx_1 = eax_5
    
    sub_466840(sub_426e60(arg2 * 0x24 + &data_1514660, arg3, "tbl_tray"), arg2)
    void* eax_8 = data_6cfe4c
    
    if (eax_8 == 0)
        sub_489550(eax_8, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (*(eax_8 + 0x834) == 2)
        void* eax_10 = sub_425fe0(&sub_425de0()[2], arg2)
        
        if (*(eax_10 + 0x14) == 1)
            int32_t eax_11 = sub_425c70(*(eax_10 + 0x18))
            
            if (eax_11 s> 0 && (eax_11 s<= 2 || eax_11 == 3))
                int32_t var_44_1 = 0xffffffff
                sub_4a8570(arg3)
    
    int32_t eax_12 = sub_453570(arg2, 4)
    int32_t eax_13 = sub_453570(arg2, 5)
    void* var_20 = sub_453570(arg2, 3)
    void* eax_15 = sub_452b90(arg2)
    int32_t ecx_11 = *(eax_15 + 0x2fc)
    
    if (ecx_11 == 0)
        ecx_11 = *(eax_15 + 0x2f8)
    
    int32_t var_44_2 = *(eax_15 + 0x304) - *(eax_15 + 0x314) + ecx_11 + *(eax_15 + 0x30c)
    char* const var_14
    sub_48a9d0(&var_14, &data_5efc90)
    int32_t var_8_1 = 0
    sub_4a8930(&var_14, &data_638148, arg3, &var_14, 0xffffffff)
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        char* eax_21 = var_14
        
        if (eax_21 != 0 && *eax_21 != 0)
            char* eax_22 = sub_48a080(&var_14)
            int32_t temp2_1 = *(eax_22 + 4)
            *(eax_22 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_4984f0(eax_22, *(eax_22 + 0xc) + 0x10)
                var_14 = &data_5b2591
    
    int32_t var_8_3 = 0xffffffff
    int32_t esi_2 = *(eax_15 + 0x304) - *(eax_15 + 0x314) + *(eax_15 + 0x30c)
    int32_t var_44_3 = esi_2
    sub_48a9d0(&var_14, &data_5efc90)
    int32_t var_8_4 = 2
    sub_4a8930(&var_14, &data_638164, arg3, &var_14, 0xffffffff)
    int32_t var_8_5 = 3
    
    if (data_aca1f4 != 0)
        char* const eax_24 = var_14
        
        if (eax_24 != 0 && *eax_24 != 0)
            char* eax_25 = sub_48a080(&var_14)
            int32_t temp3_1 = *(eax_25 + 4)
            *(eax_25 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_4984f0(eax_25, *(eax_25 + 0xc) + 0x10)
                var_14 = &data_5b2591
    
    int32_t var_8_6 = 0xffffffff
    
    if (esi_2 == 0)
        int32_t var_44_4 = 0xffffffff
        sub_4a8570(arg3)
    
    int32_t eax_27 = *(eax_15 + 0x300) + *(eax_15 + 0x320) - *(eax_15 + 0x310) + *(eax_15 + 0x308)
    int32_t ecx_22 = *(eax_15 + 0x328)
    
    if ((ecx_22 == 0 || eax_27 s< 0xa) && eax_27 s> 0xa)
        eax_27 = 0xa
    else if (ecx_22 != 0 && eax_27 s>= 0xa)
        eax_27 = 9
    
    int32_t var_44_5 = eax_27
    sub_48a9d0(&var_14, &data_5efc90)
    int32_t var_8_7 = 4
    sub_4a8930(&var_14, &data_63819c, arg3, &var_14, 0xffffffff)
    int32_t var_8_8 = 5
    
    if (data_aca1f4 != 0)
        char* const eax_29 = var_14
        
        if (eax_29 != 0 && *eax_29 != 0)
            char* eax_30 = sub_48a080(&var_14)
            int32_t temp4_1 = *(eax_30 + 4)
            *(eax_30 + 4) -= 1
            
            if (temp4_1 == 1)
                sub_4984f0(eax_30, *(eax_30 + 0xc) + 0x10)
                var_14 = &data_5b2591
    
    int32_t var_8_9 = 0xffffffff
    void* var_44_6 = var_20
    sub_48a9d0(&var_14, &data_5efc90)
    int32_t var_8_10 = 6
    int32_t eax_32 = sub_4a8930(&var_14, &data_6381b8, arg3, &var_14, 0xffffffff)
    int32_t var_8_11 = 7
    
    if (data_aca1f4 != 0)
        eax_32 = var_14
        
        if (eax_32 != 0 && *eax_32 != 0)
            eax_32 = sub_48a080(&var_14)
            int32_t temp5_1 = *(eax_32 + 4)
            *(eax_32 + 4) -= 1
            
            if (temp5_1 == 1)
                eax_32 = sub_4984f0(eax_32, *(eax_32 + 0xc) + 0x10)
                var_14 = &data_5b2591
    
    int32_t var_8_12 = 0xffffffff
    sub_4a8830(eax_32, &data_638a94, arg3, *(eax_15 + 0xbd8), 0xffffffff)
    int32_t i = *(eax_15 + 0x2a8)
    int32_t esi_3 = 0
    
    for (; i != 0; i = *(sub_452de0(i) + 0x10))
        esi_3 += 1
    
    int32_t eax_34 = esi_3 - 6
    
    if (esi_3 s<= 0xc)
        eax_34 = 0
    
    sub_4a8830(eax_34, &data_6386c0, arg3, eax_34, 0xffffffff)
    sub_426240(arg3, *eax_15)
    int32_t i_1 = *(eax_15 + 0x2d4)
    int32_t esi_4 = 0
    
    if (i_1 != 0)
        do
            esi_4 += 1
            i_1 = *(sub_452d50(i_1) + 0x20)
        while (i_1 != 0)
        
        if (esi_4 != 0)
            int32_t var_44_7 = 0xffffffff
            sub_4a8570(arg3)
    
    void* eax_36 = data_6cfe4c
    
    if (eax_36 == 0)
        sub_489550(eax_36, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (*(eax_36 + 0x834) != 0)
        int32_t* eax_37 = sub_425d50()
        int32_t* eax_38 = sub_425fe0(&eax_37[2], var_18)
        int32_t* var_44_8 = &var_20
        sub_421310(eax_38, &eax_37[2], &var_14, eax_38)
        int32_t var_8_13 = 8
        sub_465a40(var_20)
        int32_t var_4c_4 = 0xffffffff
        sub_4a8570(arg3)
        sub_4a8930(&var_14, &data_6381f0, arg3, &var_14, 0xffffffff)
        int32_t var_8_14 = 9
        
        if (data_aca1f4 != 0)
            char* const eax_41 = var_14
            
            if (eax_41 != 0 && *eax_41 != 0)
                char* eax_42 = sub_48a080(&var_14)
                int32_t temp6_1 = *(eax_42 + 4)
                *(eax_42 + 4) -= 1
                
                if (temp6_1 == 1)
                    sub_4984f0(eax_42, *(eax_42 + 0xc) + 0x10)
                    var_14 = &data_5b2591
        
        int32_t var_8_15 = 0xffffffff
    
    int32_t* eax_43 = sub_452ed0(eax_15, 7)
    
    if (eax_43 s> 0x10)
        int32_t var_4c_5 = 0xffffffff
        sub_4a8830(sub_4a8830(eax_43, &data_638ab0, arg3, 5, 0xffffffff), &data_638acc, arg3, 5, 
            0xffffffff)
    else if (eax_43 s> 9)
        int32_t var_4c_6 = 0xffffffff
        sub_4a8830(sub_4a8830(eax_43, &data_638ab0, arg3, 4, 0xffffffff), &data_638acc, arg3, 4, 
            0xffffffff)
    
    int32_t* eax_45 = sub_452ed0(eax_15, 3)
    
    if (eax_45 s> 0x10)
        int32_t var_4c_7 = 0xffffffff
        eax_45 = sub_4a8830(sub_4a8830(eax_45, &data_638ae8, arg3, 5, 0xffffffff), &data_638b04, arg3, 
            5, 0xffffffff)
    else if (eax_45 s> 9)
        int32_t var_4c_8 = 0xffffffff
        eax_45 = sub_4a8830(sub_4a8830(eax_45, &data_638ae8, arg3, 4, 0xffffffff), &data_638b04, arg3, 
            4, 0xffffffff)
    
    void* ecx_50 = data_6cfe4c
    
    if (ecx_50 == 0)
        sub_489550(eax_45, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* eax_47 = sub_452b90(*(ecx_50 + 0xa68))
    void* ecx_52 = data_6cfe4c
    var_20 = eax_47
    
    if (ecx_52 == 0)
        sub_489550(eax_47, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    char* ebx_2
    
    if (*(ecx_52 + 0x10) != *(ecx_52 + 0xc))
        ebx_2 = var_18
    label_466fab:
        
        switch (*(var_20 + 4))
            case 0, 2, 5, 7, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e
                int32_t var_44_9 = 0xffffffff
                sub_4a8570(arg3)
    else
        ebx_2 = var_18
        void* eax_49 = sub_452b90(ebx_2)
        int32_t* eax_50 = sub_425de0()
        
        if (*((ebx_2 << 3) + &data_a9fb80) == *eax_50 && *((ebx_2 << 3) + &data_a9fb84) != 0)
            goto label_466fab
        
        int32_t eax_51 = *(eax_49 + 4)
        
        if (eax_51 u> 0x1e)
            goto label_466fab
        
        switch (eax_51)
            case 1, 3, 4, 6, 8, 9, 0xb, 0xd, 0xf, 0x11, 0x13, 0x15, 0x17, 0x19, 0x1b, 0x1d
                goto label_466fab
    
    int32_t var_44_13
    
    if (ecx_1 != data_6327d4)
        if (sub_477fc0(ebx_2) != 0)
            var_44_13 = 0xffffffff
            sub_4a8570(arg3)
    else
        int32_t var_44_10 = 0xffffffff
        sub_4a8570(arg3)
        int32_t var_44_11 = 0xffffffff
        sub_4a8570(arg4)
        
        if (ecx_1 == 2 || ecx_1 == 4)
            int32_t var_44_12 = 0xffffffff
            sub_4a8570(arg3)
        
        if (ecx_1 == 1)
            if (sub_425e70() == 2)
                var_44_13 = 0xffffffff
                sub_4a8570(arg3)
        else if (ecx_1 == 3 && sub_425e70() == 4)
            var_44_13 = 0xffffffff
            sub_4a8570(arg3)
    char eax_59 = sub_46bdf0(ebx_2)
    char eax_60
    
    if (eax_59 == 0)
        eax_60 = sub_46bd40(ebx_2)
    
    if (eax_59 != 0 || eax_60 != 0)
        int32_t var_44_14 = 0xffffffff
        sub_4a8570(arg3)
    
    if (eax_12 s> 1)
        *((ecx_1 << 2) + &data_151196c) = eax_12
    else
        int32_t var_44_15 = 0xffffffff
        sub_4a8570(arg3)
    
    int32_t var_44_16 = *((ecx_1 << 2) + &data_151196c)
    sub_48a9d0(&var_18, &data_5efc90)
    int32_t var_8_16 = 0xa
    sub_4a8930(&var_18, &data_638768, arg3, &var_18, 0xffffffff)
    int32_t var_8_17 = 0xb
    
    if (data_aca1f4 != 0)
        char* eax_63 = var_18
        
        if (eax_63 != 0 && *eax_63 != 0)
            char* eax_64 = sub_48a080(&var_18)
            int32_t temp7_1 = *(eax_64 + 4)
            *(eax_64 + 4) -= 1
            
            if (temp7_1 == 1)
                sub_4984f0(eax_64, *(eax_64 + 0xc) + 0x10)
    
    int32_t var_8_18 = 0xffffffff
    
    if (eax_13 s> 1)
        *((ecx_1 << 2) + &data_1511958) = eax_13
    else
        int32_t var_44_17 = 0xffffffff
        sub_4a8570(arg3)
    
    int32_t var_44_18 = *((ecx_1 << 2) + &data_1511958)
    int32_t result_1
    sub_48a9d0(&result_1, &data_5efc90)
    int32_t var_8_19 = 0xc
    int32_t result = sub_4a8930(&result_1, &data_6387a0, arg3, &result_1, 0xffffffff)
    int32_t var_8_20 = 0xd
    
    if (data_aca1f4 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp8_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp8_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
