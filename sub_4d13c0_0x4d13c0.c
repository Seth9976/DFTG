// 函数名称: sub_4d13c0
// 虚拟地址: 0x4d13c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_4d13c0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, char* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59fe70
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t var_14 = arg3
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 1
    char* const result_5 = &data_5b2591
    char* result_1
    char* result_3 = result_1
    
    if (result_3 != 0)
        result_5 = result_3
    
    int32_t* eax_3 = sub_4d0b50(result_5, arg3)
    int32_t eax_4 = eax_3[2]
    
    if (eax_4 == 3)
        sub_489550(eax_4, &data_5b2591, "pAsset->assetLocation != ASSET_LOCATION_MEMORY", 
            "d:\ax\trunk\ax2017\engine\assetcatalog.cpp", 0x15e, "AssetCatalogNewPackAsset")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (eax_4 == 4)
        sub_4d0720(eax_3)
    
    char* result_2
    char* result_4 = result_2
    char* const result_6 = &data_5b2591
    
    if (result_4 != 0)
        result_6 = result_4
    
    char* const eax_5 = &data_5b2591
    int32_t eax_7
    char edx_1
    
    while (true)
        edx_1 = *result_6
        char temp0_1 = *eax_5
        bool c_1 = edx_1 u< temp0_1
        
        if (edx_1 == temp0_1)
            if (edx_1 == 0)
                eax_7 = 0
                break
            
            edx_1 = result_6[1]
            char temp1_1 = eax_5[1]
            c_1 = edx_1 u< temp1_1
            
            if (edx_1 == temp1_1)
                result_6 = &result_6[2]
                eax_5 = &eax_5[2]
                
                if (edx_1 != 0)
                    continue
                
                eax_7 = 0
                break
        
        eax_7 = sbb.d(eax_5, eax_5, c_1) | 1
        break
    
    if (eax_7 == 0)
        sub_489550(eax_7, &data_5b2591, "xbinFilePath != """, 
            "d:\ax\trunk\ax2017\engine\assetcatalog.cpp", 0x166, "AssetCatalogNewPackAsset")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    char* eax_8 = eax_3[3]
    char* const ecx_1 = &data_5b2591
    
    if (eax_8 != 0)
        ecx_1 = eax_8
    
    char* const eax_9 = &data_5b2591
    int32_t eax_11
    
    while (true)
        edx_1 = *ecx_1
        char temp2_1 = *eax_9
        bool c_2 = edx_1 u< temp2_1
        
        if (edx_1 == temp2_1)
            if (edx_1 == 0)
                eax_11 = 0
                break
            
            edx_1 = ecx_1[1]
            char temp3_1 = eax_9[1]
            c_2 = edx_1 u< temp3_1
            
            if (edx_1 == temp3_1)
                ecx_1 = &ecx_1[2]
                eax_9 = &eax_9[2]
                
                if (edx_1 != 0)
                    continue
                
                eax_11 = 0
                break
        
        eax_11 = sbb.d(eax_9, eax_9, c_2) | 1
        break
    
    if (eax_11 != 0)
        eax_11 = sub_48a440(&eax_3[3], &result_2)
        
        if (eax_11.b == 0)
            sub_489550(eax_11, &data_5b2591, 
                "pAsset->xbinFilePath == "" || pAsset->xbinFilePath == xbinFilePath", 
                "d:\ax\trunk\ax2017\engine\assetcatalog.cpp", 0x169, "AssetCatalogNewPackAsset")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    
    if (*eax_3 != 0)
        sub_489550(eax_11, &data_5b2591, "pAsset->pAssetData == NULL", 
            "d:\ax\trunk\ax2017\engine\assetcatalog.cpp", 0x16c, "AssetCatalogNewPackAsset")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    eax_3[2] = 2
    sub_48a560(&eax_3[3], &result_2)
    eax_3[5] = arg4
    char* result = arg5
    eax_3[4] = arg2
    eax_3[6] = result
    var_8_1.b = 2
    
    if (data_aca1f4 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp4_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp4_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
                result_1 = &data_5b2591
    
    int32_t var_8_2 = 3
    
    if (data_aca1f4 != 0)
        result = result_2
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_2)
            int32_t temp5_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp5_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
