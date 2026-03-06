// 函数名称: sub_526a60
// 虚拟地址: 0x526a60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_526a60(void* arg1)
{
    // 第一条实际指令: char* ecx = *(arg1 + 8)
    char* ecx = *(arg1 + 8)
    
    while (true)
        char eax = *ecx
        
        if (eax != 0x20 && eax != 9 && eax != 0xd && eax != 0xa)
            int32_t result = *(arg1 + 4)
            
            if (result != 0 && result != 3)
                if (result != 4)
                    if (result == 1)
                        int32_t* eax_3 = sub_498440(result + 0xf)
                        eax_3[3] += 1
                        int32_t* ecx_4 = *eax_3
                        
                        if (ecx_4 == 0)
                            sub_4982d0(eax_3)
                            ecx_4 = *eax_3
                        
                        *eax_3 = *ecx_4
                        *ecx_4 = zx.o(0)
                        *ecx_4 = *(arg1 + 0xc)
                        ecx_4[1] = *(arg1 + 0x10)
                        ecx_4[3] = *(arg1 + 0x120)
                        void* eax_8 = *(arg1 + 0x120)
                        
                        if (eax_8 == 0)
                            *(arg1 + 0x11c) = ecx_4
                        else
                            *(eax_8 + 8) = ecx_4
                        
                        *(arg1 + 0x124) += 1
                        *(arg1 + 0x120) = ecx_4
                    else if (result != 2)
                        result.b = 0
                        return result
                    
                    return sub_5269a0(arg1)
                
                int32_t* ecx_1 = *(arg1 + 0x120)
                void* eax_1 = ecx_1[3]
                *(arg1 + 0x120) = eax_1
                
                if (eax_1 == 0)
                    *(arg1 + 0x11c) = 0
                else
                    *(eax_1 + 8) = 0
                
                *(arg1 + 0x124) -= 1
                
                if (ecx_1 != 0)
                    sub_4984f0(ecx_1, 0x10)
            
            return sub_5268a0(arg1)
        
        if (eax == 0xa)
            *(arg1 + 0x118) += 1
        
        ecx = &ecx[1]
        *(arg1 + 8) = ecx
}
