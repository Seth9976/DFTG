// 函数名称: sub_45b560
// 虚拟地址: 0x45b560
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_45b560(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_4 = arg1
    int32_t* var_4 = arg1
    char const* const var_10
    int32_t var_c
    char const* const var_8
    uint32_t result
    char* ecx
    
    if (*arg1 == 1)
        int32_t edx_1 = arg1[7]
        
        if (edx_1 != 0)
            result = zx.d(edx_1.w)
            
            if (result u< data_62d6c8)
                result = data_62d6c4 + result * 0x8ac
                
                if (*(result + 0x8a8) == edx_1)
                    return result
            
            var_8 = "DataArray<struct RollGfx>::DataArrayGet"
            var_c = 0x6d
            ecx = "DataArrayTryToGet(id) != NULL"
        else
            var_8 = "DataArray<struct RollGfx>::DataArrayGet"
            var_c = 0x6c
            ecx = "id != DATAID_NULL"
        
        var_10 = "d:\ax\trunk\ax2017\engine\dataarray.h"
    else
        var_8 = "GoodGetTile"
        var_c = 0x2568
        var_10 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
        ecx = "gfxGood.type == ROLLGFX_DIE"
    
    sub_489550(result, &data_5b2591, ecx, var_10, var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
