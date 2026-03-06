// 函数名称: sub_4f0370
// 虚拟地址: 0x4f0370
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4f0370(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[1] == 4)
    if (arg1[1] == 4)
        return sub_4981f0(arg1) __tailcall
    
    int32_t eax
    sub_489550(eax, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_SHADER", 
        "d:\ax\trunk\ax2017\engine\shader.cpp", 0x8a, "ShaderGetDef")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
