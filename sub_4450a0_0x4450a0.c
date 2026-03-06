// 函数名称: sub_4450a0
// 虚拟地址: 0x4450a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4450a0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_8 = eax_1
    void* edi = arg1
    void* var_40c = nullptr
    int32_t ebx = arg2
    int32_t esi = 0
    int32_t var_410 = ebx
    int32_t i_4 = *(edi + 0xc0c)
    
    if (i_4 s> 0)
        arg1 = edi + 0x8c9
        int32_t i
        
        do
            bool cond:0_1 = *arg1 != 0
            eax_1 = esi + 1
            arg1 += 0xc
            
            if (cond:0_1)
                eax_1 = esi
            
            esi = eax_1
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    if (esi == 0)
        int32_t i_1 = 0
        void* esi_1 = edi + 0x8cb
        
        do
            if (*(esi_1 - 2) == 1)
                eax_1, arg1 = sub_445280(eax_1, i_1, edi, 0xffffffff, 0, 0)
                *esi_1 = 0xff
            
            i_1 += 1
            esi_1 += 0xc
        while (i_1 s< 0x46)
        
        int32_t i_5 = *(edi + 0xc0c)
        esi = 0
        
        if (i_5 s> 0)
            arg1 = edi + 0x8c9
            int32_t i_2
            
            do
                bool cond:1_1 = *arg1 != 0
                int32_t eax_2 = esi + 1
                arg1 += 0xc
                
                if (cond:1_1)
                    eax_2 = esi
                
                esi = eax_2
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
        
        if (*(edi + 0x10) == 0)
            int32_t var_420_1 = esi
            void var_408
            sub_41da20(&var_408, i_5, arg1, &var_408, "return discarded tiles to bag (new count %d)")
            sub_4892e0(&var_408)
            int32_t i_6 = *(edi + 0xc0c)
            
            if (i_6 s> 0)
                int32_t eax_4 = 0
                int32_t i_3
                
                do
                    void* ecx_2 = edi + 0x8c4 + eax_4
                    eax_4 += 0xc
                    var_40c = ecx_2
                    i_3 = i_6
                    i_6 -= 1
                while (i_3 != 1)
        
        if (esi == 0)
            @__security_check_cookie@4(var_8 ^ &__saved_ebp)
            return 0xffffffff
        
        ebx = var_410
    
    int32_t ecx_5 = *(*edi + 0xc)
    int32_t result
    void* edx_1
    int32_t ebx_1
    
    if (ecx_5 != 0)
        edx_1 = ebx * 0x3d0
        ebx_1 = *(edx_1 + ecx_5 + 0x3c8)
        result = *(ecx_5 + ((var_410 * 0xf4 + ebx_1) << 2) + 0x388)
    
    void* eax_12
    
    if (ecx_5 == 0 || result == 0xffffffff)
        result = 0
        int32_t eax_14 = *(edi + 8) * 0x41c64e6d + 0x3039
        *(edi + 8) = eax_14
        int32_t ebx_2 = *(edi + 0xc0c)
        int32_t edx_4 = mods.dp.d(sx.q(eax_14 u>> 0x10 & 0x7fff), esi)
        
        if (ebx_2 s> 0)
            int32_t esi_2 = 0
            
            do
                void* eax_20 = edi + 0x8c4 + esi_2
                var_40c = eax_20
                
                if (*(eax_20 + 5) == 0)
                    int32_t eax_21 = edx_4
                    edx_4 -= 1
                    
                    if (eax_21 == 0)
                        break
                
                result += 1
                esi_2 += 0xc
            while (result s< ebx_2)
        
        eax_12 = var_40c
    else
        *(edx_1 + ecx_5 + 0x3c8) = ebx_1 + 1
        eax_12 = edi + (result + 0xbb) * 0xc
    
    *(eax_12 + 5) = 0xff
    @__security_check_cookie@4(var_8 ^ &__saved_ebp)
    return result
}
