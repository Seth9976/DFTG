// 函数名称: sub_44d2d0
// 虚拟地址: 0x44d2d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_44d2d0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t esi = 0
    void* eax_3 = arg2 * 0x1bc + arg1
    int32_t var_4f0 = 0
    int32_t edi = 0
    int32_t var_4e8 = 0
    int32_t var_4f4 = 1
    void var_4e4
    int32_t eax_5 = sub_4453c0(&var_4e4, arg2, arg1, &var_4e4, 4)
    int32_t var_4fc = eax_5
    int32_t ecx = 0
    
    if (eax_5 s> 0)
        do
            int32_t var_4e0[0xc7]
            void* edx = var_4e0[ecx * 2]
            
            if ((*(edx + 4) & 0x40) != 0)
                var_4f4 = *(edx + 8)
                eax_5 = var_4fc
            
            ecx += 1
        while (ecx s< eax_5)
    
    int32_t ecx_1 = 0
    int32_t edx_1 = *(eax_3 + 0x164)
    
    if (edx_1 s> 0)
        void* eax_8 = eax_3 + 0x29
        int32_t var_ac[0x29]
        
        do
            if (*(eax_8 - 4) == 4 && *eax_8 == 4)
                var_ac[esi] = ecx_1
                esi += 1
            
            ecx_1 += 1
            eax_8 += 8
        while (ecx_1 s< edx_1)
        
        var_4f0 = esi
        
        if (esi != 0)
            int32_t i = *(eax_3 + 0x170)
            
            if (i != 0xffffffff)
                int32_t var_1c4
                
                do
                    int32_t eax_11 = (i + 0xbb) * 3
                    int32_t* ecx_2 = arg1 + (eax_11 << 2)
                    
                    if (*(arg1 + (eax_11 << 2) + 7) == 1 && *(*ecx_2 + 0x18) != 0)
                        uint32_t eax_13 = zx.d(ecx_2[2].b)
                        
                        if (eax_13 s< var_4f4)
                            int32_t edx_3 = var_4f4 - eax_13
                            int32_t ecx_5
                            int32_t edi_2
                            edi_2, ecx_5 = __memfill_u32(&(&var_1c4)[edi], i, edx_3)
                            edi = var_4e8 + edx_3
                            var_4e8 = edi
                    
                    i = sx.d(*(arg1 + i * 0xc + 0x8ca))
                while (i != 0xffffffff)
                
                if (edi != 0)
                    int32_t eax_19
                    
                    if (*(eax_3 + 0x1c4) s< *(eax_3 + 0x1c0))
                        eax_19 =
                            sub_444560(&var_ac, arg2, arg1, 0xd, &var_ac, &var_4f0, &var_1c4, &var_4e8)
                    else
                        eax_19 = (*(*(eax_3 + 0x1c) + 4))(arg1, arg2, 0xd, &var_ac, &var_4f0, &var_1c4, 
                            &var_4e8, 0, 0, 0)
                        
                        if (*(arg1 + 0xc3c) == 0)
                            int32_t eax_21 = *(*(eax_3 + 0x1c) + 0xc)
                            
                            if (eax_21 != 0)
                                eax_21(arg1, arg2)
                            
                            eax_19 = sub_444560(&var_ac, arg2, arg1, 0xd, &var_ac, &var_4f0, &var_1c4, 
                                &var_4e8)
                    
                    if (*(arg1 + 0x10) == 0)
                        eax_19 = sub_444430(eax_19, 0x33, arg1, arg2, var_ac[0], var_1c4, 0, 0)
                    
                    sub_44d140(eax_19, arg2, arg1, var_ac[0], var_1c4)
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return 1
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return 0
}
