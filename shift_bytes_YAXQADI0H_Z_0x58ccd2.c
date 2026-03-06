// 函数名称: ?shift_bytes@@YAXQADI0H@Z
// 虚拟地址: 0x58ccd2
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void?shift_bytes@@YAXQADI0H@Z(char* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 == 0)
    if (arg2 == 0)
        return 
    
    char* ecx_1 = arg1
    int32_t edi
    int32_t var_c_1 = edi
    char i
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    sub_579a90(&arg1[arg2], arg1, ecx_1 - &ecx_1[1] + 1)
}
