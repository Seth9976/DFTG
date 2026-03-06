// 函数名称: sub_577315
// 虚拟地址: 0x577315
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_577315(int32_t* arg1)
{
    // 第一条实际指令: int32_t* result = arg1
    int32_t* result = arg1
    
    if (result != 0)
        result -= 8
        
        if (*result == 0xdddd)
            result = _free(result)
    
    return result
}
