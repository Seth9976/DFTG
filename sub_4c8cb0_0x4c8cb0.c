// 函数名称: sub_4c8cb0
// 虚拟地址: 0x4c8cb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4c8cb0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_c
    int32_t var_c
    char const* const var_8
    void* eax
    char* ecx
    
    if (arg1[1] == 0x1e)
        eax = sub_4981f0(arg1)
        
        if (arg2 s>= 0)
            if (arg2 s< *(eax + 8))
                return arg2 * 0x178 + *eax
            
            var_8 = "UIDefGetElement"
            var_c = 0x12e
            ecx = "index < def.numElements"
        else
            var_8 = "UIDefGetElement"
            var_c = 0x12d
            ecx = "index >= 0"
    else
        var_8 = "UIDefGet"
        var_c = 0x126
        ecx = "ptr->assetType == ASSET_TYPE_UI"
    
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\uidef.cpp", var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
