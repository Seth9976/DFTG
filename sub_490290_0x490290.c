// 函数名称: sub_490290
// 虚拟地址: 0x490290
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_490290()
{
    // 第一条实际指令: int32_t* ecx
    int32_t* ecx
    int32_t* var_4 = ecx
    int32_t result = data_aca74c
    
    if (result != 0)
        return result
    
    void* eax = sub_4981f0(ecx)
    char ecx_1 = *(eax + 0x10)
    
    if (*(eax + 0x11) != 0)
        if (ecx_1 != 0)
            return 0x3e8
    else if (ecx_1 != 0)
        sub_489550(eax, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\draw3d.cpp", 0x22d, 
            "GetSortLayerFromMaterial")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    return 0x7d0
}
