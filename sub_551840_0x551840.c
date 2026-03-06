// 函数名称: sub_551840
// 虚拟地址: 0x551840
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

voidsub_551840()
{
    // 第一条实际指令: if (data_11e705c == 0)
    if (data_11e705c == 0)
        return 
    
    int32_t* ecx_1 = data_11e6050
    int32_t eax
    
    if (ecx_1[1] != 0x1e)
        sub_489550(eax, &data_5b2591, "ptr->assetType == ASSET_TYPE_UI", 
            "d:\ax\trunk\ax2017\engine\uidef.cpp", 0x126, "UIDefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t esi_1 = *(sub_4981f0(ecx_1) + 8)
    eax = sub_551590()
    int32_t ecx_3
    
    if (eax != esi_1 - 1)
        ecx_3 = eax + 1
    label_551876:
        sub_553be0(ecx_3)
        char* ecx_4
        ecx_4.b = 1
        sub_54dee0(ecx_4)
        sub_5151c0(data_11e6050)
        return sub_5539f0() __tailcall
    
    if (data_11e705c != 0)
        ecx_3 = 0xffffffff
        goto label_551876
}
