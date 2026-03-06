// 函数名称: sub_51c320
// 虚拟地址: 0x51c320
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_51c320(void* arg1)
{
    // 第一条实际指令: int32_t* esi = *(arg1 + 0x54)
    int32_t* esi = *(arg1 + 0x54)
    
    if (esi == 0)
        return 
    
    ov_clear(esi)
    
    if (esi != 0)
        sub_4984f0(esi, 0x2e0)
    
    *(arg1 + 0x54) = 0
}
