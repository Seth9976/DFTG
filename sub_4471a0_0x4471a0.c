// 函数名称: sub_4471a0
// 虚拟地址: 0x4471a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_4471a0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx = arg1
    int32_t ebx = arg1
    int32_t i = 0
    int32_t var_c = ebx
    void* esi_1 = arg2 * 0x1bc + ebx
    
    if (*(esi_1 + 0x164) s<= 0)
        return 
    
    void* eax = esi_1
    void* ecx = esi_1 + 0x29
    void* esi_2 = esi_1 + 0x29
    
    do
        if (*(esi_2 - 4) == 4)
            if (*(ebx + (zx.d(*esi_2) << 2) + 0xc18) == 0)
                char ebx_1 = *(ecx - 1)
                int32_t edx = 0
                
                if ((ebx_1 & 1) != 0 && *ecx == 0)
                    edx = 1
                
                int32_t eax_2 = 0
                
                if ((ebx_1 & 2) != 0)
                    if (*ecx != 1)
                        eax_2 = 1
                    else
                        edx = 1
                
                if ((ebx_1 & 4) != 0)
                    if (*ecx != 2)
                        eax_2 = 2
                    else
                        edx = 1
                
                if ((ebx_1 & 8) != 0)
                    if (*ecx != 3)
                        eax_2 = 3
                    else
                        edx = 1
                
                if ((ebx_1 & 0x10) != 0)
                    if (*ecx != 4)
                        eax_2 = 4
                    else
                        edx = 1
                
                if ((ebx_1 & 0x20) != 0)
                    if (*ecx != 5)
                        eax_2 = 5
                    else
                        edx = 1
                
                if ((ebx_1 & 0x40) != 0)
                    if (*ecx != 6)
                        eax_2 = 6
                    else
                        edx = 1
                
                if (ebx_1 s>= 0)
                    goto label_447292
                
                if (*ecx == 7)
                label_447296:
                    ebx = var_c
                    
                    if (eax_2 != 0 && *(ebx + (eax_2 << 2) + 0xc18) != 0)
                        *ecx = eax_2.b
                else
                    eax_2 = 7
                label_447292:
                    
                    if (edx != 0)
                        goto label_447296
                    
                    ebx = var_c
            
            eax = esi_1
        
        i += 1
        esi_2 += 8
        ecx += 8
    while (i s< *(eax + 0x164))
}
