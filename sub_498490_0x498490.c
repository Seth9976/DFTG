// 函数名称: sub_498490
// 虚拟地址: 0x498490
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (* __fastcallsub_498490(void* arg1))[0x4]
{
    // 第一条实际指令: int32_t* eax = sub_498440(arg1)
    int32_t* eax = sub_498440(arg1)
    eax[3] += 1
    
    if (arg1 s> 0x400 && eax[4] == 0xffffffff)
        uint32_t (* eax_1)[0x4] = sub_4c2e40(arg1)
        _memset(eax_1, 0, arg1)
        return eax_1
    
    uint32_t (* edi)[0x4] = *eax
    
    if (edi == 0)
        sub_4982d0(eax)
        edi = *eax
    
    *eax = *edi
    _memset(edi, 0, arg1)
    return edi
}
