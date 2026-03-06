// 函数名称: sub_4f0b40
// 虚拟地址: 0x4f0b40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4f0b40(int32_t arg1, int32_t* arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t eax = 0
    int32_t eax = 0
    int32_t edx = *arg2
    
    if (edx s> 0)
        int32_t* esi_1 = arg2[2]
        
        do
            if (*esi_1 == arg4)
                sub_4f0880(&esi_1[2], arg4, arg3, &esi_1[2])
                int32_t edx_2 = *arg2
                void* eax_4 = arg2[2] - 0x10 + (edx_2 << 4) - esi_1
                
                if (eax_4 s> 0)
                    sub_579300(esi_1, &esi_1[4], eax_4)
                    edx_2 = *arg2
                
                *arg2 = edx_2 - 1
                int32_t eax_6
                
                if (edx_2 == 1)
                    eax_6 = arg2[2]
                    
                    if (eax_6 != 0)
                        _aligned_free_base(eax_6)
                    
                    arg2[2] = 0
                
                eax_6.b = 1
                return eax_6
            
            eax += 1
            esi_1 = &esi_1[4]
        while (eax s< edx)
    
    eax.b = 0
    return eax
}
