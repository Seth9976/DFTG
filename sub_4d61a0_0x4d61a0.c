// 函数名称: sub_4d61a0
// 虚拟地址: 0x4d61a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4d61a0(void* arg1, char* arg2)
{
    // 第一条实际指令: char* ebx = arg2
    char* ebx = arg2
    int32_t* result = sub_4d64f0(arg1, arg2)
    
    if (result == 0)
        int32_t** edi_1 = data_114e86c
        edi_1[3] += 1
        result = *edi_1
        
        if (result == 0)
            sub_4d79e0(edi_1)
            result = *edi_1
        
        *edi_1 = *result
        result[2] = 0
        result[3] = 0
        result[4] = 0
        *result = &data_5b2591
        result[1] = &data_5b2591
        int32_t* result_1 = result
        sub_4362d0(arg1 + 4, &result_1)
    else
        sub_48a5e0(&result[1], &data_5b2591)
        char** ecx_1 = result[2]
        
        if (ecx_1 != 0)
            sub_4d4bb0(ecx_1)
            result[2] = 0
            sub_48a5e0(result, ebx)
            return result
    
    sub_48a5e0(result, ebx)
    return result
}
