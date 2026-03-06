// 函数名称: sub_44bae0
// 虚拟地址: 0x44bae0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_44bae0(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, char arg5, char arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* var_334 = arg3
    int32_t* ebx = arg3 + ((arg4 * 3 + 0x231) << 2)
    int32_t var_330[0xc9]
    int32_t eax_6 = sub_4453c0(&var_330, arg2, arg3, &var_330, 3)
    arg3.b = *(ebx + 7)
    int32_t edx = eax_6
    uint32_t esi = 1
    int32_t var_33c = edx
    
    if (arg3.b != 0xff)
        esi = zx.d(arg3.b)
    
    int32_t ecx = *ebx
    
    if (arg6 != 0)
        esi = 1
    
    int32_t result = *(ecx + (esi << 2) + 0x10)
    
    if ((*(ecx + 0x1c) & 0x400) == 0)
        int32_t edi_1 = 0
        var_32c
        
        if (edx s> 0)
            do
                void* ecx_1 = *(&var_32c + (edi_1 << 3))
                
                if ((*(ecx_1 + 4) & 0x102) == 0x102 && *(*ebx + 0x18) == 0 && result s> 2)
                    result -= *(ecx_1 + 8)
                    int32_t result_1 = result
                    
                    if (result s< 2)
                        result = 2
                    
                    int32_t eax_10 = result_1 - result
                    
                    if (*(var_334 + 0x10) == 0 && eax_10 != 0 && arg5 != 0)
                        sub_444430(eax_10, 0x13, var_334, arg2, var_330[edi_1 * 2], 2, eax_10, arg4)
                        edx = var_33c
                
                edi_1 += 1
            while (edi_1 s< edx)
        
        int32_t edi_2 = 0
        
        if (edx s> 0)
            do
                void* edx_1 = *(&var_32c + (edi_2 << 3))
                int32_t ecx_3 = *(edx_1 + 4)
                
                if ((ecx_3 & 0x102) == 2 && ((ecx_3 & 0x800) == 0 || *(*ebx + 0x18) == 5)
                        && ((ecx_3 & 0x1000) == 0 || *(*ebx + 0x18) == 6))
                    int32_t result_2 = result
                    result -= *(edx_1 + 8)
                    
                    if (result s< 1)
                        result = 1
                    
                    int32_t eax_15 = result_2 - result
                    
                    if (*(var_334 + 0x10) == 0 && eax_15 != 0 && arg5 != 0)
                        sub_444430(eax_15, 0x13, var_334, arg2, var_330[edi_2 * 2], 2, eax_15, arg4)
                
                edi_2 += 1
            while (edi_2 s< var_33c)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
