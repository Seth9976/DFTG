// 函数名称: sub_490300
// 虚拟地址: 0x490300
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_490300()
{
    // 第一条实际指令: int32_t* ecx
    int32_t* ecx
    int32_t* var_4 = ecx
    int32_t result = data_aca6a4
    
    if (result != 0 && result != 1)
        return result
    
    void* eax = sub_4981f0(ecx)
    char ecx_1 = *(eax + 0x10)
    
    if (*(eax + 0x11) != 0)
        int32_t eax_2
        eax_2.b = ecx_1 == 0
        return eax_2 + 2
    
    if (ecx_1 == 0)
        return 4
    
    sub_489550(eax, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\draw3d.cpp", 0x249, 
        "GetSortTypeFromMaterial")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
