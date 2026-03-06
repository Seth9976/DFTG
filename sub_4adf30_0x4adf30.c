// 函数名称: sub_4adf30
// 虚拟地址: 0x4adf30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4adf30(int32_t arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_59f544
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_86c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void var_860
    int32_t edx
    int128_t* eax_4 = sub_4add30(&var_860, edx, arg1, &var_860)
    int64_t xmm0 = (*eax_4).q
    
    if (arg1 == 0)
        sub_489550(eax_4, &data_5b2591, "id != DATAID_NULL", "d:\ax\trunk\ax2017\engine\dataarray.h", 
            0x6c, "DataArray<struct UI2>::DataArrayGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    uint32_t edx_1 = zx.d(arg1.w)
    
    if (edx_1 u< data_63e5ac)
        int32_t ecx = data_63e5a8
        eax_4 = edx_1 * 0x1418
        
        if (*(eax_4 + ecx + 0x1410) == arg1)
            uint32_t eax_6 = xmm0:4.d - 0x67
            void* esi_2 = edx_1 * 0x1418 + ecx
            
            if (eax_6 u<= 0x92)
                eax_6 = zx.d(lookup_table_4ae4bc[eax_6])
                uint32_t var_82c
                void* result
                
                switch (eax_6)
                    case 0
                        if (data_63e5ec == 0)
                        label_4ae133:
                            result = &data_6cedf8
                        label_4ae09f:
                            fsbase->NtTib.ExceptionList = ExceptionList
                            @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
                            return result
                        
                        int32_t eax_23 = *(esi_2 + 0xfec)
                        
                        if (eax_23 == 3)
                            if (data_1516250 s> *(*fsbase->ThreadLocalStoragePointer + 4))
                                int32_t eax_26 = __Init_thread_header(&data_1516250)
                                
                                if (data_1516250 == 0xffffffff)
                                    int32_t var_14_1 = 0
                                    data_1516254 =
                                        sub_4ade60(eax_26, *(esi_2 + 0xfec), data_63e5ec, &data_1516258)
                                    __Init_thread_footer(&data_1516250)
                            
                            result = &data_1516258
                            goto label_4ae09f
                        
                        if (eax_23 == 5)
                            if (data_15162d8 s> *(*fsbase->ThreadLocalStoragePointer + 4))
                                int32_t eax_30 = __Init_thread_header(&data_15162d8)
                                
                                if (data_15162d8 == 0xffffffff)
                                    int32_t var_14_2 = 1
                                    data_15162dc =
                                        sub_4ade60(eax_30, *(esi_2 + 0xfec), data_63e5ec, &data_15162e0)
                                    __Init_thread_footer(&data_15162d8)
                            
                            result = &data_15162e0
                            goto label_4ae09f
                        
                        if (eax_23 != 1)
                            goto label_4ae133
                        
                        if (data_1516360 s> *(*fsbase->ThreadLocalStoragePointer + 4))
                            int32_t eax_34 = __Init_thread_header(&data_1516360)
                            
                            if (data_1516360 == 0xffffffff)
                                int32_t var_14_3 = 2
                                data_1516364 =
                                    sub_4ade60(eax_34, *(esi_2 + 0xfec), data_63e5ec, &data_1516368)
                                __Init_thread_footer(&data_1516360)
                        
                        result = &data_1516368
                        goto label_4ae09f
                    case 1
                        int32_t var_874_1 = data_126cc78
                        data_1515a50 = &data_5b2591
                        int32_t edi_2 = 1
                        int32_t* eax_17 = sub_498ef0(esi_2)
                        int32_t* eax_18 = sub_4f0e70(eax_17, eax_17, &data_6218dc, var_874_1, 0x68)
                        
                        if (eax_18 != 0)
                            int32_t eax_19 = eax_18[2]
                            int32_t ecx_12 = 0
                            int32_t var_828[0x201]
                            
                            if (eax_19 s> 0)
                                int32_t edx_7 = 0
                                
                                do
                                    edx_7 += 0x20
                                    var_828[ecx_12] = *(edx_7 + *eax_18 - 0x20)
                                    ecx_12 += 1
                                    eax_19 = eax_18[2]
                                while (ecx_12 s< eax_19)
                            
                            sub_436380(eax_19, &var_828[eax_19], &var_828, eax_19, sub_4ade20)
                            int32_t i = 0
                            
                            if (eax_18[2] s> 0)
                                do
                                    i += 1
                                    (&data_1515a50)[edi_2] = (&var_82c)[edi_2]
                                    edi_2 += 1
                                while (i s< eax_18[2])
                        
                        (&data_1515a50)[edi_2] = 0
                        result = &data_1515a50
                        goto label_4ae09f
                    case 2
                        int32_t* ecx_7 = *(esi_2 + 0xee8)
                        
                        if (ecx_7 == 0)
                            if (*(esi_2 + 0xef8) == 0)
                                goto label_4ae133
                            
                            sub_489550(eax_6, &data_5b2591, "Halt", 
                                "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x2a44, "FieldGetComboOptions")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        if (ecx_7[1] != 0x23)
                            sub_489550(eax_6, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_SPINE", 
                                "d:\ax\trunk\ax2017\engine\spine.cpp", 0x1bd, "SpineDefGet")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        void* eax_11 = sub_4981f0(ecx_7)
                        int32_t edx_5 = 0x40
                        int32_t ecx_9 = *(*(eax_11 + 0x28) + 0x44)
                        
                        if (ecx_9 s< 0x40)
                            edx_5 = ecx_9
                        
                        int32_t ecx_10 = 0
                        
                        if (edx_5 s> 0)
                            do
                                *((ecx_10 << 2) + &data_1515950) =
                                    **(*(*(eax_11 + 0x28) + 0x48) + (ecx_10 << 2))
                                ecx_10 += 1
                            while (ecx_10 s< edx_5)
                        
                        int32_t eax_16 = 0x3e
                        
                        if (edx_5 s< 0x3e)
                            eax_16 = edx_5
                        
                        *((eax_16 << 2) + &data_1515954) = 0
                        result = &data_1515950
                        goto label_4ae09f
                    case 3
                        data_1515850 = "<default>"
                        bool cond:0_1 = *(esi_2 + 0x1190) s<= 0
                        var_82c = 0
                        
                        if (not(cond:0_1))
                            void* var_830_1 = &data_1515854
                            void* edi_1 = esi_2 + 0x1194
                            
                            while (true)
                                int32_t ecx_1 = *edi_1
                                
                                if (ecx_1 == 0)
                                    sub_489550(eax_6, &data_5b2591, "id != DATAID_NULL", 
                                        "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6c, 
                                        "DataArray<struct UI2>::DataArrayGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_489700()
                                    noreturn
                                
                                uint32_t edx_2 = zx.d(ecx_1.w)
                                
                                if (edx_2 u< data_63e5ac)
                                    eax_6 = edx_2 * 0x1418 + data_63e5a8
                                    
                                    if (*(eax_6 + 0x1410) == ecx_1)
                                        char* eax_9 = *(edx_2 * 0x1418 + data_63e5a8 + 0xfd8)
                                        char* const ecx_3 = &data_5b2591
                                        
                                        if (eax_9 != 0)
                                            ecx_3 = eax_9
                                        
                                        uint32_t eax_10 = var_82c
                                        *var_830_1 = ecx_3
                                        eax_6 = eax_10 + 1
                                        var_82c = eax_6
                                        edi_1 += 4
                                        var_830_1 += 4
                                        
                                        if (eax_6 s>= *(esi_2 + 0x1190))
                                            break
                                        
                                        continue
                                
                                sub_489550(eax_6, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                                    "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, 
                                    "DataArray<struct UI2>::DataArrayGet")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                        
                        result = &data_1515850
                        goto label_4ae09f
            
            sub_489550(eax_6, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x2a7b, 
                "FieldGetComboOptions")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    
    sub_489550(eax_4, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
        "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
