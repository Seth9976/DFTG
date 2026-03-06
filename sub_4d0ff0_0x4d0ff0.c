// 函数名称: sub_4d0ff0
// 虚拟地址: 0x4d0ff0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __convention("regparm")sub_4d0ff0(int32_t arg1, char arg2, int32_t* arg3, char arg4)
{
    // 第一条实际指令: int32_t* var_c = arg3
    int32_t* var_c = arg3
    int32_t* esi = arg3
    
    if (*esi != 0)
        sub_489550(arg1, &data_5b2591, "pAsset->pAssetData == NULL", 
            "d:\ax\trunk\ax2017\engine\assetcatalog.cpp", 0xea, "AssetCatalogLoadAsset")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    sub_4e6fe0(arg3, arg2)
    char** result
    
    if (*esi == 0)
        if (arg4 == 0)
            result.b = 0
            return result
        
        sub_4d1060(esi)
    
    result.b = 1
    return result
}
