// 函数名称: sub_4a84f0
// 虚拟地址: 0x4a84f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4a84f0(int32_t arg1, int32_t arg2 @ xmm2)
{
    // 第一条实际指令: int32_t var_8
    int32_t var_8
    uint32_t eax
    char const* const ecx
    
    if (arg1 != 0)
        eax = zx.d(arg1.w)
        
        if (eax u< data_63e5ac)
            void* ecx_2 = eax * 0x1418 + data_63e5a8
            
            if (*(ecx_2 + 0x1410) == arg1)
                return sub_4a8420(eax, &data_62c6cc, ecx_2, arg2, 0xffffffff)
        
        char const* const var_4_1 = "DataArray<struct UI2>::DataArrayGet"
        var_8 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_4 = "DataArray<struct UI2>::DataArrayGet"
        var_8 = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\dataarray.h", var_8, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
