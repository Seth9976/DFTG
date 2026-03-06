// 函数名称: sub_4d6130
// 虚拟地址: 0x4d6130
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4d6130(void* arg1, char* arg2)
{
    // 第一条实际指令: int32_t* edi = data_114e86c
    int32_t* edi = data_114e86c
    edi[3] += 1
    int32_t* result = *edi
    
    if (result == 0)
        sub_4d79e0(edi)
        result = *edi
    
    *edi = *result
    result[2] = 0
    result[3] = 0
    result[4] = 0
    *result = &data_5b2591
    result[1] = &data_5b2591
    int32_t* result_1 = result
    sub_48a5e0(result, arg2)
    sub_4362d0(arg1 + 4, &result_1)
    return result
}
