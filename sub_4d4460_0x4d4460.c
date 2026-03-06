// 函数名称: sub_4d4460
// 虚拟地址: 0x4d4460
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4d4460(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[1] == 2)
    if (arg1[1] == 2)
        return sub_4981f0(arg1) __tailcall
    
    int32_t eax
    sub_489550(eax, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_STRUCTURE", 
        "d:\ax\trunk\ax2017\engine\assetutils.cpp", 0x312, "StructureDefGet")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
