// 函数名称: sub_441520
// 虚拟地址: 0x441520
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_441520(int32_t arg1, void* arg2, int32_t arg3, int32_t* arg4, int32_t* arg5, int32_t* arg6, int32_t* arg7)
{
    // 第一条实际指令: int32_t edi = 0
    int32_t edi = 0
    int32_t eax_1 = arg2 * 0x1bc + arg3
    int32_t var_8 = 0
    void* eax_2 = data_130461c
    int32_t ecx = *(eax_2 + 0x1e8)
    int32_t var_14 = ecx
    
    if (ecx s> 0)
        arg2 = eax_2 + 0x148
        int32_t* ebx_1 = arg6
        int32_t* eax_4 = eax_2 - arg2 + 0xa8
        int32_t esi_2 = *arg7
        
        do
            eax_2 = nullptr
            
            if (esi_2 s> 0)
                do
                    int32_t ecx_2 = ebx_1[eax_2]
                    
                    if (*(eax_4 + arg2) == ecx_2)
                        ebx_1 = arg6
                        
                        if (*arg2 == zx.d(*(arg3 + ecx_2 * 0xc + 0x8cc)))
                            break
                    
                    eax_2 += 1
                while (eax_2 s< esi_2)
                
                edi = var_8
                ecx = var_14
            
            if (eax_2 != esi_2)
                int32_t ecx_5 = 0
                *ebx_1 = ebx_1[eax_2]
                int32_t* eax_6 = arg5
                int32_t edx = *eax_6
                
                if (edx s> 0)
                    while (true)
                        int32_t esi_3 = arg4[ecx_5]
                        
                        if (zx.d(*(eax_1 + (esi_3 << 3) + 0x24)) == *(data_130461c + (edi << 2) + 8))
                            eax_6 = arg5
                            *arg4 = esi_3
                            edx = *eax_6
                            break
                        
                        ecx_5 += 1
                        
                        if (ecx_5 s>= edx)
                            eax_6 = arg5
                            break
                
                if (ecx_5 == edx)
                    sub_4394f0(eax_6, edx, ecx_5, "Couldn't find die from produce!\n")
                    _exit(1)
                    noreturn
                
                if (edx != 1 && *arg7 != 1)
                    *arg7 = 1
                    *eax_6 = 1
                    return 0
                
                *arg7 = 1
                *eax_6 = 1
                return 1
            
            edi += 1
            arg2 += 4
            var_8 = edi
        while (edi s< ecx)
    
    sub_4394f0(eax_2, arg2, ecx, "Couldn't find tile from produce plan!\n")
    _exit(1)
    noreturn
}
