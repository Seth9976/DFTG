// 函数名称: sub_437f10
// 虚拟地址: 0x437f10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_437f10(int32_t arg1)
{
    // 第一条实际指令: void* result_1 = data_6d00d8
    void* result_1 = data_6d00d8
    int32_t edx = 0
    int32_t esi = *(result_1 + 0xbe0)
    void* result
    
    if (esi s> 0)
        result = result_1
        
        while (*(result + 0x240) != arg1)
            edx += 1
            result += 0x2f8
            
            if (edx s>= esi)
                goto label_437f40
    
    if (esi s<= 0 || result == 0)
    label_437f40:
        result = result_1
        
        if (esi s<= 0)
            result = nullptr
        
        *(result_1 + 0xbe4) = *(result + 0x240)
    
    return result
}
