// 函数名称: sub_450160
// 虚拟地址: 0x450160
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_450160(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edi = 0
    int32_t eax_3 = **arg1
    int32_t var_428 = eax_3
    arg1[2] = eax_3
    arg1[3] = 0
    void var_40c
    int32_t edx
    sub_41da20(&var_40c, edx, arg1, &var_40c, "start seed: %u\n")
    sub_4892e0(&var_40c)
    void* eax_5 = *arg1
    arg1[4] = 0
    void* i = &data_6d014c
    int32_t eax_6 = *(eax_5 + 4)
    arg1[0x30e] = 1
    arg1[0x305] = 0xffffffff
    void* eax_8 = eax_6 * 0xc
    arg1[0x304] = eax_8
    __builtin_memset(&arg1[0x306], 0, 0x20)
    arg1[0x30f] = 0
    arg1[0x303] = 0
    
    do
        if ((*(i - 0x48) & 0x43) == 0)
            eax_8 = *(*arg1 + 8) & *i
            
            if (eax_8 == *i)
                int32_t ecx = arg1[0x303]
                edi += 1
                void** edx_1 = &arg1[(ecx + 0xbb) * 3]
                arg1[0x303] = ecx + 1
                eax_8 = i - 0x64
                *edx_1 = eax_8
                edx_1[1] = 0xffff00ff
                edx_1[2].w = 0
        
        i += 0x68
    while (i s< 0x6d3754)
    
    int32_t edx_2 = arg1[0x303]
    
    if (edx_2 s< 0x46)
        int32_t i_4 = 0x46 - edx_2
        eax_8 = &arg1[edx_2 + ((edx_2 + 0x119) << 1)]
        int32_t i_1
        
        do
            *(eax_8 - 4) = 0
            eax_8 += 0xc
            *(eax_8 - 0xc) = 0xffff
            *(eax_8 - 0xa) = 0xff
            *(eax_8 - 8) = 0
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
    
    sub_444430(eax_8, 0, arg1, 0xffffffff, arg1[0x304], edi, 0, 0)
    void* result = *arg1
    int32_t i_2 = 0
    int32_t i_3 = 0
    
    if (*(result + 4) s> 0)
        int32_t edi_1 = 0
        void* esi = &arg1[0x59]
        int32_t var_418_1 = 0
        
        do
            void* eax_16 = esi - 0x13f
            int32_t j_1 = 0x28
            int32_t j
            
            do
                *(eax_16 - 1) = 0
                eax_16 += 8
                *(eax_16 - 5) = 0xff0000
                j = j_1
                j_1 -= 1
            while (j != 1)
            int32_t ecx_2 = 5
            int32_t var_414_1 = 5
            int32_t eax_18 = *(*arg1 + 0xc)
            
            if (eax_18 != 0)
                if (*(eax_18 + edi_1 + 0x108) != 0)
                    ecx_2 = 0
                
                var_414_1 = ecx_2
            
            int32_t edi_2 = 0
            
            if (ecx_2 != 0)
                do
                    *(esi + (edi_2 << 3) - 0x140) = 1
                    
                    if (*(*arg1 + 8) != 0 && edi_2 == 0)
                        *(esi - 0x140) = 8
                    
                    void* eax_19
                    eax_19.b = edi_2 s>= 3
                    eax_19.b += 1
                    *(esi + (edi_2 << 3) - 0x13f) = eax_19.b
                    uint32_t eax_21 = zx.d(*(esi + (edi_2 << 3) - 0x140))
                    eax_18 = sub_444430(eax_21, 0x2a, arg1, i_2, edi_2, eax_21, zx.d(eax_19.b), 0)
                    ecx_2 = var_414_1
                    edi_2 += 1
                    i_2 = i_3
                while (edi_2 s< ecx_2)
            
            *esi = ecx_2
            __builtin_memset(esi + 4, 0xff, 0x20)
            *(esi + 0x1c) = 0
            *(esi + 0x24) = 0
            *(esi + 0x28) = 1
            sub_444430(eax_18, 8, arg1, i_2, 1, 0, 0, 0)
            i_2 = i_3 + 1
            *(esi + 0x34) = 0
            edi_1 = var_418_1 + 0x3d0
            *(esi + 0x2c) = 0
            *(esi + 0x38) = 0
            *(esi + 0x30) = 0
            __builtin_memset(esi + 0x40, 0, 0x18)
            esi += 0x1bc
            result = *arg1
            i_3 = i_2
            var_418_1 = edi_1
        while (i_2 s< *(result + 4))
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
