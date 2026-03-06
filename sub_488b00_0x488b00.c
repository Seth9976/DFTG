// 函数名称: sub_488b00
// 虚拟地址: 0x488b00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_488b00(int32_t* arg1)
{
    // 第一条实际指令: void* result = *arg1
    void* result = *arg1
    
    if (result != 0)
        *(result + 0x1c) -= 1
        *arg1 = 0
    
    return result
}
