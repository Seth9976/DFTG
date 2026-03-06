// 函数名称: sub_488f70
// 虚拟地址: 0x488f70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_488f70(int32_t* arg1)
{
    // 第一条实际指令: int32_t result = *arg1
    int32_t result = *arg1
    
    if (result == 0)
        sub_4d0ff0(result, 0, arg1, 1)
        result = *arg1
    
    arg1[7] += 1
    return result
}
