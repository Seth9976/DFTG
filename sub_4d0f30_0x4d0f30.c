// 函数名称: sub_4d0f30
// 虚拟地址: 0x4d0f30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4d0f30(int32_t* arg1, uint32_t (* arg2)[0x4], char* arg3, void* arg4, void* arg5, int32_t arg6)
{
    // 第一条实际指令: if (*(arg3 + 8) == 4)
    if (*(arg3 + 8) == 4)
        arg1 = sub_4d0e90(arg3)
        arg3 = arg1
    
    if (*(arg3 + 8) != 2 && arg6 u> 0x100000)
        return sub_579300(arg2, arg4 + arg6, arg5)
    
    void* esi_1 = *(arg3 + 0x10)
    int32_t var_18_1
    char* ecx
    
    if (esi_1 != 0)
        arg1 = arg5 + arg4
        
        if (arg1 s<= *(arg3 + 0x14))
            void* var_14_3 = arg5
            void* eax_4 = esi_1 + arg4 + arg6
            arg1 = sub_4c8650(eax_4, arg2, arg3, eax_4)
            
            if (arg1.b != 0)
                return arg1
            
            char const* const var_14_4 = "AssetCatalogLoadHWBuffer"
            var_18_1 = 0xe1
            ecx = "result"
        else
            char const* const var_14_2 = "AssetCatalogLoadHWBuffer"
            var_18_1 = 0xdc
            ecx = "readOffset + readSize <= pAssetToUse->packFileSize"
    else
        char const* const var_14_1 = "AssetCatalogLoadHWBuffer"
        var_18_1 = 0xda
        ecx = "pAssetToUse->packFileOffset != 0"
    
    sub_489550(arg1, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\assetcatalog.cpp", var_18_1, 
        "AssetCatalogLoadHWBuffer")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
