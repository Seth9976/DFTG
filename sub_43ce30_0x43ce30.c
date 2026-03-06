// 函数名称: sub_43ce30
// 虚拟地址: 0x43ce30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_43ce30(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* edx_1 = arg2 * 0x1bc + arg1
    int32_t i_7 = *(edx_1 + 0x164)
    int64_t var_164 = 0
    int32_t var_144[0x8]
    __builtin_memset(&var_144, 0, 0x134)
    
    if (i_7 s> 0)
        void* edx_2 = edx_1 + 0x24
        int32_t i
        
        do
            if (*(edx_2 + 1) == 4)
                uint32_t ecx_2 = zx.d(*edx_2) * 7 + zx.d(*(edx_2 + 5))
                var_144[ecx_2] += 1
            
            edx_2 += 8
            i = i_7
            i_7 -= 1
        while (i != 1)
    
    int32_t edi = var_164:4.d
    void var_114
    void* eax_5 = &var_114
    int32_t esi = var_164.d
    int32_t i_1 = 0x118
    void* var_148 = &var_114
    
    do
        int32_t ecx_4 = *(eax_5 - 0x10) + i_1
        int32_t eax_7 = *(eax_5 - 0xc) + i_1
        int32_t eax_10 = *(var_148 - 0x14) + i_1
        int32_t eax_13 = *(var_148 - 8) + i_1
        int32_t eax_16 = *(var_148 + 4) + i_1
        int32_t edx_7 = *((ecx_4 << 3) + &data_1304760) ^ *((eax_7 << 3) + &data_13048a0)
            ^ *((eax_10 << 3) + &data_1304620) ^ *((eax_13 << 3) + &data_13049e0)
            ^ *((eax_16 << 3) + &data_1304da0)
        int32_t ecx_9 = *((ecx_4 << 3) + &data_1304764) ^ *((eax_7 << 3) + &data_13048a4)
            ^ *((eax_10 << 3) + &data_1304624) ^ *((eax_13 << 3) + &data_13049e4)
            ^ *((eax_16 << 3) + &data_1304da4)
        int32_t eax_19 = *(var_148 - 4) + i_1
        int32_t eax_22 = *var_148 + i_1
        i_1 += 0x118
        esi ^= edx_7 ^ *((eax_19 << 3) + &data_1304b20) ^ *((eax_22 << 3) + &data_1304c60)
        edi ^= ecx_9 ^ *((eax_19 << 3) + &data_1304b24) ^ *((eax_22 << 3) + &data_1304c64)
        eax_5 = var_148 + 0x1c
        var_148 = eax_5
    while (i_1 s< 0xc08)
    
    int32_t eax_24 = *(edx_1 + 0x180)
    int32_t i_2 = *(edx_1 + 0x170)
    var_164:4.d = i_2
    int32_t esi_1 = esi ^ (&data_13902e8)[eax_24 * 2]
    int32_t edi_1 = edi ^ (&data_13902ec)[eax_24 * 2]
    int32_t eax_25
    
    for (; i_2 != 0xffffffff; i_2 = sx.d(*(arg1 + (eax_25 << 2) + 0x8ca)))
        eax_25 = i_2 * 3
        
        if (*(arg1 + (eax_25 << 2) + 0x8cd) == 0)
            esi_1 ^= *((i_2 << 3) + &data_1410468)
            edi_1 ^= *((i_2 << 3) + &data_141046c)
    
    int32_t* eax_27 = *((zx.d(esi_1.w) << 2) + &data_1410730)
    int32_t result
    
    if (eax_27 == 0)
    label_43d013:
        void var_124
        void* edx_11 = &var_124
        int32_t i_3 = 0x140
        void* var_14c_1 = &var_124
        int32_t i_5 = 0x140
        
        do
            int32_t i_6 = i_3
            void* var_148_1 = edx_11
            int32_t j = 1
            int32_t i_8 = i_6
            void* eax_28 = edx_11
            
            do
                int32_t eax_30 = *eax_28 + i_6
                int32_t ecx_14 = *((eax_30 << 3) + &data_1304628) ^ *((eax_30 << 3) + &data_1304620)
                int32_t esi_2 = esi_1 ^ ecx_14
                int32_t edx_13 = *((eax_30 << 3) + &data_130462c) ^ *((eax_30 << 3) + &data_1304624)
                int32_t edi_2 = edi_1 ^ edx_13
                int32_t* eax_32 = *((zx.d(esi_2.w) << 2) + &data_1410730)
                
                if (eax_32 != 0)
                    while (*eax_32 != esi_2 || eax_32[1] != edi_2)
                        eax_32 = eax_32[3]
                        
                        if (eax_32 == 0)
                            goto label_43d09a
                    
                    result = eax_32[2]
                    
                    if (result != 0)
                        goto label_43d15b
                
            label_43d09a:
                esi_1 = esi_2 ^ ecx_14
                j += 1
                eax_28 = var_148_1 + 4
                i_6 = i_8 + 0x28
                edi_1 = edi_2 ^ edx_13
                var_148_1 = eax_28
                i_8 = i_6
            while (j s<= 6)
            
            i_3 = i_5 + 0x118
            edx_11 = var_14c_1 + 0x1c
            i_5 = i_3
            var_14c_1 = edx_11
        while (i_3 s< 0xc30)
        
        int32_t eax_35
        
        for (int32_t i_4 = var_164:4.d; i_4 != 0xffffffff; i_4 = sx.d(*(arg1 + (eax_35 << 2) + 0x8ca)))
            eax_35 = i_4 * 3
            
            if (*(arg1 + (eax_35 << 2) + 0x8cd) != 0)
                int32_t edx_15 = *((i_4 << 3) + &data_1410468)
                int32_t esi_3 = esi_1 ^ edx_15
                int32_t ebx = *((i_4 << 3) + &data_141046c)
                int32_t edi_3 = edi_1 ^ ebx
                int32_t* eax_37 = *((zx.d(esi_3.w) << 2) + &data_1410730)
                
                if (eax_37 != 0)
                    while (*eax_37 != esi_3 || eax_37[1] != edi_3)
                        eax_37 = eax_37[3]
                        
                        if (eax_37 == 0)
                            goto label_43d141
                    
                    result = eax_37[2]
                    
                    if (result != 0)
                        goto label_43d15b
                
            label_43d141:
                esi_1 = esi_3 ^ edx_15
                edi_1 = edi_3 ^ ebx
        
        result = 0
    else
        while (*eax_27 != esi_1 || eax_27[1] != edi_1)
            eax_27 = eax_27[3]
            
            if (eax_27 == 0)
                goto label_43d013
        
        result = eax_27[2]
        
        if (result == 0)
            goto label_43d013
    
    label_43d15b:
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
