// 函数名称: sub_45ca20
// 虚拟地址: 0x45ca20
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_45ca20(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* ecx = arg1
    int32_t edx = 0
    int32_t* ebx = arg2
    int32_t* var_20 = ecx
    int32_t edi = *(*ecx + 4)
    
    if (edi s> 0)
        int32_t* esi_1 = ebx
        void* ecx_1 = &ecx[0x70]
        
        do
            if (*esi_1 == 1 && *(ecx_1 + 4) s< *ecx_1)
            label_45cb54:
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return edx
            
            edx += 1
            esi_1 = &esi_1[0x70]
            ecx_1 += 0x1bc
        while (edx s< edi)
        
        ecx = var_20
    
    int32_t esi_2 = 0
    
    if (edi s> 0)
        int32_t* eax_4 = ebx
        void* ecx_2 = &ecx[7]
        
        do
            if (*eax_4 == 1)
                void* edx_1 = *ecx_2
                
                if (edx_1 == 0x6214e0)
                    (*(edx_1 + 0xc))(var_20, esi_2)
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return esi_2
            
            esi_2 += 1
            eax_4 = &eax_4[0x70]
            ecx_2 += 0x1bc
        while (esi_2 s< edi)
    
    int32_t esi_3 = 0
    int32_t eax_5 = 0
    int32_t var_1c[0x5]
    
    if (edi s> 0)
        int32_t* ecx_3 = ebx
        void* edx_3 = &var_20[7]
        
        do
            if (*ecx_3 == 1 && *edx_3 == 0x6214f8)
                var_1c[esi_3] = eax_5
                esi_3 += 1
            
            eax_5 += 1
            ecx_3 = &ecx_3[0x70]
            edx_3 += 0x1bc
        while (eax_5 s< edi)
    
    int32_t edi_1 = 0
    char const* const var_38
    int32_t var_34
    char const* const var_30
    void* eax_7
    char* ecx_6
    
    if (esi_3 s<= 0)
    label_45cb22:
        eax_7 = sub_44f8e0(var_20)
        int32_t* esi_4 = data_aca1e8
        
        if (esi_4 != 0)
            if (*esi_4 != 3)
                sub_48d940(esi_4[4])
                sub_48d900(esi_4[3])
            
            if (*esi_4 == 3 || *esi_4 == 3)
                sub_48d8f0()
                noreturn
            
            eax_7 = *var_20
            edx = 0
            int32_t esi_5 = *(eax_7 + 4)
            
            if (esi_5 s> 0)
                void* ecx_14 = &var_20[0x70]
                
                do
                    if (*ebx == 1)
                        eax_7 = *(ecx_14 + 4)
                        
                        if (eax_7 s< *ecx_14)
                            goto label_45cb54
                    
                    edx += 1
                    ebx = &ebx[0x70]
                    ecx_14 += 0x1bc
                while (edx s< esi_5)
            
            var_30 = "general_wait_answer"
            var_34 = 0x2aa6
            ecx_6 = "Halt"
            var_38 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
        else
            var_30 = "xco_yield_android10"
            var_34 = 0x128
            var_38 = "d:\ax\trunk\ax2017\engine\coroutine.cpp"
            ecx_6 = "g_current_coroutine"
    else
        while (true)
            int32_t ecx_4 = var_1c[edi_1]
            eax_7 = var_20[1]
            
            if (*((ecx_4 << 3) + &data_a75620) == eax_7 && *((ecx_4 << 3) + &data_a75620:4) != 0)
                var_30 = "network_wait_multiple"
                var_34 = 0x284d
                ecx_6 = "thread.queuedActiveTurn[who].gameId != g->game_id || thread."
                "queuedActiveTurn[who].type == WAIT_NONE"
                break
            
            *((ecx_4 << 3) + &data_a75620) = eax_7
            *((ecx_4 << 3) + &data_a75620:4) = 2
            sub_45c030()
            edi_1 += 1
            
            if (edi_1 s>= esi_3)
                goto label_45cb22
        
        var_38 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
    
    sub_489550(eax_7, &data_5b2591, ecx_6, var_38, var_34, var_30)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
