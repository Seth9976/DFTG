// 函数名称: sub_54c600
// 虚拟地址: 0x54c600
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOLsub_54c600()
{
    // 第一条实际指令: HMENU hMenu = CreatePopupMenu()
    HMENU hMenu = CreatePopupMenu()
    POINT point
    GetCursorPos(&point)
    HMENU eax = CreatePopupMenu()
    InsertMenuA(eax, 0xffffffff, MF_BYPOSITION, 0x11, "SizeToSource")
    int32_t ebx
    ebx.b = sub_54c580()
    HMENU eax_2 = CreatePopupMenu()
    int32_t ecx
    ecx.b = ebx.b != 0
    InsertMenuA(eax_2, 0xffffffff, (ecx << 3) + 0x400, 0x16, "Lock")
    InsertMenuA(hMenu, 0xffffffff, 0x410, eax_2, "Layer")
    InsertMenuA(hMenu, 0xffffffff, 0x410, eax, "Transform")
    BOOL result
    char* ecx_2
    result, ecx_2 = TrackPopupMenu(hMenu, TPM_RETURNCMD, point.x, point.y, 0, data_1150b8c, nullptr)
    
    if (result != 0)
        char const* const var_30_1
        int32_t var_2c_3
        char const* const var_28_1
        char* ecx_3
        
        if (result != 0x11)
            if (result != 0x16)
                var_28_1 = "FabDoRClickMenu"
                var_2c_3 = 0x79c
                var_30_1 = "d:\ax\trunk\ax2017\engine\editor\fabeditor.cpp"
                ecx_3 = "Halt"
            label_54c7ae:
                sub_489550(result, &data_5b2591, ecx_3, var_30_1, var_2c_3, var_28_1)
                
                if (IsDebuggerPresent() != 1)
                    sub_489700()
                    noreturn
                
                breakpoint
            
            result = sub_54c580()
            int32_t esi_1 = 0
            HMENU ebx_1
            ebx_1.b = result.b
            
            if (data_1152b94 s<= 0)
            label_54c716:
                ecx_2.b = 1
                return sub_54d840(ecx_2)
            
            while (true)
                int32_t* ecx_4 = data_1151b90
                int32_t edi_1 = (&data_1151b94)[esi_1]
                
                if (ecx_4[1] != 0x20)
                    break
                
                result = *sub_4981f0(ecx_4)
                esi_1 += 1
                (edi_1 * 0xe0)[result + 0x39] = ebx_1.b == 0
                
                if (esi_1 s>= data_1152b94)
                    goto label_54c716
            
            goto label_54c795
        
        int32_t* ecx_5 = data_1151b90
        
        if (ecx_5[1] != 0x20)
        label_54c795:
            var_28_1 = "FabDefGet"
            var_2c_3 = 0xea
            ecx_3 = "ptr->assetType == ASSET_TYPE_FAB"
            var_30_1 = "d:\ax\trunk\ax2017\engine\fabdef.cpp"
            goto label_54c7ae
        
        result = sub_4981f0(ecx_5)
        int32_t esi_2 = data_1152b94
        int32_t edx_2 = 0
        BOOL result_1 = result
        
        if (esi_2 s> 0)
            do
                BOOL* ecx_7 = (&data_1151b94)[edx_2] * 0xe0 + *result_1
                result = *ecx_7
                
                if (result == 3 || result == 2 || result == 1)
                    *(ecx_7 + 0x28) = 0x3f8000003f800000
                    result = 0x3f800000
                    ecx_7[0xc] = 0x3f800000
                    esi_2 = data_1152b94
                
                edx_2 += 1
            while (edx_2 s< esi_2)
    
    return result
}
