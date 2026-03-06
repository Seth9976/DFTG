// 函数名称: sub_5539f0
// 虚拟地址: 0x5539f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

LRESULTsub_5539f0()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    HWND hWnd = GetDlgItem(data_1151080, 0xab)
    int32_t* ecx_1 = data_11e6050
    
    if (ecx_1[1] != 0x1e)
        sub_489550(hWnd, &data_5b2591, "ptr->assetType == ASSET_TYPE_UI", 
            "d:\ax\trunk\ax2017\engine\uidef.cpp", 0x126, "UIDefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t* eax = sub_4981f0(ecx_1)
    SendMessageA(hWnd, 0x19b, 0, zx.d(eax[2].w) << 0x10)
    int32_t i = 0
    
    if (eax[2] s> 0)
        int32_t edx_1 = data_11e705c
        int32_t* edi_1 = nullptr
        
        do
            int32_t eax_1 = 0
            
            if (edx_1 s> 0)
                do
                    if ((&data_11e605c)[eax_1] == *(edi_1 + *eax))
                        uint32_t eax_2 = zx.d(i.w)
                        SendMessageA(hWnd, 0x19b, 1, eax_2 << 0x10 | eax_2)
                        edx_1 = data_11e705c
                        break
                    
                    eax_1 += 1
                while (eax_1 s< edx_1)
            
            i += 1
            edi_1 = &edi_1[0x5e]
        while (i s< eax[2])
    
    return sub_516090()
}
