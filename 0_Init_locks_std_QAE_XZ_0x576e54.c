// 函数名称: ??0_Init_locks@std@@QAE@XZ
// 虚拟地址: 0x576e54
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcall??0_Init_locks@std@@QAE@XZ(int32_t arg1)
{
    // 第一条实际指令: bool cond:0 = data_61f000 != 0xffffffff
    bool cond:0 = data_61f000 != 0xffffffff
    data_61f000
    data_61f000 += 1
    
    if (not(cond:0))
        for (void* i = &data_6cf0e0; i s< 0x6cf1a0; i += 0x18)
            __Mtxinit(i)
    
    return arg1
}
