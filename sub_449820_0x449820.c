// 函数名称: sub_449820
// 虚拟地址: 0x449820
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_449820(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* ecx = arg2 * 0x1c0
    int32_t eax_2 = *(arg1 + 0xc44)
    void* ecx_1 = ecx + eax_2
    void* var_3e0 = ecx_1
    void* edi_1 = arg2 * 0x1bc + arg1
    
    if (*(eax_2 + (arg2 << 2) + 0x8c4) == 1)
        int32_t eax_3 = sub_448f40(arg1, arg2)
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return eax_3
    
    int32_t eax_4 = 0
    int32_t i = 0
    int32_t var_3dc = 0
    
    if (*(edi_1 + 0x164) s> 0)
        void* ecx_5 = edi_1 + 0x29
        int32_t var_ac[0x29]
        
        do
            if (*(ecx_5 - 4) == 4 && *ecx_5 == 1)
                var_ac[eax_4] = i
                eax_4 += 1
            
            i += 1
            ecx_5 += 8
        while (i s< *(edi_1 + 0x164))
        
        var_3dc = eax_4
        
        if (eax_4 != 0)
            if (*(edi_1 + 0x1c4) s>= *(edi_1 + 0x1c0))
                (*(*(edi_1 + 0x1c) + 4))(arg1, arg2, 6, &var_ac, &var_3dc, 0, 0, 0, 0, 0)
            
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return 1
        
        ecx_1 = var_3e0
    
    void* edx_2 = *(ecx_1 + 0xc)
    void* var_3d0 = edx_2
    
    if (edx_2 != 0)
        *(ecx_1 + 0xc) = 0
        int32_t eax_8 = *(arg1 + 0x10)
        
        if (eax_8 == 0)
            sub_444430(eax_8, eax_8 + 0x11, arg1, arg2, *(ecx_1 + 0x10), 0x200, eax_8, eax_8)
            edx_2 = var_3d0
            
            if (*(arg1 + 0x10) == 0)
                void* ecx_12 = *(arg1 + 0xc44) + ecx
                *(ecx_12 + 0x1b8) = 0
                *(ecx_12 + 0x1b4) = edx_2
                *(ecx_12 + 0x1bc) = 1
                *(ecx_12 + 0x1c) = 0
                int32_t eax_13 =
                    sub_449070(ecx_12 + 0x24, arg2, arg1, edx_2, ecx_12 + 0x24, ecx_12 + 0x1b8, 0)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return eax_13
        
        *(edi_1 + 0x1b0) += edx_2
    else if (*(ecx_1 + 0x14) != 0)
        *(ecx_1 + 0x14) = 0
        void* ecx_16 = nullptr
        int32_t i_1 = *(edi_1 + 0x174)
        var_3d0 = nullptr
        int32_t var_3cc[0x64]
        int32_t var_23c[0x64]
        
        if (i_1 != 0xffffffff)
            do
                var_3cc[ecx_16] = i_1
                i_1 = sx.d(*(arg1 + i_1 * 0xc + 0x8ca))
                var_23c[ecx_16] = 0
                ecx_16 += 1
            while (i_1 != 0xffffffff)
            
            var_3d0 = ecx_16
        
        int32_t i_2 = *(edi_1 + 0x178)
        
        if (i_2 != 0xffffffff)
            do
                var_3cc[ecx_16] = i_2
                i_2 = sx.d(*(arg1 + i_2 * 0xc + 0x8ca))
                var_23c[ecx_16] = 1
                ecx_16 += 1
            while (i_2 != 0xffffffff)
            
            var_3d0 = ecx_16
        
        if (*(arg1 + 0x10) == 0)
            sub_444430(var_3e0, 0x11, arg1, arg2, *(var_3e0 + 0x18), 4, 0, 0)
            ecx_16 = var_3d0
        
        if (ecx_16 != 0)
            if (*(edi_1 + 0x1c4) s>= *(edi_1 + 0x1c0))
                (*(*(edi_1 + 0x1c) + 4))(arg1, arg2, 9, &var_3cc, &var_3d0, &var_23c, &var_3d0, 0, 0, 0)
            
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return 1
    
    int64_t var_3d8 = 0
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return 0
}
