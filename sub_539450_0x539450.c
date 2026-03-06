// 函数名称: sub_539450
// 虚拟地址: 0x539450
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __stdcallsub_539450(void* arg1)
{
    // 第一条实际指令: int32_t* eax_1 = *(arg1 + 8)
    int32_t* eax_1 = *(arg1 + 8)
    int32_t result
    
    if ((*(*eax_1 + 0x24))(eax_1, &arg1) == 0 && (arg1.b & 1) != 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}
