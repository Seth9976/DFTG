// 函数名称: sub_4dd880
// 虚拟地址: 0x4dd880
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4dd880(int32_t arg1)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    int32_t* result = data_114e818
    char const* const var_10
    int32_t var_c
    char const* const var_8
    char* ecx
    
    if (result != 0)
        result = *result
        
        if (arg1 != 0)
            uint32_t ecx_1 = zx.d(arg1.w)
            
            if (ecx_1 u< result[1])
                result = *result + ecx_1 * 0x6c
                
                if (result[0x1a] == arg1)
                    return result
            
            var_8 = "DataArray<struct Structure>::DataArrayGet"
            var_c = 0x6d
            ecx = "DataArrayTryToGet(id) != NULL"
        else
            var_8 = "DataArray<struct Structure>::DataArrayGet"
            var_c = 0x6c
            ecx = "id != DATAID_NULL"
        
        var_10 = "d:\ax\trunk\ax2017\engine\dataarray.h"
    else
        var_8 = "GetGameData"
        var_c = 0x45
        var_10 = "d:\ax\trunk\ax2017\engine\game.h"
        ecx = "gpGameData"
    
    sub_489550(result, &data_5b2591, ecx, var_10, var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
