// 函数名称: sub_512fd0
// 虚拟地址: 0x512fd0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_512fd0(int32_t arg1, int32_t* arg2, void* arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: sub_4cf950(arg2, *arg4, arg2, arg3)
    sub_4cf950(arg2, *arg4, arg2, arg3)
    sub_48a5e0(arg5, *arg4)
    char* result = *arg5
    char* const result_1 = &data_5b2591
    
    if (result != 0)
        result_1 = result
    
    *arg4 = result_1
    return result
}
