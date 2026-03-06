// 函数名称: sub_4f9560
// 虚拟地址: 0x4f9560
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4f9560(int32_t* arg1)
{
    // 第一条实际指令: int32_t* ecx = arg1[0x1a]
    int32_t* ecx = arg1[0x1a]
    int32_t eax
    
    if (ecx != 0)
        eax = sub_4984f0(ecx, arg1[0x1b] * 0x68)
        arg1[0x1a] = 0
    
    int32_t* ecx_1 = *arg1
    
    if (ecx_1[1] != 0x18)
        sub_489550(eax, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_FLANIM", 
            "d:\ax\trunk\ax2017\engine\assetutils.cpp", 0x2ec, "FlanimGetDef")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* eax_1 = sub_4981f0(ecx_1)
    int32_t ecx_2 = *(eax_1 + 0x28)
    arg1[0x1b] = ecx_2
    int32_t result = *(eax_1 + 0x28)
    
    if (result s> 0)
        arg1[0x1a] = sub_498490(ecx_2 * 0x68)
        result = *(eax_1 + 0x28)
    
    int32_t i = 0
    
    if (result s> 0)
        int32_t edx_2 = 0
        
        do
            edx_2 += 0x68
            result = 0xffffffff
            i += 1
            *(edx_2 + arg1[0x1a] - 8) = 0xffffffff
        while (i s< *(eax_1 + 0x28))
    
    return result
}
