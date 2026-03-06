// 函数名称: sub_48cc60
// 虚拟地址: 0x48cc60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_48cc60(void* arg1)
{
    // 第一条实际指令: uint32_t (* edi)[0x4] = sub_48b1e0()
    uint32_t (* edi)[0x4] = sub_48b1e0()
    uint32_t* ebx = &(*edi)[3]
    uint32_t i_1 = (*(*data_aca1e4 + 0x14))(*(arg1 + 0x10), &(*edi)[0x1fa5], ebx, 0x7e80)
    uint32_t i = i_1
    
    if (i != 0)
        while (i != 0xffffffff)
            int32_t var_24_2
            char* ecx_8
            
            if (i s<= 0)
                char const* const var_20_2 = "NetLocUDPReceive"
                var_24_2 = 0x4de
                ecx_8 = "len > 0"
            else
                *edi = *(arg1 + 0x48)
                (*edi)[2] = i
                
                if (i u< 4)
                    i_1 = 0x3e9
                else
                    i_1 = *ebx
                
                (*edi)[1] = i_1
                
                if (i_1 s<= 0x3e8)
                    char const* const var_20_1 = "NetLocUDPReceive"
                    var_24_2 = 0x4ed
                    ecx_8 = "netMessage->messageType > NETMSG_MIN_VALUE"
                else
                    void* ebx_1 = data_aca0dc
                    int32_t* eax_4 = sub_498440(0xc)
                    eax_4[3] += 1
                    int32_t* ecx_1 = *eax_4
                    
                    if (ecx_1 == 0)
                        sub_4982d0(eax_4)
                        ecx_1 = *eax_4
                    
                    *eax_4 = *ecx_1
                    ecx_1[2] = 0
                    *ecx_1 = edi
                    ecx_1[1] = 0
                    ecx_1[2] = *(ebx_1 + 0x3c)
                    void* eax_7 = *(ebx_1 + 0x3c)
                    
                    if (eax_7 == 0)
                        *(ebx_1 + 0x38) = ecx_1
                    else
                        *(eax_7 + 4) = ecx_1
                    
                    *(ebx_1 + 0x40) += 1
                    *(ebx_1 + 0x3c) = ecx_1
                    edi = sub_48b1e0()
                    ebx = &(*edi)[3]
                    i_1 = (*(*data_aca1e4 + 0x14))(*(arg1 + 0x10), &(*edi)[0x1fa5], ebx, 0x7e80)
                    i = i_1
                    
                    if (i == 0)
                        break
                    
                    continue
            
            sub_489550(i_1, &data_5b2591, ecx_8, "d:\ax\trunk\ax2017\engine\network.cpp", var_24_2, 
                "NetLocUDPReceive")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    
    uint32_t eax_11 = edi[0x7e9][0]
    uint32_t (* var_c)[0x4] = edi
    
    if (eax_11 != 0 && eax_11 != &data_5b2591)
        if (data_aca1f4 != 0 && *eax_11 != 0)
            char* eax_12 = sub_48a080(&edi[0x7e9])
            int32_t temp0_1 = *(eax_12 + 4)
            *(eax_12 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_12, *(eax_12 + 0xc) + 0x10)
        
        edi[0x7e9][0] = &data_5b2591
    
    return sub_4362d0(data_aca0dc + 0x50, &var_c)
}
