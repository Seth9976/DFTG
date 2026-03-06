// 函数名称: sub_531d20
// 虚拟地址: 0x531d20
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_531d20(void* arg1, void* arg2)
{
    // 第一条实际指令: void* i = *(arg2 + 4)
    for (void* i = *(arg2 + 4); i != 0; i = *(i + 4))
        void* esi_1 = *(arg1 + 0x24)
        sub_5304d0(esi_1)
        *(*(esi_1 + 4) + (*(esi_1 + 8) << 2)) = 4
        *(esi_1 + 8) += 1
        sub_5304d0(esi_1)
        *(*(esi_1 + 4) + (*(esi_1 + 8) << 2)) = i
        *(esi_1 + 8) += 1
    
    *(arg2 + 4) = 0
}
