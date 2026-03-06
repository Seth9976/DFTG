// 函数名称: sub_4997f0
// 虚拟地址: 0x4997f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4997f0(int32_t arg1, int32_t* arg2, int32_t* arg3, char* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) =
        __ehhandler$?wait_for_all@agent@Concurrency@@SAXIPAPAV12@PAW4agent_status@2@I@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_2d8 = arg2
    int32_t* var_2e4 = arg3
    int32_t* var_2e8 = arg3
    int32_t var_2e0 = 0
    int32_t eax_4 = *arg2 - 1
    char* var_2d0 = arg4
    void var_1dc
    void var_168
    void var_f4
    int32_t var_80
    int32_t* result
    
    switch (eax_4)
        case 0, 1, 2, 4, 0xb
            sub_4993c0(arg3, arg2)
        label_49a091:
            result = arg3
            goto label_49a096
        case 6
            arg2[4]
            int32_t* eax_5 = sub_4997f0(arg4, arg5, eax_2)
            int32_t var_8_1 = 0
            *(var_2d8 + 0xc)
            var_8_1.b = 1
            var_2d8 = sub_498fe0(sub_4997f0(var_2d0, arg5))
            var_2d0 = sub_498fe0(eax_5)
            struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_2f8_2)(void* arg1) = sub_498c00
            var_8_1.b = 2
            `eh vector constructor iterator'(&arg3[2], 0x34, 2, sub_498be0)
            char* xmm0_3 = var_2d8
            arg3[1] = 0
            *arg3 = 5
            arg3[4] = xmm0_3
            arg3[5] = var_2d0
            int32_t var_2e0_1 = 2
            sub_48a560(&arg3[8], &arg3[3])
            arg3[9] = arg3[4]
            arg3[9] = arg3[4]
            *(arg3 + 0x24) = *(arg3 + 0x10)
            *(arg3 + 0x24) = *(arg3 + 0x10)
            arg3[0xb] = arg3[6]
            arg3[9] = arg3[4]
            arg3[0xa] = arg3[5]
            arg3[9] = arg3[4]
            arg3[9] = arg3[4]
            arg3[0x1c] = 1
            int32_t var_8_2 = 3
            `eh vector vbase constructor iterator'(&var_1dc, 0x34, 2, sub_498c00)
            int32_t var_8_3 = 4
            `eh vector vbase constructor iterator'(&var_f4, 0x34, 2, sub_498c00)
            result = arg3
        label_49a096:
            fsbase->NtTib.ExceptionList = ExceptionList
            @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
            return result
        case 7
            arg2[5]
            int32_t* eax_15 = sub_4997f0(arg4, arg5, eax_2)
            int32_t var_8_4 = 5
            arg2[4]
            int32_t* eax_16 = sub_4997f0(var_2d0, arg5)
            var_8_4.b = 6
            *(var_2d8 + 0xc)
            var_8_4.b = 7
            var_2d8 = sub_498fe0(sub_4997f0(var_2d0, arg5))
            var_2d0 = sub_498fe0(eax_16)
            int32_t xmm0_9 = sub_498fe0(eax_15)
            struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_2f8_5)(void* arg1) = sub_498c00
            var_8_4.b = 8
            `eh vector constructor iterator'(&arg3[2], 0x34, 2, sub_498be0)
            char* xmm0_10 = var_2d8
            arg3[1] = 0
            *arg3 = 6
            arg3[4] = xmm0_10
            arg3[5] = var_2d0
            int32_t var_2e0_2 = 4
            arg3[6] = xmm0_9
            sub_48a560(&arg3[8], &arg3[3])
            arg3[9] = arg3[4]
            arg3[9] = arg3[4]
            *(arg3 + 0x24) = *(arg3 + 0x10)
            *(arg3 + 0x24) = *(arg3 + 0x10)
            arg3[0xb] = arg3[6]
            arg3[9] = arg3[4]
            arg3[0xa] = arg3[5]
            arg3[9] = arg3[4]
            arg3[9] = arg3[4]
            arg3[0x1c] = 1
            int32_t var_8_5 = 9
            `eh vector vbase constructor iterator'(&var_1dc, 0x34, 2, sub_498c00)
            var_8_5.b = 0xa
            `eh vector vbase constructor iterator'(&var_f4, 0x34, 2, sub_498c00)
            int32_t var_8_6 = 0xb
            `eh vector vbase constructor iterator'(&var_168, 0x34, 2, sub_498c00)
            result = arg3
            goto label_49a096
        case 8
            arg2[6]
            int32_t* eax_26 = sub_4997f0(arg4, arg5, eax_2)
            int32_t var_8_7 = 0xc
            arg2[5]
            int32_t* eax_27 = sub_4997f0(var_2d0, arg5)
            var_8_7.b = 0xd
            arg2[4]
            int32_t* eax_28 = sub_4997f0(var_2d0, arg5)
            var_8_7.b = 0xe
            *(var_2d8 + 0xc)
            var_8_7.b = 0xf
            var_2d8 = sub_498fe0(sub_4997f0(var_2d0, arg5))
            var_2d0 = sub_498fe0(eax_28)
            int32_t xmm0_17 = sub_498fe0(eax_27)
            int32_t xmm0_18 = sub_498fe0(eax_26)
            struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_2f8_8)(void* arg1) = sub_498c00
            var_8_7.b = 0x10
            `eh vector constructor iterator'(&arg3[2], 0x34, 2, sub_498be0)
            char* xmm0_19 = var_2d8
            arg3[1] = 0
            *arg3 = 7
            arg3[4] = xmm0_19
            arg3[5] = var_2d0
            arg3[6] = xmm0_17
            int32_t var_2e0_3 = 8
            arg3[7] = xmm0_18
            sub_48a560(&arg3[8], &arg3[3])
            arg3[9] = arg3[4]
            arg3[9] = arg3[4]
            *(arg3 + 0x24) = *(arg3 + 0x10)
            *(arg3 + 0x24) = *(arg3 + 0x10)
            arg3[0xb] = arg3[6]
            arg3[9] = arg3[4]
            arg3[0xa] = arg3[5]
            arg3[9] = arg3[4]
            arg3[9] = arg3[4]
            arg3[0x1c] = 1
            int32_t var_8_8 = 0x11
            `eh vector vbase constructor iterator'(&var_1dc, 0x34, 2, sub_498c00)
            var_8_8.b = 0x12
            `eh vector vbase constructor iterator'(&var_f4, 0x34, 2, sub_498c00)
            var_8_8.b = 0x13
            `eh vector vbase constructor iterator'(&var_168, 0x34, 2, sub_498c00)
            int32_t var_8_9 = 0x14
            `eh vector vbase constructor iterator'(&var_80, 0x34, 2, sub_498c00)
            result = arg3
            goto label_49a096
        case 9
            char** eax_38 = sub_4991a0(&var_2d8, &arg2[1])
            int32_t var_8_10 = 0x15
            char* const ecx_15 = &data_5b2591
            char* esi_7 = var_2d8
            
            if (esi_7 != 0)
                ecx_15 = esi_7
            
            void* eax_39 = sub_499010(eax_38, var_2d0, ecx_15, arg5)
            
            if (eax_39 == 0)
                if (sub_499080(*arg5, arg5[1]) != 0)
                    char* eax_43 = &data_5b2591
                    
                    if (esi_7 != 0)
                        eax_43 = esi_7
                    
                    char* var_2f8_12 = eax_43
                    int32_t* eax_44 = sub_48a9d0(&var_2d0, "[%s]")
                    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_2f8_13)(void* arg1) =
                        sub_498c00
                    var_8_10.b = 0x18
                    `eh vector constructor iterator'(&arg3[2], 0x34, 2, sub_498be0)
                    int32_t var_2e0_4 = 0x10
                    arg3[1] = 0
                    *arg3 = 0xa
                    sub_48a560(&arg3[3], eax_44)
                    sub_48a560(&arg3[8], &arg3[3])
                    arg3[9] = arg3[4]
                    arg3[9] = arg3[4]
                    *(arg3 + 0x24) = *(arg3 + 0x10)
                    *(arg3 + 0x24) = *(arg3 + 0x10)
                    arg3[0xb] = arg3[6]
                    arg3[9] = arg3[4]
                    arg3[0xa] = arg3[5]
                    arg3[9] = arg3[4]
                    arg3[9] = arg3[4]
                    int32_t var_8_12 = 0x19
                    
                    if (data_aca1f4 != 0)
                        char* eax_54 = var_2d0
                        
                        if (eax_54 != 0 && *eax_54 != 0)
                            char* eax_55 = sub_48a080(&var_2d0)
                            int32_t temp3_1 = *(eax_55 + 4)
                            *(eax_55 + 4) -= 1
                            
                            if (temp3_1 == 1)
                                sub_4984f0(eax_55, *(eax_55 + 0xc) + 0x10)
                                var_2d0 = &data_5b2591
                    
                    int32_t var_8_13 = 0x1a
                    
                    if (data_aca1f4 != 0 && esi_7 != 0 && *esi_7 != 0)
                        char* eax_56 = sub_48a080(&var_2d8)
                        int32_t temp4_1 = *(eax_56 + 4)
                        *(eax_56 + 4) -= 1
                        
                        if (temp4_1 == 1)
                            sub_4984f0(eax_56, *(eax_56 + 0xc) + 0x10)
                    
                    result = arg3
                    goto label_49a096
                
                sub_498d10(arg3, 0x63e518)
                int32_t var_8_14 = 0x1b
            else
                sub_4995d0(arg3, eax_39)
                int32_t var_8_11 = 0x16
            
            if (data_aca1f4 == 0)
                goto label_49a091
            
            if (esi_7 != 0 && *esi_7 != 0)
                char* eax_40 = sub_48a080(&var_2d8)
                int32_t temp2_1 = *(eax_40 + 4)
                *(eax_40 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_4984f0(eax_40, *(eax_40 + 0xc) + 0x10)
            
            goto label_49a091
        case 0xa
            arg2[3]
            sub_4997f0(arg4, arg5, eax_2)
            int32_t var_8_17 = 0x25
            arg2[4]
            sub_4997f0(var_2d0, arg5)
            var_8_17.b = 0x26
            int32_t var_258
            int32_t eax_64 = var_258
            void* eax_63
            void var_2c4
            void var_250
            
            if (eax_64 == 9 || eax_64 == 0xa)
                void var_2cc
                sub_498d10(arg3, &var_2cc)
                var_8_17.b = 0x27
                `eh vector vbase constructor iterator'(&var_2c4, 0x34, 2, sub_498c00)
                struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_2f8_24)(void* arg1) =
                    sub_498c00
                int32_t var_2fc_9 = 2
                int32_t var_8_19 = 0x28
                eax_63 = &var_250
                int32_t var_300_9 = 0x34
            else
                sub_498d10(arg3, &var_258)
                var_8_17.b = 0x29
                `eh vector vbase constructor iterator'(&var_2c4, 0x34, 2, sub_498c00)
                struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_2f8_22)(void* arg1) =
                    sub_498c00
                int32_t var_2fc_8 = 2
                int32_t var_8_18 = 0x2a
                eax_63 = &var_250
                int32_t var_300_8 = 0x34
            `eh vector vbase constructor iterator'(eax_63, 0x34, 2, sub_498c00)
            goto label_49a091
        case 0xc
            arg2[3]
            sub_4997f0(arg4, arg5, eax_2)
            int32_t var_8_15 = 0x1d
            arg2[4]
            sub_4997f0(var_2d0, arg5)
            var_8_15.b = 0x1e
            arg2[5]
            sub_4997f0(var_2d0, arg5)
            struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_2f8_17)(void* arg1) = sub_498c00
            var_8_15.b = 0x1f
            `eh vector constructor iterator'(&var_80, 0x34, 2, sub_498be0)
            var_8_15.b = 0x20
            int32_t var_1d4
            int32_t var_54_1 = var_1d4
            int32_t var_84_1 = 1
            int32_t var_18_1 = 2
            var_80 = 0x3f800000
            int32_t var_fc
            int32_t var_88 = var_fc
            int32_t var_170
            
            if (var_fc != var_170)
                sub_489550(var_fc, &data_5b2591, "first.stateType == second.stateType", 
                    "d:\ax\trunk\ax2017\engine\ui2.cpp", 0xae6, "UI2ExpressionEval")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            int128_t var_160
            int128_t var_ec
            
            if (var_fc == 7)
                int128_t var_78_1 = var_ec
                int128_t var_44_1 = var_160
            else
                if (var_fc != 8)
                    sub_489550(var_fc - 8, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\ui2.cpp", 
                        0xaf2, "UI2ExpressionEval")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                int128_t var_78
                var_78.d = var_ec.d
                int128_t var_44
                var_44.d = var_160.d
            sub_498d10(arg3, &var_88)
            var_8_15.b = 0x21
            `eh vector vbase constructor iterator'(&var_80, 0x34, 2, sub_498c00)
            var_8_15.b = 0x22
            `eh vector vbase constructor iterator'(&var_1dc, 0x34, 2, sub_498c00)
            var_8_15.b = 0x23
            `eh vector vbase constructor iterator'(&var_168, 0x34, 2, sub_498c00)
            struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_2f8_19)(void* arg1) = sub_498c00
            int32_t var_2fc_6 = 2
            int32_t var_8_16 = 0x24
            int32_t var_300_6 = 0x34
            `eh vector vbase constructor iterator'(&var_f4, 0x34, 2, sub_498c00)
            goto label_49a091
    
    sub_489550(eax_4, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\ui2.cpp", 0xb09, 
        "UI2ExpressionEval")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
