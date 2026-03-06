// 函数名称: sub_4b5ca0
// 虚拟地址: 0x4b5ca0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_4b5ca0(int32_t arg1 @ esi, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    void* edx
    ecx, edx = __alloca_probe(0x1128)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    int32_t var_105c = 0
    int32_t var_1078 = ecx
    int32_t var_1010[0x3f8]
    sub_4a9860(&var_105c, &var_1010, data_642624, &var_105c, &data_642654, data_643654)
    int32_t eax_5 = var_105c << 2 s>> 2
    int32_t eax_6 = sub_436380(eax_5, &var_1010[var_105c], &var_1010, eax_5, sub_4a9970)
    int32_t* edi = data_642620
    char const* const var_1c_1
    int32_t var_18_2
    char const* const var_14_2
    char* ecx_4
    
    if (edi[1] == 0x22)
        eax_6 = sub_4981f0(edi)
        int32_t var_106c_1 = eax_6
        
        if (ecx == 0)
            if (edx == 0)
                goto label_4b5dab
            
            var_14_2 = "UI2Move"
            var_18_2 = 0x3605
            var_1c_1 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
            ecx_4 = "itemInsert == NULL"
        else if (edx == 0 || *(edx + 0xff4) == edi)
        label_4b5dab:
            uint32_t var_1108[0x4]
            eax_6 = _memset(&var_1108, 0, 0x60)
            void* edi_1 = data_63e5a8
            int128_t xmm0_6
            
            if (ecx == 1)
                var_1108 = *(edx + 0x1014)
                int128_t var_10f8_1 = *(edx + 0x1024)
                int128_t var_10e8_1 = *(edx + 0x1034)
                int128_t var_10d8_1 = *(edx + 0x1044)
                int128_t var_10c8_1 = *(edx + 0x1054)
                xmm0_6 = *(edx + 0x1064)
            label_4b5ef5:
                int128_t var_10b8_1 = xmm0_6
                int32_t var_1064_1
                
                if (edx != 0)
                    var_1064_1 = *(edx + 0xff8)
                else
                    var_1064_1 = 0xffffffff
                
                float xmm1_1 = *(data_114e818 + 0x2c)
                eax_6 = 0
                float var_1094_1 = xmm1_1
                int32_t var_107c_1 = 0
                
                if (var_105c s<= 0)
                label_4b63c0:
                    int32_t* result = sub_49a5a0(&data_642624)
                    @__security_check_cookie@4(arg1 ^ &__saved_ebp)
                    return result
                
                while (true)
                    int32_t ecx_7 = var_1010[eax_6]
                    
                    if (ecx_7 == 0)
                        goto label_4b5e69
                    
                    uint32_t edx_4 = zx.d(ecx_7.w)
                    
                    if (edx_4 u>= data_63e5ac)
                        break
                    
                    eax_6 = edx_4 * 0x1418
                    
                    if (*(eax_6 + edi_1 + 0x1410) != ecx_7)
                        break
                    
                    void* ebx_2 = edx_4 * 0x1418 + edi_1
                    float var_10a4
                    int128_t* eax_12
                    int32_t edx_5
                    eax_12, edx_5 = sub_498790(ebx_2 + 0xc, xmm1_1, &var_10a4)
                    float xmm0_17 = *arg2
                    xmm0_17 f- 0
                    eax_12:1.b = (xmm0_17 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_17, 0f) ? 1 : 0) << 2 | (xmm0_17 < 0f ? 1 : 0)
                    bool p_2 = unimplemented  {test ah, 0x44}
                    bool p_4
                    
                    if (not(p_2))
                        float xmm0_18 = arg2[1]
                        xmm0_18 f- 0
                        eax_12:1.b = (xmm0_18 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_18, 0f) ? 1 : 0) << 2 | (xmm0_18 < 0f ? 1 : 0)
                        p_4 = unimplemented  {test ah, 0x44}
                    
                    float xmm1_4
                    float xmm2_4
                    
                    if (p_2 || p_4)
                        xmm1_4 = *arg2
                        xmm2_4 = arg2[1]
                    else
                        float xmm0_19 = 1f f/ data_642644
                        void* eax_13 = *(ebx_2 + 0x112c)
                        xmm1_4 = (*(eax_13 + 0x1014) f- var_1108[0]) * xmm0_19
                        xmm2_4 = (*(eax_13 + 0x1018) f- var_1108[1]) * xmm0_19
                    
                    void var_1118
                    int128_t* var_14_5 = &var_1118
                    float var_1020 = xmm1_4 + var_10a4
                    float var_10a0
                    float var_101c_1 = xmm2_4 + var_10a0
                    float var_109c
                    float var_1018_1 = var_109c + xmm1_4
                    float var_1098
                    float var_1014_1 = var_1098 + xmm2_4
                    int128_t xmm0_28 = *sub_4be600(&var_1118, edx_5, &var_1020, var_14_5)
                    *(ebx_2 + 0xe24) = 0
                    *(ebx_2 + 0xffc) = 0
                    int128_t var_1040 = xmm0_28
                    void* eax_16 = sub_4a9e30(ebx_2, 0x75)
                    
                    if (eax_16 == 0)
                        sub_489550(eax_16, &data_5b2591, "&attribMap", 
                            "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x2453, "AssignPropertyRect")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    sub_4a9db0(eax_16, 0x75, eax_16, &var_1040)
                    int32_t* eax_17 = sub_498ef0(ebx_2)
                    int32_t var_14_7 = 0x68
                    int32_t var_18_4 = data_126cc78
                    int32_t* eax_18 = sub_498ef0(ebx_2)
                    int32_t* eax_19 = sub_4f0e70(eax_18, eax_18, &data_6218dc, var_18_4, var_14_7)
                    
                    if (eax_19 != 0)
                        int32_t i = 0
                        
                        if (eax_19[2] s> 0)
                            int32_t esi_1 = 0
                            
                            do
                                int32_t eax_20 = *eax_19
                                int32_t ecx_15 = 0
                                int32_t edx_7 = *(esi_1 + eax_20 + 8)
                                
                                if (edx_7 s> 0)
                                    int32_t* eax_21 = *(esi_1 + eax_20 + 0x10)
                                    
                                    do
                                        if (*eax_21 == 0x75)
                                            int32_t* eax_22
                                            int32_t edx_9
                                            eax_22, edx_9 = sub_4f0e70(eax_21, eax_17, &data_6218dc, 
                                                data_12baca4, 0x75)
                                            float var_1030 = *eax_22 + xmm1_4
                                            float var_102c_1 = eax_22[1] f+ xmm2_4
                                            float var_1028_1 = eax_22[2] f+ xmm1_4
                                            float var_1024_1 = eax_22[3] f+ xmm2_4
                                            int128_t var_1050
                                            int32_t* var_14_9 = &var_1050
                                            void var_1128
                                            var_1050 =
                                                *sub_4be600(&var_1128, edx_9, &var_1030, &var_1128)
                                            sub_4a9db0(&var_1050, 0x75, eax_17, var_14_9)
                                            break
                                        
                                        ecx_15 += 1
                                        eax_21 = &eax_21[4]
                                    while (ecx_15 s< edx_7)
                                
                                i += 1
                                esi_1 += 0x20
                            while (i s< eax_19[2])
                    
                    *(ebx_2 + 0xff8)
                    int32_t var_108c
                    int32_t var_1088
                    int32_t var_1084
                    int32_t var_1074
                    int32_t var_1070
                    int32_t var_1060
                    char eax_26 = sub_4b58e0(var_1064_1, var_1078, &var_1084, &var_1074, &var_1060, 
                        &var_108c, &var_1088, &var_1070)
                    edi_1 = data_63e5a8
                    
                    if (eax_26 != 0)
                        int32_t ebx_5 = var_1084
                        int32_t eax_28 = var_1074 - ebx_5
                        int32_t esi_2 = var_108c
                        int32_t eax_30 = var_1088 - esi_2
                        void* edx_12 = nullptr
                        
                        while (true)
                            if (edx_12 != 0)
                                edx_12 += 0x1418
                            else
                                edx_12 = edi_1
                            
                            void* eax_32 = data_63e5ac * 0x1418 + edi_1
                            
                            if (edx_12 u>= eax_32)
                                break
                            
                            while (true)
                                if ((*(edx_12 + 0x1410) & 0xffff0000) != 0)
                                    if (*(edx_12 + 0xff4) != edi)
                                        break
                                    
                                    int32_t ecx_20 = *(edx_12 + 0xff8)
                                    
                                    if (ecx_20 u>= ebx_5 && ecx_20 u< var_1060 + ebx_5)
                                        ecx_20 += eax_28
                                        *(edx_12 + 0xff8) = ecx_20
                                    else if (ecx_20 u>= esi_2 && ecx_20 u< var_1070 + esi_2)
                                        ecx_20 += eax_30
                                        *(edx_12 + 0xff8) = ecx_20
                                    
                                    int32_t ecx_22 = *(*var_106c_1 + ecx_20 * 0x18 + 0x10)
                                    int32_t eax_43 = *(edx_12 + 0x1190)
                                    
                                    if (eax_43 s>= ecx_22)
                                        eax_43 = ecx_22
                                    
                                    *(edx_12 + 0x1190) = eax_43
                                    edi_1 = data_63e5a8
                                    break
                                
                                edx_12 += 0x1418
                                
                                if (edx_12 u>= eax_32)
                                    goto label_4b6296
                        
                    label_4b6296:
                        int32_t i_1 = 0
                        
                        if (data_643654 s> 0)
                            do
                                int32_t ecx_19 = (&data_642654)[i_1]
                                
                                if (ecx_19 u>= ebx_5 && ecx_19 u< var_1060 + ebx_5)
                                    (&data_642654)[i_1] = ecx_19 + eax_28
                                else if (ecx_19 u>= esi_2 && ecx_19 u< var_1070 + esi_2)
                                    (&data_642654)[i_1] = eax_30 + ecx_19
                                
                                i_1 += 1
                            while (i_1 s< data_643654)
                            
                            edi_1 = data_63e5a8
                        
                        var_1078 = 2
                        var_1064_1 = var_1060 - 1 + var_1074
                    
                    eax_6 = var_107c_1 + 1
                    var_107c_1 = eax_6
                    
                    if (eax_6 s>= var_105c)
                        goto label_4b63c0
                    
                    xmm1_1 = var_1094_1
                
                goto label_4b63d6
            
            if (ecx == 2)
                int128_t* eax_8 = *(edx + 0x112c) + 0x1014
                var_1108 = *eax_8
                int128_t var_10f8_2 = eax_8[1]
                int128_t var_10e8_2 = eax_8[2]
                int128_t var_10d8_2 = eax_8[3]
                int128_t var_10c8_2 = eax_8[4]
                xmm0_6 = eax_8[5]
                goto label_4b5ef5
            
            int32_t ecx_6 = data_642624
            
            if (ecx_6 != 0)
                uint32_t edx_3 = zx.d(ecx_6.w)
                
                if (edx_3 u< data_63e5ac)
                    eax_6 = edx_3 * 0x1418
                    
                    if (*(eax_6 + edi_1 + 0x1410) != ecx_6)
                        goto label_4b63d6
                    
                    int32_t eax_9 = edx_3 * 0x1418
                    var_1108 = *(eax_9 + edi_1 + 0x1014)
                    int128_t var_10f8_3 = *(eax_9 + edi_1 + 0x1024)
                    int128_t var_10e8_3 = *(eax_9 + edi_1 + 0x1034)
                    int128_t var_10d8_3 = *(eax_9 + edi_1 + 0x1044)
                    int128_t var_10c8_3 = *(eax_9 + edi_1 + 0x1054)
                    xmm0_6 = *(eax_9 + edi_1 + 0x1064)
                    goto label_4b5ef5
                
            label_4b63d6:
                var_14_2 = "DataArray<struct UI2>::DataArrayGet"
                ecx_4 = "DataArrayTryToGet(id) != NULL"
                var_18_2 = 0x6d
            else
            label_4b5e69:
                var_14_2 = "DataArray<struct UI2>::DataArrayGet"
                var_18_2 = 0x6c
                ecx_4 = "id != DATAID_NULL"
            
            var_1c_1 = "d:\ax\trunk\ax2017\engine\dataarray.h"
        else
            var_14_2 = "UI2Move"
            var_18_2 = 0x3609
            var_1c_1 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
            ecx_4 = "itemInsert->sourceAsset == sourceAsset"
    else
        var_14_2 = "UI2DefGet"
        var_18_2 = 0x8ae
        var_1c_1 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
        ecx_4 = "ptr->assetType == ASSET_TYPE_UI2"
    
    sub_489550(eax_6, &data_5b2591, ecx_4, var_1c_1, var_18_2, var_14_2)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
