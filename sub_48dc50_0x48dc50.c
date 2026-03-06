// 函数名称: sub_48dc50
// 虚拟地址: 0x48dc50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_48dc50()
{
    // 第一条实际指令: void* result = data_aca1f0
    void* result = data_aca1f0
    bool cond:0 = *(result + 0x2c) == 0
    *(result + 0x28) = 0
    *(result + 0x20) = 0
    *(result + 0x24) = 0
    *(result + 0x1c) = 0
    
    if (not(cond:0))
        sub_4c3340()
        result = data_aca1f0
    
    if (*(result + 0x28) != 0)
        *(result + 0x2c) = 0
        return result
    
    sub_4c2f10()
    void* eax = data_aca1f0
    int32_t* ecx = data_aca1ec
    int32_t var_4 = *(eax + 0x24)
    *(eax + 0x2c) = 1
    return (*(*ecx + 0x38))(var_4)
}
