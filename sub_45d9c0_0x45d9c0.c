// 函数名称: sub_45d9c0
// 虚拟地址: 0x45d9c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_45d9c0(int32_t* arg1, int64_t* arg2)
{
    // 第一条实际指令: int32_t i_1
    int32_t i_1
    int32_t eax_1 = __security_cookie ^ &i_1
    
    if (data_632808 != 0)
        sub_48db10(&data_632808)
    
    sub_45e1a0()
    int32_t esi = 0
    int32_t ecx = 0
    data_632810 = 0
    int32_t edx = arg1[0x3b]
    
    if (edx s> 0)
        void* eax_2 = &arg1[0x48]
        
        do
            if (*eax_2 != 0)
                esi = 2
                data_632810 = 2
                break
            
            ecx += 1
            eax_2 += 0x18
        while (ecx s< edx)
    
    data_632814.q = *arg2
    data_63281c = arg2[1].d
    
    if (esi != 0)
        int32_t var_6c[0xc]
        sub_4c5670(data_126be20, &var_6c)
        sub_4c5920(&var_6c)
    else
        int32_t var_9c[0xc]
        sub_4c5670(data_126be1c, &var_9c)
        sub_4c5920(&var_9c)
        arg1[0x41] = 1
    
    int32_t var_3c[0xc]
    sub_4c5670(data_126be24, &var_3c)
    sub_4c5920(&var_3c)
    void* eax_5 = arg1[0x3e] - 0x64
    
    if (eax_5 u<= 0xd)
        data_632820 = 0
        data_62b1d0 = 0x20
        data_632810 = 2
    
    void* esi_1 = data_6cfe4c
    char const* const var_bc_1
    int32_t var_b8_1
    char const* const var_b4_1
    char* ecx_7
    
    if (esi_1 != 0)
        *(esi_1 + 0xa68) = 0xffffffff
        int32_t* ecx_8 = &data_1510b68
        bool cond:1_1 = data_632810 == 0
        data_632a04 = 0
        data_632a08 = cond:1_1
        data_63280c = arg1
        data_632804 = &data_1510b68
        int32_t i = 0
        data_1510b6c = *arg1
        data_15117b0 = &data_61ff54
        i_1 = 0
        
        if (arg1[0x3b] s> 0)
            void* esi_2 = &arg1[0xa]
            
            do
                eax_5 = *(esi_2 - 4)
                int32_t edi_1 = *(esi_2 + 4)
                
                if (eax_5 != 0)
                    void* ecx_9
                    
                    if (eax_5 != 3)
                        void* eax_8
                        
                        if (eax_5 == 1)
                            eax_8 = sub_437f10(*(data_6d00d8 + 0xbe4))
                            i = i_1
                        
                        if (eax_5 != 1 || *esi_2 == *(eax_8 + 0x230))
                            ecx_9 = edi_1 * 0x1bc
                            *(ecx_9 + 0x1510b84) = 0x6214e0
                        else
                            ecx_9 = edi_1 * 0x1bc
                            *(ecx_9 + 0x1510b84) = 0x6214f8
                        
                        *(ecx_9 + 0x1510b88) = 0
                    else
                        ecx_9 = edi_1 * 0x1bc
                        *(ecx_9 + 0x1510b84) = &data_6214c8
                        *(ecx_9 + 0x1510b88) = 1
                        *(ecx_9 + 0x1510d34) = *esi_2
                    
                    *(ecx_9 + 0x1510b80) = esi_2 - 0x18
                else if (edi_1 != 0xffffffff)
                    var_b4_1 = "RollGameSetupPlayersLocal"
                    var_b8_1 = 0x2b16
                    ecx_7 = "who == PLAYER_NONE"
                    goto label_45dd39
                
                i += 1
                esi_2 += 0x2c
                i_1 = i
            while (i s< arg1[0x3b])
            
            ecx_8 = data_632804
        
        void* var_b4_2 = &arg1[0x3c]
        data_632808 = sub_45cc10(&arg1[0x3c], arg1, ecx_8, (arg1[0x3b]).b, arg1[0x3c])
        sub_47df40()
        
        if (data_632a64 != 0xffffffff && sub_45c330() != 0)
            eax_5 = data_6cfe4c
            
            if (eax_5 == 0)
                goto label_45dad2
            
            int32_t ecx_13 = data_632a64
            
            if (ecx_13 != *(eax_5 + 0xa68))
                sub_421710(ecx_13)
            
            data_632a64 = 0xffffffff
        
        eax_5 = data_632590
        bool cond:2_1 = data_632a08 != 0
        data_632810 = 1
        
        if (cond:2_1)
            eax_5 = nullptr
        
        data_632590 = eax_5
        
        if (*(esi_1 + 0xa68) != 0xffffffff)
        label_45dd01:
            void* result = sub_46a6a0()
            
            if (result != 0 && *(result + 0x1c) == 1)
                result = sub_46a060()
            
            @__security_check_cookie@4(eax_1 ^ &i_1)
            return result
        
        int32_t edi_2 = 0
        
        if (arg1[0x3b] s> 0)
            void* esi_3 = &arg1[0xa]
            
            while (true)
                if (*(esi_3 - 4) == 1)
                    eax_5 = sub_437f10(*(data_6d00d8 + 0xbe4))
                
                if (*(esi_3 - 4) == 1 && *esi_3 == *(eax_5 + 0x230))
                    sub_421710(*((edi_2 + 1) * 0x2c + arg1))
                    break
                
                if (*(esi_3 - 4) == 0x3e8)
                    eax_5 = sub_437f10(*(data_6d00d8 + 0xbe4))
                    
                    if (*esi_3 == *(eax_5 + 0x240))
                        sub_421710(*((edi_2 + 1) * 0x2c + arg1))
                        break
                
                edi_2 += 1
                esi_3 += 0x2c
                
                if (edi_2 s>= arg1[0x3b])
                    goto label_45dd2a
            
            goto label_45dd01
        
    label_45dd2a:
        var_b4_1 = "GetLocalWho"
        var_b8_1 = 0x2ab9
        ecx_7 = "Halt"
    label_45dd39:
        var_bc_1 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
    else
    label_45dad2:
        var_b4_1 = "GetClient"
        var_b8_1 = 0x75
        var_bc_1 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_7 = "gClient"
    
    sub_489550(eax_5, &data_5b2591, ecx_7, var_bc_1, var_b8_1, var_b4_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
