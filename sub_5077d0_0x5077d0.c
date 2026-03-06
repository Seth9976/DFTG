// 函数名称: sub_5077d0
// 虚拟地址: 0x5077d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_5077d0(int32_t arg1, void* arg2, char* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: char* esi = arg3
    char* esi = arg3
    void* var_8 = arg2
    int32_t eax_2 = (arg2 - esi) s>> 3
    void* var_18
    
    if (eax_2 s<= 0x20)
    label_507858:
        
        if (eax_2 s>= 2 && esi != arg2)
            int32_t* edi_2 = &esi[8]
            int32_t* var_10_1 = edi_2
            
            if (edi_2 != arg2)
                int32_t* var_c_1 = &edi_2[-2]
                
                do
                    int32_t* ebx_1 = edi_2
                    var_18 = *edi_2
                    int32_t eax_12 = edi_2[1]
                    
                    if (arg5(&var_18, esi) == 0)
                        int32_t* edi_5 = var_c_1
                        
                        if (arg5(&var_18, var_c_1) != 0)
                            char i
                            
                            do
                                *ebx_1 = *edi_5
                                ebx_1[1] = edi_5[1]
                                ebx_1 = edi_5
                                edi_5 -= 8
                                i = arg5(&var_18, edi_5)
                            while (i != 0)
                        
                        edi_2 = var_10_1
                        *ebx_1 = var_18
                        eax_2 = eax_12
                        ebx_1[1] = eax_2
                    else
                        sub_579a90(&esi[8], esi, edi_2 - esi)
                        *esi = var_18
                        eax_2 = eax_12
                        *(esi + 4) = eax_2
                    
                    var_c_1 = &var_c_1[2]
                    edi_2 = &edi_2[2]
                    var_10_1 = edi_2
                while (edi_2 != var_8)
    else
        int32_t i_1 = arg4
        
        while (i_1 s> 0)
            sub_5079d0(eax_2, esi, &var_18, arg2, arg5)
            i_1 = (i_1 s>> 1) + (i_1 s>> 2)
            char* var_14
            
            if (((var_18 - esi) & 0xfffffff8) s>= ((var_8 - var_14) & 0xfffffff8))
                sub_5077d0(i_1, arg5)
                arg2 = var_18
                var_8 = arg2
            else
                sub_5077d0(i_1, arg5)
                esi = var_14
                arg2 = var_8
            
            eax_2 = (arg2 - esi) s>> 3
            
            if (eax_2 s<= 0x20)
                goto label_507858
        
        if (eax_2 s<= 0x20)
            goto label_507858
        
        int32_t i_4 = (arg2 - esi) s>> 3
        int32_t i_5 = i_4
        void* i_2 = i_4 s>> 1
        
        if (i_2 s> 0)
            void* edx_3 = &esi[i_2 << 3]
            
            do
                var_18 = *(edx_3 - 8)
                i_2 -= 1
                int32_t var_14_2 = *(edx_3 - 4)
                eax_2 = sub_507e90(&var_18, i_2, esi, i_4, &var_18, arg5)
                i_4 = i_5
                edx_3 -= 8
            while (i_2 s> 0)
            
            arg2 = var_8
        
        if (i_4 s>= 2)
            void* edi_4 = arg2 - 8
            int32_t i_3
            
            do
                if (i_4 s>= 2)
                    var_18 = *edi_4
                    int32_t var_14_3 = *(edi_4 + 4)
                    *edi_4 = *esi
                    *(edi_4 + 4) = *(esi + 4)
                    int32_t eax_27 = (edi_4 - esi) s>> 3
                    sub_507e90(eax_27, nullptr, esi, eax_27, &var_18, arg5)
                
                edi_4 -= 8
                i_3 = (edi_4 - esi + 8) s>> 3
                i_4 = i_3
            while (i_3 s>= 2)
            
            return i_3
    return eax_2
}
