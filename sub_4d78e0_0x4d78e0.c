// 函数名称: sub_4d78e0
// 虚拟地址: 0x4d78e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4d78e0(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    void* edi = data_114e86c
    int32_t var_8_1 = arg1
    *(edi + 0x1c) += 1
    int32_t* result = *(edi + 0x10)
    
    if (result == 0)
        sub_4d7960(edi + 0x10)
        result = *(edi + 0x10)
    
    *(edi + 0x10) = *result
    result[2] = 0
    result[3] = 0
    result[4] = 0
    *result = &data_5b2591
    result[1] = 0
    result[2] = 0
    result[3] = 0
    sub_4d78c0(arg2, nullptr)
    return result
}
