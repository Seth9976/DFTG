// 函数名称: sub_49ddf0
// 虚拟地址: 0x49ddf0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_49ddf0(void* arg1)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0xfc8)
    int32_t eax = *(arg1 + 0xfc8)
    
    if (eax != 0)
        return eax
    
    int32_t i
    
    do
        arg1 = *(arg1 + 0x112c)
        
        if (arg1 == 0)
            return 0
        
        i = *(arg1 + 0xfc8)
    while (i == 0)
    
    return i
}
