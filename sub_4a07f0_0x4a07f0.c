// 函数名称: sub_4a07f0
// 虚拟地址: 0x4a07f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4a07f0(int32_t* arg1, uint32_t arg2, int32_t* arg3, int32_t arg4, int32_t** arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t var_24_1
    int32_t var_24_1
    char const* const var_20_1
    char* ecx
    
    if (arg3[1] == 0x22)
        arg1 = sub_4981f0(arg3)
        
        if (arg1[2] != 0)
            *(arg2 + 0xff4) = arg3
            *(arg2 + 0xff8) = arg6
            int32_t esi_1 = *(*arg1 + arg6 * 0x18 + 0x10)
            
            if (*(arg2 + 0x1190) s> esi_1)
                *(arg2 + 0x1190) = esi_1
            
            void* eax_2 = nullptr
            void* var_10_1 = nullptr
            int32_t* ecx_7
            
            if (esi_1 s<= 0)
                ecx_7 = *arg5
            else
                do
                    *(sub_49a970(arg2, eax_2) + 0x1130) = 1
                    int32_t var_c = 0
                    sub_4a07f0(arg3, arg4, &var_c, arg6 + 1)
                    int32_t ecx_6 = var_c
                    ecx_7 = ecx_6 + *arg5
                    arg6 = arg6 + 1 + ecx_6
                    eax_2 = var_10_1 + 1
                    *arg5 = ecx_7
                    var_10_1 = eax_2
                while (eax_2 s< esi_1)
            
            arg1 = ecx_7 + esi_1
            *(arg2 + 0x1190) = esi_1
            *arg5 = arg1
            
            if (*(arg2 + 0x1400) s>= esi_1)
                return arg1
            
            var_20_1 = "UI2MergeRecFromSublayout"
            var_24_1 = 0x15be
            ecx = "item.numTotalChildren >= item.numChildren"
        else
            var_20_1 = "UI2MergeRecFromSublayout"
            var_24_1 = 0x159a
            ecx = "Halt"
    else
        var_20_1 = "UI2DefGet"
        var_24_1 = 0x8ae
        ecx = "ptr->assetType == ASSET_TYPE_UI2"
    
    sub_489550(arg1, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\ui2.cpp", var_24_1, var_20_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
