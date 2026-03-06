// 函数名称: sub_452690
// 虚拟地址: 0x452690
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __thiscallsub_452690(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: if (arg1[1] == arg3 && *arg1 == arg2 && arg1[2] == arg4 && arg1[3] == arg5 && arg1[4] == arg6 && arg1[5] == 0)
    if (arg1[1] == arg3 && *arg1 == arg2 && arg1[2] == arg4 && arg1[3] == arg5 && arg1[4] == arg6
            && arg1[5] == 0)
        return arg1[8]
    
    int32_t result = sub_4bab10(arg4)
    
    if (result != 0)
        result = sub_4bab10(arg6)
    
    arg1[8] = result
    
    if (result == 0)
        return result
    
    arg1[1] = arg3
    arg1[2] = arg4
    arg1[3] = arg5
    *arg1 = arg2
    arg1[4] = arg6
    arg1[5] = 0
    return result
}
