// 函数名称: sub_58c1b2
// 虚拟地址: 0x58c1b2
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_58c1b2()
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_c = edi
    enum WIN32_ERROR dwErrCode = GetLastError()
    char* eax = data_61f1d4
    
    if (eax == 0xffffffff)
        goto label_58c1e6
    
    int32_t* result = ___acrt_FlsGetValue@4(eax)
    
    if (result == 0)
        eax = data_61f1d4
    label_58c1e6:
        
        if (___acrt_FlsSetValue@8(eax, 0xffffffff) == 0)
            result = nullptr
        else
            int32_t* result_1 = __calloc_base(1, 0x364)
            
            if (result_1 != 0)
                if (___acrt_FlsSetValue@8(data_61f1d4, result_1) != 0)
                    int32_t* var_10_4 = &data_6cfb04
                    construct_ptd(result_1)
                    __free_base(0)
                    result = result_1
                else
                    result = nullptr
                    ___acrt_FlsSetValue@8(data_61f1d4, 0)
                    __free_base(result_1)
            else
                result = nullptr
                ___acrt_FlsSetValue@8(data_61f1d4, 0)
                __free_base(nullptr)
    else if (result == 0xffffffff)
        result = nullptr
    
    SetLastError(dwErrCode)
    
    if (result != 0)
        return result
    
    sub_58a129()
    noreturn
}
