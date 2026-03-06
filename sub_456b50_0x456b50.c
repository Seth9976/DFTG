// 函数名称: sub_456b50
// 虚拟地址: 0x456b50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_456b50(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_1fc
    int32_t* var_1fc
    int32_t eax_1 = __security_cookie ^ &var_1fc
    int32_t var_c = eax_1
    var_1fc = arg1
    char const* const var_214_1
    int32_t var_210_1
    char const* const var_20c
    char* ecx
    
    if (*arg1 == 2)
        int32_t var_3c[0xc]
        sub_4c5670(data_126be00, &var_3c)
        eax_1 = sub_4c5920(&var_3c)
        void* ecx_3 = data_6cfe4c
        
        if (ecx_3 != 0)
            void* eax_2
            int32_t ecx_5
            eax_2, ecx_5 = sub_452b90(*(ecx_3 + 0xa68))
            int32_t* edi_1 = eax_2
            eax_1 = arg1[0x12]
            int32_t* ecx_15
            int32_t* edx_5
            
            if (eax_1 u> 3)
                var_20c = "RollHandleAutoLinkOne"
                var_210_1 = 0x1098
                ecx = "Halt"
            else
                switch (eax_1)
                    case 0
                        int32_t* eax_3 = sub_452c30(arg1[0x15])
                        int32_t* eax_4
                        int32_t edx_2
                        eax_4, edx_2 = sub_452c30(arg1[0x14])
                        uint32_t var_1f0[0x9][0x4]
                        void var_160
                        __builtin_memcpy(&var_160, 
                            sub_461900(&var_1f0, edx_2, edi_1, &var_1f0, eax_3, 0), 0x90)
                        void var_d0
                        __builtin_memcpy(&var_1f0, sub_461720(&var_d0, eax_4, edi_1, &var_d0, eax_3), 
                            0x90)
                        uint32_t eax_9 = var_1f0[0][0]
                        int32_t ecx_11 = 0xa - edi_1[0xc2] - edi_1[0xc0]
                        int32_t var_15c
                        
                        if (var_15c s< ecx_11)
                            ecx_11 = var_15c
                        
                        if (eax_9 s>= 3)
                        label_456ca5:
                            edx_5 = var_1fc
                            int32_t var_20c_4 = ecx_11
                            ecx_15 = edi_1
                        else
                            if (ecx_11 s>= 5)
                                int32_t var_20c_3 = ecx_11
                                int32_t eax_10 = sub_467830(edi_1, var_1fc)
                                @__security_check_cookie@4(var_c ^ &var_1fc)
                                return eax_10
                            
                            if (eax_9 s>= 2)
                                goto label_456ca5
                            
                            edx_5 = var_1fc
                            int32_t var_20c_5 = ecx_11
                            ecx_15 = edi_1
                            
                            if (ecx_11 s>= 2)
                                int32_t eax_12 = sub_467830(ecx_15, edx_5)
                                @__security_check_cookie@4(var_c ^ &var_1fc)
                                return eax_12
                        
                        goto label_456cac
                    case 1
                        int32_t var_20c_7 = ecx_5
                        int32_t eax_13 = sub_467830(edi_1, arg1)
                        @__security_check_cookie@4(var_c ^ &var_1fc)
                        return eax_13
                    case 2, 3
                        int32_t var_20c_6 = ecx_5
                        edx_5 = arg1
                        ecx_15 = edi_1
                    label_456cac:
                        int32_t eax_11 = sub_467b50(ecx_15, edx_5)
                        @__security_check_cookie@4(var_c ^ &var_1fc)
                        return eax_11
            var_214_1 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
        else
            var_20c = "GetClient"
            var_210_1 = 0x75
            var_214_1 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
            ecx = "gClient"
    else
        var_20c = "RollHandleAutoLinkOne"
        var_210_1 = 0x106d
        ecx = "gfx.type == ROLLGFX_TRAY_SHIPPING"
        var_214_1 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
    
    sub_489550(eax_1, &data_5b2591, ecx, var_214_1, var_210_1, var_20c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
