// 函数名称: sub_466610
// 虚拟地址: 0x466610
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_466610(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* result_2 = sub_452b90(arg2)
    
    if (arg4 == 5)
        switch (data_632594 - 1)
            case 4, 5
                int32_t var_44_1 = 0xffffffff
                sub_4a8570(arg3)
    
    void* eax_2 = sub_452b90(arg2)
    int32_t edx_5 = 0
    void* result_1 = 1
    void** edi = arg2 * 0x24 + &data_15142dc
    int32_t var_20 = 0
    int32_t i_1 = 5
    void* result
    int32_t i
    
    do
        char const* const var_1c = "tbl_trays_explore"
        char const* const var_18_1 = "tbl_trays_develop"
        char const* const var_14_1 = "tbl_trays_settle"
        char const* const var_10_1 = "tbl_trays_produce"
        char const* const var_c_1 = "tbl_trays_ship"
        char* ecx_6 = *(&var_1c + edx_5)
        void* result_3
        
        if (*edi != ecx_6 || edi[-1] != arg3 || edi[1] != 0xffffffff)
        label_466700:
            result = sub_4baa30(arg3, ecx_6)
            edx_5 = var_20
            result_3 = result
            edi[7] = result_3
            
            if (result_3 != 0)
                result = *(&var_1c + edx_5)
                *edi = result
                edi[-1] = arg3
                edi[1] = 0xffffffff
        else
            result_3 = edi[7]
            
            if (result_3 == 0)
                goto label_466700
            
            uint32_t eax_3 = zx.d(result_3.w)
            
            if (eax_3 u>= data_63e5ac)
                goto label_466700
            
            result = eax_3 * 0x1418 + data_63e5a8
            
            if (*(result + 0x1410) != result_3)
                goto label_466700
        
        if (result_3 != 0)
            var_1c = &data_637fc0
            void** var_18_2 = &data_637fdc
            void** var_14_2 = &data_637ff8
            void** var_10_2 = &data_638014
            void** var_c_2 = &data_638030
            *(&var_1c + edx_5)
            int32_t var_44_2 = 0xffffffff
            sub_4a8570(result_3)
            int32_t* eax_5 = sub_452ed0(eax_2, result_1 + 8)
            
            if (eax_5 s> 0xf)
                int32_t var_4c_1 = 0xffffffff
                sub_4a8830(sub_4a8830(eax_5, &data_6389ec, arg3, 5, 0xffffffff), &data_63889c, arg3, 5, 
                    0xffffffff)
            else if (eax_5 s> 8)
                int32_t var_4c_2 = 0xffffffff
                sub_4a8830(sub_4a8830(eax_5, &data_6389ec, arg3, 4, 0xffffffff), &data_63889c, arg3, 4, 
                    0xffffffff)
            
            result = result_2
            
            if (*(result + 4) == 6)
                bool cond:1_1 = sub_459f20(result) == 0
                result = result_1
                int32_t var_44_3
                
                if (cond:1_1)
                label_4667d8:
                    *(result_2 + 0xbe0)
                    var_44_3 = 0xffffffff
                    result = sub_4a8570(result_3)
                else if (*(result_2 + 0xbe0) == result)
                    var_44_3 = 0xffffffff
                    result = sub_4a8570(result_3)
                else if (data_632564 != 0)
                    goto label_4667d8
            
            edx_5 = var_20
        
        result_1 += 1
        edx_5 += 4
        edi = &edi[0x2d]
        var_20 = edx_5
        i = i_1
        i_1 -= 1
    while (i != 1)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
