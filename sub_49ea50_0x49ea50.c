// 函数名称: sub_49ea50
// 虚拟地址: 0x49ea50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_49ea50(void* arg1, int32_t arg2)
{
    // 第一条实际指令: char const* const var_10
    char const* const var_10
    int32_t var_c
    char const* const var_8
    void* result
    char* ecx
    
    if (arg2 s>= *(arg1 + 0x1190))
        var_8 = "UI2GetChild"
        var_c = 0x114d
        var_10 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
        ecx = "i < ui.numChildren"
    else if (arg2 s>= 0)
        int32_t ecx_1 = *(arg1 + (arg2 << 2) + 0x1194)
        
        if (ecx_1 != 0)
            uint32_t edx = zx.d(ecx_1.w)
            
            if (edx u< data_63e5ac)
                result = edx * 0x1418 + data_63e5a8
            
            if (edx u>= data_63e5ac || *(result + 0x1410) != ecx_1)
                var_8 = "DataArray<struct UI2>::DataArrayGet"
                var_c = 0x6d
                ecx = "DataArrayTryToGet(id) != NULL"
                var_10 = "d:\ax\trunk\ax2017\engine\dataarray.h"
            else
                result = edx * 0x1418 + data_63e5a8
                
                if (*(result + 0x112c) == arg1)
                    return result
                
                var_8 = "UI2GetChild"
                var_c = 0x1150
                var_10 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                ecx = "child.parent == &ui"
        else
            var_8 = "DataArray<struct UI2>::DataArrayGet"
            var_c = 0x6c
            ecx = "id != DATAID_NULL"
            var_10 = "d:\ax\trunk\ax2017\engine\dataarray.h"
    else
        var_8 = "UI2GetChild"
        var_c = 0x114e
        var_10 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
        ecx = "i >= 0"
    
    sub_489550(result, &data_5b2591, ecx, var_10, var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
