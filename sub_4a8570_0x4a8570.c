// 函数名称: sub_4a8570
// 虚拟地址: 0x4a8570
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4a8570(int32_t arg1)
{
    // 第一条实际指令: int32_t var_10
    int32_t var_10
    uint32_t eax
    char const* const ecx
    
    if (arg1 != 0)
        eax = zx.d(arg1.w)
        
        if (eax u< data_63e5ac)
            void* ecx_2 = eax * 0x1418 + data_63e5a8
            int32_t edx
            
            if (*(ecx_2 + 0x1410) == arg1)
                return sub_4a8420(eax, edx, ecx_2, 0x3f800000) __tailcall
        
        char const* const var_c_1 = "DataArray<struct UI2>::DataArrayGet"
        var_10 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_c = "DataArray<struct UI2>::DataArrayGet"
        var_10 = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\dataarray.h", var_10, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
