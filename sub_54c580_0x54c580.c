// 函数名称: sub_54c580
// 虚拟地址: 0x54c580
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_54c580()
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    int32_t result
    
    if (data_1152b94 s> 0)
        do
            int32_t* ecx_1 = data_1151b90
            int32_t edi_1 = (&data_1151b94)[i]
            
            if (ecx_1[1] != 0x20)
                sub_489550(result, &data_5b2591, "ptr->assetType == ASSET_TYPE_FAB", 
                    "d:\ax\trunk\ax2017\engine\fabdef.cpp", 0xea, "FabDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            result = *sub_4981f0(ecx_1)
            
            if (*(edi_1 * 0xe0 + result + 0x39) == 1)
                result.b = 1
                return result
            
            i += 1
        while (i s< data_1152b94)
    
    result.b = 0
    return result
}
