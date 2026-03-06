// 函数名称: sub_530550
// 虚拟地址: 0x530550
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_530550(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_5304d0(arg1)
    sub_5304d0(arg1)
    *(arg1[1] + (arg1[2] << 2)) = 2
    arg1[2] += 1
    sub_5304d0(arg1)
    *(arg1[1] + (arg1[2] << 2)) = arg2
    void* result = *arg1
    arg1[2] += 1
    *(result + 0x34) = 1
    return result
}
