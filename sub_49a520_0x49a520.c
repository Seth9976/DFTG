// 函数名称: sub_49a520
// 虚拟地址: 0x49a520
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (* __fastcallsub_49a520(uint32_t arg1))[0x4]
{
    // 第一条实际指令: uint32_t var_4 = arg1
    uint32_t var_4 = arg1
    uint32_t (* result)[0x4] = sub_4bc890(&data_63e5a8)
    void* edx = data_126cd20
    result[0xe1][0] = 0
    (*result)[0x386] = 1
    (*result)[0x385] = 2
    (*result)[0x387] = 3
    sub_4ce680(&(*result)[0x339], edx)
    sub_4ce680(&(*result)[0x34b], data_126cd20)
    sub_4ce680(&(*result)[0x35d], data_126cd20)
    (*result)[0x44b] = arg1
    return result
}
