// 函数名称: sub_549b70
// 虚拟地址: 0x549b70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_549b70(int32_t arg1)
{
    // 第一条实际指令: int32_t* ecx = data_1151b90
    int32_t* ecx = data_1151b90
    
    if (ecx[1] == 0x20)
        return arg1 * 0xe0 + *sub_4981f0(ecx)
    
    int32_t eax
    sub_489550(eax, &data_5b2591, "ptr->assetType == ASSET_TYPE_FAB", 
        "d:\ax\trunk\ax2017\engine\fabdef.cpp", 0xea, "FabDefGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
