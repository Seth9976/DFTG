// 函数名称: sub_4483a0
// 虚拟地址: 0x4483a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4483a0(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_85c = 2
    void* edi_1 = arg2 * 0x1bc + arg3
    int32_t edx = 0
    int32_t var_858 = 0
    int32_t i = *(edi_1 + 0x174)
    void* eax_3 = edi_1 + 0x18
    int32_t var_528[0x46]
    
    while (i != 0xffffffff)
        var_528[edx] = i
        i = sx.d(*(arg3 + i * 0xc + 0x8ca))
        edx += 1
    
    int32_t i_1 = *(edi_1 + 0x178)
    int32_t ebx = 0
    
    while (i_1 != 0xffffffff)
        var_528[edx + ebx] = i_1
        i_1 = sx.d(*(arg3 + i_1 * 0xc + 0x8ca))
        ebx += 1
    
    int32_t var_854 = ebx + edx
    int32_t var_848[0xc8]
    int32_t eax_8 = sub_4453c0(&var_848, arg2, arg3, &var_848, 1)
    void* eax_10
    int32_t edx_3
    eax_10, edx_3 = sub_444640(&var_528, arg2, arg3, 7, &var_528, &var_854, 0, nullptr, arg4, 0, 0)
    var_844
    
    if (eax_10 != 0)
        int32_t eax_11 = 0
        
        if (eax_8 s> 0)
            do
                void* ecx_2 = *(&var_844 + (eax_11 << 3))
                
                if ((*(ecx_2 + 4) & 1) != 0 && *(edi_1 + (arg4 << 3) + 0x24) == 6)
                    var_85c = *(ecx_2 + 8)
                
                eax_11 += 1
            while (eax_11 s< eax_8)
        
        int32_t ecx_5 = var_85c
        int32_t eax_12 = ecx_5
        *(edi_1 + 0x18c) += ecx_5
        int32_t edx_5 = *(edi_1 + 0x18c)
        *(edi_1 + 0x1ac) += ecx_5
        
        if (edx_5 s> 0xa)
            *(edi_1 + 0x18c) = 0xa
            eax_12 = eax_12 - edx_5 + 0xa
        
        int32_t edx_6 = *(arg3 + 0x10)
        
        if (edx_6 == 0)
            if (eax_12 != 0)
                eax_12 = sub_444430(eax_12, 0x27, arg3, arg2, arg4, eax_12, edx_6, edx_6)
                edx_6 = *(arg3 + 0x10)
                ecx_5 = var_85c
            
            if (edx_6 == 0)
                sub_444430(eax_12, 0xf, arg3, arg2, arg4, ecx_5, edx_6, edx_6)
        
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return 0
    
    int32_t ebx_3 = 0
    
    if (eax_8 s> 0)
        edx_3 = 0
        
        do
            void* ecx_9 = *(&var_844 + (ebx_3 << 3))
            eax_10 = *(ecx_9 + 4)
            
            if ((eax_10.b & 2) != 0)
                edx_3 = 1
            
            var_858 = edx_3
            
            if ((eax_10 & 0x1000) != 0)
                void* ecx_10 = *(ecx_9 + 8)
                *(edi_1 + 0x18c) += ecx_10
                int32_t edx_7 = *(edi_1 + 0x18c)
                *(edi_1 + 0x1ac) += ecx_10
                
                if (edx_7 s> 0xa)
                    *(edi_1 + 0x18c) = 0xa
                    eax_10 = 0xa - edx_7
                    ecx_10 += eax_10
                
                if (*(arg3 + 0x10) == 0 && ecx_10 != 0)
                    eax_10 = sub_444430(eax_10, 0x25, arg3, arg2, var_848[ebx_3 * 2], ecx_10, 0, 0)
                
                edx_3 = var_858
            
            ebx_3 += 1
        while (ebx_3 s< eax_8)
    
    int32_t edi_4 = var_854
    int32_t ebx_4 = 0
    
    if (edi_4 s> 0)
        do
            edx_3 = var_528[ebx_4]
            
            if (edx_3 s>= 0)
                if (*(arg3 + 0x10) == 0)
                    void* eax_16 = *(arg3 + edx_3 * 0xc + 0x8c4)
                    eax_10 = sub_444430(eax_16, 0x17, arg3, arg2, edx_3, *(eax_16 + 0xc), 0, 0)
                    edx_3 = var_528[ebx_4]
                
                eax_10, edx_3 = sub_445280(eax_10, edx_3, arg3, 0xffffffff, 1, 0)
                edi_4 = var_854
            else
                eax_10 = eax_3
                *(eax_10 + 0x198) -= 1
            
            ebx_4 += 1
        while (ebx_4 s< edi_4)
    
    if (*(arg3 + 0x10) == 0 && edi_4 s> 0)
        char const* const eax_17 = "tile"
        
        if (edi_4 != 1)
            eax_17 = "tiles"
        
        char const* const var_874_3 = eax_17
        int32_t var_878_3 = edi_4
        int32_t var_87c_5 = arg2
        int32_t var_880_5 = *eax_3
        void var_410
        sub_41da20(&var_410, edx_3, "tiles", &var_410, "%s %d discards %d %s.\n")
        sub_4892e0(&var_410)
        edi_4 = var_854
        eax_10 = nullptr
        void* var_850_2 = nullptr
        
        if (edi_4 s> 0)
            do
                int32_t edx_8 = var_528[eax_10]
                int32_t eax_19 = edx_8 * 3
                uint32_t ecx_14 = zx.d(*(arg3 + (eax_19 << 2) + 0x8cb))
                int32_t var_874_4 = *(*(arg3 + (eax_19 << 2) + 0x8c4) + (ecx_14 << 2))
                int32_t var_878_4 = edx_8
                int32_t var_87c_6 = *eax_3
                sub_41da20(&var_410, edx_8, ecx_14, &var_410, "%s discards %d %s.\n")
                sub_4892e0(&var_410)
                edi_4 = var_854
                eax_10 = var_850_2 + 1
                var_850_2 = eax_10
            while (eax_10 s< edi_4)
    
    int32_t i_2 = edi_4 + 1
    
    if (*(arg3 + 0x10) == 0)
        int32_t eax_23 = sub_444430(eax_10, 0x10, arg3, arg2, arg4, 0, 0, 0)
        
        for (; i_2 s> 0; i_2 -= eax_23)
            eax_23 = sub_447f90(eax_23, arg2, arg3, i_2, var_858)
    else
        *(eax_3 + 0x198) += i_2
        *(eax_3 + 0x1a0) += i_2
        
        if (*(eax_3 + 0x1a0) s> 0x23)
            *(eax_3 + 0x1a0) = 0x23
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return 1
}
