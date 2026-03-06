// 函数名称: sub_4de2f0
// 虚拟地址: 0x4de2f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4de2f0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a06b0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    for (void* i = &data_114a784; i s< &data_114a7c4; i += 4)
        int32_t edx_1 = *i
        
        if (edx_1 != 0)
            (*(*data_114ec78 + 0x2c))(edx_1)
            *i = 0
    
    int32_t edx_2 = data_114a780
    
    if (edx_2 != 0)
        (*(*data_114ec78 + 0x38))(edx_2)
        data_114a780 = 0
    
    void* esi = nullptr
    
    while (true)
        void* ecx_3 = data_6c9dac
        
        while (true)
            if (esi != 0)
                esi += 0xf10
            else
                esi = ecx_3
            
            void* eax_6 = data_6c9db0 * 0xf10 + ecx_3
            
            if (esi u>= eax_6)
            label_4de3a6:
                
                if (ecx_3 != 0)
                    void* edx_3 = nullptr
                    
                    while (true)
                        if (edx_3 != 0)
                            edx_3 += 0xf10
                        else
                            edx_3 = ecx_3
                        
                        void* eax_9 = data_6c9db0 * 0xf10 + ecx_3
                        
                        if (edx_3 u>= eax_9)
                            break
                        
                        while (true)
                            int32_t esi_1 = *(edx_3 + 0xf0c)
                            
                            if ((esi_1 & 0xffff0000) != 0)
                                int32_t ecx_12 = data_6c9db8
                                data_6c9db8 = zx.d(esi_1.w)
                                *(edx_3 + 0xf0c) = ecx_12
                                data_6c9dbc -= 1
                                ecx_3 = data_6c9dac
                                break
                            
                            edx_3 += 0xf10
                            
                            if (edx_3 u>= eax_9)
                                goto label_4de44c
                    
                label_4de44c:
                    data_6c9db0 = 0
                    data_6c9db8 = 0
                    
                    if (ecx_3 != 0)
                        _aligned_free_base(ecx_3)
                    
                    __builtin_memset(&data_6c9dac, 0, 0x14)
                    data_6c9dc4 = 0
                
                int32_t* ecx_5 = data_1150ee0
                
                if (ecx_5 != 0)
                    sub_4984f0(ecx_5, 1)
                    data_1150ee0 = 0
                
                int32_t result = sub_4beb30()
                int32_t* ecx_6 = data_114e814
                
                for (int32_t* i_1 = nullptr; i_1 s< 0x10; i_1 = &i_1[1])
                    int32_t edx_5 = *(i_1 + ecx_6)
                    
                    if (edx_5 != 0)
                        result = (*(*data_114ec78 + 0x2c))(edx_5)
                        ecx_6 = data_114e814
                
                int32_t edx_6 = ecx_6[5]
                
                if (edx_6 != 0)
                    result = (*(*data_114ec78 + 0x38))(edx_6)
                    ecx_6 = data_114e814
                
                if (ecx_6 != 0)
                    void* edi_1 = &ecx_6[0x10]
                    int32_t var_8_1 = 0
                    int32_t* i_2 = *edi_1
                    
                    if (i_2 != 0)
                        do
                            int32_t* i_3 = i_2
                            i_2 = i_2[1]
                            sub_4984f0(i_3, 0xc)
                        while (i_2 != 0)
                        
                        ecx_6 = data_114e814
                    
                    *(edi_1 + 8) = 0
                    *edi_1 = 0
                    *(edi_1 + 4) = 0
                    int32_t var_8_2 = 0xffffffff
                    result = sub_4984f0(ecx_6, 0x54)
                    data_114e814 = 0
                
                int32_t* ecx_9 = data_114ec70
                
                if (ecx_9 != 0)
                    result = sub_4984f0(ecx_9, 0x260)
                    data_114ec70 = 0
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            while ((*(esi + 0xf0c) & 0xffff0000) == 0)
                esi += 0xf10
                
                if (esi u>= eax_6)
                    goto label_4de3a6
            
            if (*(esi + 0xf08) != 0)
                int32_t edx_4 = *(esi + 0xe44)
                
                if (edx_4 != 0)
                    (*(*data_114ec78 + 0x50))(edx_4)
                    *(esi + 0xe44) = 0
                
                *(esi + 0x7e4) = 0
                *(esi + 0x3f8) = 0
                *(esi + 0x3f4) = 0
                *(esi + 8) = 0
                *(esi + 4) = 0
                *(esi + 0xf08) = 0
                break
}
