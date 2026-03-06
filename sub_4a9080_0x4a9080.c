// 函数名称: sub_4a9080
// 虚拟地址: 0x4a9080
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4a9080(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59f500
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_579300(&data_642650, arg1, 0x1018)
    data_126cc8c
    sub_4cead0(**data_642620)
    char* eax_4 = sub_4cf020(**(arg1 + 0x1018), data_126cc8c)
    **data_642620 = eax_4
    int32_t* ecx_6 = data_642620
    
    if (ecx_6[1] != 0x22)
        sub_489550(eax_4, &data_5b2591, "ptr->assetType == ASSET_TYPE_UI2", 
            "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x8ae, "UI2DefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t* result = sub_4981f0(ecx_6)
    int32_t ecx_7 = 0
    int32_t* result_1 = result
    int32_t var_1c = 0
    
    if (result[2] s> 0)
        int32_t* esi_1 = nullptr
        int32_t* var_14_1 = nullptr
        
        while (true)
            int32_t eax_5 = *result
            int32_t ebx_1 = 0
            
            if (*(esi_1 + eax_5) s> 0)
                int32_t edx_2 = 0
                int32_t var_18_1 = 0
                
                while (true)
                    int32_t* edi_1 = *(esi_1 + eax_5 + 8)
                    int32_t ecx_8 = *(edi_1 + edx_2)
                    
                    if (ecx_8 s< 0 || ecx_8 s>= data_6218ec)
                        sub_489550(eax_5, &data_5b2591, 
                            "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", 
                            "d:\ax\trunk\ax2017\engine\attribmap.cpp", 0x8b, "AttribTagGetField")
                        
                        if (IsDebuggerPresent() != 1)
                            sub_489700()
                            noreturn
                        
                        breakpoint
                    
                    int32_t eax_8 = *(*(data_6218e8 + (ecx_8 << 2)) + 0xc)
                    
                    if (eax_8 == 0)
                        sub_489550(eax_8, &data_5b2591, "pAttribField->pDefMap", 
                            "d:\ax\trunk\ax2017\engine\attribmap.cpp", 0x1fe, "AttribTagGetDefMap")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    if (eax_8 == data_126cd24)
                        void* edi_2 = *(edi_1 + edx_2 + 8)
                        int32_t eax_9 = *(edi_2 + 8)
                        
                        if (eax_9 != 0)
                            uint32_t ecx_9 = zx.d(eax_9.w)
                            
                            if (ecx_9 u< data_63e5c8)
                                void* esi_3 = ecx_9 * 0x248 + data_63e5c4
                                
                                if (*(esi_3 + 0x244) == eax_9)
                                    int32_t var_8_1 = 0
                                    `eh vector vbase constructor iterator'(esi_3 + 0xc, 0x34, 2, 
                                        sub_498c00)
                                    edx_2 = var_18_1
                                    int32_t var_8_2 = 0xffffffff
                                    int32_t ecx_10 = data_63e5d0
                                    data_63e5d0 = zx.d(*(esi_3 + 0x244))
                                    *(esi_3 + 0x244) = ecx_10
                                    data_63e5d4 -= 1
                                
                                esi_1 = var_14_1
                        
                        *(edi_2 + 8) = 0
                    
                    ebx_1 += 1
                    edx_2 += 0x10
                    var_18_1 = edx_2
                    eax_5 = *result_1
                    
                    if (ebx_1 s< *(esi_1 + eax_5))
                        continue
                    
                    ecx_7 = var_1c
                    break
            
            result = result_1
            ecx_7 += 1
            esi_1 = &esi_1[6]
            var_1c = ecx_7
            var_14_1 = esi_1
            
            if (ecx_7 s>= result[2])
                break
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
