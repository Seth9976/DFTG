// 函数名称: sub_4d1060
// 虚拟地址: 0x4d1060
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4d1060(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    char const* const var_20
    int32_t var_1c_1
    char const* const var_18
    int32_t* eax
    char* ecx
    char* const edx
    
    if (*arg1 == 0)
        char* eax_1 = arg1[8]
        char* const ecx_1 = &data_5b2591
        
        if (eax_1 != 0)
            ecx_1 = eax_1
        
        char* const var_18_1 = ecx_1
        sub_4892e0("Can't load asset: '%s'")
        int32_t* eax_2 = sub_4d0e90(arg1)
        int32_t* esi_1 = eax_2
        
        if (*esi_1 != 0)
            eax_2 = sub_4d0720(esi_1)
        
        sub_4d0ff0(eax_2, 0, esi_1, 0)
        eax = *esi_1
        int32_t* var_8_1 = eax
        
        if (eax != 0)
        label_4d1103:
            int32_t ecx_6 = arg1[1]
            
            if (ecx_6 u<= 0x24)
                void* edi = *((ecx_6 << 5) + data_114ec7c + 0x1c)
                int32_t* eax_4 = sub_4c2e40(0x10)
                *eax_4 = zx.o(0)
                *eax_4 = sub_4cf020(*var_8_1, edi)
                eax_4[3] = edi
                int32_t ecx_10 = arg1[1]
                *arg1 = eax_4
                arg1[2] = 4
                void* result = sub_4dfc30(ecx_10)
                int32_t edx_3 = *(result + 4)
                
                if (edx_3 == 0)
                    return result
                
                char* eax_6 = arg1[8]
                char* const ecx_11 = &data_5b2591
                
                if (eax_6 != 0)
                    ecx_11 = eax_6
                
                return edx_3(ecx_11, **arg1)
            
            var_18 = "AssetTypeGetInfo"
            var_1c_1 = 0xbc
            var_20 = "d:\ax\trunk\ax2017\engine\assettyperegistry.cpp"
            edx = &data_5b2591
            ecx = "assetType >= 0 && assetType < ASSET_TYPE_COUNT"
        else
            sub_4d40c0(esi_1)
            eax = *esi_1
            var_8_1 = eax
            
            if (eax != 0)
                goto label_4d1103
            
            var_18 = "AssetCatalogLoadFailureAsset"
            var_1c_1 = 0x115
            var_20 = "d:\ax\trunk\ax2017\engine\assetcatalog.cpp"
            edx = "Failed to load failure asset\n"
            ecx = "pFailureAsset->pAssetData"
    else
        var_18 = "AssetCatalogLoadFailureAsset"
        var_1c_1 = 0x102
        var_20 = "d:\ax\trunk\ax2017\engine\assetcatalog.cpp"
        edx = &data_5b2591
        ecx = "pAsset->pAssetData == NULL"
    
    sub_489550(eax, edx, ecx, var_20, var_1c_1, var_18)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
