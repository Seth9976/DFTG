// 函数名称: sub_4f0bd0
// 虚拟地址: 0x4f0bd0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4f0bd0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t edi = *arg1
    int32_t edi = *arg1
    int32_t esi = 0
    int32_t* result
    
    if (edi s> 0)
        result = arg1[2]
        
        do
            if (*result == arg2)
                result.b = 1
                return result
            
            esi += 1
            result = &result[4]
        while (esi s< edi)
    
    result.b = 0
    return result
}
