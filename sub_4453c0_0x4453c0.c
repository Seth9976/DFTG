// 函数名称: sub_4453c0
// 虚拟地址: 0x4453c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4453c0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t result = 0
    int32_t var_8_1 = arg3
    int32_t i = *(arg2 * 0x1bc + arg3 + 0x170)
    
    while (i != 0xffffffff)
        int32_t eax_2 = (i + 0xbb) * 3
        int32_t* edi_1 = arg3 + (eax_2 << 2)
        
        if (*(arg3 + (eax_2 << 2) + 7) == 0)
            void* eax_3 = *edi_1
            int32_t j_1 = *(eax_3 + 0x34)
            
            if (j_1 s> 0)
                void* eax_4 = eax_3 + 0x38
                int32_t j
                
                do
                    if (*eax_4 == arg5 && *(edi_1 + 9) == 0)
                        *(arg4 + (result << 3)) = i
                        *(arg4 + (result << 3) + 4) = eax_4
                        result += 1
                    
                    eax_4 += 0xc
                    j = j_1
                    j_1 -= 1
                while (j != 1)
        
        i = sx.d(*(var_8_1 + i * 0xc + 0x8ca))
        arg3 = var_8_1
    
    return result
}
