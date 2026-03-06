// 函数名称: sub_547cc0
// 虚拟地址: 0x547cc0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_547cc0()
{
    // 第一条实际指令: int32_t* ecx = data_1151b90
    int32_t* ecx = data_1151b90
    char const* const var_18
    int32_t var_14
    char const* const var_10
    int32_t eax
    char* ecx_1
    
    if (ecx[1] == 0x20)
        eax = sub_4981f0(ecx)
        int32_t ecx_2 = data_1152b94
        
        if (ecx_2 s> 0)
            int32_t i = 0
            
            if (ecx_2 s> 0)
                void* edx_1 = &data_11d3ff0
                
                do
                    int32_t ecx_3 = (&data_1151b94)[i] * 0xe0
                    edx_1 += 0x24
                    i += 1
                    void* ecx_4 = ecx_3 + *eax
                    *(edx_1 + 0x8fdc) = *(ecx_4 + 0x10)
                    *(edx_1 + 0x8fec) = *(ecx_4 + 0x20)
                    *(edx_1 + 0x8ffc) = *(ecx_4 + 0x30)
                    *(edx_1 - 0x24) = *(ecx_4 + 0x10)
                    *(edx_1 - 0x14) = *(ecx_4 + 0x20)
                    *(edx_1 - 4) = *(ecx_4 + 0x30)
                while (i s< data_1152b94)
            
            return sub_547a70()
        
        var_10 = "SetDragTranslateOrigins"
        var_14 = 0x1d7
        var_18 = "d:\ax\trunk\ax2017\engine\editor\fabeditor.cpp"
        ecx_1 = "gFab.s.activeSetCount > 0"
    else
        var_10 = "FabDefGet"
        var_14 = 0xea
        var_18 = "d:\ax\trunk\ax2017\engine\fabdef.cpp"
        ecx_1 = "ptr->assetType == ASSET_TYPE_FAB"
    
    sub_489550(eax, &data_5b2591, ecx_1, var_18, var_14, var_10)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
