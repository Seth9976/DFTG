// 函数名称: sub_4cac50
// 虚拟地址: 0x4cac50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_4cac50(int32_t arg1, int32_t* arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t esi
    int32_t esi
    
    if (arg2[0x48] s<= *arg2)
        esi = *(arg3 + 0xb0)
    else
        esi = arg2[0x4b]
    
    uint32_t result = arg4[1] * esi + *arg4
    char const* const var_24
    int32_t var_20
    char const* const var_1c
    char* ecx_1
    
    if (result s>= 0x1e)
        var_1c = "UIStateSubstate"
        var_20 = 0x6d6
        var_24 = "d:\ax\trunk\ax2017\engine\uidef.cpp"
        ecx_1 = "slotIdx < 30"
    else if (result s>= 0)
        void* esi_1 = &arg2[result]
        result = sub_4caaf0(result, arg3, esi_1 + 0xa4, arg2, arg4)
        int32_t edx_1 = *(esi_1 + 0xa4)
        
        if (edx_1 != 0)
            result = zx.d(edx_1.w)
            
            if (result u< data_6c9d94)
                result = data_6c9d90 + result * 0x438
                
                if (*(result + 0x434) == edx_1)
                    return result
            
            var_1c = "DataArray<struct UIState>::DataArrayGet"
            var_20 = 0x6d
            ecx_1 = "DataArrayTryToGet(id) != NULL"
        else
            var_1c = "DataArray<struct UIState>::DataArrayGet"
            var_20 = 0x6c
            ecx_1 = "id != DATAID_NULL"
        
        var_24 = "d:\ax\trunk\ax2017\engine\dataarray.h"
    else
        var_1c = "UIStateSubstate"
        var_20 = 0x6d7
        var_24 = "d:\ax\trunk\ax2017\engine\uidef.cpp"
        ecx_1 = "slotIdx >= 0"
    
    sub_489550(result, &data_5b2591, ecx_1, var_24, var_20, var_1c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
