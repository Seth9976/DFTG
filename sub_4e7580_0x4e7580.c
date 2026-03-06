// 函数名称: sub_4e7580
// 虚拟地址: 0x4e7580
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4e7580(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t* ecx = *arg3
    int32_t* ecx = *arg3
    char const* const var_14
    int32_t var_10
    char const* const var_c
    char* ecx_1
    
    if (ecx != 0)
        if (ecx[1] == 3)
            int32_t* eax_2 = sub_4981f0(ecx)
            **eax_2 = *arg4
            int32_t eax_4 = arg4[1]
            *(*eax_2 + 4) = eax_4
            return eax_4
        
        var_c = "TextureGetDef"
        var_10 = 0x86
        var_14 = "d:\ax\trunk\ax2017\engine\texture.h"
        ecx_1 = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
    else
        int32_t eax
        
        if (arg2 == 3 || arg2 == 5)
            eax = 1
        label_4e75c5:
            int32_t var_c_1 = 0
            int32_t* eax_1 = sub_4d2c50(eax, arg4[1], *arg4, eax, arg2)
            *arg3 = eax_1
            return eax_1
        
        if (arg2 == 4 || arg2 == 6)
            eax = 0x50
            goto label_4e75c5
        
        var_c = "VRTextureBind"
        var_10 = 0x91
        var_14 = "d:\ax\trunk\ax2017\engine\vr.cpp"
        ecx_1 = "Halt"
    
    sub_489550(arg1, &data_5b2591, ecx_1, var_14, var_10, var_c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
