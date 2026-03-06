// 函数名称: sub_4489f0
// 虚拟地址: 0x4489f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4489f0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_2 = arg2 * 0x1bc
    void* var_12c = eax_2
    void* edi_1 = eax_2 + (arg4 << 3) + arg3
    
    if (*(edi_1 + 0x28) == 0x42)
        eax_2 = *arg3
    
    int32_t var_154_1
    
    if (*(edi_1 + 0x28) != 0x42 || *(eax_2 + 0x11) != 0 || *(eax_2 + 0x12) != 0)
        *(edi_1 + 0x25) = 2
        
        if (arg3[4] == 0)
            int32_t var_14c_2 = 0
            int32_t var_150_2 = 0
            var_154_1 = 2
        label_448a69:
            int32_t eax_3 = sub_444430(eax_2, 0xe, arg3, arg2, arg4, var_154_1, 0, 0)
            
            if ((*(edi_1 + 0x2b) & 2) != 0)
                sub_444430(eax_3, 0x2d, arg3, arg2, arg4, 0, 0, 0)
    else
        *(edi_1 + 0x25) = 1
        
        if (arg3[4] == 0)
            int32_t var_14c_1 = 0
            int32_t var_150_1 = 0
            var_154_1 = 1
            goto label_448a69
    int32_t edx = 0
    int32_t i = *(var_12c + arg3 + 0x174)
    int32_t var_128[0x47]
    
    while (i != 0xffffffff)
        var_128[edx] = i
        i = sx.d(*(&arg3[i * 3] + 0x8ca))
        edx += 1
    
    int32_t edi_2 = 0
    int32_t i_1 = *(var_12c + arg3 + 0x178)
    
    while (i_1 != 0xffffffff)
        var_128[edx + edi_2] = i_1
        i_1 = sx.d(*(&arg3[i_1 * 3] + 0x8ca))
        edi_2 += 1
    
    int32_t var_138 = edi_2 + edx
    
    if (*(var_12c + arg3 + 0x1c4) s>= *(var_12c + arg3 + 0x1c0))
        (*(*(var_12c + arg3 + 0x1c) + 4))(arg3, arg2, 7, &var_128, &var_138, 0, 0, arg4, 0, 0)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return 1
}
