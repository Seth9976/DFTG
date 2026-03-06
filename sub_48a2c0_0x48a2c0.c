// 函数名称: sub_48a2c0
// 虚拟地址: 0x48a2c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_48a2c0(char** arg1, char* arg2)
{
    // 第一条实际指令: char* esi = arg2
    char* esi = arg2
    
    if (*esi == 0)
        *arg1 = &data_5b2591
        return 
    
    char i
    
    do
        i = *arg2
        arg2 = &arg2[1]
    while (i != 0)
    sub_48a0e0(arg1, arg2 - &arg2[1])
    char* ecx_2 = *arg1
    char i_1
    
    do
        i_1 = *esi
        esi = &esi[1]
        *ecx_2 = i_1
        ecx_2 = &ecx_2[1]
    while (i_1 != 0)
}
