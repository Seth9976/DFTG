// 函数名称: sub_54dbb0
// 虚拟地址: 0x54dbb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_54dbb0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_c = arg1
    int32_t* var_c = arg1
    sub_54dd00()
    DragAcceptFiles(data_1150b8c, 1)
    data_11e6050 = arg1
    uint32_t eax = sub_4ca240(arg1)
    int32_t* ecx_1 = data_11e6050
    data_11e6054 = eax
    data_11e705c = 0
    data_11e7060 = 0
    data_11e7062 = 0
    char const* const var_1c
    int32_t var_18_1
    char const* const var_14
    char* ecx_2
    
    if (ecx_1[1] == 0x1e)
        int32_t* eax_1 = sub_4981f0(ecx_1)
        int32_t ecx_3 = 0
        int32_t i_1 = eax_1[2]
        
        if (i_1 s> 0)
            int32_t* edx_1 = *eax_1
            int32_t i
            
            do
                int32_t eax_2 = *edx_1
                edx_1 = &edx_1[0x5e]
                
                if (ecx_3 s> eax_2)
                    eax_2 = ecx_3
                
                ecx_3 = eax_2
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        eax = ecx_3 + 1
        data_126786c = 0x3f000000
        int32_t* ecx_4 = data_11e6050
        data_11e6058 = eax
        
        if (ecx_4[1] == 0x1e)
            char* ecx_5
            eax, ecx_5 = sub_4981f0(ecx_4)
            float xmm2_1 = *(eax + 0xc)
            
            if (not(*(eax + 0x14) f< xmm2_1))
                float xmm1_1 = *(eax + 0x10)
                
                if (not(*(eax + 0x18) f< xmm1_1))
                    ecx_5.b = 0
                    data_1267870 = xmm2_1 - 100f
                    data_1267874 = xmm1_1 - 100f
                    return sub_54dee0(ecx_5)
            
            var_14 = "RectTopLeft"
            var_18_1 = 0x127
            var_1c = "d:\ax\trunk\ax2017\engine\rect.cpp"
            ecx_2 = "RectIsNormalized(r)"
        else
            var_14 = "UIDefGet"
            var_18_1 = 0x126
            var_1c = "d:\ax\trunk\ax2017\engine\uidef.cpp"
            ecx_2 = "ptr->assetType == ASSET_TYPE_UI"
    else
        var_14 = "UIDefGet"
        var_18_1 = 0x126
        var_1c = "d:\ax\trunk\ax2017\engine\uidef.cpp"
        ecx_2 = "ptr->assetType == ASSET_TYPE_UI"
    
    sub_489550(eax, &data_5b2591, ecx_2, var_1c, var_18_1, var_14)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
