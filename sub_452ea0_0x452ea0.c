// 函数名称: sub_452ea0
// 虚拟地址: 0x452ea0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_452ea0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t i = *(arg1 + (arg2 << 2) + 0x2b4)
    int32_t i = *(arg1 + (arg2 << 2) + 0x2b4)
    int32_t result = 0
    
    for (; i != 0; i = *(sub_452d50(i) + 0x20))
        result += 1
    
    return result
}
