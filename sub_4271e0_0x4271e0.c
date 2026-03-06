// 函数名称: sub_4271e0
// 虚拟地址: 0x4271e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4271e0(void* arg1)
{
    // 第一条实际指令: void* eax = sub_437f10(*(data_6d00d8 + 0xbe4))
    void* eax = sub_437f10(*(data_6d00d8 + 0xbe4))
    int32_t esi = *(arg1 + 0xe4)
    int32_t edx = 0
    
    if (esi s> 0)
        void* ecx_2 = arg1 + 0x20
        
        do
            if (*(ecx_2 - 4) == 1 && *ecx_2 == *(eax + 0x230))
                return ecx_2 - 0x18
            
            edx += 1
            ecx_2 += 0x2c
        while (edx s< esi)
    
    return 0
}
