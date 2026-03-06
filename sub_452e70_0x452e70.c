// 函数名称: sub_452e70
// 虚拟地址: 0x452e70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_452e70(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t i = *(arg1 + (arg2 << 2) + 0x29c)
    int32_t i = *(arg1 + (arg2 << 2) + 0x29c)
    int32_t result = 0
    
    for (; i != 0; i = *(sub_452de0(i) + 0x10))
        result += 1
    
    return result
}
