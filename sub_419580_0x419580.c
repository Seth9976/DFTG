// 函数名称: sub_419580
// 虚拟地址: 0x419580
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_419580()
{
    // 第一条实际指令: int32_t ecx_1 = data_114ec80
    int32_t ecx_1 = data_114ec80
    
    if (ecx_1 s>= 0x100)
        int32_t eax
        sub_489550(eax, &data_5b2591, "gAssetInfoTableItemCount < MAX_ASSET_TYPES", 
            "d:\ax\trunk\ax2017\engine\assettyperegistry.cpp", 0x44, "AssetRegisterBeforeMain")
        
        if (IsDebuggerPresent() != 1)
            noreturn sub_489700() __tailcall
        
        breakpoint
    
    int32_t result = ecx_1 * 7
    data_114ec80 = ecx_1 + 1
    *((result << 2) + &data_114ec88) = 4
    *((result << 2) + &data_114ec8c) = sub_48dc40
    *((result << 2) + &data_114ec90) = sub_4f0260
    *((result << 2) + &data_114ec94) = sub_537420
    *((result << 2) + &data_114ec98) = "Shader (*.vsh)|*.vsh|"
    return result
}
