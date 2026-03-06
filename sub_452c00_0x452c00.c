// 函数名称: sub_452c00
// 虚拟地址: 0x452c00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_452c00(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t edi = *(arg1 + 0x4cc)
    int32_t edi = *(arg1 + 0x4cc)
    int32_t esi = 0
    void* result
    
    if (edi s> 0)
        result = arg1 + 0x33c
        
        do
            if (*result == arg2)
                result.b = 1
                return result
            
            esi += 1
            result += 4
        while (esi s< edi)
    
    result.b = 0
    return result
}
