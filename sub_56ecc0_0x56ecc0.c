// 函数名称: sub_56ecc0
// 虚拟地址: 0x56ecc0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_56ecc0(void* arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t eax = arg2[5]
    int32_t eax = arg2[5]
    int32_t ebx = *(arg1 + 0x10)
    int32_t* esi = *(eax + (ebx << 2))
    void* edx = esi[1]
    
    if (*(edx + 0x6c) != 0)
        eax = arg4
        
        if (arg5 != 1 || eax != 0)
            int32_t* edx_2 = *(arg1 + 0xc)
            
            if (*edx_2 f<= arg3)
                int32_t ecx_1 = *(arg1 + 8)
                int32_t eax_7 = ecx_1 << 2
                
                if (not(arg3 f>= *(eax_7 + edx_2 - 4)))
                    eax_7 = sub_56dac0(*(arg1 + 0xc), ecx_1, arg3) << 2
                
                char* eax_9 = *(*(arg1 + 0x14) + eax_7 - 4)
                
                if (eax_9 == 0)
                label_56ed94:
                    eax = 0
                else
                    eax = sub_533580(eax_9, ebx, arg2, eax_9)
                
            label_56ed96:
                
                if (eax != esi[7])
                    esi[7] = eax
                    eax = *(*(esi[1] + 4) + 0x48)
                    esi[9] = 0
                    esi[0xb] = eax
            else if (eax == 0 || eax == 1)
                char* eax_6 = *(*esi + 0xc)
                
                if (eax_6 == 0)
                    goto label_56ed94
                
                eax = sub_533580(eax_6, ebx, arg2, eax_6)
                goto label_56ed96
        else
            char* eax_2 = *(*esi + 0xc)
            
            if (eax_2 == 0)
                eax = 0
            else
                eax = sub_533580(eax_2, ebx, arg2, eax_2)
                edx = esi[1]
            
            if (eax != esi[7])
                esi[7] = eax
                int32_t eax_4 = *(*(edx + 4) + 0x48)
                esi[9] = 0
                esi[0xb] = eax_4
                return eax_4
    
    return eax
}
