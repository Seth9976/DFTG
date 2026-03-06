// 函数名称: sub_4689d0
// 虚拟地址: 0x4689d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4689d0(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59df48
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = sub_46a6a0()
    int32_t var_30_9
    
    if ((eax_3 != 0 && *(eax_3 + 0x1c) == 2) || data_6fadf0 != 0)
    label_468a11:
        
        if (data_1511954 == 0)
            var_30_9 = 0xffffffff
            sub_4a8570(arg1)
        else
            int32_t var_30_1 = 0xffffffff
            sub_4a8570(arg1)
            var_30_9 = 0xffffffff
            sub_4a8570(arg1)
    else if (data_632a09:1.b == 0)
        switch (*(arg2 + 4))
            case 0, 2, 5, 7, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e
                goto label_468a11
            default
                if (sub_45d140() != 0)
                    goto label_468a11
                
                int32_t eax_8 = *(arg2 + 4) - 3
                data_1511954 = 0
                
                if (eax_8 u<= 0x18)
                    uint32_t eax_9 = zx.d(lookup_table_46904c[eax_8])
                    char eax_18
                    
                    switch (eax_9)
                        case 0
                        label_468a8d:
                            int32_t var_30_2 = 0xffffffff
                            data_1511954 = &data_637c08
                            sub_4a8570(arg1)
                        label_468aa8:
                            
                            if (data_632564 == 0)
                                goto label_468da3
                        case 1
                            void* ecx_2 = data_6cfe4c
                            
                            if (ecx_2 == 0)
                                sub_489550(eax_9, &data_5b2591, "gClient", 
                                    "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, 
                                    "GetClient")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            void* eax_10 = sub_452b90(*(ecx_2 + 0xa68))
                            int32_t eax_11 = sub_453510(*eax_10, 3)
                            int32_t eax_12
                            
                            if (eax_11 == 0)
                                eax_12 = sub_452ea0(eax_10, eax_11 + 7)
                            
                            if (eax_11 == 0 && eax_12 == 0)
                                data_1511954 = &data_637c24
                                goto label_468da3
                            
                            if (*(eax_10 + 0x308) + *(eax_10 + 0x300) s<= 0)
                                goto label_468a8d
                            
                            if (sub_453510(*eax_10, 3) == 0)
                                goto label_468a8d
                            
                            goto label_468b3b
                        case 2
                            void* ecx_30 = data_6cfe4c
                            
                            if (ecx_30 == 0)
                                sub_489550(eax_9, &data_5b2591, "gClient", 
                                    "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, 
                                    "GetClient")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            void* eax_32 = sub_452b90(*(ecx_30 + 0xa68))
                            int32_t eax_33 = sub_464830(eax_32)
                            
                            if (sub_460e00(eax_32) s> eax_33)
                                goto label_468b3b
                            
                            if (sub_464830(eax_32) != 0)
                                data_1511954 = &data_637c24
                                goto label_468da3
                            
                            if (*(arg2 + 0xbd0) == 0)
                                data_1511954 = &data_637c24
                                goto label_468da3
                        case 3
                            void* ecx_18 = data_6cfe4c
                            
                            if (ecx_18 != 0)
                                if (sub_453510(*sub_452b90(*(ecx_18 + 0xa68)), 9) != 0)
                                    data_1511954 = &data_637c24
                                    goto label_468da3
                                
                                goto label_468aa8
                            
                            sub_489550(eax_9, &data_5b2591, "gClient", 
                                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, 
                                "GetClient")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        case 4
                            void* ecx_21 = data_6cfe4c
                            
                            if (ecx_21 == 0)
                                sub_489550(eax_9, &data_5b2591, "gClient", 
                                    "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, 
                                    "GetClient")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            void* eax_23 = sub_452b90(*(ecx_21 + 0xa68))
                            int32_t var_30_6 = 0xffffffff
                            data_1511954 = &data_637c78
                            sub_4a8570(arg1)
                            data_6cedf4 = *(eax_23 + 0x800)
                        case 5
                            void* ecx_8 = data_6cfe4c
                            
                            if (ecx_8 == 0)
                                sub_489550(eax_9, &data_5b2591, "gClient", 
                                    "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, 
                                    "GetClient")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            void* eax_16 = sub_452b90(*(ecx_8 + 0xa68))
                            
                            if (sub_45f470(eax_16) == 0)
                            label_468b3b:
                                int32_t var_30_3 = 0xffffffff
                                
                                if (data_632a60 == 0)
                                    data_1511954 = &data_637c40
                                
                                sub_4a8570(arg1)
                            else
                                if (data_632564 == 0)
                                    int32_t var_30_4 = 0xffffffff
                                    sub_4a8570(arg1)
                                
                                eax_18 = sub_453250(eax_16)
                            label_468ba6:
                                
                                if (eax_18 != 0)
                                    data_1511954 = &data_637cb0
                                    goto label_468da3
                        case 6
                            void* ecx_13 = data_6cfe4c
                            
                            if (ecx_13 == 0)
                                sub_489550(eax_9, &data_5b2591, "gClient", 
                                    "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, 
                                    "GetClient")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            void* eax_19 = sub_452b90(*(ecx_13 + 0xa68))
                            
                            if (sub_45f440(eax_19) == 0)
                                goto label_468b3b
                            
                            if (data_632564 == 0)
                                int32_t var_30_5 = 0xffffffff
                                sub_4a8570(arg1)
                            
                            eax_18 = sub_4532b0(eax_19)
                            goto label_468ba6
                        case 7
                            void* ecx_24 = data_6cfe4c
                            
                            if (ecx_24 != 0)
                                if (sub_45f4a0(sub_452b90(*(ecx_24 + 0xa68))) == 0)
                                    goto label_468b3b
                                
                                goto label_468aa8
                            
                            sub_489550(eax_9, &data_5b2591, "gClient", 
                                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, 
                                "GetClient")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        case 8
                            void* ecx_27 = data_6cfe4c
                            
                            if (ecx_27 == 0)
                                sub_489550(eax_9, &data_5b2591, "gClient", 
                                    "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, 
                                    "GetClient")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            int32_t eax_28 = sub_4603d0(sub_452b90(*(ecx_27 + 0xa68)))
                            
                            if (eax_28 == 0)
                                goto label_468b3b
                            
                            if (eax_28 == 1)
                                data_1511954 = &data_637c24
                                goto label_468da3
                            
                            if (eax_28 == 2)
                                goto label_468aa8
                            
                            sub_489550(eax_28 - 2, &data_5b2591, "Halt", 
                                "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x4e08, 
                                "PlayerOKUIUpdate")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        case 9
                            int32_t var_30_7 = 0xffffffff
                            sub_4a8570(arg1)
                        label_468da3:
                            int32_t var_30_8 = 0xffffffff
                            sub_4a8570(arg1)
                        case 0xa
                            if (sub_4539b0(arg2) != 0)
                                goto label_468d6c
                            
                            goto label_468aa8
                        case 0xb
                            if (sub_4538d0(arg2) == 0)
                                goto label_468aa8
                            
                        label_468d6c:
                            data_1511954 = &data_637c40
                            goto label_468da3
                
                if (sub_467300(arg2) != 0)
                    var_30_9 = 0xffffffff
                    sub_4a8570(arg1)
    else
        var_30_9 = 0xffffffff
        sub_4a8570(arg1)
    int32_t var_30_10 = data_6cedf4 + 1
    int32_t result_1
    char** eax_41 = sub_48a9d0(&result_1, "Draw %d")
    int32_t var_8_1 = 0
    int32_t result = sub_4a8930(eax_41, &data_637c94, arg1, eax_41, 0xffffffff)
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
