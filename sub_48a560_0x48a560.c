// 函数名称: sub_48a560
// 虚拟地址: 0x48a560
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __thiscallsub_48a560(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: char* const esi = &data_5b2591
    char* const esi = &data_5b2591
    char* eax = *arg2
    char* const edx = &data_5b2591
    char* ecx = *arg1
    
    if (ecx != 0)
        edx = ecx
    
    if (eax != 0)
        esi = eax
    
    if (edx != esi)
        if (data_aca1f4 != 0 && ecx != 0 && *ecx != 0)
            char* eax_1 = sub_48a080(arg1)
            int32_t temp1_1 = *(eax_1 + 4)
            *(eax_1 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_4984f0(eax_1, *(eax_1 + 0xc) + 0x10)
                *arg1 = &data_5b2591
        
        char* eax_2 = *arg2
        *arg1 = eax_2
        
        if (eax_2 != 0 && *eax_2 != 0)
            char* eax_3 = sub_48a080(arg1)
            *(eax_3 + 4) += 1
    
    return arg1
}
