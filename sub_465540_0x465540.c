// 函数名称: sub_465540
// 虚拟地址: 0x465540
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_465540(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    void* result = __security_cookie ^ &__saved_ebp
    void* result_2 = result
    void* ecx = data_6cfe4c
    char const* const var_d0_1
    int32_t var_cc
    char const* const var_c8_1
    char* ecx_1
    
    if (ecx != 0)
        result = sub_452b90(*(ecx + 0xa68))
        int32_t ecx_3 = data_632564
        void* result_1 = result
        
        if (ecx_3 == 0)
            @__security_check_cookie@4(result_2 ^ &__saved_ebp)
            return result
        
        uint32_t edx_1 = zx.d(ecx_3.w)
        
        if (edx_1 u>= data_62d6c8)
        label_465910:
            var_c8_1 = "DataArray<struct RollGfx>::DataArrayGet"
            var_cc = 0x6d
            ecx_1 = "DataArrayTryToGet(id) != NULL"
            var_d0_1 = "d:\ax\trunk\ax2017\engine\dataarray.h"
        else
            int32_t edi_1 = data_62d6c4
            result = edx_1 * 0x8ac
            
            if (*(result + edi_1 + 0x8a8) != ecx_3)
                goto label_465910
            
            int32_t* ebx_2 = edx_1 * 0x8ac + edi_1
            int32_t edi_2 = 0
            
            if (*ebx_2 == 1)
                edi_2 = ebx_2[4]
            
            result = sub_453650(result_1)
            
            if (result u<= 0x1e)
                result = zx.d(*(result + &lookup_table_465978))
                int32_t var_c8_6
                int32_t var_c8_28
                int32_t ecx_23
                
                switch (result)
                    case nullptr
                        @__security_check_cookie@4(result_2 ^ &__saved_ebp)
                        return result
                    case 1
                        int32_t var_c8_13 = 0xffffffff
                        sub_4a8570(arg1)
                        int32_t var_c8_14 = 0xffffffff
                        sub_4a8570(arg1)
                        int32_t var_c8_15 = 0xffffffff
                    label_465658:
                        ecx_23 = arg1
                    label_46565a:
                        result = sub_4a8570(ecx_23)
                        @__security_check_cookie@4(result_2 ^ &__saved_ebp)
                        return result
                    case 2
                        int32_t var_c8_2 = 0xffffffff
                        sub_4a8570(arg1)
                        
                        if (edi_2 != 3)
                            if (edi_2 != 7)
                                var_c8_6 = 0xffffffff
                                goto label_465658
                            
                            int32_t var_c8_3 = 0xffffffff
                            sub_4a8570(arg1)
                            void var_b4
                            sub_474730(&var_b4, ebx_2, result_1, &var_b4)
                    case 3
                        int32_t var_c8_7 = 0xffffffff
                        sub_4a8570(arg1)
                        int32_t var_c8_8 = 0xffffffff
                        sub_4a8570(arg1)
                        void var_ac
                        sub_452ea0(result_1, sub_45e6c0(result_1, &var_ac) + 7)
                        int32_t var_c8_9 = 0xffffffff
                        goto label_465658
                    case 4
                        if (edi_2 != 9)
                            int32_t var_c8_10 = 0xffffffff
                            sub_4a8570(sub_426ed0(0x1514034, arg1, "tbl_trays_explore", 0))
                        
                        int32_t var_c8_11 = 0xffffffff
                        sub_4a8570(arg1)
                        int32_t var_c8_12 = 0xffffffff
                        goto label_465658
                    case 5
                        var_c8_28 = 0xffffffff
                        goto label_465658
                    case 6
                        if (edi_2 != 0xa)
                            int32_t var_c8_16 = 0xffffffff
                            sub_4a8570(sub_426ed0(0x1514058, arg1, "tbl_trays_develop", 0))
                        
                        int32_t var_c8_17 = 0xffffffff
                        sub_4a8570(arg1)
                        int32_t var_c8_18 = 0xffffffff
                        goto label_465658
                    case 7
                        if (edi_2 != 0xb)
                            int32_t var_c8_19 = 0xffffffff
                            sub_4a8570(sub_426ed0(0x151407c, arg1, "tbl_trays_settle", 0))
                        
                        int32_t var_c8_20 = 0xffffffff
                        sub_4a8570(arg1)
                        int32_t var_c8_21 = 0xffffffff
                        goto label_465658
                    case 8
                        if (edi_2 == 0xc)
                            @__security_check_cookie@4(result_2 ^ &__saved_ebp)
                            return result
                        
                        int32_t var_c8_22 = 0xffffffff
                        ecx_23 = sub_426ed0(0x15140a0, arg1, "tbl_trays_produce", 0)
                        goto label_46565a
                    case 9
                        int32_t ecx_24 = data_632564
                        
                        if (ecx_24 != 0)
                            uint32_t edx_27 = zx.d(ecx_24.w)
                            
                            if (edx_27 u>= data_62d6c8)
                                goto label_465910
                            
                            int32_t ebx_4 = data_62d6c4
                            result = edx_27 * 0x8ac
                            
                            if (*(result + ebx_4 + 0x8a8) != ecx_24)
                                goto label_465910
                            
                            result = edx_27 * 0x8ac
                            
                            if (*(result + ebx_4) == 2)
                                int32_t var_c8_23 = 0xffffffff
                                sub_4a8570(arg1)
                                int32_t var_c8_24 = 0xffffffff
                                sub_4a8570(arg1)
                                int32_t var_c8_25 = 0xffffffff
                                goto label_465658
                        
                        if (edi_2 == 0xd)
                            @__security_check_cookie@4(result_2 ^ &__saved_ebp)
                            return result
                        
                        int32_t var_c8_26 = 0xffffffff
                        ecx_23 = sub_426ed0(0x15140c4, arg1, "tbl_trays_ship", 0)
                        goto label_46565a
                    case 0xa
                        int32_t var_c8_27 = 0xffffffff
                        sub_4a8570(arg1)
                        var_c8_28 = 0xffffffff
                        goto label_465658
                    case 0xb
                        int32_t var_c8_33 = 0xffffffff
                        sub_4a8570(arg1)
                    case 0xc
                        int32_t var_c8_29 = 0xffffffff
                        sub_4a8570(arg1)
                        int32_t var_c8_30 = 0xffffffff
                        sub_4a8570(arg1)
                        int32_t var_c8_31 = 0xffffffff
                        sub_4a8570(arg1)
                        int32_t var_c8_32 = 0xffffffff
                        goto label_465658
                    case 0xd
                        goto label_4658fa
                
                int32_t var_c8_5 = 0xffffffff
                sub_4a8570(arg1)
                var_c8_6 = 0xffffffff
                goto label_465658
            
        label_4658fa:
            var_c8_1 = "UpdateDropStates"
            var_cc = 0x452e
            var_d0_1 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
            ecx_1 = "Halt"
    else
        var_c8_1 = "GetClient"
        var_cc = 0x75
        var_d0_1 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_1 = "gClient"
    
    sub_489550(result, &data_5b2591, ecx_1, var_d0_1, var_cc, var_c8_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
