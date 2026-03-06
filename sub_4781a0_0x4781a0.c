// 函数名称: sub_4781a0
// 虚拟地址: 0x4781a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4781a0(int32_t arg1)
{
    // 第一条实际指令: void* eax_1 = sub_425fe0(&sub_425de0()[2], arg1)
    void* eax_1 = sub_425fe0(&sub_425de0()[2], arg1)
    void* result
    
    if (*(eax_1 + 0x14) == 1)
        result = sub_437f10(*(data_6d00d8 + 0xbe4))
    
    if (*(eax_1 + 0x14) != 1 || *(eax_1 + 0x18) != *(result + 0x230))
        result = *(eax_1 + 0x14)
        
        if (result != 0x3e8 && result != 0x3e9)
            result.b = 0
            return result
    
    result.b = 1
    return result
}
