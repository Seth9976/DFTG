// 函数名称: sub_5612a0
// 虚拟地址: 0x5612a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_5612a0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 s< 0)
    if (arg2 s< 0)
        *(arg1 + 0xa8) = *(arg1 + 0xac)
        return 
    
    if (*(arg1 + 0x10) != 0)
        int32_t esi_1 = *(arg1 + 0xac)
        int32_t eax = esi_1 - *(arg1 + 0xa8)
        
        if (eax s< arg2)
            *(arg1 + 0xa8) = esi_1
            (*(arg1 + 0x14))(*(arg1 + 0x1c), arg2 - eax)
            return 
    
    *(arg1 + 0xa8) += arg2
}
