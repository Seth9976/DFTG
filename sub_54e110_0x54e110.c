// 函数名称: sub_54e110
// 虚拟地址: 0x54e110
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_54e110(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    int32_t* ecx = data_11e6050
    char const* const var_20
    char const* const var_18
    int32_t* eax
    char* ecx_1
    
    if (ecx[1] == 0x1e)
        eax = sub_4981f0(ecx)
        int32_t ecx_2 = 0
        int32_t esi_1 = eax[2]
        
        if (esi_1 s> 0)
            int32_t* edx = *eax
            
            do
                if (*edx == arg1)
                    if (arg2 != 0)
                        *arg2 = ecx_2
                    
                    return ecx_2 * 0x178 + *eax
                
                ecx_2 += 1
                edx = &edx[0x5e]
            while (ecx_2 s< esi_1)
        
        var_18 = "FindElement"
        int32_t var_1c_1 = 0x126
        var_20 = "d:\ax\trunk\ax2017\engine\editor\uieditor.cpp"
        ecx_1 = "Halt"
    else
        var_18 = "UIDefGet"
        int32_t var_1c = 0x126
        var_20 = "d:\ax\trunk\ax2017\engine\uidef.cpp"
        ecx_1 = "ptr->assetType == ASSET_TYPE_UI"
    
    sub_489550(eax, &data_5b2591, ecx_1, var_20, 0x126, var_18)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
