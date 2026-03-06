// 函数名称: sub_498eb0
// 虚拟地址: 0x498eb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_498eb0(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[1] == 0x22)
    if (arg1[1] == 0x22)
        return sub_4981f0(arg1) __tailcall
    
    int32_t eax
    sub_489550(eax, &data_5b2591, "ptr->assetType == ASSET_TYPE_UI2", 
        "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x8ae, "UI2DefGet")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
