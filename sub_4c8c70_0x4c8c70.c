// 函数名称: sub_4c8c70
// 虚拟地址: 0x4c8c70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4c8c70(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[1] == 0x1e)
    if (arg1[1] == 0x1e)
        return sub_4981f0(arg1) __tailcall
    
    int32_t eax
    sub_489550(eax, &data_5b2591, "ptr->assetType == ASSET_TYPE_UI", 
        "d:\ax\trunk\ax2017\engine\uidef.cpp", 0x126, "UIDefGet")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
