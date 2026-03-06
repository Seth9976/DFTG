// 函数名称: sub_48bee0
// 虚拟地址: 0x48bee0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_48bee0(void** arg1, int32_t* arg2)
{
    // 第一条实际指令: char* eax = *arg2
    char* eax = *arg2
    
    if (eax != 0 && eax != &data_5b2591)
        if (data_aca1f4 != 0 && *eax != 0)
            eax = sub_48a080(arg2)
            int32_t temp0_1 = *(eax + 4)
            *(eax + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax, *(eax + 0xc) + 0x10)
        
        *arg2 = &data_5b2591
    
    void* edi = *arg1
    char* ecx_2 = edi
    eax.b = *ecx_2
    
    while (eax.b != 0)
        if (eax.b == 0xd && ecx_2[1] == 0xa)
            *arg1 = &ecx_2[2]
            sub_48a6e0(arg2, edi, ecx_2 - edi)
            int32_t eax_2
            eax_2.b = 1
            return eax_2
        
        if (eax.b == 0xa)
            *arg1 = &ecx_2[1]
            sub_48a6e0(arg2, edi, ecx_2 - edi)
            int32_t eax_3
            eax_3.b = 1
            return eax_3
        
        ecx_2 = &ecx_2[1]
        eax.b = *ecx_2
    
    eax.b = 0
    return eax
}
