// 函数名称: sub_5475f0
// 虚拟地址: 0x5475f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_5475f0()
{
    // 第一条实际指令: HWND hWnd = GetDlgItem(data_1151080, 0xab)
    HWND hWnd = GetDlgItem(data_1151080, 0xab)
    int32_t* ecx = data_1151b90
    
    if (ecx[1] != 0x20)
        sub_489550(hWnd, &data_5b2591, "ptr->assetType == ASSET_TYPE_FAB", 
            "d:\ax\trunk\ax2017\engine\fabdef.cpp", 0xea, "FabDefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* eax = sub_4981f0(ecx)
    SendMessageA(hWnd, 0x19b, 0, zx.d(*(eax + 8)) << 0x10)
    int32_t i = 0
    
    if (*(eax + 8) s> 0)
        int32_t ecx_3 = data_1152b94
        
        do
            int32_t eax_1 = 0
            
            if (ecx_3 s> 0)
                do
                    if ((&data_1151b94)[eax_1] == i)
                        uint32_t eax_2 = zx.d(i.w)
                        SendMessageA(hWnd, 0x19b, 1, eax_2 << 0x10 | eax_2)
                        ecx_3 = data_1152b94
                        break
                    
                    eax_1 += 1
                while (eax_1 s< ecx_3)
            
            i += 1
        while (i s< *(eax + 8))
    
    return sub_515670() __tailcall
}
