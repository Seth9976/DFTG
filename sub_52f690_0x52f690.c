// 函数名称: sub_52f690
// 虚拟地址: 0x52f690
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_52f690(void* arg1, char* arg2)
{
    // 第一条实际指令: int32_t ebx = *(arg1 + 0x30)
    int32_t ebx = *(arg1 + 0x30)
    char* eax = arg2
    int32_t esi = 0
    char* var_8 = eax
    
    if (ebx s> 0)
        int32_t* ecx = *(arg1 + 0x34)
        int32_t* edi_1 = ecx
        
        while (true)
            char* ecx_2 = **edi_1
            int32_t eax_2
            
            while (true)
                arg2.b = *ecx_2
                char temp0_1 = *eax
                bool c_1 = arg2.b u< temp0_1
                
                if (arg2.b == temp0_1)
                    if (arg2.b == 0)
                        eax_2 = 0
                        break
                    
                    arg2.b = ecx_2[1]
                    char temp1_1 = eax[1]
                    c_1 = arg2.b u< temp1_1
                    
                    if (arg2.b == temp1_1)
                        ecx_2 = &ecx_2[2]
                        eax = &eax[2]
                        
                        if (arg2.b != 0)
                            continue
                        
                        eax_2 = 0
                        break
                
                eax_2 = sbb.d(eax, eax, c_1) | 1
                break
            
            if (eax_2 == 0)
                return ecx[esi]
            
            eax = var_8
            esi += 1
            edi_1 = &edi_1[1]
            
            if (esi s>= ebx)
                break
    
    return 0
}
