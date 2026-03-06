// 函数名称: sub_4a8700
// 虚拟地址: 0x4a8700
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4a8700(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    int32_t xmm1 = *arg2
    char const* const var_20
    int32_t var_1c
    char const* const var_18
    int32_t eax
    char* ecx
    
    if (not(xmm1 f>= -100000f))
        var_18 = "UI2SetTransform"
        var_1c = 0x2183
        var_20 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
        ecx = "t.offset.x >= -100000.0f"
    else if (100000f f>= xmm1)
        if (arg1 != 0)
            uint32_t edx = zx.d(arg1.w)
            
            if (edx u< data_63e5ac)
                int32_t esi_1 = data_63e5a8
                eax = edx * 0x1418
                
                if (*(eax + esi_1 + 0x1410) == arg1)
                    int32_t* edx_1 = arg2
                    void* eax_2 = edx * 0x1418 + esi_1
                    int32_t i_1 = 0x5c
                    int32_t* ecx_1 = eax_2 + 0x1014
                    int32_t result
                    int32_t i
                    
                    do
                        result = *ecx_1
                        
                        if (result != *edx_1)
                            *(eax_2 + 0x1014) = *arg2
                            *(eax_2 + 0x1024) = *(arg2 + 0x10)
                            *(eax_2 + 0x1034) = *(arg2 + 0x20)
                            *(eax_2 + 0x1044) = *(arg2 + 0x30)
                            *(eax_2 + 0x1054) = *(arg2 + 0x40)
                            *(eax_2 + 0x1064) = *(arg2 + 0x50)
                            return sub_4a3580(eax_2)
                        
                        ecx_1 = &ecx_1[1]
                        edx_1 = &edx_1[1]
                        i = i_1
                        i_1 -= 4
                    while (i u>= 4)
                    return result
            
            var_18 = "DataArray<struct UI2>::DataArrayGet"
            var_1c = 0x6d
            ecx = "DataArrayTryToGet(id) != NULL"
        else
            var_18 = "DataArray<struct UI2>::DataArrayGet"
            var_1c = 0x6c
            ecx = "id != DATAID_NULL"
        
        var_20 = "d:\ax\trunk\ax2017\engine\dataarray.h"
    else
        var_18 = "UI2SetTransform"
        var_1c = 0x2184
        var_20 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
        ecx = "t.offset.x <= 100000.0f"
    
    sub_489550(eax, &data_5b2591, ecx, var_20, var_1c, var_18)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
