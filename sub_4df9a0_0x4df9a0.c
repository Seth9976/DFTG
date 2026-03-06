// 函数名称: sub_4df9a0
// 虚拟地址: 0x4df9a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __thiscallsub_4df9a0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t eax = data_114ec80
    int32_t eax = data_114ec80
    
    if (eax s>= 0x100)
        sub_489550(eax, &data_5b2591, "gAssetInfoTableItemCount < MAX_ASSET_TYPES", 
            "d:\ax\trunk\ax2017\engine\assettyperegistry.cpp", 0x44, "AssetRegisterBeforeMain")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t ecx_1 = eax * 7
    data_114ec80 = eax + 1
    *((ecx_1 << 2) + &data_114ec88) = arg2
    *((ecx_1 << 2) + &data_114ec8c) = arg3
    *((ecx_1 << 2) + &data_114ec90) = arg4
    *((ecx_1 << 2) + &data_114ec94) = arg5
    *((ecx_1 << 2) + &data_114ec98) = arg6
    return arg1
}
