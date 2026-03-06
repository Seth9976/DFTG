// 函数名称: sub_448220
// 虚拟地址: 0x448220
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_448220(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_3 = arg2 * 0x1bc + arg3
    void var_32c
    int32_t eax_5 = sub_4453c0(&var_32c, arg2, arg3, &var_32c, 1)
    int32_t result = 0
    int32_t result_1 = 0
    
    if (arg5 s> 0)
        void* var_338_1 = &var_32c
        
        do
            int32_t esi_1 = 0
            int32_t ebx_1 = 2
            
            if (eax_5 s> 0)
                do
                    int32_t var_328[0xc8]
                    void* ecx = var_328[esi_1 * 2]
                    
                    if ((*(ecx + 4) & 1) != 0)
                        if (*(eax_3 + (*(arg4 + (result << 2)) << 3) + 0x24) == 6)
                            ebx_1 = *(ecx + 8)
                            
                            if (*(arg3 + 0x10) == 0)
                                sub_444430(var_338_1, 0x11, arg3, arg2, *var_338_1, 1, 1, 0)
                        
                        result = result_1
                    
                    esi_1 += 1
                while (esi_1 s< eax_5)
            
            int32_t* esi_2 = arg4 + (result << 2)
            int32_t eax_8 = *esi_2
            *(eax_3 + 0x18c) += ebx_1
            int32_t ecx_3 = *(eax_3 + 0x18c)
            *(eax_3 + 0x1ac) += ebx_1
            int32_t eax_9 = ebx_1
            
            if (ecx_3 s> 0xa)
                *(eax_3 + 0x18c) = 0xa
                eax_9 = eax_9 - ecx_3 + 0xa
            
            int32_t ecx_4 = *(arg3 + 0x10)
            
            if (ecx_4 == 0)
                if (eax_9 != 0)
                    eax_9 = sub_444430(eax_9, ecx_4 + 0x27, arg3, arg2, eax_8, eax_9, ecx_4, ecx_4)
                    ecx_4 = *(arg3 + 0x10)
                
                if (ecx_4 == 0)
                    sub_444430(eax_9, ecx_4 + 0xf, arg3, arg2, *esi_2, ebx_1, ecx_4, ecx_4)
            
            var_338_1 += 8
            result = result_1 + 1
            result_1 = result
        while (result s< arg5)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
