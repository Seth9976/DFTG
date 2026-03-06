// 函数名称: sub_526c10
// 虚拟地址: 0x526c10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_526c10(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: char* eax = *arg2
    char* eax = *arg2
    
    if (eax != 0 && eax != &data_5b2591)
        if (data_aca1f4 != 0 && *eax != 0)
            char* eax_1 = sub_48a080(arg2)
            int32_t temp0_1 = *(eax_1 + 4)
            *(eax_1 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_1, *(eax_1 + 0xc) + 0x10)
        
        *arg2 = &data_5b2591
    
    void* result = *(arg1 + 0x10)
    
    if (result s> 0)
        sub_48a6e0(arg2, *(arg1 + 0xc), result)
    
    result.b = 1
    return result
}
