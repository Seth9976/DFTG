// 函数名称: sub_4a7a10
// 虚拟地址: 0x4a7a10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4a7a10(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59f480
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* result = arg1
    int32_t* result_1 = result
    int32_t ebx = 0
    int32_t var_24 = 0
    
    if (*result s> 0)
        int32_t edx_1 = data_6218ec
        int32_t ecx = 0
        int32_t var_28_1 = 0
        
        while (true)
            int32_t* esi_2 = result[2] + ecx
            int32_t ecx_1 = *esi_2
            
            if (ecx_1 s< 0 || ecx_1 s>= edx_1)
                sub_489550(result, &data_5b2591, 
                    "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", 
                    "d:\ax\trunk\ax2017\engine\attribmap.cpp", 0x8b, "AttribTagGetField")
                
                if (IsDebuggerPresent() != 1)
                    sub_489700()
                    noreturn
                
                breakpoint
            
            int32_t eax_5 = *(*(data_6218e8 + (ecx_1 << 2)) + 0xc)
            
            if (eax_5 == 0)
                sub_489550(eax_5, &data_5b2591, "pAttribField->pDefMap", 
                    "d:\ax\trunk\ax2017\engine\attribmap.cpp", 0x1fe, "AttribTagGetDefMap")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            if (eax_5 != data_126cd24)
                if (ecx_1 s< 0 || ecx_1 s>= edx_1)
                    sub_489550(eax_5, &data_5b2591, 
                        "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", 
                        "d:\ax\trunk\ax2017\engine\attribmap.cpp", 0x8b, "AttribTagGetField")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                if (eax_5 == data_126cc78)
                    int32_t* eax_9 = esi_2[2]
                    int32_t esi_5 = 0
                    int32_t* var_20_1 = eax_9
                    int32_t var_18_1 = 0
                    
                    if (eax_9[2] s> 0)
                        int32_t* ecx_4 = 8
                        int32_t* var_1c_1 = 8
                        
                        while (true)
                            int32_t eax_10 = *eax_9
                            int32_t ebx_1 = 0
                            
                            if (*(ecx_4 + eax_10) s> 0)
                                int32_t esi_6 = 0
                                void* edi_2 = &ecx_4[2]
                                int32_t var_14_1 = 0
                                
                                while (true)
                                    int32_t* edi_3 = *(edi_2 + eax_10)
                                    int32_t ecx_5 = *(edi_3 + esi_6)
                                    
                                    if (ecx_5 s< 0 || ecx_5 s>= edx_1)
                                        sub_489550(eax_10, &data_5b2591, 
                                            "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", 
                                            "d:\ax\trunk\ax2017\engine\attribmap.cpp", 0x8b, 
                                            "AttribTagGetField")
                                        
                                        if (IsDebuggerPresent() != 1)
                                            sub_489700()
                                            noreturn
                                        
                                        breakpoint
                                    
                                    int32_t eax_13 = *(*(data_6218e8 + (ecx_5 << 2)) + 0xc)
                                    
                                    if (eax_13 == 0)
                                        sub_489550(eax_13, &data_5b2591, "pAttribField->pDefMap", 
                                            "d:\ax\trunk\ax2017\engine\attribmap.cpp", 0x1fe, 
                                            "AttribTagGetDefMap")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_489700()
                                        noreturn
                                    
                                    if (eax_13 == data_126cd24)
                                        void* edi_4 = *(edi_3 + esi_6 + 8)
                                        int32_t eax_14 = *(edi_4 + 8)
                                        
                                        if (eax_14 != 0)
                                            uint32_t ecx_6 = zx.d(eax_14.w)
                                            
                                            if (ecx_6 u< data_63e5c8)
                                                void* esi_8 = ecx_6 * 0x248 + data_63e5c4
                                                
                                                if (*(esi_8 + 0x244) == eax_14)
                                                    int32_t var_8_3 = 1
                                                    `eh vector vbase constructor iterator'(esi_8 + 0xc, 
                                                        0x34, 2, sub_498c00)
                                                    int32_t var_8_4 = 0xffffffff
                                                    int32_t ecx_7 = data_63e5d0
                                                    data_63e5d0 = zx.d(*(esi_8 + 0x244))
                                                    *(esi_8 + 0x244) = ecx_7
                                                    data_63e5d4 -= 1
                                                
                                                esi_6 = var_14_1
                                        
                                        *(edi_4 + 8) = 0
                                        edx_1 = data_6218ec
                                    
                                    ebx_1 += 1
                                    ecx_4 = var_1c_1
                                    esi_6 += 0x10
                                    var_14_1 = esi_6
                                    eax_10 = *var_20_1
                                    edi_2 = &ecx_4[2]
                                    
                                    if (ebx_1 s< *(ecx_4 + eax_10))
                                        continue
                                    
                                    esi_5 = var_18_1
                                    break
                            
                            eax_9 = var_20_1
                            esi_5 += 1
                            ecx_4 = &ecx_4[8]
                            var_18_1 = esi_5
                            var_1c_1 = ecx_4
                            
                            if (esi_5 s>= eax_9[2])
                                break
                        
                        ebx = var_24
            else
                void* edi_1 = esi_2[2]
                int32_t eax_6 = *(edi_1 + 8)
                
                if (eax_6 != 0)
                    uint32_t ecx_2 = zx.d(eax_6.w)
                    
                    if (ecx_2 u< data_63e5c8)
                        void* esi_4 = ecx_2 * 0x248 + data_63e5c4
                        
                        if (*(esi_4 + 0x244) == eax_6)
                            int32_t var_8_1 = 0
                            `eh vector vbase constructor iterator'(esi_4 + 0xc, 0x34, 2, sub_498c00)
                            int32_t var_8_2 = 0xffffffff
                            int32_t ecx_3 = data_63e5d0
                            data_63e5d0 = zx.d(*(esi_4 + 0x244))
                            *(esi_4 + 0x244) = ecx_3
                            data_63e5d4 -= 1
                
                *(edi_1 + 8) = 0
                edx_1 = data_6218ec
            
            result = result_1
            ebx += 1
            ecx = var_28_1 + 0x10
            var_24 = ebx
            var_28_1 = ecx
            
            if (ebx s>= *result)
                break
            
            continue
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
