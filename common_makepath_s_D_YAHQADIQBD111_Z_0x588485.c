// 函数名称: ??$common_makepath_s@D@@YAHQADIQBD111@Z
// 虚拟地址: 0x588485
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t??$common_makepath_s@D@@YAHQADIQBD111@Z(char* arg1, int32_t arg2, char* arg3, char* arg4, char* arg5, char* arg6)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_10 = edi
    
    if (arg1 != 0)
        int32_t ecx_1 = arg2
        
        if (ecx_1 != 0)
            void* esi_1 = arg1
            int32_t edi_2 = neg.d(ecx_1 + 1)
            void* edi_4 = sbb.d(edi_2, edi_2, ecx_1 != 0xffffffff) & &arg1[ecx_1]
            
            if (arg3 == 0)
                goto label_5884e5
            
            char edx = *arg3
            
            if (edx == 0)
                goto label_5884e5
            
            int32_t var_14_1
            
            if (edi_4 == 0 || edi_4 - arg1 s>= 2)
                *arg1 = edx
                arg1[1] = 0x3a
                esi_1 = &arg1[2]
            label_5884e5:
                
                if (arg4 == 0 || *arg4 == 0)
                    goto label_588536
                
                char* edx_1 = arg4
                char* eax_5
                
                do
                    if (edi_4 != 0 && esi_1 u>= edi_4)
                        goto label_5884cb_2
                    
                    eax_5.b = *edx_1
                    *esi_1 = eax_5.b
                    esi_1 += 1
                    edx_1 = &edx_1[1]
                while (*edx_1 != 0)
                
                eax_5.b =
                    *boost::math::tools::evaluate_polynomial<5,long double,long double>(arg4, edx_1)
                
                if (eax_5.b == 0x2f || eax_5.b == 0x5c)
                    goto label_588529
                
                if (edi_4 == 0 || esi_1 u< edi_4)
                    *esi_1 = 0x5c
                    esi_1 += 1
                label_588529:
                    ecx_1 = arg2
                label_588536:
                    
                    if (arg5 != 0 && *arg5 != 0)
                        char* edx_3 = arg5 - esi_1
                        
                        do
                            if (edi_4 != 0 && esi_1 u>= edi_4)
                                goto label_5884cb_2
                            
                            eax_5.b = *(edx_3 + esi_1)
                            *esi_1 = eax_5.b
                            esi_1 += 1
                        while (*(edx_3 + esi_1) != 0)
                    
                    if (arg6 == 0)
                    label_58858f:
                        
                        if (edi_4 == 0 || esi_1 u< edi_4)
                            *esi_1 = 0
                            return 0
                        
                    label_5884cb:
                        var_14_1 = ecx_1
                    else
                        eax_5.b = *arg6
                        
                        if (eax_5.b == 0)
                            goto label_58858f
                        
                        if (eax_5.b == 0x2e)
                            goto label_588571
                        
                        if (edi_4 == 0 || esi_1 u< edi_4)
                            *esi_1 = 0x2e
                            esi_1 += 1
                            eax_5.b = *arg6
                        label_588571:
                            
                            if (eax_5.b == 0)
                                goto label_58858f
                            
                            char* edx_5 = arg6 - esi_1
                            
                            do
                                if (edi_4 != 0 && esi_1 u>= edi_4)
                                    goto label_5884cb_2
                                
                                eax_5.b = *(edx_5 + esi_1)
                                *esi_1 = eax_5.b
                                esi_1 += 1
                            while (*(edx_5 + esi_1) != 0)
                            
                            goto label_58858f
                        
                    label_5884cb_1:
                        var_14_1 = ecx_1
                else
                    var_14_1 = arg2
            else
            label_5884cb_2:
                var_14_1 = ecx_1
            return cleanup_after_error<char>(arg1)
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0x16
}
