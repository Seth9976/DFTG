// 函数名称: sub_4cc4b0
// 虚拟地址: 0x4cc4b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_4cc4b0(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: char* edx = nullptr
    char* edx = nullptr
    char* eax = *(arg2 + 0x108)
    
    if (*eax != 0)
        edx = eax
    
    if (arg1[0x19] s<= *arg1)
        if (*(arg2 + 4) != 5)
            return sub_4c3f90(*(arg2 + 0xe0), edx) __tailcall
        
        return sub_4c3f90(*(arg2 + 0x120), edx) __tailcall
    
    char* result = arg1[0x1a]
    
    if (*(arg1 + 0x151) == 0)
        if (result != 0)
            return result
        
        return &data_5b2591
    
    char* result_1 = &data_5b2591
    
    if (result != 0)
        result_1 = result
    
    return sub_4c3f90(result_1, edx) __tailcall
}
