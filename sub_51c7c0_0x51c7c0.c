// 函数名称: sub_51c7c0
// 虚拟地址: 0x51c7c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_51c7c0(int32_t arg1)
{
    // 第一条实际指令: void* result = data_1151adc
    void* result = data_1151adc
    
    if (*(result + 0x4090) != arg1)
        *(result + 0x4090) = arg1
        (*__glewBindBuffer)(0x8892, arg1)
        result = data_114ec70
        *(result + 0x10) += 1
    
    return result
}
