// 函数名称: sub_4d0720
// 虚拟地址: 0x4d0720
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_4d0720(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_4 = arg1
    int32_t* var_4 = arg1
    int32_t* esi = *arg1
    
    if (esi == 0)
        return 
    
    char const* const var_18
    int32_t var_14_1
    char const* const var_10_1
    char* ecx
    
    if (arg1[7] != 0)
        var_10_1 = "AssetCatalogPurgeAsset"
        var_14_1 = 0x34
        var_18 = "d:\ax\trunk\ax2017\engine\assetcatalog.cpp"
        ecx = "pAsset->lockCount == 0"
    label_4d07bb:
        int32_t eax
        sub_489550(eax, &data_5b2591, ecx, var_18, var_14_1, var_10_1)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t ecx_1 = arg1[1]
    
    if (ecx_1 u> 0x24)
        var_10_1 = "AssetTypeGetInfo"
        var_14_1 = 0xbc
        var_18 = "d:\ax\trunk\ax2017\engine\assettyperegistry.cpp"
        ecx = "assetType >= 0 && assetType < ASSET_TYPE_COUNT"
        goto label_4d07bb
    
    int32_t eax_2 = *((ecx_1 << 5) + data_114ec7c + 8)
    
    if (eax_2 != 0)
        eax_2(arg1, *esi)
        esi = *arg1
    
    if ((esi[2].b & 1) == 0)
        esi[3]
        sub_4cead0(*esi)
        *esi = 0
    
    char** ecx_4 = esi[1]
    
    if (ecx_4 != 0)
        sub_4d4bb0(ecx_4)
        esi[1] = 0
    
    _aligned_free_base(esi)
    *arg1 = 0
}
