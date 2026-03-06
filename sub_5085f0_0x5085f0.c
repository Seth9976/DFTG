// 函数名称: sub_5085f0
// 虚拟地址: 0x5085f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_5085f0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a0328
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* const i_2
    char* const i_1 = i_2
    
    if (i_1 != 8 && i_1 s>= 0)
        sub_508350(arg1)
        result = arg1[0x12]
        bool cond:0_1 = result != 0
        
        if (result s<= 0)
            goto label_50866d
        
        char* i_7 = *arg1
        char* const i_5 = &data_5b2591
        
        if (i_7 != 0)
            i_5 = i_7
        
        int32_t esi_1 = 0
        i_2 = i_5
        
        if (sub_4eae80(&i_2) != 0)
            uint32_t i
            
            do
                esi_1 += 1
                i = sub_4eae80(&i_2)
            while (i != 0)
        
        result = arg1[0x12]
        
        if (esi_1 s< result)
            goto label_508673
        
        cond:0_1 = result != 0
    label_50866d:
        
        if (not(cond:0_1))
        label_508673:
            i_2 = &data_5b2591
            int32_t var_8_1 = 0
            char* const ecx_2 = &data_5b2591
            char* eax_4 = *arg1
            
            if (eax_4 != 0)
                ecx_2 = eax_4
            
            sub_48a6e0(&i_2, ecx_2, arg1[1])
            int32_t* result_2
            
            if (i_1 s< 0x80)
                result_2 = 1
            else if (i_1 s>= 0x800)
                void* const ecx_4
                ecx_4.b = i_1 s>= 0x10000
                result_2 = ecx_4 + 3
            else
                result_2 = 2
            
            char* const i_3 = i_2
            int32_t* result_1 = result_2
            void* const var_18
            int32_t* result_3
            
            if (i_3 == 0 || *i_3 == 0)
                sub_48a0e0(&i_2, result_2)
                result_3 = result_1
                var_18 = nullptr
            else
                char* eax_5 = sub_48a080(&i_2)
                result_3 = result_1
                void* eax_6 = *(eax_5 + 8)
                var_18 = eax_6
                sub_48a180(eax_6, eax_6 + result_3, &i_2, 1)
            
            char* const i_4 = i_2
            void* edx_4 = var_18 + i_4
            
            if (i_1 u< 0x80)
                *edx_4 = i_1.b
            else if (i_1 u< 0x800)
                *edx_4 = (i_1 u>> 6).b | 0xc0
                *(edx_4 + 1) = (i_1.b & 0x3f) | 0x80
            else if (i_1 u>= 0x10000)
                *edx_4 = (i_1 u>> 0x12).b | 0xf0
                *(edx_4 + 1) = ((i_1 u>> 0xc).b & 0x3f) | 0x80
                *(edx_4 + 2) = ((i_1 u>> 6).b & 0x3f) | 0x80
                *(edx_4 + 3) = (i_1.b & 0x3f) | 0x80
            else
                *edx_4 = (i_1 u>> 0xc).b | 0xe0
                *(edx_4 + 1) = ((i_1 u>> 6).b & 0x3f) | 0x80
                *(edx_4 + 2) = (i_1.b & 0x3f) | 0x80
            
            *(var_18 + result_3 + i_4) = 0
            char* eax_7 = *arg1
            int32_t edx_5
            
            if (eax_7 == 0 || *eax_7 == 0)
                edx_5 = 0
            else
                edx_5 = *(sub_48a080(arg1) + 8)
                eax_7 = *arg1
            
            char* ecx_21 = &data_5b2591
            
            if (eax_7 != 0)
                ecx_21 = eax_7
            
            void* eax_9 = arg1[1]
            sub_48a6e0(&i_2, eax_9 + ecx_21, edx_5 - eax_9)
            float xmm0_1 = arg1[0x13]
            char* const i_6 = i_2
            xmm0_1 f- 0
            int32_t eax_11
            eax_11:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
                | (xmm0_1 < 0f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            int32_t xmm0_2
            
            if (p_2)
                char* const i_8 = &data_5b2591
                
                if (i_6 != 0)
                    i_8 = i_6
                
                result, xmm0_2 = sub_4e9430(arg1[0xc], i_8)
            
            if (not(p_2) || not(arg1[0x13] f<= xmm0_2))
                void** var_2c_3 = &var_18
                sub_4889e0(&result_1, arg1[0xc], 0x12)
                void* const eax_12 = var_18
                
                if (i_1 s< 0x80)
                    result = result_1
                    
                    if (*(eax_12 + (i_1 << 2) + 0x3c) != 0xffffffff)
                        goto label_5088b5
                    
                    goto label_508855
                
                int32_t* eax_14 = *(*(eax_12 + 0x30) + (((i_1 s>> 4 | i_1) & *(eax_12 + 0x34)) << 2))
                
                if (eax_14 == 0)
                label_508852:
                    result = result_1
                label_508855:
                    
                    if (result != 0)
                        result[7] -= 1
                else
                    while (i_1 != *eax_14)
                        eax_14 = eax_14[2]
                        
                        if (eax_14 == 0)
                            goto label_508852
                    
                    if (eax_14 == 0xfffffffc)
                        goto label_508852
                    
                    result = result_1
                label_5088b5:
                    
                    if (result != 0)
                        result[7] -= 1
                    
                    sub_48a560(arg1, &i_2)
                    result = sub_508910(arg1, arg1[1])
                    arg1[1] = result
                    arg1[3] = result
            
            int32_t var_8_2 = 1
            
            if (data_aca1f4 != 0 && i_6 != 0 && *i_6 != 0)
                result = sub_48a080(&i_2)
                int32_t temp3_1 = result[1]
                result[1] -= 1
                
                if (temp3_1 == 1)
                    result = sub_4984f0(result, &result[3][2])
        
        arg1[2] = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
