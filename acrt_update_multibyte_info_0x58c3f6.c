// 函数名称: ___acrt_update_multibyte_info
// 虚拟地址: 0x58c3f6
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*___acrt_update_multibyte_info(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* result = *arg2
    void* result = *arg2
    
    if (result != data_6cfb04)
        result = data_61f3e4
        
        if ((*(arg1 + 0x350) & result) == 0)
            result = sub_594063()
            *arg2 = result
    
    return result
}
