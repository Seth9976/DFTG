// 函数名称: sub_5082b0
// 虚拟地址: 0x5082b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __thiscallsub_5082b0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    int32_t var_18 = 0
    float xmm0 = sub_509320(arg1)
    void* result = nullptr
    
    while (true)
        char* eax_1 = *arg1
        float var_8_1 = xmm0
        int32_t eax_3
        
        if (eax_1 == 0 || *eax_1 == 0)
            eax_3 = 0
        else
            eax_3 = *(sub_48a080(arg1) + 8)
        
        if (result s>= eax_3)
            break
        
        void* result_1 = sub_508910(arg1, result)
        void* result_2 = result_1
        xmm0 = sub_509320(arg1)
        
        if ((xmm0 - var_8_1) * 0.660000026f + var_8_1 f> arg2)
            return result
        
        result = result_1
    
    char* eax_5 = *arg1
    
    if (eax_5 != 0 && *eax_5 != 0)
        return *(sub_48a080(arg1) + 8)
    
    return 0
}
