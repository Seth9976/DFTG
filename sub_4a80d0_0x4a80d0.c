// 函数名称: sub_4a80d0
// 虚拟地址: 0x4a80d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_4a80d0(uint32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: char const* const var_14
    char const* const var_14
    int32_t var_10
    char const* const var_c
    char* ecx
    
    if (arg2 != 0)
        arg1 = zx.d(arg2.w)
        void* ecx_2
        
        if (arg1 u< data_63e5ac)
            ecx_2 = arg1 * 0x1418 + data_63e5a8
        
        if (arg1 u>= data_63e5ac || *(ecx_2 + 0x1410) != arg2)
            var_c = "DataArray<struct UI2>::DataArrayGet"
            var_10 = 0x6d
            ecx = "DataArrayTryToGet(id) != NULL"
            var_14 = "d:\ax\trunk\ax2017\engine\dataarray.h"
        else
            arg1 = sub_4a8050(arg1, arg3, ecx_2, arg4)
            
            if (arg1 != 0)
                return arg1
            
            var_c = "UI2ElementByIndex"
            var_10 = 0x20a8
            var_14 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
            ecx = "result"
    else
        var_c = "DataArray<struct UI2>::DataArrayGet"
        var_10 = 0x6c
        ecx = "id != DATAID_NULL"
        var_14 = "d:\ax\trunk\ax2017\engine\dataarray.h"
    
    sub_489550(arg1, &data_5b2591, ecx, var_14, var_10, var_c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
