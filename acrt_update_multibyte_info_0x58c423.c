// 函数名称: ___acrt_update_multibyte_info
// 虚拟地址: 0x58c423
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t___acrt_update_multibyte_info(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t result = *arg2
    int32_t result = *arg2
    
    if (result != data_6cfdec)
        result = data_61f3e4
        
        if ((*(arg1 + 0x350) & result) == 0)
            result = ___acrt_update_thread_multibyte_data()
            *arg2 = result
    
    return result
}
