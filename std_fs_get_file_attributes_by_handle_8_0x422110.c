// 函数名称: ___std_fs_get_file_attributes_by_handle@8
// 虚拟地址: 0x422110
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcall___std_fs_get_file_attributes_by_handle@8(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59cf30
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_80 = eax_2
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ebx_1
    
    if (data_62b274 == 0x19)
        ebx_1 = data_62b278
    label_422165:
        
        if (ebx_1 != 0)
            uint32_t ecx = zx.d(ebx_1.w)
            int32_t edx_1
            
            if (ecx u< data_63e5ac)
                edx_1 = data_63e5a8
                result = ecx * 0x1418
            
            if (ecx u>= data_63e5ac || *(result + edx_1 + 0x1410) != ebx_1)
                sub_489550(result, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                    "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, 
                    "DataArray<struct UI2>::DataArrayGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            result = sub_49e970(ecx * 0x1418 + edx_1, 0)
            struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
            int32_t esi_1 = 0
            
            if (result_1[0x449] s> 0)
                int32_t edi_1 = 0
                
                while (true)
                    if (edi_1 s< 0 || esi_1 s>= result_1[0x449])
                        sub_489550(result, &data_5b2591, "index >= 0 && index < mSize", 
                            "d:\ax\trunk\ax2017\engine\xarray.h", 0xb5, 
                            "XArray<struct UI2StateEffect>::operator []")
                        
                        if (IsDebuggerPresent() != 1)
                            sub_489700()
                            noreturn
                        
                        breakpoint
                    
                    int32_t* ecx_3 = result_1[0x448]
                    int32_t eax_3 = *(ecx_3 + edi_1)
                    
                    if (eax_3 == 0)
                        char* ecx_4 = *(ecx_3 + edi_1 + 4)
                        char const* const eax_5 = "notification"
                        
                        while (true)
                            char edx_2 = *ecx_4
                            char const temp3_1 = *eax_5
                            bool c_1 = edx_2 u< temp3_1
                            
                            if (edx_2 == temp3_1)
                                if (edx_2 == 0)
                                    result = nullptr
                                    break
                                
                                edx_2 = ecx_4[1]
                                char temp5_1 = eax_5[1]
                                c_1 = edx_2 u< temp5_1
                                
                                if (edx_2 == temp5_1)
                                    ecx_4 = &ecx_4[2]
                                    eax_5 = &eax_5[2]
                                    
                                    if (edx_2 != 0)
                                        continue
                                    
                                    result = nullptr
                                    break
                            
                            result = sbb.d(eax_5, eax_5, c_1) | 1
                            break
                        
                        if (result == 0)
                            goto label_42239b
                    else
                        result = eax_3 - 1
                        
                        if (eax_3 != 1)
                            sub_489550(result, &data_5b2591, "Halt", 
                                "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x4235, "UI2IsStateEffectActive")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                    
                    esi_1 += 1
                    edi_1 += 0x18
                    
                    if (esi_1 s>= result_1[0x449])
                        break
                    
                    continue
            
            void var_60
            sub_422450(&var_60)
            int32_t var_8_1 = 0
            EnterCriticalSection(data_114e830 + 0x26c)
            void* ecx_6 = data_114e830
            int32_t eax_9 = *(ecx_6 + 0x264)
            
            if (*(ecx_6 + 0x260) != eax_9)
                int32_t eax_11 = eax_9 & 0x80000007
                
                if (eax_11 s< 0)
                    eax_11 = ((eax_11 - 1) | 0xfffffff8) + 1
                
                sub_4c5440(&var_60, eax_11 * 0x4c + ecx_6)
                void* eax_16 = data_114e830
                *(eax_16 + 0x264) += 1
                LeaveCriticalSection(eax_16 + 0x26c)
                char* const esi_2 = &data_5b2591
                char* const var_64 = &data_5b2591
                int32_t edi_2 = 0
                var_8_1.b = 1
                char* const ebx_2 = &data_5b2591
                int32_t var_6c_1 = 0
                int32_t var_18
                
                if (var_18 s<= 0)
                label_422320:
                    char* var_5c
                    char* edx_4 = var_5c
                    
                    if (edx_4 != 0)
                        ebx_2 = edx_4
                    
                    char* const var_84_7 = ebx_2
                    sub_4892e0("show! %s")
                    sub_4bbc90(ebx_1)
                    sub_48a560(&data_62c838, &var_5c)
                    data_126be8c
                    data_62c83c = var_6c_1
                    sub_4c5ca0()
                else
                    while (true)
                        int32_t var_58[0x8]
                        char* eax_18 = var_58[edi_2]
                        char* const ecx_8 = &data_5b2591
                        
                        if (eax_18 != 0)
                            ecx_8 = eax_18
                        
                        char const* const eax_19 = "tgg.gameDBID"
                        int32_t eax_21
                        
                        while (true)
                            char edx_3 = *ecx_8
                            char const temp2_1 = *eax_19
                            bool c_2 = edx_3 u< temp2_1
                            
                            if (edx_3 == temp2_1)
                                if (edx_3 == 0)
                                    eax_21 = 0
                                    break
                                
                                edx_3 = ecx_8[1]
                                char temp4_1 = eax_19[1]
                                c_2 = edx_3 u< temp4_1
                                
                                if (edx_3 == temp4_1)
                                    ecx_8 = &ecx_8[2]
                                    eax_19 = &eax_19[2]
                                    
                                    if (edx_3 != 0)
                                        continue
                                    
                                    eax_21 = 0
                                    break
                            
                            eax_21 = sbb.d(eax_19, eax_19, c_2) | 1
                            break
                        
                        if (eax_21 == 0)
                            break
                        
                        edi_2 += 1
                        
                        if (edi_2 s>= var_18)
                            goto label_422320
                    
                    void var_38
                    sub_48a560(&var_64, &var_38 + (edi_2 << 2))
                    esi_2 = var_64
                    char* const eax_23 = &data_5b2591
                    
                    if (esi_2 != 0)
                        eax_23 = esi_2
                    
                    var_6c_1 = __atoi64(eax_23)
                    
                    if (arg1 == 0)
                        goto label_422320
                
                var_8_1.b = 2
                
                if (data_aca1f4 != 0 && esi_2 != 0 && *esi_2 != 0)
                    char* eax_26 = sub_48a080(&var_64)
                    int32_t temp6_1 = *(eax_26 + 4)
                    *(eax_26 + 4) -= 1
                    
                    if (temp6_1 == 1)
                        sub_4984f0(eax_26, *(eax_26 + 0xc) + 0x10)
            else
                LeaveCriticalSection(ecx_6 + 0x26c)
            
            result = sub_4224e0(&var_60)
    else if (data_62b284 == 0x19)
        ebx_1 = data_62b288
        goto label_422165
    label_42239b:
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
