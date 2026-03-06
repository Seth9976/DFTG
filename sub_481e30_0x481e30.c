// 函数名称: sub_481e30
// 虚拟地址: 0x481e30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t** __convention("regparm")sub_481e30(int32_t arg1, int32_t* arg2, int32_t** arg3, void* arg4, void* arg5)
{
    // 第一条实际指令: void* esi = arg4
    void* esi = arg4
    int32_t* edi = &arg2[(esi - arg2) s>> 3]
    void* eax_3 = esi - 4
    sub_4822c0(eax_3, edi, arg2, eax_3, arg5)
    int32_t* ebx_1 = &edi[1]
    int32_t* var_8 = ebx_1
    
    if (arg2 u< edi)
        int32_t* esi_1 = edi
        
        do
            if (sub_45f7a0(&arg5, edi[-1], *edi) != 0)
                break
            
            if (sub_45f7a0(&arg5, *edi, edi[-1]) != 0)
                break
            
            edi = &esi_1[-1]
            esi_1 = edi
        while (arg2 u< edi)
        
        ebx_1 = var_8
        esi = arg4
    
    if (ebx_1 u< esi)
        do
            if (sub_45f7a0(&arg5, *ebx_1, *edi) != 0)
                break
            
            if (sub_45f7a0(&arg5, *edi, *ebx_1) != 0)
                break
            
            ebx_1 = &ebx_1[1]
        while (ebx_1 u< esi)
        
        var_8 = ebx_1
    
    int32_t* esi_2 = ebx_1
    int32_t* edx_1 = edi
    label_481ed4:
    int32_t* var_c_1 = edx_1
    
    while (true)
        int32_t* var_14_1 = esi_2
        
        while (true)
            if (esi_2 u< arg4)
                do
                    if (sub_45f7a0(&arg5, *edi, *esi_2) == 0)
                        if (sub_45f7a0(&arg5, *esi_2, *edi) != 0)
                            break
                        
                        if (ebx_1 != esi_2)
                            int32_t ecx_7 = *ebx_1
                            *ebx_1 = *esi_2
                            *esi_2 = ecx_7
                        
                        ebx_1 = &ebx_1[1]
                    
                    esi_2 = &esi_2[1]
                while (esi_2 u< arg4)
                
                edx_1 = var_c_1
                var_8 = ebx_1
                var_14_1 = esi_2
            
            bool cond:0_1 = edx_1 != arg2
            
            if (edx_1 u> arg2)
                int32_t* ebx_3 = var_c_1
                void* esi_3 = &ebx_3[-1]
                int32_t* eax_15
                
                do
                    if (sub_45f7a0(&arg5, *esi_3, *edi) == 0)
                        if (sub_45f7a0(&arg5, *edi, *esi_3) != 0)
                            eax_15 = arg2
                            break
                        
                        edi -= 4
                        
                        if (edi != esi_3)
                            int32_t ecx_10 = *edi
                            *edi = *esi_3
                            *esi_3 = ecx_10
                    
                    eax_15 = arg2
                    ebx_3 -= 4
                    esi_3 -= 4
                while (eax_15 u< ebx_3)
                
                esi_2 = var_14_1
                var_c_1 = ebx_3
                edx_1 = var_c_1
                cond:0_1 = edx_1 != eax_15
                ebx_1 = var_8
            
            if (not(cond:0_1))
                if (esi_2 == arg4)
                    *arg3 = edi
                    arg3[1] = ebx_1
                    return arg3
                
                if (ebx_1 != esi_2)
                    int32_t ecx_11 = *edi
                    *edi = *ebx_1
                    *ebx_1 = ecx_11
                
                int32_t ecx_12 = *edi
                ebx_1 = &ebx_1[1]
                *edi = *esi_2
                edi = &edi[1]
                *esi_2 = ecx_12
                esi_2 = &esi_2[1]
                var_8 = ebx_1
                break
            
            edx_1 = &edx_1[-1]
            var_c_1 = edx_1
            
            if (esi_2 != arg4)
                int32_t ecx_15 = *esi_2
                *esi_2 = *edx_1
                esi_2 = &esi_2[1]
                *edx_1 = ecx_15
                goto label_481ed4
            
            edi -= 4
            
            if (edx_1 != edi)
                int32_t ecx_13 = *edx_1
                *edx_1 = *edi
                *edi = ecx_13
            
            int32_t ecx_14 = *edi
            ebx_1 -= 4
            var_8 = ebx_1
            *edi = *ebx_1
            *ebx_1 = ecx_14
}
