// 函数名称: sub_448b70
// 虚拟地址: 0x448b70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_448b70(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* result = *arg1
    int32_t i = 0
    int32_t* var_330 = arg1
    int32_t i_1 = 0
    
    if (*(result + 4) s> 0)
        int32_t esi_1 = 0
        void* edx_1 = &arg1[0x63]
        int32_t var_33c_1 = 0
        void* var_338_1 = edx_1
        
        do
            void* edi_2 = arg1[0x311] + esi_1
            *(edx_1 + 0x1c) = 0
            *(edx_1 + 0x20) = 0
            *(edi_2 + 0xc) = 0
            *(edi_2 + 0x14) = 0
            int32_t var_32c[0xc9]
            int32_t eax_3 = sub_4453c0(&var_32c, i, arg1, &var_32c, 1)
            int32_t ebx = 0
            
            if (eax_3 s> 0)
                do
                    var_328
                    void* esi_2 = *(&var_328 + (ebx << 3))
                    
                    if ((*(esi_2 + 4) & 0x80) == 0)
                    label_448cc2:
                        int32_t eax_9 = *(esi_2 + 4)
                        
                        if ((eax_9 & 0x200) != 0)
                            *(edi_2 + 0xc) += *(esi_2 + 8)
                            *(edi_2 + 0x10) = var_32c[ebx * 2]
                            eax_9 = *(esi_2 + 4)
                        
                        if ((eax_9.b & 4) != 0)
                            int32_t eax_10 = var_32c[ebx * 2]
                            *(edi_2 + 0x14) = 1
                            *(edi_2 + 0x18) = eax_10
                    else if (sub_444ec0(var_330, i_1) != 0)
                        int32_t eax_5 = *(esi_2 + 8)
                        int32_t edx_4 = *var_338_1
                        *(var_338_1 + 0x20) += eax_5
                        int32_t edx_5 = edx_4 + eax_5
                        *var_338_1 = edx_5
                        
                        if (edx_5 s> 0xa)
                            eax_5 += 0xa - edx_5
                            *var_338_1 = 0xa
                        
                        int32_t ecx_5 = var_330[4]
                        int32_t* eax_6
                        
                        if (ecx_5 != 0 || eax_5 == 0)
                            eax_6 = var_330
                        else
                            sub_444430(eax_5, ecx_5 + 0x25, var_330, i_1, var_32c[ebx * 2], eax_5, 
                                ecx_5, ecx_5)
                            eax_6 = var_330
                            ecx_5 = eax_6[4]
                        
                        if (ecx_5 == 0)
                            sub_444430(eax_6, ecx_5 + 0x11, eax_6, i_1, var_32c[ebx * 2], 0x80, ecx_5, 
                                ecx_5)
                        
                        goto label_448cc2
                    
                    ebx += 1
                while (ebx s< eax_3)
                
                esi_1 = var_33c_1
            
            arg1 = var_330
            esi_1 += 0x1c0
            i = i_1 + 1
            edx_1 = var_338_1 + 0x1bc
            i_1 = i
            result = *arg1
            var_33c_1 = esi_1
            var_338_1 = edx_1
        while (i s< *(result + 4))
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
