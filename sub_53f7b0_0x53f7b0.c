// 函数名称: sub_53f7b0
// 虚拟地址: 0x53f7b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_53f7b0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_4 = arg1
    int32_t* var_4 = arg1
    
    if (arg1[1] == 3)
        int32_t* esi = *sub_4981f0(arg1)
        int32_t* eax_2 = sub_4cf8e0(data_12baafc, 0x48)
        sub_4ce910(eax_2, eax_2, esi, 0)
        esi[0xf] = 0
        esi[0x12] = 0
        return sub_4c7a40(arg1)
    
    int32_t eax
    sub_489550(eax, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_TEXTURE", 
        "d:\ax\trunk\ax2017\engine\texture.h", 0x86, "TextureGetDef")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
