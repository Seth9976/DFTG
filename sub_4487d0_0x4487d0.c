// 函数名称: sub_4487d0
// 虚拟地址: 0x4487d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4487d0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_2 = arg2 * 0x1bc
    void* edi = eax_2 + arg1
    int32_t var_3cc[0xc8]
    int32_t eax_4 = sub_4453c0(&var_3cc, arg2, arg1, &var_3cc, 1)
    int32_t edx = 0
    int32_t eax_5 = *(edi + 0x164)
    int32_t edi_1 = 0
    int32_t var_3d0 = 0
    
    if (eax_5 s> 0)
        void* ecx_1 = edi + 0x29
        int32_t var_ac[0x29]
        
        do
            if (*(ecx_1 - 4) == 4 && *ecx_1 == 1)
                var_ac[edx] = edi_1
                edx += 1
            
            edi_1 += 1
            ecx_1 += 8
        while (edi_1 s< eax_5)
        
        var_3d0 = edx
        
        if (edx != 0)
            if (*(edi + 0x1c4) s< *(edi + 0x1c0))
                sub_444560(&var_ac, arg2, arg1, 6, &var_ac, &var_3d0, 0, nullptr)
            else
                (*(*(edi + 0x1c) + 4))(arg1, arg2, 6, &var_ac, &var_3d0, 0, 0, 0, 0, 0)
                
                if (*(arg1 + 0xc3c) == 0)
                    int32_t eax_10 = *(*(edi + 0x1c) + 0xc)
                    
                    if (eax_10 != 0)
                        eax_10(arg1, arg2)
                    
                    sub_444560(&var_ac, arg2, arg1, 6, &var_ac, &var_3d0, 0, nullptr)
            
            int32_t eax_12 = var_ac[0]
            void* eax_13 = edi + (eax_12 << 3)
            void* ecx_3
            
            if (*(edi + (eax_12 << 3) + 0x28) == 0x42)
                ecx_3 = *arg1
            
            int32_t var_3f8_2
            
            if (*(edi + (eax_12 << 3) + 0x28) != 0x42 || *(ecx_3 + 0x11) != 0 || *(ecx_3 + 0x12) != 0)
                *(eax_13 + 0x25) = 2
                
                if (*(arg1 + 0x10) == 0)
                    int32_t var_3f0_3 = 0
                    int32_t var_3f4_3 = 0
                    var_3f8_2 = 2
                label_448915:
                    int32_t edi_3 = var_ac[0]
                    sub_444430(eax_13, 0xe, arg1, arg2, edi_3, var_3f8_2, 0, 0)
                    eax_13 = eax_2 + (edi_3 << 3)
                    
                    if ((*(eax_13 + arg1 + 0x2b) & 2) != 0)
                        eax_13 = sub_444430(eax_13, 0x2d, arg1, arg2, edi_3, 0, 0, 0)
            else
                *(eax_13 + 0x25) = 1
                
                if (*(arg1 + 0x10) == 0)
                    int32_t var_3f0_2 = 0
                    int32_t var_3f4_2 = 0
                    var_3f8_2 = 1
                    goto label_448915
            int32_t eax_15 = sub_4483a0(eax_13, arg2, arg1, var_ac[0])
            int32_t edx_3 = 0
            
            if (eax_4 s> 0)
                do
                    var_3c8
                    
                    if ((*(*(&var_3c8 + (edx_3 << 3)) + 4) & 0x100) != 0 && eax_15 != 0
                            && *(edi + (var_ac[0] << 3) + 0x24) == 6)
                        *(arg1 + var_3cc[edx_3 * 2] * 0xc + 0x8cd) = 1
                    
                    edx_3 += 1
                while (edx_3 s< eax_4)
            
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return 1
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return 0
}
