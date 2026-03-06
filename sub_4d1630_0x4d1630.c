// 函数名称: sub_4d1630
// 虚拟地址: 0x4d1630
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __fastcallsub_4d1630(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59fe98
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t var_14 = arg1
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    char* const result_3 = &data_5b2591
    char** result_1
    char** result_2 = result_1
    
    if (result_2 != 0)
        result_3 = result_2
    
    int32_t* eax_3 = sub_4d0b50(result_3, arg1)
    int32_t* esi = eax_3
    
    if (esi[2] == 4)
        eax_3 = sub_4d0720(esi)
    
    if (*esi != 0)
        sub_489550(eax_3, &data_5b2591, "pAsset->pAssetData == NULL", 
            "d:\ax\trunk\ax2017\engine\assetcatalog.cpp", 0x180, "AssetCatalogNewSourceAsset")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    *esi = arg2
    esi[2] = 1
    char** result = sub_48a5e0(&esi[3], &data_5b2591)
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp0_1 = result[1]
            result[1] = &result[1][0xffffffff]
            
            if (temp0_1 == 1)
                result = sub_4984f0(result, &result[3][0x10])
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
