// 函数名称: sub_570cb0
// 虚拟地址: 0x570cb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_570cb0(void* arg1)
{
    // 第一条实际指令: _free(*(arg1 + 4))
    _free(*(arg1 + 4))
    _free(*(arg1 + 8))
    int32_t i = 0
    
    if (*(arg1 + 0xc) s> 0)
        do
            _free(*(*(arg1 + 0x18) + (i << 2)))
            i += 1
        while (i s< *(arg1 + 0xc))
    
    _free(*(arg1 + 0x18))
    _free(*(arg1 + 0x10))
    return _free(arg1)
}
