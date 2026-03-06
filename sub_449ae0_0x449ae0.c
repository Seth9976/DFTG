// 函数名称: sub_449ae0
// 虚拟地址: 0x449ae0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_449ae0(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t arg5, void* arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_42c = 0
    int32_t eax_5 = arg2 * 0x1bc + arg3
    int32_t var_330[0xc9]
    int32_t eax_7
    int32_t edx
    eax_7, edx = sub_4453c0(&var_330, arg2, arg3, &var_330, 1)
    int32_t var_41c = eax_7
    int32_t ebx = 0
    
    if (eax_7 s> 0)
        do
            var_32c
            void* esi_1 = *(&var_32c + (ebx << 3))
            eax_7 = *(esi_1 + 4)
            
            if ((eax_7.b & 2) != 0)
                edx = arg2 * 0x1c0
                var_42c = 1
                *(*(arg3 + 0xc44) + edx + 0x20) = var_330[ebx * 2]
                eax_7 = *(esi_1 + 4)
            
            if ((eax_7 & 0x1000) != 0)
                int32_t ecx_1 = *(esi_1 + 8)
                *(eax_5 + 0x18c) += ecx_1
                edx = *(eax_5 + 0x18c)
                *(eax_5 + 0x1ac) += ecx_1
                
                if (edx s> 0xa)
                    ecx_1 += 0xa - edx
                    *(eax_5 + 0x18c) = 0xa
                
                eax_7 = *(arg3 + 0x10)
                
                if (eax_7 == 0)
                    if (ecx_1 != 0)
                        edx = sub_444430(eax_7, eax_7 + 0x25, arg3, arg2, var_330[ebx * 2], ecx_1, 
                            eax_7, eax_7)
                        eax_7 = *(arg3 + 0x10)
                    
                    if (eax_7 == 0)
                        eax_7, edx = sub_444430(eax_7, eax_7 + 0x11, arg3, arg2, var_330[ebx * 2], 
                            0x1000, 2, eax_7)
            
            if ((*(esi_1 + 4) & 0x100) != 0)
                eax_7 = eax_5
                
                if (*(eax_7 + (arg4 << 3) + 0x24) == 6)
                    int32_t ecx_5 = var_330[ebx * 2]
                    eax_7 = ecx_5 * 3
                    *(arg3 + (eax_7 << 2) + 0x8cd) = 1
                    
                    if (*(arg3 + 0x10) == 0)
                        eax_7, edx = sub_444430(eax_7, 0x11, arg3, arg2, ecx_5, 0x100, 2, 0)
            
            ebx += 1
        while (ebx s< var_41c)
    
    void* ebx_2 = arg6
    int32_t esi_2 = 0
    
    if (ebx_2 s> 0)
        do
            int32_t eax_14 = arg5
            edx = *(eax_14 + (esi_2 << 2))
            
            if (edx s>= 0)
                if (*(arg3 + 0x10) == 0)
                    void* eax_13 = *(arg3 + edx * 0xc + 0x8c4)
                    sub_444430(eax_13, 0x17, arg3, arg2, edx, *(eax_13 + 0xc), 0, 0)
                    eax_14 = arg5
                    edx = *(eax_14 + (esi_2 << 2))
                
                eax_7, edx = sub_445280(eax_14, edx, arg3, 0xffffffff, 1, 0)
            else
                eax_7 = eax_5
                *(eax_7 + 0x1b0) -= 1
            
            esi_2 += 1
        while (esi_2 s< ebx_2)
    
    if (*(arg3 + 0x10) == 0 && ebx_2 s> 0)
        char const* const eax_15 = "tile"
        
        if (ebx_2 != 1)
            eax_15 = "tiles"
        
        char const* const var_43c_3 = eax_15
        void* var_440_2 = ebx_2
        int32_t var_444_3 = arg2
        int32_t var_448_5 = *(eax_5 + 0x18)
        void var_410
        sub_41da20(&var_410, edx, "tiles", &var_410, "%s %d discards %d %s.\n")
        sub_4892e0(&var_410)
        int32_t esi_3 = 0
        
        do
            int32_t edx_3 = *(arg5 + (esi_3 << 2))
            int32_t eax_18 = edx_3 * 3
            uint32_t ecx_9 = zx.d(*(arg3 + (eax_18 << 2) + 0x8cb))
            int32_t var_43c_4 = *(*(arg3 + (eax_18 << 2) + 0x8c4) + (ecx_9 << 2))
            int32_t var_440_3 = edx_3
            int32_t var_444_4 = *(eax_5 + 0x18)
            sub_41da20(&var_410, edx_3, ecx_9, &var_410, "%s discards %d %s.\n")
            eax_7 = sub_4892e0(&var_410)
            esi_3 += 1
        while (esi_3 s< arg6)
        
        ebx_2 = arg6
    
    if (*(arg3 + 0x10) != 0)
        *(eax_5 + 0x1b0) += ebx_2 + 1
        *(eax_5 + 0x1b8) += ebx_2 + 1
        
        if (*(eax_5 + 0x1b8) s> 0x23)
            *(eax_5 + 0x1b8) = 0x23
        
        int64_t var_420 = 0
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return 0
    
    sub_444430(eax_7, 0x10, arg3, arg2, arg4, 0, 0, 0)
    bool ecx_13 = var_42c != 0
    var_41c.b = ecx_13
    
    if (*(arg3 + 0x10) != 0)
        int64_t var_420_1 = 0
        *(eax_5 + 0x1b0) += ebx_2 + 1
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return 0
    
    void* esi_5 = arg2 * 0x1c0 + *(arg3 + 0xc44)
    *(esi_5 + 0x1b8) = 0
    *(esi_5 + 0x1c) = ecx_13
    *(esi_5 + 0x1b4) = ebx_2 + 1
    *(esi_5 + 0x1bc) = 0
    int32_t result =
        sub_449070(esi_5 + 0x24, arg2, arg3, ebx_2 + 1, esi_5 + 0x24, esi_5 + 0x1b8, var_41c.b)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
