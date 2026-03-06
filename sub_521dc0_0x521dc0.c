// 函数名称: sub_521dc0
// 虚拟地址: 0x521dc0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __thiscallsub_521dc0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* eax = sub_5232e0(arg1 + 0x4240, arg2)
    int32_t* eax = sub_5232e0(arg1 + 0x4240, arg2)
    void* result = eax[0x36]
    
    if (result == 0)
        result = sub_4c2e40(eax[2])
        eax[0x36] = result
    
    return result
}
