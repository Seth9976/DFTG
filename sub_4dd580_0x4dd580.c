// 函数名称: sub_4dd580
// 虚拟地址: 0x4dd580
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4dd580(int32_t arg1, int32_t* arg2, void* arg3, char arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* var_64
    int32_t* var_98 = &var_64
    int32_t* result_1
    sub_4889e0(&result_1, *(arg3 + 4), 2)
    void* edx = *var_64
    int32_t* result
    
    if (edx != 0)
        int64_t var_20_1 = *(arg3 + 8)
        int128_t xmm0_2 = *(arg3 + 0x14)
        int32_t var_18_1 = *(arg3 + 0x10)
        int128_t var_5c = (*(arg3 + 0x24)).o
        int128_t var_4c_1 = xmm0_2
        int128_t var_3c = *(arg3 + 0x14)
        void var_84
        int64_t* eax_5 = sub_4dbbe0(&var_84, edx + 0x40, &var_5c, &var_84)
        float xmm3_1 = *(arg3 + 0x24)
        int128_t var_30_1
        var_30_1:4.q = *eax_5
        var_30_1:0xc.d = eax_5[1].d
        float xmm0_10 = (*(edx + 0x54) f- *(edx + 0x48)) * xmm3_1
        int64_t var_20_2 = _mm_unpacklo_ps((*(edx + 0x4c) f- *(edx + 0x40)) * xmm3_1, 
            (*(edx + 0x50) f- *(edx + 0x44)) * xmm3_1)
        float var_18_2 = xmm0_10
        result = sub_4dcf40(xmm0_10, arg2, &var_3c, arg5)
        int32_t* result_2 = result_1
        
        if (result_2 != 0)
            result_2[7] -= 1
        
        if (result.b != 0)
            if (arg4 == 0)
            label_4dd6ae:
                result.b = 1
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return result
            
            if (sub_4dd340(result, arg2, arg3, arg5).b != 0)
                goto label_4dd6ae
    else
        result = result_1
        
        if (result != 0)
            result[7] -= 1
    
    result.b = 0
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
