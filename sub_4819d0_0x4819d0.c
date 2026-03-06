// 函数名称: sub_4819d0
// 虚拟地址: 0x4819d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4819d0(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t* ebx = arg2
    int32_t* ebx = arg2
    int32_t* i_12 = arg3
    int32_t* var_8 = ebx
    int32_t* i_13 = i_12
    int32_t i_4 = (ebx - i_12) s>> 2
    int32_t* i_6
    
    if (i_4 s<= 0x20)
    label_481a5c:
        
        if (i_4 s>= 2)
            i_4 = arg5
            int32_t i_7 = i_4
            
            if (i_12 != ebx)
                i_4 = &i_12[1]
                int32_t i_9 = i_4
                i_6 = i_4
                
                while (i_9 != ebx)
                    int32_t* i_8 = *i_9
                    int32_t* i_10 = i_9
                    
                    if (sub_45f7a0(&i_7, i_8, *i_12) == 0)
                        int32_t* i_15 = i_9 - 4
                        
                        if (sub_45f7a0(&i_7, i_8, *(i_9 - 4)) != 0)
                            int32_t* i_14 = i_10
                            char i
                            
                            do
                                *i_14 = *i_15
                                i_14 = i_15
                                int32_t* var_30_8 = i_15[-1]
                                i_15 -= 4
                                i = sub_45f7a0(&i_7, i_8, var_30_8)
                            while (i != 0)
                            ebx = var_8
                            i_10 = i_14
                            i_12 = i_13
                        
                        i_4 = i_8
                        i_9 = i_6
                        *i_10 = i_4
                    else
                        sub_579a90(&i_12[1], i_12, i_9 - i_12)
                        i_4 = i_8
                        *i_12 = i_4
                    
                    i_9 += 4
                    i_6 = i_9
    else
        int32_t i_1 = arg4
        
        while (i_1 s> 0)
            int32_t* var_20
            sub_481e30(i_4, i_12, &var_20, ebx, arg5)
            i_1 = (i_1 s>> 1) + (i_1 s>> 2)
            
            if (((var_20 - i_12) & 0xfffffffc) s>= ((ebx - i_6) & 0xfffffffc))
                sub_4819d0(i_1, arg5)
                ebx = var_20
                var_8 = ebx
            else
                sub_4819d0(i_1, arg5)
                i_12 = i_6
                i_13 = i_12
            
            i_4 = (ebx - i_12) s>> 2
            
            if (i_4 s<= 0x20)
                goto label_481a5c
        
        if (i_4 s<= 0x20)
            goto label_481a5c
        
        int32_t ebx_1 = ebx - i_12
        int32_t i_5 = ebx_1 s>> 2
        i_4 = i_5 s>> 1
        i_6 = i_4
        
        if (i_4 s> 0)
            int32_t i_2 = i_4
            
            do
                int32_t* i_11 = i_12[i_2 - 1]
                i_2 -= 1
                int32_t var_30_5 = arg5
                i_6 = i_11
                i_4 = sub_4824f0(&i_6, i_2, i_12, i_5, &i_6)
            while (i_2 s> 0)
        
        if (i_5 s>= 2)
            int32_t i_3
            
            do
                if (i_5 s>= 2)
                    i_6 = *(i_12 + ebx_1 - 4)
                    *(i_12 + ebx_1 - 4) = *i_12
                    int32_t var_30_6 = arg5
                    int32_t eax_18 = (ebx_1 - 4) s>> 2
                    sub_4824f0(eax_18, nullptr, i_12, eax_18, &i_6)
                
                ebx_1 -= 4
                i_3 = ebx_1 s>> 2
                i_5 = i_3
            while (i_3 s>= 2)
            
            return i_3
    return i_4
}
