// 函数名称: sub_431120
// 虚拟地址: 0x431120
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_431120(void* arg1)
{
    // 第一条实际指令: char* const esi = &data_5b2591
    char* const esi = &data_5b2591
    char* eax = *(arg1 + 8)
    
    if (eax != 0)
        esi = eax
    
    int32_t* result = sub_4cfa30(esi, U"@.")
    
    if (result != 0 && result != esi)
        result = sub_4cfa30(result, &data_5b3a68)
        
        if (result != 0)
            void* edx_1 = result + 1
            char i
            
            do
                i = *result
                result += 1
            while (i != 0)
            result -= edx_1
            
            if (result u>= 3)
                return sub_48a560(&data_62c408, arg1 + 8)
    
    return result
}
