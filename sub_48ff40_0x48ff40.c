// 函数名称: sub_48ff40
// 虚拟地址: 0x48ff40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_48ff40()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_4 = ecx
    void* eax_1 = sub_4eee80(sub_4eed40(ecx))
    int32_t* ecx_2 = *eax_1
    
    if (ecx_2[1] == 4)
        return *(sub_4981f0(ecx_2) + 0x50)
    
    sub_489550(eax_1, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_SHADER", 
        "d:\ax\trunk\ax2017\engine\shader.cpp", 0x8a, "ShaderGetDef")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
