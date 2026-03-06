// 函数名称: sub_5088e0
// 虚拟地址: 0x5088e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_5088e0(int32_t* arg1)
{
    // 第一条实际指令: arg1[3] = 0
    arg1[3] = 0
    char* eax = *arg1
    
    if (eax == 0 || *eax == 0)
        arg1[1] = 0
        return eax
    
    int32_t eax_2 = *(sub_48a080(arg1) + 8)
    arg1[1] = eax_2
    return eax_2
}
