// 函数名称: sub_4d11a0
// 虚拟地址: 0x4d11a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __fastcallsub_4d11a0(int32_t* arg1)
{
    // 第一条实际指令: char** result = sub_4d0ff0(sub_4d0720(arg1), 1, arg1, 1)
    char** result = sub_4d0ff0(sub_4d0720(arg1), 1, arg1, 1)
    
    if (result.b != 0)
        return result
    
    sub_489550(result, &data_5b2591, "result", "d:\ax\trunk\ax2017\engine\assetcatalog.cpp", 0x12a, 
        "AssetCatalogReloadAsWritable")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
