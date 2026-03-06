// 函数名称: ___acrt_getptd_head
// 虚拟地址: 0x58c269
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*___acrt_getptd_head()
{
    // 第一条实际指令: char* eax_1 = data_61f1d4
    char* eax_1 = data_61f1d4
    
    if (eax_1 == 0xffffffff)
        goto label_58c28f
    
    int32_t* result = ___acrt_FlsGetValue@4(eax_1)
    
    if (result == 0)
        eax_1 = data_61f1d4
    label_58c28f:
        
        if (___acrt_FlsSetValue@8(eax_1, 0xffffffff) != 0)
            int32_t* result_1 = __calloc_base(1, 0x364)
            result = result_1
            
            if (result != 0)
                BOOL eax_3 = ___acrt_FlsSetValue@8(data_61f1d4, result)
                
                if (eax_3 != 0)
                    int32_t* var_8_6 = &data_6cfb04
                    construct_ptd(result)
                    __free_base(0)
                label_58c2f5:
                    
                    if (result != 0)
                        return result
                else
                    ___acrt_FlsSetValue@8(data_61f1d4, eax_3)
                    __free_base(result)
            else
                ___acrt_FlsSetValue@8(data_61f1d4, result_1)
                __free_base(result)
    else if (result != 0xffffffff)
        goto label_58c2f5
    
    sub_58a129()
    noreturn
}
