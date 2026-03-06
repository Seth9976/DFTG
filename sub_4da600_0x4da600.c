// 函数名称: sub_4da600
// 虚拟地址: 0x4da600
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4da600(float arg1 @ xmm0)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    float var_8_1 = arg1
    int32_t result = data_1511ab0
    TEB* fsbase
    
    if (result s> *(*fsbase->ThreadLocalStoragePointer + 4))
        result = __Init_thread_header(&data_1511ab0)
        
        if (data_1511ab0 == 0xffffffff)
            data_1511ab4 = 0x3c8efa35
            result = __Init_thread_footer(&data_1511ab0)
    
    data_1511ab4
    return result
}
