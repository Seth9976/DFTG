// 函数名称: sub_56c760
// 虚拟地址: 0x56c760
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_56c760(void* arg1)
{
    // 第一条实际指令: int32_t result = sub_56c6e0(arg1, "#?RADIANCE\n")
    int32_t result = sub_56c6e0(arg1, "#?RADIANCE\n")
    int32_t ecx = *(arg1 + 0xb4)
    *(arg1 + 0xa8) = *(arg1 + 0xb0)
    *(arg1 + 0xac) = ecx
    
    if (result == 0)
        result = sub_56c6e0(arg1, "#?RGBE\n")
        *(arg1 + 0xa8) = *(arg1 + 0xb0)
        *(arg1 + 0xac) = *(arg1 + 0xb4)
    
    return result
}
