// 函数名称: sub_438ea0
// 虚拟地址: 0x438ea0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_438ea0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59dc51
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_214 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*arg1 != 1)
        sub_489550(arg1, &data_5b2591, "handle.gameType == GAME_LOCAL", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x303, "LocalGameLoad")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void var_fc
    sub_437d00(&var_fc, arg1[1])
    int32_t var_8_1 = 0
    char** edi = data_126b94c
    int32_t* i = sub_4d8120(edi, &var_fc)
    int32_t* i_1
    
    if (i == 0)
        int32_t var_8_4 = 1
    label_439356:
        
        if (data_aca1f4 != 0)
            i = i_1
            
            if (i != 0 && *i != 0)
                i = sub_48a080(&i_1)
                int32_t temp0_1 = i[1]
                i[1] -= 1
                
                if (temp0_1 == 1)
                    sub_4984f0(i, i[3] + 0x10)
        
        i.b = 0
    else
        void var_d4
        sub_4d5fd0(i, edi, &var_d4, i, 0)
        sub_4d4bb0(i)
        void var_208
        _memset(&var_208, 0, 0xe4)
        int32_t var_18
        int32_t var_108_1 = var_18
        int32_t var_104_1 = 0
        int32_t var_34
        int32_t var_124_1 = var_34
        int32_t var_e0_1 = 0
        int128_t var_30
        int128_t var_120_1 = var_30
        int64_t var_20
        int64_t var_110_1 = var_20
        
        if (var_34 s> 0)
            void var_c4
            void* edi_1 = &var_c4
            void var_200
            void* esi_1 = &var_200
            int32_t eax_11
            
            do
                _strncpy(esi_1, *(edi_1 - 0x10), 0x10)
                int32_t eax_6 = *(edi_1 - 8)
                edi_1 += 0x20
                *(esi_1 + 0xf) = 0
                *(esi_1 + 0x10) = eax_6
                *(esi_1 + 0x18) = *(edi_1 - 0x20)
                *(esi_1 + 0x1c) = *(edi_1 - 0x1c)
                *(esi_1 + 0x14) = *(edi_1 - 0x24)
                esi_1 += 0x2c
                eax_11 = var_e0_1 + 1
                var_e0_1 = eax_11
            while (eax_11 s< var_34)
        
        __builtin_memcpy(&arg2[2], &var_208, 0x108)
        int32_t* var_f0
        sub_437de0(&var_f0, arg1[1])
        int32_t var_218_3 = 0
        var_8_1.b = 2
        int32_t* var_dc
        char* eax_12 = sub_4cfba0(&var_dc)
        
        if (eax_12.b == 0)
            sub_489550(eax_12, &data_5b2591, "Halt", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x30f, "LocalGameLoad")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t* esi_2 = var_dc
        _fseek(esi_2, 0, 2)
        int32_t* var_224_2 = esi_2
        void* eax_13 = sub_587c01()
        _fclose(esi_2)
        var_dc = nullptr
        uint32_t (* esi_3)[0x4] = sub_4c2e40(eax_13)
        _memset(esi_3, 0, eax_13)
        char* i_2
        char* i_5 = i_2
        var_dc = var_f0
        char* i_4 = i_5
        
        if (i_5 != 0 && *i_5 != 0)
            char* eax_15 = sub_48a080(&i_4)
            *(eax_15 + 4) += 1
        
        void* eax_16 = data_126b950
        var_8_1.b = 3
        int32_t var_218_5 = 0
        int64_t var_e4 = 0
        
        if (sub_4cfba0(&var_e4).b == 0)
            var_8_1.b = 4
        label_4392cc:
            
            if (data_aca1f4 != 0)
                i = i_4
                
                if (i != 0 && *i != 0)
                    i = sub_48a080(&i_4)
                    int32_t temp1_1 = i[1]
                    i[1] -= 1
                    
                    if (temp1_1 == 1)
                        sub_4984f0(i, i[3] + 0x10)
            
            var_8_1.b = 8
            
            if (data_aca1f4 != 0)
                i = i_2
                
                if (i != 0 && *i != 0)
                    i = sub_48a080(&i_2)
                    int32_t temp2_1 = i[1]
                    i[1] -= 1
                    
                    if (temp2_1 == 1)
                        sub_4984f0(i, i[3] + 0x10)
                        i_2 = &data_5b2591
            
            int32_t var_8_3 = 9
            goto label_439356
        
        int32_t* edi_5 = var_e4.d
        _fseek(edi_5, 0, 2)
        int32_t* var_224_3 = edi_5
        int32_t eax_17 = sub_587c01()
        
        if (_fseek(edi_5, 0, 0) != 0)
        label_4392c1:
            var_8_1.b = 5
            goto label_4392cc
        
        i = _fread(esi_3, eax_17, 1, edi_5)
        
        if (i != 1)
            goto label_4392c1
        
        if (sub_4c7140(i, esi_3, esi_3, eax_16, nullptr, eax_17).b == 0)
            var_8_1.b = 6
            goto label_4392cc
        
        _fclose(edi_5)
        var_e4.d = 0
        var_8_1.b = 7
        
        if (data_aca1f4 != 0)
            char* i_6 = i_4
            
            if (i_6 != 0 && *i_6 != 0)
                char* eax_18 = sub_48a080(&i_4)
                int32_t temp3_1 = *(eax_18 + 4)
                *(eax_18 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_4984f0(eax_18, *(eax_18 + 0xc) + 0x10)
                    i_4 = &data_5b2591
        
        i = arg2
        var_8_1.b = 2
        int32_t* i_3 = nullptr
        
        if (i[0x3b] s> 0)
            uint32_t* edi_6 = &(*esi_3)[3]
            void* esi_4 = &i[0x47]
            
            do
                if (*(esi_4 - 0xc) != 0)
                    sub_489550(i, &data_5b2591, "save.logs.logs[i].logBytes == NULL", 
                        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x31c, 
                        "LocalGameLoad")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                *(esi_4 + 4) = edi_6[1]
                uint32_t ecx_13 = *edi_6
                *esi_4 = ecx_13
                
                if (ecx_13 s< 0x1000)
                    ecx_13 = 0x1000
                
                *(esi_4 + 8) = 0
                *(esi_4 - 4) = ecx_13
                char* eax_20 = sub_4c2e40(ecx_13)
                *(esi_4 - 0xc) = eax_20
                sub_579300(eax_20, edi_6[-3], *edi_6)
                i = i_3 + 1
                esi_4 += 0x18
                i_3 = i
                edi_6 = &edi_6[6]
            while (i s< arg2[0x3b])
        
        if (esi_3 != 0)
            _aligned_free_base(esi_3)
        
        var_8_1.b = 0xa
        
        if (data_aca1f4 != 0)
            i = i_2
            
            if (i != 0 && *i != 0)
                i = sub_48a080(&i_2)
                int32_t temp4_1 = i[1]
                i[1] -= 1
                
                if (temp4_1 == 1)
                    sub_4984f0(i, i[3] + 0x10)
                    i_2 = &data_5b2591
        
        int32_t var_8_2 = 0xb
        
        if (data_aca1f4 != 0)
            i = i_1
            
            if (i != 0 && *i != 0)
                i = sub_48a080(&i_1)
                int32_t temp5_1 = i[1]
                i[1] -= 1
                
                if (temp5_1 == 1)
                    sub_4984f0(i, i[3] + 0x10)
        
        i.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return i
}
