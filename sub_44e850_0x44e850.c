// 函数名称: sub_44e850
// 虚拟地址: 0x44e850
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_44e850(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* ebx = arg1
    int32_t i_1 = 0
    int32_t* var_4c8 = ebx
    void* result = *ebx
    
    if (*(result + 4) s> 0)
        void* edi_1 = &ebx[0x63]
        void* var_4b8_1 = edi_1
        int32_t i
        
        do
            int32_t esi_1 = *(edi_1 - 0x28)
            int32_t edx_1 = 0
            int32_t ecx = 0
            int32_t var_4b0 = 0
            int32_t var_4ac[0x27]
            
            if (esi_1 s> 0)
                result = edi_1 - 0x167
                
                do
                    if ((*(result + 6) & 2) == 0 && *result == 2)
                        var_4ac[edx_1] = ecx
                        edx_1 += 1
                    
                    ecx += 1
                    result += 8
                while (ecx s< esi_1)
                
                var_4b0 = edx_1
            
            int32_t ecx_1 = *edi_1
            
            if (ebx[0x30f] == 0)
                if (*(edi_1 + 0x38) s< *(edi_1 + 0x34))
                    result = sub_444560(&var_4ac, i_1, ebx, 5, &var_4ac, &var_4b0, 0, nullptr)
                else
                    result =
                        (*(*(edi_1 - 0x170) + 4))(ebx, i_1, 5, &var_4ac, &var_4b0, 0, 0, ecx_1, 0, 0)
                    
                    if (ebx[0x30f] == 0)
                        int32_t eax_6 = *(*(edi_1 - 0x170) + 0xc)
                        
                        if (eax_6 != 0)
                            eax_6(ebx, i_1)
                        
                        result = sub_444560(&var_4ac, i_1, ebx, 5, &var_4ac, &var_4b0, 0, nullptr)
                
                edx_1 = var_4b0
                *(edi_1 + 0x44) = 1
            else if (edx_1 s> ecx_1)
                edx_1 = ecx_1
                var_4b0 = edx_1
            
            int32_t esi_3 = 0
            
            if (edx_1 s> 0)
                do
                    if (ebx[4] == 0)
                        int32_t edi_2 = var_4ac[esi_3]
                        sub_444430(result, 0x3b, ebx, i_1, edi_2, 0, 0, 0)
                        
                        if ((*(var_4b8_1 + (edi_2 << 3) - 0x161) & 2) != 0)
                            sub_444430(var_4b8_1, 0x2d, ebx, i_1, edi_2, 0, 0, 0)
                        
                        edi_1 = var_4b8_1
                    
                    result = var_4ac[esi_3]
                    esi_3 += 1
                    *(edi_1 + (result << 3) - 0x167) = 1
                    edx_1 = var_4b0
                while (esi_3 s< edx_1)
            
            if (ebx[4] == 0)
                int32_t ecx_5 = *edi_1
                void* esi_4 = edi_1 - 0x174
                void* var_4c4_1 = esi_4
                char const* const eax_9 = "worker"
                
                if (edx_1 != 1)
                    eax_9 = "workers"
                
                char const* const var_4d8_2 = eax_9
                int32_t var_4dc_2 = edx_1
                char const* const eax_10 = "credit"
                
                if (ecx_5 != 1)
                    eax_10 = "credits"
                
                char const* const var_4e0_3 = eax_10
                int32_t var_4e4_4 = ecx_5
                int32_t var_4e8_3 = *esi_4
                void var_40c
                sub_41da20(&var_40c, "credits", ecx_5, &var_40c, 
                    "%s ends round with %d %s and recruits %d %s.\n")
                int32_t ecx_6
                result, ecx_6 = sub_4892e0(&var_40c)
                edx_1 = var_4b0
                
                if (edx_1 s> 0)
                    int32_t var_4d8_4 = *esi_4
                    sub_41da20(&var_40c, edx_1, ecx_6, &var_40c, "%s recruited")
                    void var_40d
                    
                    if (var_4b0 s> 0)
                        int32_t ebx_1 = 0
                        
                        do
                            void* edi_3 = &var_40d
                            char j
                            
                            do
                                j = *(edi_3 + 1)
                                edi_3 += 1
                            while (j != 0)
                            int32_t ecx_7 = var_4ac[ebx_1]
                            *edi_3 = 0x20
                            char* edx_3 = (&data_5b4ff0)[zx.d(*(esi_4 + (ecx_7 << 3) + 0xc))]
                            char* esi_5 = edx_3
                            uint32_t ecx_8
                            
                            do
                                ecx_8.b = *edx_3
                                edx_3 = &edx_3[1]
                            while (ecx_8.b != 0)
                            
                            void* edx_4 = edx_3 - esi_5
                            void* edi_4 = &var_40d
                            
                            do
                                ecx_8.b = *(edi_4 + 1)
                                edi_4 += 1
                            while (ecx_8.b != 0)
                            
                            ebx_1 += 1
                            int32_t esi_6
                            int32_t edi_5
                            edi_5, esi_6 = __builtin_memcpy(edi_4, esi_5, edx_4 u>> 2 << 2)
                            __builtin_memcpy(edi_5, esi_6, edx_4 & 3)
                            esi_4 = var_4c4_1
                        while (ebx_1 s< var_4b0)
                        
                        ebx = var_4c8
                        edi_1 = var_4b8_1
                    
                    void* ecx_13 = &var_40d
                    char j_1
                    
                    do
                        j_1 = *(ecx_13 + 1)
                        ecx_13 += 1
                    while (j_1 != 0)
                    *ecx_13 = 0xa2e
                    *(ecx_13 + 2) = 0
                    result = sub_4892e0(&var_40c)
                    edx_1 = var_4b0
            
            sub_444820(result, i_1, ebx, edx_1, 1, ebx[0x30f])
            result = *ebx
            i = i_1 + 1
            edi_1 += 0x1bc
            i_1 = i
            var_4b8_1 = edi_1
        while (i s< *(result + 4))
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
