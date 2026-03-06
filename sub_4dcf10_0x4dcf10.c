// 函数名称: sub_4dcf10
// 虚拟地址: 0x4dcf10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_4dcf10(void* arg1)
{
    // 第一条实际指令: void* var_4 = arg1
    void* var_4 = arg1
    int32_t* ecx = *(arg1 + 0x2c)
    
    if (ecx != 0)
        sub_4f2980(ecx)
    
    int32_t* i = *(arg1 + 0x38)
    
    while (i != 0)
        int32_t* i_1 = i
        i = i[4]
        sub_4dcba0(arg1, i_1)
}
