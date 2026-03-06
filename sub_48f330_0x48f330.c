// 函数名称: sub_48f330
// 虚拟地址: 0x48f330
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_48f330()
{
    // 第一条实际指令: void* result = data_aca1f0
    void* result = data_aca1f0
    
    if (*(result + 0x1c) != 0)
        bool cond:0_1 = *(result + 0x2c) == 0
        *(result + 0x1c) = 0
        
        if (not(cond:0_1))
            sub_4c3340()
            result = data_aca1f0
        
        if (*(result + 0x28) == 0)
            sub_4c2f10()
            void* eax = data_aca1f0
            int32_t* ecx = data_aca1ec
            int32_t var_4 = *(eax + 0x24)
            *(eax + 0x2c) = 1
            return (*(*ecx + 0x38))(var_4)
        
        *(result + 0x2c) = 0
    
    return result
}
