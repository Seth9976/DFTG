// 函数名称: sub_498fe0
// 虚拟地址: 0x498fe0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_498fe0(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax_3 = *arg1
    int32_t eax_3 = *arg1
    
    if (eax_3 == 1)
        int32_t result = sub_4bc760(arg1)
        _mm_cvtepi32_ps(zx.o(result))
        return result
    
    if (eax_3 == 2)
        return sub_4bc7d0(arg1) __tailcall
    
    return eax_3 - 2
}
