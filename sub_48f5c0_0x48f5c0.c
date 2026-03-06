// 函数名称: sub_48f5c0
// 虚拟地址: 0x48f5c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_48f5c0(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[1] == 3)
    if (arg1[1] == 3)
        return sub_4981f0(arg1) __tailcall
    
    int32_t eax
    sub_489550(eax, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_TEXTURE", 
        "d:\ax\trunk\ax2017\engine\texture.h", 0x86, "TextureGetDef")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
