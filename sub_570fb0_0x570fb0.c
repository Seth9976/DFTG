// 函数名称: sub_570fb0
// 虚拟地址: 0x570fb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_570fb0(void* arg1)
{
    // 第一条实际指令: _free(*(arg1 + 4))
    _free(*(arg1 + 4))
    int32_t i = 0
    
    if (*(arg1 + 8) s> 0)
        do
            void* esi_1 = *(*(arg1 + 0x10) + (i << 2))
            _free(*(esi_1 + 0x10))
            _free(esi_1)
            i += 1
        while (i s< *(arg1 + 8))
    
    _free(*(arg1 + 0x10))
    _free(*(arg1 + 0xc))
    return _free(arg1)
}
