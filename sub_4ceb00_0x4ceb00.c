// 函数名称: sub_4ceb00
// 虚拟地址: 0x4ceb00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4ceb00(int32_t* arg1)
{
    // 第一条实际指令: if ((arg1[2].b & 1) == 0)
    if ((arg1[2].b & 1) == 0)
        arg1[3]
        sub_4cead0(*arg1)
        *arg1 = 0
    
    char** ecx_1 = arg1[1]
    
    if (ecx_1 != 0)
        sub_4d4bb0(ecx_1)
        arg1[1] = 0
    
    return _aligned_free_base(arg1)
}
