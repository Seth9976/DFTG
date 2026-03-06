// 函数名称: sub_518ff0
// 虚拟地址: 0x518ff0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_518ff0(void* arg1)
{
    // 第一条实际指令: int32_t i = *(arg1 + 0x68)
    int32_t i = *(arg1 + 0x68)
    void* result = data_1151ad0
    
    if (*data_1151ad4 != 1)
    label_51901d:
        result = *(*result + (((i s>> 4 | i) & *(result + 4)) << 2))
        
        if (result == 0)
        label_51902f:
            result.b = 0
            return result
        
        while (i != *result)
            result = *(result + 0x14)
            
            if (result == 0)
                goto label_51902f
        
        if (result == 0xfffffffc)
            goto label_51902f
    else if (*(result + 0x70) != i && *(result + 0x74) != i && *(result + 0x78) != i)
        goto label_51901d
    
    result.b = 1
    return result
}
