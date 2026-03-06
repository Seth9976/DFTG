// 函数名称: sub_4fd2b0
// 虚拟地址: 0x4fd2b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4fd2b0(void* arg1)
{
    // 第一条实际指令: void* esi = nullptr
    void* esi = nullptr
    
    while (true)
        if (esi != 0)
            esi = *(esi + 0x2fc)
        else
            esi = *(arg1 + 0x2d0)
        
        if (esi == 0)
            break
        
        sub_4fd2b0()
    
    sub_507730(arg1 + 0x2d0)
    void* result = *(arg1 + 0x2e4)
    *(result + 0x14) -= 1
    return result
}
