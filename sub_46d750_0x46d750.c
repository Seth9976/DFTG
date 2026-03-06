// 函数名称: sub_46d750
// 虚拟地址: 0x46d750
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_46d750(int32_t* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_59dd08
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_10c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_8c = arg1
    void* eax_3 = data_aca1ec
    int32_t var_a0 = 0
    int32_t var_9c = 0
    int32_t var_98 = _mm_cvtepi32_ps(zx.o(*(eax_3 + 0x14)))
    int32_t eax_4 = arg1[0x1aa]
    int32_t var_94 = _mm_cvtepi32_ps(zx.o(*(eax_3 + 0x18)))
    int32_t result
    int32_t eax_6
    int32_t ecx_4
    
    if (eax_4 s> 0)
    label_46d84f:
        ecx_4 = arg1[0xb7]
    label_46d855:
        eax_6 = sub_425f20(ecx_4)
        
        if (eax_6 != 0)
            goto label_46d869
        
    label_46d8c0:
        
        if (sub_4543d0(arg1) != 6)
            sub_49ec40(&var_a0, &arg1[1], "double tile ui", data_126c258, &var_a0, &var_a0, 
                sub_46c270(var_8c, 0), 1, 1)
            
            if (*(sub_438600() + 0x24) == 1)
                int32_t var_110_1 = 0xffffffff
                sub_4a8570(arg1[1])
            
            void* eax_13 = data_6d00d0
            
            if (eax_13 == 0)
                sub_489550(eax_13, &data_5b2591, "gGameSettings.localSettings", 
                    "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, 
                    "GetLocalSettings")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            eax_13.b = *(eax_13 + 0x2c)
            int32_t var_110_2 = 0xffffffff
            sub_4a8570(arg1[1])
            
            if (sub_46a6a0() != 0)
                int32_t var_110_3 = 0xffffffff
                sub_4a8570(arg1[1])
            
            int32_t var_110_4 = 0xffffffff
            *(sub_438600() + 0xc)
            sub_4a8570(arg1[1])
            int32_t* esi_2 = var_8c
            int32_t var_90_1 = 0
            int32_t eax_17
            int32_t edx_9
            eax_17, edx_9 = sub_46ce40(esi_2)
            
            if (eax_17 != 4)
                var_90_1 = eax_17
                eax_17 = 0
            
            switch (eax_17)
                case 9
                    int32_t var_110_5 = 0xffffffff
                    edx_9 = sub_4a8570(arg1[1])
            
            if (var_90_1 u> 9)
                sub_489550(var_90_1, &data_5b2591, "Halt", 
                    "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x5f27, "DeclareDoubleTile")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            switch (var_90_1)
                case 9
                    int32_t var_110_6 = 0xffffffff
                    edx_9 = sub_4a8570(arg1[1])
            
            void var_100
            int128_t* eax_20 = sub_454ba0(&var_100, edx_9, esi_2, &var_100)
            int32_t ecx_18 = arg1[1]
            int128_t var_88 = *eax_20
            int128_t var_78_1 = eax_20[1]
            int128_t var_68_1 = eax_20[2]
            int128_t var_58_1 = eax_20[3]
            int128_t var_48_1 = eax_20[4]
            int128_t var_38_1 = eax_20[5]
            sub_4a8700(ecx_18, &var_88)
            int32_t var_110_8 = 0xffffffff
            sub_4a8570(arg1[1])
            void* eax_21 = esi_2[0xc]
            int32_t var_110_9 = esi_2[0x1aa]
            sub_48a9d0(&var_8c, &data_5efc90)
            int32_t var_14_1 = 0
            sub_4a8930(&var_8c, &data_639744, arg1[1], &var_8c, 0xffffffff)
            int32_t var_14_2 = 1
            
            if (data_aca1f4 != 0)
                int32_t* eax_23 = var_8c
                
                if (eax_23 != 0 && *eax_23 != 0)
                    char* eax_24 = sub_48a080(&var_8c)
                    int32_t temp0_1 = *(eax_24 + 4)
                    *(eax_24 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_4984f0(eax_24, *(eax_24 + 0xc) + 0x10)
                        var_8c = &data_5b2591
            
            int32_t var_14_3 = 0xffffffff
            sub_4543d0(esi_2) != 1 && esi_2[0x1aa] s> 0 && esi_2[0xdf] != 1
            int32_t var_110_10 = 0xffffffff
            sub_4a8570(arg1[1])
            *(eax_21 + 0xc)
            int32_t var_110_11 = 0xffffffff
            sub_4a8570(arg1[1])
            sub_4a4740(arg1[1], 0, data_620d84)
            result = arg1[1]
        else
            sub_49a5a0(&arg1[1])
            result = sub_46c4e0(arg1, nullptr)
    else if (arg1[0x5d] != 1 || arg1[0x77] != 0 || (*arg1 == 0 && arg1[0xd] == 2))
        if (eax_4 != 0)
            goto label_46d84f
        
        if (arg1[0x5d] == 1)
            ecx_4 = arg1[0x76]
            goto label_46d855
        
        int32_t eax_5 = *arg1
        
        if (eax_5 == 0)
            ecx_4 = arg1[0xf]
            goto label_46d855
        
        if (eax_5 == 1)
            ecx_4 = arg1[6]
            goto label_46d855
        
        eax_6 = 0xffffffff
    label_46d869:
        
        if (eax_6 != data_6327d4 || *arg1 != 0)
            if (arg1[0x1aa] != 0)
                goto label_46d8c0
        else if (arg1[0xd] == 3 || arg1[0x1aa] != 0)
            goto label_46d8c0
        
        int32_t eax_7
        
        if (arg1[0x5d] == 1)
            eax_7 = arg1[0x77]
        
        if (arg1[0x5d] != 1 || eax_7 == 3 || eax_7 == 4)
            int32_t eax_8 = arg1[0xd]
            
            if (eax_8 != 4 && eax_8 != 5)
                goto label_46d8c0
            
            int32_t ecx_5 = arg1[0x77]
            
            if (ecx_5 == 3 || ecx_5 == 4 || eax_8 == 3)
                goto label_46d8c0
            
            sub_49a5a0(&arg1[1])
            result = arg1[1]
        else
            if (arg1[0xd] == 3)
                goto label_46d8c0
            
            sub_49a5a0(&arg1[1])
            result = arg1[1]
    else
        sub_49a5a0(&arg1[1])
        result = arg1[1]
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
