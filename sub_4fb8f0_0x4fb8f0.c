// 函数名称: sub_4fb8f0
// 虚拟地址: 0x4fb8f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_4fb8f0(float* arg1, float* arg2, float arg3 @ xmm2)
{
    // 第一条实际指令: int32_t* esi = arg2
    int32_t* esi = arg2
    
    if (esi[0x12] == 0)
        return 
    
    uint32_t eax = sub_4fb2b0(arg1, arg2)
    
    if (eax.b == 0)
        sub_4fb470(eax, arg1, arg1, arg3, esi)
}
