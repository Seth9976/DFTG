// 函数名称: sub_453b90
// 虚拟地址: 0x453b90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_453b90(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t edi = *(arg1 + 0xdc4)
    int32_t edi = *(arg1 + 0xdc4)
    int32_t esi = 0
    
    if (edi s> 0)
        void* eax_1 = arg1 + 0xbe4
        
        do
            if (*eax_1 == *(arg2 + 0x8a8))
                return 1
            
            esi += 1
            eax_1 += 4
        while (esi s< edi)
    
    return 0
}
