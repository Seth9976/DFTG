// 函数名称: sub_447a90
// 虚拟地址: 0x447a90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_447a90(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t result_3 = 0
    int32_t result = arg2 * 0x1bc + arg1
    int32_t result_2 = 0
    int32_t result_4 = 0
    int32_t result_1 = result
    int32_t i = *(result + 0x174)
    int32_t var_63c[0x46]
    int32_t var_524[0x46]
    
    if (i != 0xffffffff)
        do
            var_524[result_3] = i
            i = sx.d(*(arg1 + i * 0xc + 0x8ca))
            var_63c[result_3] = 0
            result_3 += 1
            result_2 = result_3
            result_4 = result_3
        while (i != 0xffffffff)
        
        result = result_1
    
    int32_t i_1 = *(result + 0x178)
    
    if (i_1 != 0xffffffff)
        do
            var_524[result_3] = i_1
            i_1 = sx.d(*(arg1 + i_1 * 0xc + 0x8ca))
            var_63c[result_3] = 1
            result_3 += 1
            result_2 = result_3
            result_4 = result_3
        while (i_1 != 0xffffffff)
        
        result = result_1
    
    if (result_4 != 0)
        if (*(result + 0x1c4) s< *(result_1 + 0x1c0))
            sub_444560(&var_524, arg2, arg1, 9, &var_524, &result_2, &var_63c, &result_2)
        else
            (*(*(result_1 + 0x1c) + 4))(arg1, arg2, 9, &var_524, &result_2, &var_63c, &result_2, 0, 0, 
                0)
            
            if (*(arg1 + 0xc3c) == 0)
                int32_t eax_9 = *(*(result_1 + 0x1c) + 0xc)
                
                if (eax_9 != 0)
                    eax_9(arg1, arg2)
                
                sub_444560(&var_524, arg2, arg1, 9, &var_524, &result_2, &var_63c, &result_2)
        
        result = result_2
        int32_t edi_1 = 0
        
        if (result s> 0)
            do
                sub_445280(result, var_524[edi_1], arg1, 0xffffffff, 1, 0)
                result = result_2
                edi_1 += 1
            while (edi_1 s< result)
        
        int32_t edi_2 = 0
        
        if (result s> 0)
            do
                void* eax_13 = arg1 + var_524[edi_2] * 0xc
                void var_40c
                
                if (var_63c[edi_2] != 0)
                    *(eax_13 + 0x8cb) = 1
                    result = sub_445280(eax_13, var_524[edi_2], arg1, arg2, 4, 1)
                    
                    if (*(arg1 + 0x10) == 0)
                        int32_t edx_5 = var_524[edi_2]
                        int32_t ecx_4 = var_63c[edi_2]
                        int32_t var_658_6 = *(*(arg1 + edx_5 * 0xc + 0x8c4) + (ecx_4 << 2))
                        int32_t var_65c_5 = edx_5
                        int32_t var_660_6 = *(result_1 + 0x18)
                        sub_41da20(&var_40c, edx_5, ecx_4, &var_40c, "%s rearranges tile %d %s.\n")
                        int32_t var_658_8 = 0
                        int32_t var_65c_6 = 0
                        result =
                            sub_444430(sub_4892e0(&var_40c), 0x1a, arg1, arg2, var_524[edi_2], 1, 0, 0)
                else
                    *(eax_13 + 0x8cb) = 0
                    result = sub_445280(eax_13, var_524[edi_2], arg1, arg2, 3, 1)
                    
                    if (*(arg1 + 0x10) == 0)
                        int32_t edx_3 = var_524[edi_2]
                        int32_t ecx_3 = var_63c[edi_2]
                        int32_t var_658_3 = *(*(arg1 + edx_3 * 0xc + 0x8c4) + (ecx_3 << 2))
                        int32_t var_65c_3 = edx_3
                        int32_t var_660_3 = *(result_1 + 0x18)
                        sub_41da20(&var_40c, edx_3, ecx_3, &var_40c, "%s rearranges tile %d %s.\n")
                        int32_t var_658_5 = 0
                        int32_t var_65c_4 = 0
                        result =
                            sub_444430(sub_4892e0(&var_40c), 0x1a, arg1, arg2, var_524[edi_2], 0, 0, 0)
                edi_2 += 1
            while (edi_2 s< result_2)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
