// 函数名称: sub_4eaff0
// 虚拟地址: 0x4eaff0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4eaff0(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[1] == 0x20)
    if (arg1[1] == 0x20)
        return sub_4981f0(arg1) __tailcall
    
    int32_t eax
    sub_489550(eax, &data_5b2591, "ptr->assetType == ASSET_TYPE_FAB", 
        "d:\ax\trunk\ax2017\engine\fabdef.cpp", 0xea, "FabDefGet")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
