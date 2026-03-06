// 函数名称: sub_4d1350
// 虚拟地址: 0x4d1350
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_4d1350(int32_t arg1)
{
    // 第一条实际指令: char* ecx
    char* ecx
    int32_t edx
    int32_t* result_1 = sub_4d0b50(ecx, edx)
    int32_t* result = result_1
    
    if (result[2] == 4)
        result_1 = sub_4d0720(result)
    
    if (*result == 0)
        *result = arg1
        result[2] = 3
        sub_48a5e0(&result[3], &data_5b2591)
        return result
    
    sub_489550(result_1, &data_5b2591, "pAsset->pAssetData == NULL", 
        "d:\ax\trunk\ax2017\engine\assetcatalog.cpp", 0x151, "AssetCatalogNewAsset")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
