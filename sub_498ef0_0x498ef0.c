// 函数名称: sub_498ef0
// 虚拟地址: 0x498ef0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_498ef0(void* arg1)
{
    // 第一条实际指令: int32_t* ecx = *(arg1 + 0xff4)
    int32_t* ecx = *(arg1 + 0xff4)
    int32_t var_c
    char const* const var_8
    int32_t* eax
    char* ecx_1
    
    if (ecx[1] == 0x22)
        eax = sub_4981f0(ecx)
        int32_t ecx_2 = *(arg1 + 0xff8)
        
        if (ecx_2 s>= 0)
            if (ecx_2 s< eax[2])
                return *eax + ecx_2 * 0x18
            
            var_8 = "UI2GetAttribItem"
            var_c = 0x8bc
            ecx_1 = "item.attribItemIndex < def.el.numItems"
        else
            var_8 = "UI2GetAttribItem"
            var_c = 0x8bb
            ecx_1 = "item.attribItemIndex >= 0"
    else
        var_8 = "UI2DefGet"
        var_c = 0x8ae
        ecx_1 = "ptr->assetType == ASSET_TYPE_UI2"
    
    sub_489550(eax, &data_5b2591, ecx_1, "d:\ax\trunk\ax2017\engine\ui2.cpp", var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
