// 函数名称: sub_4e1a10
// 虚拟地址: 0x4e1a10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4e1a10(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* edx = data_aca0dc
    int32_t esi = *arg1
    int32_t ecx
    
    if (esi == 0)
        ecx = 0xffffffff
    else
        uint32_t eax_2 = zx.d(esi.w)
        
        if (eax_2 u>= *(edx + 4))
            ecx = 0xffffffff
        else
            void* eax_4 = eax_2 * 0x4c + *edx
            
            if (*(eax_4 + 0x48) != esi)
                ecx = 0xffffffff
            else
                ecx = *(eax_4 + 0x14)
    
    void* eax_5 = arg1[2]
    int32_t ebx
    ebx.b = ecx == 0
    char* ebx_2 = (ebx << 2) + 0xc + arg1
    void* ebx_3 = eax_5 - 4
    
    if (ecx != 0)
        ebx_3 = eax_5
    
    if (ebx_3 u< 0x10)
        sub_489550(eax_5, &data_5b2591, "dataLen >= sizeof(VoipMsgHeader)", 
            "d:\ax\trunk\ax2017\engine\voip.cpp", 0x9f, "VoipServerGotMessage")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t edx_1
    
    if (esi == 0)
        edx_1 = 0xffffffff
    else
        uint32_t eax_6 = zx.d(esi.w)
        
        if (eax_6 u>= *(edx + 4))
            edx_1 = 0xffffffff
        else
            void* eax_8 = eax_6 * 0x4c + *edx
            
            if (*(eax_8 + 0x48) != esi)
                edx_1 = 0xffffffff
            else
                edx_1 = *(eax_8 + 0x14)
    
    void* ebx_4 = nullptr
    int32_t result = data_6ca684 * 9
    int32_t ecx_2 = data_6ca680 + (result << 2)
    
    while (true)
        if (ebx_4 != 0)
            ebx_4 += 0x24
        else
            ebx_4 = data_6ca680
        
        if (ebx_4 u>= ecx_2)
        label_4e1ad3:
            
            if (data_1511ac8 != 0)
                break
            
            data_1511ac8 = 1
            result = sub_4892e0("Server got voip from unknown client")
            break
        
        while ((*(ebx_4 + 0x20) & 0xffff0000) == 0)
            ebx_4 += 0x24
            
            if (ebx_4 u>= ecx_2)
                goto label_4e1ad3
        
        bool cond:1_1
        
        if (edx_1 != 0)
            cond:1_1 = *(ebx_4 + 4) != esi
        else
            result.w = *(arg1 + 0x7e96)
            
            if (result.w != *(ebx_4 + 0xe))
                continue
            else
                result = arg1[0x1fa6]
                cond:1_1 = result != *(ebx_4 + 0x10)
        
        if (not(cond:1_1))
            char* edx_2 = ebx_2
            void* esi_1 = nullptr
            *edx_2 = *ebx_4
            
            while (true)
                if (esi_1 != 0)
                    esi_1 += 0x24
                else
                    esi_1 = data_6ca680
                
                result = data_6ca680 + data_6ca684 * 0x24
                
                if (esi_1 u>= result)
                    break
                
                while ((*(esi_1 + 0x20) & 0xffff0000) == 0)
                    esi_1 += 0x24
                    
                    if (esi_1 u>= result)
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return result
                
                if (*(ebx_4 + 0x1c) == *(esi_1 + 0x1c))
                    if (ebx_4 == esi_1 && data_6ca69c == 0)
                        continue
                    
                    int32_t edi_1 = *(esi_1 + 8)
                    
                    if (edi_1 != 0)
                        if (ebx_3 + 4 s>= 0x280)
                            sub_489550(ebx_3 + 4, &data_5b2591, "packetLength < VOIP_BYTES_PER_FRAME", 
                                "d:\ax\trunk\ax2017\engine\voip.cpp", 0xc8, "VoipServerGotMessage")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        int32_t var_28c = 0xbb9
                        char var_288[0x280]
                        sub_579300(&var_288, edx_2, ebx_3)
                        sub_48bdb0(ebx_3 + 4, esi_1 + 0xc, edi_1, ebx_3 + 4, &var_28c)
                    else
                        int32_t eax_14 = *(esi_1 + 4)
                        void* ecx_8 = data_aca0dc
                        
                        if (eax_14 == 0)
                            continue
                        else
                            uint32_t edx_3 = zx.d(eax_14.w)
                            
                            if (edx_3 u< *(ecx_8 + 4))
                                edx_2 = ebx_2
                                void* edi_3 = edx_3 * 0x4c + *ecx_8
                                
                                if (*(edi_3 + 0x48) != eax_14)
                                    continue
                                else
                                    int32_t var_2a8_1 = 0xbb9
                                    sub_48bc20(sub_48be40(eax_14, ebx_3, edi_3 + 0x3c), ebx_3, 
                                        edi_3 + 0x3c, ebx_2)
                    
                    edx_2 = ebx_2
            
            break
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
