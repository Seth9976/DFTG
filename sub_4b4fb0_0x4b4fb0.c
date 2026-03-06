// 函数名称: sub_4b4fb0
// 虚拟地址: 0x4b4fb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_4b4fb0()
{
    // 第一条实际指令: __alloca_probe(0x228c)
    __alloca_probe(0x228c)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t ecx = data_642624
    int32_t var_14 = data_643654
    int32_t var_2270 = 0
    int32_t var_1264[0x400]
    int32_t* eax_3 = sub_4a9860(&var_2270, &var_1264, ecx, &var_2270, &data_642654, var_14)
    int32_t ebx = var_2270
    int32_t esi = 0
    int32_t var_2268 = 0
    int32_t var_2264[0x400]
    
    if (ebx s> 0)
        do
            eax_3 = sub_4b4de0(&var_2268, &var_2264, var_1264[esi], &var_2268)
            esi += 1
        while (esi s< ebx)
    
    char const* const var_1c_2
    int32_t var_18_1
    char const* const var_14_2
    char* ecx_5
    
    if (ebx s<= 0 || ebx s<= 0)
        var_14_2 = "UI2HighestItem"
        var_18_1 = 0x32f8
        ecx_5 = "numItems > 0"
    else
        int32_t edx_2 = 0
        int32_t edi_1 = data_63e5a8
        void* var_226c_1 = nullptr
        
        while (true)
            int32_t ecx_2 = var_1264[edx_2]
            
            if (ecx_2 == 0)
            label_4b5351:
                var_14_2 = "DataArray<struct UI2>::DataArrayGet"
                var_18_1 = 0x6c
                var_1c_2 = "d:\ax\trunk\ax2017\engine\dataarray.h"
                ecx_5 = "id != DATAID_NULL"
                goto label_4b53c6
            
            uint32_t esi_1 = zx.d(ecx_2.w)
            
            if (esi_1 u< data_63e5ac)
                eax_3 = esi_1 * 0x1418
                
                if (*(eax_3 + edi_1 + 0x1410) == ecx_2)
                    void* esi_2 = var_226c_1
                    void* ecx_4 = esi_1 * 0x1418 + edi_1
                    
                    if (esi_2 != 0)
                        eax_3 = *(esi_2 + 0xff8)
                    
                    if (esi_2 == 0 || eax_3 s< *(ecx_4 + 0xff8))
                        esi_2 = ecx_4
                        var_226c_1 = esi_2
                    
                    edx_2 += 1
                    
                    if (edx_2 s< var_2270)
                        continue
                    
                    if (esi_2 != 0)
                        int32_t* esi_3 = data_642620
                        
                        if (esi_3[1] == 0x22)
                            int32_t* eax_5 = sub_4981f0(esi_3)
                            void* ebx_2 = var_226c_1
                            void* eax_6 = sub_4b4ee0(eax_5, *(ebx_2 + 0xff8))
                            int32_t var_14_3 = var_2268
                            int32_t* eax_7 = eax_6 + *(ebx_2 + 0xff8) + 1
                            int32_t* eax_8 = sub_4cf8e0(data_12bac58, 0)
                            sub_518980(eax_8, eax_8, eax_5, eax_7, var_14_3)
                            int32_t edx_5 = var_2268
                            void* eax_9 = nullptr
                            
                            while (true)
                                void* edi_3 = data_63e5a8
                                
                                while (true)
                                    if (eax_9 != 0)
                                        eax_9 += 0x1418
                                    else
                                        eax_9 = edi_3
                                    
                                    void* ecx_13 = data_63e5ac * 0x1418 + edi_3
                                    
                                    if (eax_9 u>= ecx_13)
                                    label_4b5199:
                                        void* var_14_4 = 0x258
                                        data_643654 = 0
                                        uint32_t var_264[0x24][0x4]
                                        _memset(&var_264, 0, var_14_4)
                                        int32_t edx_6 = 0
                                        int32_t i_1 = 0
                                        int32_t i_2 = 0
                                        int32_t var_2280_1 = 0
                                        
                                        if (var_2268 s> 0)
                                            eax_3 = eax_7
                                            int32_t ebx_4 = eax_3 * 0x18
                                            int32_t var_2284_1 = ebx_4
                                            
                                            while (true)
                                                int32_t ecx_14 = var_2264[edx_6]
                                                
                                                if (ecx_14 == 0)
                                                    goto label_4b5351
                                                
                                                uint32_t edx_7 = zx.d(ecx_14.w)
                                                
                                                if (edx_7 u>= data_63e5ac)
                                                    goto label_4b533e
                                                
                                                eax_3 = edx_7 * 0x1418
                                                
                                                if (*(eax_3 + edi_3 + 0x1410) != ecx_14)
                                                    goto label_4b533e
                                                
                                                int32_t* eax_10 = sub_498ef0(edx_7 * 0x1418 + edi_3)
                                                int32_t* var_228c_1 = eax_10
                                                int32_t* edx_9 = *eax_5 + ebx_4
                                                int32_t i = 0
                                                int32_t* var_2278_1 = edx_9
                                                edx_9[4] = eax_10[4]
                                                
                                                if (*eax_10 s> 0)
                                                    int32_t* edi_4 = nullptr
                                                    
                                                    do
                                                        int32_t eax_11 = eax_10[2]
                                                        int32_t var_14_5 = *(edi_4 + eax_11 + 8)
                                                        sub_4f0a90(eax_11, edx_9, &data_6218dc, 
                                                            *(edi_4 + eax_11))
                                                        edx_9 = var_2278_1
                                                        edi_4 = &edi_4[4]
                                                        i += 1
                                                    while (i s< *eax_10)
                                                    
                                                    i_1 = i_2
                                                
                                                sub_4a7a10(edx_9)
                                                int32_t eax_12 = data_643654
                                                var_264[0][i_1] -= 1
                                                (&data_642654)[eax_12] = eax_7 + var_2280_1
                                                data_643654 += 1
                                                int32_t* ecx_22 = var_264[0][i_1]
                                                eax_3 = var_2278_1[4]
                                                
                                                if (eax_3 != 0)
                                                    i_1 += 1
                                                    ecx_22 = eax_3
                                                    i_2 = i_1
                                                    var_264[0][i_1] = eax_3
                                                
                                                if (ecx_22 == 0)
                                                    while (i_1 s> 0)
                                                        i_1 -= 1
                                                        
                                                        if (var_264[0][i_1] != 0)
                                                            break
                                                    
                                                    i_2 = i_1
                                                
                                                edx_6 = var_2280_1 + 1
                                                ebx_4 = var_2284_1 + 0x18
                                                var_2280_1 = edx_6
                                                var_2284_1 = ebx_4
                                                
                                                if (edx_6 s>= var_2268)
                                                    ebx_2 = var_226c_1
                                                    break
                                                
                                                edi_3 = data_63e5a8
                                        
                                        void* eax_14 = sub_4a92c0(eax_5, *(ebx_2 + 0xff8))
                                        
                                        if (eax_14 != 0)
                                            *(eax_14 + 0x10) += var_2270
                                        
                                        int32_t* result = sub_49a5a0(&data_642624)
                                        data_642624 = 0
                                        int32_t entry_ebx
                                        @__security_check_cookie@4(entry_ebx ^ &__saved_ebp)
                                        return result
                                    
                                    while ((*(eax_9 + 0x1410) & 0xffff0000) == 0)
                                        eax_9 += 0x1418
                                        
                                        if (eax_9 u>= ecx_13)
                                            goto label_4b5199
                                    
                                    if (*(eax_9 + 0xff4) == esi_3)
                                        int32_t ecx_23 = *(eax_9 + 0xff8)
                                        
                                        if (ecx_23 s>= eax_7)
                                            *(eax_9 + 0xff8) = ecx_23 + edx_5
                                            break
                        else
                            var_14_2 = "UI2DefGet"
                            var_18_1 = 0x8ae
                            ecx_5 = "ptr->assetType == ASSET_TYPE_UI2"
                    else
                        var_14_2 = "UI2HighestItem"
                        var_18_1 = 0x3306
                        ecx_5 = "Halt"
                    
                    break
            
        label_4b533e:
            var_14_2 = "DataArray<struct UI2>::DataArrayGet"
            var_18_1 = 0x6d
            var_1c_2 = "d:\ax\trunk\ax2017\engine\dataarray.h"
            ecx_5 = "DataArrayTryToGet(id) != NULL"
            goto label_4b53c6
    
    var_1c_2 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
    label_4b53c6:
    sub_489550(eax_3, &data_5b2591, ecx_5, var_1c_2, var_18_1, var_14_2)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
