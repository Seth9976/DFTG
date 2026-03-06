// 函数名称: sub_4d2800
// 虚拟地址: 0x4d2800
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4d2800(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_4 = arg1
    int32_t* var_4 = arg1
    char const* const var_18
    int32_t var_14
    char const* const var_10_1
    void* eax
    char* ecx
    
    if (arg1[1] == 3)
        eax = sub_4981f0(arg1)
        int32_t* esi_1 = *(eax + 0x18)
        
        if (esi_1 != 0)
            int32_t eax_1 = esi_1[3]
            
            if (eax_1 != 0)
                _aligned_free_base(eax_1)
            
            int32_t eax_2 = esi_1[2]
            
            if (eax_2 != 0)
                _aligned_free_base(eax_2)
            
            int32_t result = sub_4984f0(esi_1, 0x24)
            *(eax + 0x18) = 0
            return result
        
        var_10_1 = "TextureAsyncronousFree"
        var_14 = 0x26b
        var_18 = "d:\ax\trunk\ax2017\engine\texture.cpp"
        ecx = "loader"
    else
        var_10_1 = "TextureGetDef"
        var_14 = 0x86
        var_18 = "d:\ax\trunk\ax2017\engine\texture.h"
        ecx = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
    
    sub_489550(eax, &data_5b2591, ecx, var_18, var_14, var_10_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
