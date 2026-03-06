// 函数名称: sub_48ce10
// 虚拟地址: 0x48ce10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_48ce10(int128_t* arg1)
{
    // 第一条实际指令: int128_t* var_8 = arg1
    int128_t* var_8 = arg1
    
    if (*(arg1 + 0x44) == 0)
        return 
    
    while (true)
        int32_t* esi_1 = *(arg1 + 0x3c)
        char const* const var_20_2
        int32_t var_1c_2
        char const* const var_18_3
        void* const eax
        char* ecx_5
        
        if (esi_1 == 0)
            var_18_3 = "XList<struct NetBuffer *>::GetHead"
            var_1c_2 = 0x53
            var_20_2 = "d:\ax\trunk\ax2017\engine\xlist.h"
            ecx_5 = "mpHead != NULL"
        else
            void* esi_2 = *esi_1
            int32_t ebx_1 = *(esi_2 + 0xfdec)
            
            if (ebx_1 s<= 0)
                var_18_3 = "NetLocTCPSend"
                var_1c_2 = 0x518
                var_20_2 = "d:\ax\trunk\ax2017\engine\network.cpp"
                ecx_5 = "netBuffer->mDataSize > 0"
            else
                int32_t eax_1 = *(arg1 + 0x14)
                
                if (eax_1 == 3 || eax_1 == 4)
                    eax = nullptr
                else
                    eax = (*(*data_aca1e4 + 0x2c))(arg1[1].d, *(esi_2 + 0xfde8) + esi_2, ebx_1)
                    
                    if (eax == 0xffffffff)
                        sub_48b480(arg1)
                        return 
                
                if (*(arg1 + 0x44) s> 0x1388)
                    sub_4892e0("Client stopped receiving data. closing.")
                    (*(*data_aca1e4 + 0x34))(arg1[1].d)
                    sub_48b480(arg1)
                    return 
                
                int32_t ecx_1 = *(esi_2 + 0xfdec)
                
                if (eax s< ecx_1)
                    if (eax s>= 0)
                        *(esi_2 + 0xfde8) += eax
                        *(esi_2 + 0xfdec) = ecx_1 - eax
                        return 
                    
                    var_18_3 = "NetLocTCPSend"
                    var_1c_2 = 0x540
                    var_20_2 = "d:\ax\trunk\ax2017\engine\network.cpp"
                    ecx_5 = "sent >= 0"
                else
                    int32_t* ecx_2 = *(arg1 + 0x3c)
                    void* eax_4 = ecx_2[1]
                    *(arg1 + 0x3c) = eax_4
                    
                    if (eax_4 == 0)
                        arg1[4].d = 0
                    else
                        *(eax_4 + 8) = 0
                    
                    int128_t* esi_3 = *ecx_2
                    *(arg1 + 0x44) -= 1
                    sub_4984f0(ecx_2, 0xc)
                    void* ecx_3 = data_aca0dc
                    var_8 = esi_3
                    eax = sub_4362d0(ecx_3 + 0x44, &var_8)
                    
                    if (*(arg1 + 0x44) == 0)
                        break
                    
                    continue
        
        sub_489550(eax, &data_5b2591, ecx_5, var_20_2, var_1c_2, var_18_3)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
}
