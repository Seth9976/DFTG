// 函数名称: sub_4d1720
// 虚拟地址: 0x4d1720
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_4d1720(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_4 = arg1
    int32_t* var_4 = arg1
    char* result
    
    if (data_621f8c != 0)
        int32_t* edi_1 = *arg1
        char const* const var_18
        int32_t var_14
        char const* const var_10
        char* ecx
        
        if (edi_1 == 0)
            var_10 = "AssetCatalogSave"
            var_14 = 0x18f
            var_18 = "d:\ax\trunk\ax2017\engine\assetcatalog.cpp"
            ecx = "pAsset->pAssetData"
        label_4d17a5:
            sub_489550(result, &data_5b2591, ecx, var_18, var_14, var_10)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        if (edi_1[1] == 0)
            int32_t edx_1 = arg1[1]
            
            if (edx_1 u> 0x24)
                var_10 = "AssetTypeGetInfo"
                var_14 = 0xbc
                var_18 = "d:\ax\trunk\ax2017\engine\assettyperegistry.cpp"
                ecx = "assetType >= 0 && assetType < ASSET_TYPE_COUNT"
                goto label_4d17a5
            
            edi_1[1] = sub_4d78e0(*edi_1, *((edx_1 << 5) + data_114ec7c + 0x1c))
        
        if (sub_4e7350(arg1).b != 0)
            arg1[2] = 1
            result.b = 1
            return result
    
    result.b = 0
    return result
}
