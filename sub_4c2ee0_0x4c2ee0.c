// 函数名称: sub_4c2ee0
// 虚拟地址: 0x4c2ee0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (* __fastcallsub_4c2ee0(void* arg1))[0x4]
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 0
    
    uint32_t (* result)[0x4] = sub_4c2e40(arg1)
    _memset(result, 0, arg1)
    return result
}
