// 函数名称: sub_48b690
// 虚拟地址: 0x48b690
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_48b690(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d520
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void* var_14 = arg1
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_aca1e4 != 0)
        int32_t* edx_1 = data_aca0dc
        void* edi_1 = nullptr
        
        while (true)
            void* ecx
            
            if (edi_1 != 0)
                ecx = edx_1[7]
                edi_1 += 0xc
            else
                edi_1 = edx_1[7]
                ecx = edi_1
            
            int32_t ebx_1 = edx_1[8]
            void* eax_4 = ecx + ebx_1 * 0xc
            
            if (edi_1 u>= eax_4)
                break
            
            while (true)
                int32_t ecx_1 = *(edi_1 + 8)
                
                if ((ecx_1 & 0xffff0000) != 0)
                    if (ecx_1 == 0)
                        sub_489550(eax_4, &data_5b2591, "id != DATAID_NULL", 
                            "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6c, 
                            "DataArray<struct NetListen>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    uint32_t esi_1 = zx.d(ecx_1.w)
                    
                    if (esi_1 u< ebx_1)
                        int32_t edx_2 = edx_1[7]
                        eax_4 = esi_1 * 3
                        
                        if (*(edx_2 + (eax_4 << 2) + 8) == ecx_1)
                            uint32_t eax_5 = esi_1 * 3
                            void* esi_2 = edx_2 + (eax_5 << 2)
                            (*(*data_aca1e4 + 0x28))(*(edx_2 + (eax_5 << 2) + 4))
                            edx_1 = data_aca0dc
                            int32_t ecx_3 = edx_1[0xa]
                            edx_1[0xa] = zx.d(*(esi_2 + 8))
                            *(esi_2 + 8) = ecx_3
                            edx_1[0xb] -= 1
                            break
                    
                    sub_489550(eax_4, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                        "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, 
                        "DataArray<struct NetListen>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                edi_1 += 0xc
                
                if (edi_1 u>= eax_4)
                    goto label_48b702
        
    label_48b702:
        void* i = nullptr
    label_48b704:
        void* i_4
        
        if (i != 0)
            i_4 = *edx_1
            i += 0x4c
        else
            i = *edx_1
            i_4 = i
        
        for (; i u< edx_1[1] * 0x4c + i_4; i += 0x4c)
            if ((*(i + 0x48) & 0xffff0000) != 0)
                sub_48b510(i)
                edx_1 = data_aca0dc
                goto label_48b704
        
        while (edx_1[0x10] != 0)
            int32_t* ecx_4 = edx_1[0xe]
            void* eax_10 = ecx_4[1]
            edx_1[0xe] = eax_10
            
            if (eax_10 == 0)
                edx_1[0xf] = 0
            else
                *(eax_10 + 8) = 0
            
            void* esi_3 = *ecx_4
            edx_1[0x10] -= 1
            sub_4984f0(ecx_4, 0xc)
            char* eax_11 = *(esi_3 + 0x7e90)
            var_14 = esi_3
            
            if (eax_11 != 0 && eax_11 != &data_5b2591)
                if (data_aca1f4 != 0 && *eax_11 != 0)
                    char* eax_12 = sub_48a080(esi_3 + 0x7e90)
                    int32_t temp0_1 = *(eax_12 + 4)
                    *(eax_12 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_4984f0(eax_12, *(eax_12 + 0xc) + 0x10)
                
                *(esi_3 + 0x7e90) = &data_5b2591
            
            sub_4362d0(data_aca0dc + 0x50, &var_14)
            edx_1 = data_aca0dc
        
        result = (*(*data_aca1e4 + 4))(eax_2)
        void** esi_4 = data_aca0dc
        
        while (esi_4[0x13] != 0)
            int32_t* ecx_11 = esi_4[0x12]
            void* eax_14 = ecx_11[2]
            esi_4[0x12] = eax_14
            
            if (eax_14 == 0)
                esi_4[0x11] = 0
            else
                *(eax_14 + 4) = 0
            
            int32_t edi_2 = *ecx_11
            esi_4[0x13] -= 1
            result = sub_4984f0(ecx_11, 0xc)
            
            if (edi_2 != 0)
                result = _aligned_free_base(edi_2)
            
            esi_4 = data_aca0dc
        
        while (esi_4[0x16] != 0)
            int32_t* ecx_12 = esi_4[0x15]
            void* eax_15 = ecx_12[2]
            esi_4[0x15] = eax_15
            
            if (eax_15 == 0)
                esi_4[0x14] = 0
            else
                *(eax_15 + 4) = 0
            
            int32_t edi_3 = *ecx_12
            esi_4[0x16] -= 1
            result = sub_4984f0(ecx_12, 0xc)
            
            if (edi_3 != 0)
                result = _aligned_free_base(edi_3)
            
            esi_4 = data_aca0dc
        
        void* edi_4 = &esi_4[7]
        
        if (esi_4[7] != 0)
            void* edx_5 = nullptr
            void* ebx_2
            
            while (true)
                ebx_2 = *edi_4
                
                if (edx_5 != 0)
                    edx_5 += 0xc
                    var_14 = ebx_2
                else
                    edx_5 = ebx_2
                    var_14 = ebx_2
                
                result = *(edi_4 + 4) * 3
                void* ecx_14 = ebx_2 + (result << 2)
                
                if (edx_5 u>= ecx_14)
                    break
                
                while (true)
                    result = *(edx_5 + 8)
                    
                    if ((result & 0xffff0000) != 0)
                        int32_t ecx_15 = *(edi_4 + 0xc)
                        *(edi_4 + 0xc) = zx.d(result.w)
                        *(edx_5 + 8) = ecx_15
                        *(edi_4 + 0x10) -= 1
                        break
                    
                    edx_5 += 0xc
                    
                    if (edx_5 u>= ecx_14)
                        goto label_48b93d
            
            ebx_2 = var_14
        label_48b93d:
            *(edi_4 + 4) = 0
            *(edi_4 + 0xc) = 0
            
            if (ebx_2 != 0)
                result = _aligned_free_base(ebx_2)
                esi_4 = data_aca0dc
            
            __builtin_memset(edi_4, 0, 0x14)
            *(edi_4 + 0x18) = 0
        
        if (*esi_4 != 0)
            void* edi_5 = nullptr
        label_48b992:
            void* ecx_16 = *esi_4
            void* edx_6 = ecx_16
            
            if (edi_5 != 0)
                edi_5 += 0x4c
            else
                edi_5 = ecx_16
            
            result = esi_4[1] * 0x4c + edx_6
            
            if (edi_5 u< result)
                do
                    if ((*(edi_5 + 0x48) & 0xffff0000) != 0)
                        sub_48d7d0(esi_4, edi_5)
                        goto label_48b992
                    
                    edi_5 += 0x4c
                while (edi_5 u< result)
                
                edx_6 = ecx_16
            
            esi_4[1] = 0
            esi_4[3] = 0
            
            if (edx_6 != 0)
                result = _aligned_free_base(edx_6)
            
            __builtin_memset(esi_4, 0, 0x14)
            esi_4[6] = 0
            esi_4 = data_aca0dc
        
        if (esi_4 != 0)
            void** ebx_3 = esi_4
            int32_t var_8_1 = 0
            int32_t* i_1 = ebx_3[0x14]
            
            if (i_1 != 0)
                do
                    int32_t* i_5 = i_1
                    i_1 = i_1[1]
                    sub_4984f0(i_5, 0xc)
                while (i_1 != 0)
                
                esi_4 = data_aca0dc
            
            ebx_3[0x16] = 0
            ebx_3[0x14] = 0
            ebx_3[0x15] = 0
            int32_t var_8_2 = 1
            int32_t* i_2 = ebx_3[0x11]
            
            if (i_2 != 0)
                do
                    int32_t* i_6 = i_2
                    i_2 = i_2[1]
                    sub_4984f0(i_6, 0xc)
                while (i_2 != 0)
                
                esi_4 = data_aca0dc
            
            ebx_3[0x13] = 0
            ebx_3[0x11] = 0
            ebx_3[0x12] = 0
            int32_t var_8_3 = 2
            int32_t* i_3 = ebx_3[0xe]
            
            if (i_3 != 0)
                do
                    int32_t* i_7 = i_3
                    i_3 = i_3[1]
                    sub_4984f0(i_7, 0xc)
                while (i_3 != 0)
                
                esi_4 = data_aca0dc
            
            ebx_3[0x10] = 0
            ebx_3[0xe] = 0
            ebx_3[0xf] = 0
            int32_t var_8_4 = 0xffffffff
            result = sub_4984f0(esi_4, 0x5c)
            data_aca0dc = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
