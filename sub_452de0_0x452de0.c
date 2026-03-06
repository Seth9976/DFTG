// 函数名称: sub_452de0
// 虚拟地址: 0x452de0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_452de0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    char const* const var_10
    int32_t var_c
    char const* const var_8
    int32_t* eax
    char* ecx
    
    if (arg1 != 0)
        uint32_t edx_1 = zx.d(arg1.w)
        
        if (edx_1 u< data_62d6c8)
            eax = edx_1 * 0x8ac + data_62d6c4
        
        if (edx_1 u>= data_62d6c8 || eax[0x22a] != arg1)
            var_8 = "DataArray<struct RollGfx>::DataArrayGet"
            var_c = 0x6d
            ecx = "DataArrayTryToGet(id) != NULL"
            var_10 = "d:\ax\trunk\ax2017\engine\dataarray.h"
        else
            eax = edx_1 * 0x8ac + data_62d6c4
            
            if (*eax == 0)
                return &eax[0xc]
            
            var_8 = "LookupTile"
            var_c = 0x25f
            var_10 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
            ecx = "gfx.type == ROLLGFX_TILE"
    else
        var_8 = "DataArray<struct RollGfx>::DataArrayGet"
        var_c = 0x6c
        ecx = "id != DATAID_NULL"
        var_10 = "d:\ax\trunk\ax2017\engine\dataarray.h"
    
    sub_489550(eax, &data_5b2591, ecx, var_10, var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
