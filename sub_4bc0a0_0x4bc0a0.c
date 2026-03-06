// 函数名称: sub_4bc0a0
// 虚拟地址: 0x4bc0a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4bc0a0(void* arg1)
{
    // 第一条实际指令: void* var_4 = arg1
    void* var_4 = arg1
    
    if (*(arg1 + 0xfec) == 0xa)
        return arg1
    
    int32_t i = 0
    
    if (*(arg1 + 0x1190) s> 0)
        do
            sub_49e970(arg1, i)
            int32_t eax_3 = sub_4bc0a0()
            
            if (eax_3 != 0)
                return eax_3
            
            i += 1
        while (i s< *(arg1 + 0x1190))
    
    return 0
}
