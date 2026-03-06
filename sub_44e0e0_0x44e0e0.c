// 函数名称: sub_44e0e0
// 虚拟地址: 0x44e0e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_44e0e0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edx = 0
    void* eax_3 = arg2 * 0x1bc
    int32_t esi = 0
    int32_t ecx = 0
    int32_t var_158 = 0
    int32_t var_154 = 0
    int32_t ebx = *(eax_3 + arg1 + 0x164)
    
    if (ebx s> 0)
        char* eax_5 = eax_3 + 0x29 + arg1
        int32_t var_ac[0x29]
        
        do
            if (eax_5[0xfffffffc] == 4 && *eax_5 == 5)
                var_ac[esi] = edx
                esi += 1
            
            edx += 1
            eax_5 = &eax_5[8]
        while (edx s< ebx)
        
        var_158 = esi
        
        if (esi != 0)
            int32_t eax_6 = 0
            
            if (ebx s> 0)
                char* edx_3 = eax_3 + 0x25 + arg1
                int32_t var_14c[0x28]
                
                do
                    if (*edx_3 == 3)
                        var_14c[ecx] = eax_6
                        ecx += 1
                    
                    eax_6 += 1
                    edx_3 = &edx_3[8]
                while (eax_6 s< ebx)
                
                var_154 = ecx
                
                if (ecx != 0)
                    int32_t eax_9
                    int32_t ebx_2
                    int32_t esi_2
                    
                    if (*(eax_3 + arg1 + 0x1c4) s>= *(eax_3 + arg1 + 0x1c0))
                        eax_9 = (*(*(eax_3 + arg1 + 0x1c) + 4))(arg1, arg2, 0xe, &var_ac, &var_158, 
                            &var_14c, &var_154, 0, 0, 0)
                        
                        if (arg1[0x30f] == 0)
                            int32_t eax_13 = *(*(eax_3 + arg1 + 0x1c) + 0xc)
                            
                            if (eax_13 != 0)
                                eax_13(arg1, arg2)
                            
                            eax_9 = sub_444560(&var_ac, arg2, arg1, 0xe, &var_ac, &var_158, &var_14c, 
                                &var_154)
                            ebx_2 = arg2
                            esi_2 = eax_9
                        else
                            ebx_2 = arg2
                            esi_2 = 0xffffffff
                    else
                        ebx_2 = arg2
                        eax_9 =
                            sub_444560(&var_ac, ebx_2, arg1, 0xe, &var_ac, &var_158, &var_14c, &var_154)
                        esi_2 = eax_9
                    
                    int32_t eax_15 = sub_44da80(eax_9, ebx_2, arg1, esi_2, var_ac[0], var_14c[0])
                    
                    if (arg1[4] == 0)
                        int32_t ebx_3 = var_ac[0]
                        sub_444430(eax_15, 0x34, arg1, arg2, esi_2, ebx_3, var_14c[0], 0)
                        void* eax_16 = eax_3 + (ebx_3 << 3)
                        
                        if ((*(eax_16 + arg1 + 0x2b) & 2) != 0)
                            sub_444430(eax_16, 0x2d, arg1, arg2, ebx_3, 0, 0, 0)
                    
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return 1
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return 0
}
