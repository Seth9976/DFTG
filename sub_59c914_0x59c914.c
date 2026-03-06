// 函数名称: sub_59c914
// 虚拟地址: 0x59c914
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

voidsub_59c914(int16_t arg1 @ x87control, long double arg2 @ st0, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t edx
    int32_t edx
    int32_t var_4 = edx
    int16_t x87status
    int16_t temp0
    temp0, x87status = __fnstcw_memmem16(arg1)
    var_4.w = temp0
    bool z
    
    if (z)
        int32_t eax_1
        
        if ((arg4 & 0xfffff) == 0 && arg3 == 0)
            if ((arg4 & 0x80000000) == 0)
                goto label_59c935
            
        label_59c987:
            arg2 = data_5abfb0
            eax_1 = 1
            goto label_59c992
        
        long double st0_1
        st0_1, eax_1 = __convertTOStoQNaN(arg4, arg2)
        arg2 = st0_1
    label_59c992:
        
        if (data_6cfd10 == 0)
            __startOneArgErrorHandling(eax_1, 5, arg2, "sqrt", var_4)
            return 
    else
        if (var_4.w != 0x27f)
            __load_CW(var_4)
        
        bool c1
        
        if ((arg4 & 0x80000000) == 0)
            arg2 = sqrt(arg2)
            c1 = unimplemented  {fsqrt }
        else if ((arg4 & 0x7ff00000) != 0 || (arg4 & 0xfffff) != 0 || arg3 != 0)
            goto label_59c987
        
    label_59c935:
        
        if (data_6cfd10 == 0)
            int32_t eax
            eax.w = var_4.w
            
            if (eax.w != 0x27f)
                eax.w &= 0x20
                
                if (eax.w != 0)
                    bool c0
                    bool c2
                    bool c3
                    eax.w = (c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa
                        | (c3 ? 1 : 0) << 0xe
                    eax.w &= 0x20
                    
                    if (eax.w != 0)
                        __startOneArgErrorHandling(8, 5, arg2, "sqrt", var_4)
                        return 
                
                int16_t x87control_1
                int16_t x87status_2
                x87control_1, x87status_2 = __fldcw_memmem16(var_4.w)
            
            return 
    
    int16_t x87control
    int16_t x87status_1
    
    if (var_4.w != 0x27f)
        x87control, x87status_1 = __fldcw_memmem16(var_4.w)
}
