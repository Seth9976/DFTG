// 函数名称: sub_4360b0
// 虚拟地址: 0x4360b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4360b0(float arg1 @ xmm0)
{
    // 第一条实际指令: float xmm2 = arg1
    float xmm2 = arg1
    int32_t* i = &data_62b1bc
    float var_c = xmm2
    
    do
        int32_t eax_1 = i[-5]
        char var_d_1 = 0
        
        if (eax_1 != 0)
            if (eax_1 != i[-4])
                if (eax_1 != *i)
                    sub_49a5a0(&i[1])
                    int128_t xmm0_1 = *(i - 0x10)
                    xmm2 = var_c
                    i[-4] = i[-5]
                    int32_t eax_3 = i[4]
                    i[-2] = eax_3
                    *i = xmm0_1
                    i[-3] = 0
                    i[4] = eax_3 + 1
                else
                    int128_t xmm0 = *i
                    *i = *(i - 0x10)
                    *(i - 0x10) = xmm0
                    i[-1] = 0
                
                var_d_1 = 1
            
            i[-5] = 0
        
        sub_435cc0(i, 1, xmm2)
        sub_435cc0(&i[-4], 0, var_c)
        
        if (var_d_1 != 0)
            sub_4bbe80(i[-3])
        
        xmm2 = var_c
        i = &i[0xa]
    while (i s< &data_62b2ac)
    
    int32_t result = data_62b250
    
    if (result == 0)
        result = data_62b228
        
        if (result == 0)
            result = data_62b1b0
    
    data_63e5e8 = result
    return result
}
