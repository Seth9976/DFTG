// 函数名称: sub_43b3b0
// 虚拟地址: 0x43b3b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_43b3b0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t result = __security_cookie ^ &__saved_ebp
    int32_t result_1 = result
    
    if (data_138fd4c != 0)
        void var_c60
        sub_43a6c0(result, arg3, &var_c60, arg2)
        sub_43b0d0(&var_c60, arg2)
        int32_t var_c74_2 = arg2
        void* const var_c78_1 = &data_5d514c
        sub_4394c0(data_138fd4c, &data_5d514c)
        int32_t i = 0
        
        if (data_14106c0 s> 0)
            do
                double xmm0_1 = *(data_14106fc + (i << 3))
                xmm0_1 - 1.0
                int32_t eax_1
                eax_1:1.b = (xmm0_1 == 1.0 ? 1 : 0) << 6 | (is_unordered.q(xmm0_1, 1.0) ? 1 : 0) << 2
                    | (xmm0_1 < 1.0 ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                bool p_4
                
                if (p_2)
                    xmm0_1 - -1.0
                    eax_1:1.b = (xmm0_1 == -1.0 ? 1 : 0) << 6
                        | (is_unordered.q(xmm0_1, -1.0) ? 1 : 0) << 2 | (xmm0_1 < -1.0 ? 1 : 0)
                    p_4 = unimplemented  {test ah, 0x44}
                
                if (not(p_2) || not(p_4))
                    int32_t var_c74_3 = int.d(xmm0_1)
                    var_c78_1 = &data_5d514c
                    sub_4394c0(data_138fd4c, &data_5d514c)
                else
                    var_c78_1.q = xmm0_1
                    sub_4394c0(data_138fd4c, 0x5d5150)
                
                i += 1
            while (i s< data_14106c0)
        
        int32_t i_1 = 0
        
        if (*(*arg3 + 4) s> 0)
            do
                if (arg4 == 0)
                    sub_4394c0(data_138fd4c, 0x5d5154)
                else
                    var_c78_1.q = *(arg4 + (i_1 << 3))
                    sub_4394c0(data_138fd4c, 0x5d5150)
                
                i_1 += 1
            while (i_1 s< *(*arg3 + 4))
        
        result = sub_4394c0(data_138fd4c, &data_5d5158)
    
    @__security_check_cookie@4(result_1 ^ &__saved_ebp)
    return result
}
