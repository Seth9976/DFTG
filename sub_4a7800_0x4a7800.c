// 函数名称: sub_4a7800
// 虚拟地址: 0x4a7800
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_4a7800(int32_t arg1)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    
    if (arg1 == 0)
        return 
    
    uint32_t eax_1 = zx.d(arg1.w)
    float ecx_1
    
    if (eax_1 u< data_63e5ac)
        ecx_1 = eax_1 * 0x1418 + data_63e5a8
    
    if (eax_1 u>= data_63e5ac || *(ecx_1 i+ 0x1410) != arg1)
        sub_489550(eax_1, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
            "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    sub_4a6fe0(ecx_1)
}
