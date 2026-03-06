// 函数名称: sub_4b9ba0
// 虚拟地址: 0x4b9ba0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4b9ba0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c
    int32_t var_c
    uint32_t eax
    char const* const ecx
    
    if (arg1 != 0)
        eax = zx.d(arg1.w)
        
        if (eax u< data_63e5ac)
            void* ecx_2 = eax * 0x1418 + data_63e5a8
            float* edx
            
            if (*(ecx_2 + 0x1410) == arg1)
                return sub_4b9af0(ecx_2, edx) __tailcall
        
        char const* const var_8_1 = "DataArray<struct UI2>::DataArrayGet"
        var_c = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_8 = "DataArray<struct UI2>::DataArrayGet"
        var_c = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\dataarray.h", var_c, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
