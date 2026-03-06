// 函数名称: sub_4ade60
// 虚拟地址: 0x4ade60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __convention("regparm")sub_4ade60(int32_t arg1, int32_t arg2, int32_t* arg3, char** arg4)
{
    // 第一条实际指令: *arg4 = &data_5b2591
    *arg4 = &data_5b2591
    int32_t esi = 1
    
    if (arg3[1] != 0x22)
        sub_489550(arg4, &data_5b2591, "ptr->assetType == ASSET_TYPE_UI2", 
            "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x8ae, "UI2DefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t* eax_1 = sub_4981f0(arg3)
    int32_t i = 0
    int32_t* var_10 = eax_1
    
    if (eax_1[2] s> 0)
        int32_t ebx_1 = 0
        
        do
            int32_t* eax_3 = *eax_1 + ebx_1
            int32_t eax_4 = sub_4f0c50(eax_3, eax_3, &data_6218dc, 0x66)
            
            if (eax_4 == arg2)
                arg4[esi] = sub_4f0df0(eax_4, eax_3, &data_6218dc, 0x64)
                esi += 1
            
            if (esi == 0x20)
                break
            
            eax_1 = var_10
            i += 1
            ebx_1 += 0x18
        while (i s< eax_1[2])
    
    arg4[esi] = 0
    char** result
    result.b = 1
    return result
}
