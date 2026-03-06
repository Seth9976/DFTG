// 函数名称: sub_43d2a0
// 虚拟地址: 0x43d2a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_43d2a0(void* arg1)
{
    // 第一条实际指令: int64_t var_c = 0
    int64_t var_c = 0
    int32_t result
    int32_t edi_1
    
    if (*arg1 != 2)
        edi_1 = 0
        result = 0
    else
        int32_t edi = *(arg1 + 4)
        
        if (edi s>= 0)
            result = *((edi << 3) + &data_1410468)
            edi_1 = *((edi << 3) + &data_141046c)
        else
            result = data_138a708
            edi_1 = data_138a70c
    
    int32_t i_1 = *(arg1 + 0x18)
    
    if (i_1 s> 0)
        void* edx_1 = arg1 + 8
        int32_t i
        
        do
            int32_t ecx = *(edx_1 + 0x14)
            int32_t eax_1 = *edx_1
            int32_t eax_2
            int32_t ecx_1
            
            if (ecx != 0)
                int32_t eax_3 = eax_1 + ecx * 0x28
                ecx_1 = *((eax_3 << 3) + &data_1304da0)
                eax_2 = *((eax_3 << 3) + &data_1304da4)
            else
                ecx_1 = *((eax_1 << 3) + &data_1304620)
                eax_2 = *((eax_1 << 3) + &data_1304624)
            
            result ^= ecx_1
            edi_1 ^= eax_2
            edx_1 += 4
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
