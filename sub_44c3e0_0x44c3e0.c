// 函数名称: sub_44c3e0
// 虚拟地址: 0x44c3e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_44c3e0(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t* arg8)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t result = arg4
    int32_t edi = arg7
    int32_t result_1 = result
    
    if (edi != arg5)
        do
            sub_44c3e0(result_1, arg5, arg6 | 1 << (edi u% 0x20), edi + 1, arg8)
            edi += 1
        while (edi != arg5)
        
        result = result_1
    
    int32_t esi_2 = 0
    int32_t var_138 = 0
    
    if (arg6 != 0)
        int32_t edx_1 = 0
        int32_t var_128[0x47]
        
        if (arg5 s> 0)
            int32_t ecx_1 = 1
            
            do
                if ((arg6 & ecx_1) != 0)
                    var_128[esi_2] = *(result + (edx_1 << 2))
                    esi_2 += 1
                
                result = result_1
                edx_1 += 1
                ecx_1 = rol.d(ecx_1, 1)
            while (edx_1 s< arg5)
            
            var_138 = esi_2
        
        int32_t esi_3 = 0
        int32_t ebx_2 = 0
        void* edi_3 = arg2 * 0x1bc + arg3
        int32_t eax_5 = sub_44bae0(result, arg2, arg3, *(edi_3 + 0x178), 0, 0)
        int32_t i_4 = *(edi_3 + 0x164)
        int32_t var_12c = 0
        
        if (i_4 s> 0)
            void* ecx_3 = edi_3 + 0x25
            int32_t i
            
            do
                bool cond:0_1 = *ecx_3 != 6
                int32_t eax_6 = esi_3 + 1
                ecx_3 += 8
                
                if (cond:0_1)
                    eax_6 = esi_3
                
                esi_3 = eax_6
                i = i_4
                i_4 -= 1
            while (i != 1)
            var_12c = esi_3
            esi_3 = 0
        
        int32_t i_3 = *(edi_3 + 0x164)
        
        if (i_3 s> 0)
            void* eax_7 = edi_3 + 0x24
            int32_t i_1
            
            do
                if (*eax_7 == 2 && *(eax_7 + 1) != 6)
                    ebx_2 = 1
                
                eax_7 += 8
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
        
        int32_t eax_8 = 0
        int32_t var_130_1 = 0
        
        if (var_138 s> 0)
            void* edx_3 = arg3
            
            do
                int32_t ecx_4 = var_128[eax_8]
                int32_t i_5 = *(*(edx_3 + ecx_4 * 0xc + 0x8c4) + 0x34)
                
                if (i_5 s> 0)
                    int32_t* edx_5 = *(edx_3 + ecx_4 * 0xc + 0x8c4) + 0x38
                    int32_t i_2
                    
                    do
                        if (*edx_5 == 3)
                            char ecx_5 = (edx_5[1]).b
                            int32_t eax_12 = esi_3 + 1
                            
                            if ((ecx_5 & 4) == 0)
                                eax_12 = esi_3
                            
                            esi_3 = eax_12
                            
                            if ((ecx_5 & 8) != 0)
                                if (ebx_2 == 0)
                                    esi_3 += 2
                                else
                                    esi_3 += 3
                        
                        edx_5 = &edx_5[3]
                        i_2 = i_5
                        i_5 -= 1
                    while (i_2 != 1)
                    edx_3 = arg3
                
                eax_8 = var_130_1 + 1
                var_130_1 = eax_8
            while (eax_8 s< var_138)
        
        result = eax_5 - esi_3
        
        if (result s<= var_12c)
            result = arg6
            *arg8 |= result
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
