// 函数名称: sub_4dd840
// 虚拟地址: 0x4dd840
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4dd840(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[1] == 2)
    if (arg1[1] == 2)
        return sub_4981f0(arg1) __tailcall
    
    int32_t eax
    sub_489550(eax, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_STRUCTURE", 
        "d:\ax\trunk\ax2017\engine\structure.cpp", 0x559, "StructureGetDef")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
