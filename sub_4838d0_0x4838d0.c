// 函数名称: sub_4838d0
// 虚拟地址: 0x4838d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __convention("regparm")sub_4838d0(int32_t arg1, int32_t* arg2, char** arg3, char arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59e409
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_2c = arg3
    int32_t var_1c = 0
    int32_t eax_4 = arg2[1]
    char* const edi = &data_5b2591
    char* var_18
    sub_48a2c0(&var_18, &data_5b2591)
    int32_t* eax_5 = arg2
    int32_t esi = 0
    int32_t var_8_1 = 1
    
    if (eax_5[4] s> 0)
        void* ecx_1 = &eax_5[2]
        void* var_24_1 = ecx_1
        
        while (true)
            uint32_t edx = eax_5[9]
            int32_t* ecx_3 = data_632804 + (*ecx_1 + 0xbb) * 0xc
            
            if (edx == 0xffffffff)
                int32_t eax_8
                eax_8.b = *(ecx_3 + 7)
                
                if (eax_8.b != 0 && eax_8.b != 1)
                    sub_489550(eax_8, &data_5b2591, "t.side == 0 || t.side == 1", 
                        "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x8cd1, "TileGetName")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                edx = zx.d(eax_8.b)
            
            sub_48a670(&var_18, *(*ecx_3 + (edx << 2)))
            int32_t ecx_5 = arg2[4]
            
            if (esi s< ecx_5 - 1)
                sub_48a670(&var_18, ", ")
                ecx_5 = arg2[4]
            
            if (esi != ecx_5 - 2 || esi s<= 1)
                eax_5 = arg2
            else
                sub_48a670(&var_18, "and ")
                eax_5 = arg2
                ecx_5 = eax_5[4]
            
            var_24_1 += 4
            esi += 1
            
            if (esi s>= ecx_5)
                break
            
            ecx_1 = var_24_1
    
    char* var_14
    sub_4836d0(eax_5, &eax_5[6], &var_14, eax_5[8])
    var_8_1.b = 2
    int32_t eax_14 = *arg2
    
    if (eax_14 u> 5)
        sub_489550(eax_14, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rolllog.cpp", 
            0x314, "MakeDevelopmentSettlementPowerDesc")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    char* esi_1
    bool cond:3_1
    
    switch (eax_14)
        case 0
            if (arg4 == 0)
                sub_48a2c0(arg3, &data_5b2591)
                int32_t var_1c_4 = 1
                var_8_1.b = 9
                
                if (data_aca1f4 != 0)
                    char* eax_26 = var_14
                    
                    if (eax_26 != 0 && *eax_26 != 0)
                        char* eax_27 = sub_48a080(&var_14)
                        int32_t temp1_1 = *(eax_27 + 4)
                        *(eax_27 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            sub_4984f0(eax_27, *(eax_27 + 0xc) + 0x10)
                            var_14 = &data_5b2591
                
                int32_t var_8_5 = 0xa
                goto label_483b03
            
            esi_1 = var_18
            
            if (esi_1 != 0)
                edi = esi_1
            
            char* const var_40_5 = edi
            int32_t var_44_3 = eax_4
            sub_48a9d0(arg3, "returning %d dice to the cup with %s")
            int32_t var_1c_5 = 1
            var_8_1.b = 0xb
            
            if (data_aca1f4 != 0)
                char* eax_28 = var_14
                
                if (eax_28 != 0 && *eax_28 != 0)
                    char* eax_29 = sub_48a080(&var_14)
                    int32_t temp7_1 = *(eax_29 + 4)
                    *(eax_29 + 4) -= 1
                    
                    if (temp7_1 == 1)
                        sub_4984f0(eax_29, *(eax_29 + 0xc) + 0x10)
                        var_14 = &data_5b2591
            
            int32_t var_8_6 = 0xc
            goto label_483a6a
        case 1
            esi_1 = var_18
            char* eax_15 = &data_5b2591
            
            if (esi_1 != 0)
                eax_15 = esi_1
            
            char* var_40_3 = eax_15
            void* const eax_16 = &data_5ee4c8
            
            if (eax_4 s<= 1)
                eax_16 = &data_5b2591
            
            void* const var_44_1 = eax_16
            int32_t var_48_1 = eax_4
            sub_48a9d0(arg3, "gaining %d bonus credit%s {credit} from %s")
            int32_t var_1c_1 = 1
            var_8_1.b = 3
            
            if (data_aca1f4 != 0)
                char* eax_17 = var_14
                
                if (eax_17 != 0 && *eax_17 != 0)
                    char* eax_18 = sub_48a080(&var_14)
                    int32_t temp5_1 = *(eax_18 + 4)
                    *(eax_18 + 4) -= 1
                    
                    if (temp5_1 == 1)
                        sub_4984f0(eax_18, *(eax_18 + 0xc) + 0x10)
                        var_14 = &data_5b2591
            
            int32_t var_8_2 = 4
        label_483a6a:
            
            if (data_aca1f4 != 0 && esi_1 != 0)
                cond:3_1 = *esi_1 == 0
                goto label_483a7a
        case 2
            if (arg4 == 0)
                sub_48a2c0(arg3, &data_5b2591)
                int32_t var_1c_2 = 1
                var_8_1.b = 5
                
                if (data_aca1f4 != 0)
                    char* eax_21 = var_14
                    
                    if (eax_21 != 0 && *eax_21 != 0)
                        char* eax_22 = sub_48a080(&var_14)
                        int32_t temp0_1 = *(eax_22 + 4)
                        *(eax_22 + 4) -= 1
                        
                        if (temp0_1 == 1)
                            sub_4984f0(eax_22, *(eax_22 + 0xc) + 0x10)
                            var_14 = &data_5b2591
                
                int32_t var_8_3 = 6
                goto label_483b03
            
            esi_1 = var_18
            
            if (esi_1 != 0)
                edi = esi_1
            
            char* const var_40_4 = edi
            int32_t var_44_2 = arg2[1]
            sub_48a9d0(arg3, "paying %d less from %s")
            int32_t var_1c_3 = 1
            var_8_1.b = 7
            
            if (data_aca1f4 != 0)
                char* eax_24 = var_14
                
                if (eax_24 != 0 && *eax_24 != 0)
                    char* eax_25 = sub_48a080(&var_14)
                    int32_t temp6_1 = *(eax_25 + 4)
                    *(eax_25 + 4) -= 1
                    
                    if (temp6_1 == 1)
                        sub_4984f0(eax_25, *(eax_25 + 0xc) + 0x10)
                        var_14 = &data_5b2591
            
            int32_t var_8_4 = 8
            goto label_483a6a
        case 3
            void* const eax_30 = &data_5ee4c8
            
            if (eax_4 s<= 1)
                eax_30 = &data_5b2591
            
            void* const var_40_6 = eax_30
            int32_t var_44_4 = eax_4
            sub_48a9d0(arg3, "gaining %d credit%s {credit}")
            int32_t var_1c_6 = 1
            var_8_1.b = 0xd
            
            if (data_aca1f4 != 0)
                char* eax_31 = var_14
                
                if (eax_31 != 0 && *eax_31 != 0)
                    char* eax_32 = sub_48a080(&var_14)
                    int32_t temp2_1 = *(eax_32 + 4)
                    *(eax_32 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_4984f0(eax_32, *(eax_32 + 0xc) + 0x10)
                        var_14 = &data_5b2591
            
            int32_t var_8_7 = 0xe
        label_483b03:
            
            if (data_aca1f4 != 0)
                char* eax_23 = var_18
                
                if (eax_23 != 0)
                    cond:3_1 = *eax_23 == 0
                label_483a7a:
                    
                    if (not(cond:3_1))
                        char* eax_19 = sub_48a080(&var_18)
                        int32_t temp8_1 = *(eax_19 + 4)
                        *(eax_19 + 4) -= 1
                        
                        if (temp8_1 == 1)
                            sub_4984f0(eax_19, *(eax_19 + 0xc) + 0x10)
        case 4
            char* eax_33 = var_14
            
            if (eax_33 != 0)
                edi = eax_33
            
            char* const var_40_7 = edi
            int32_t var_44_5 = sub_483110(arg2[5])
            sub_48a9d0(arg3, "removing a %s die, and gaining %s")
            int32_t var_1c_7 = 1
            var_8_1.b = 0xf
            
            if (data_aca1f4 != 0)
                char* eax_35 = var_14
                
                if (eax_35 != 0 && *eax_35 != 0)
                    char* eax_36 = sub_48a080(&var_14)
                    int32_t temp3_1 = *(eax_36 + 4)
                    *(eax_36 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_4984f0(eax_36, *(eax_36 + 0xc) + 0x10)
                        var_14 = &data_5b2591
            
            int32_t var_8_8 = 0x10
            goto label_483b03
        case 5
            char* eax_37 = var_14
            
            if (eax_37 != 0)
                edi = eax_37
            
            char* const var_40_8 = edi
            sub_48a9d0(arg3, "gaining %s")
            int32_t var_1c_8 = 1
            var_8_1.b = 0x11
            
            if (data_aca1f4 != 0)
                char* eax_38 = var_14
                
                if (eax_38 != 0 && *eax_38 != 0)
                    char* eax_39 = sub_48a080(&var_14)
                    int32_t temp4_1 = *(eax_39 + 4)
                    *(eax_39 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        sub_4984f0(eax_39, *(eax_39 + 0xc) + 0x10)
                        var_14 = &data_5b2591
            
            int32_t var_8_9 = 0x12
            goto label_483b03
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg3
}
