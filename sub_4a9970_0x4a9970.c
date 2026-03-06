// 函数名称: sub_4a9970
// 虚拟地址: 0x4a9970
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4a9970(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: char const* const var_18
    char const* const var_18
    int32_t var_14
    char const* const var_10
    int32_t result
    char* ecx_1
    
    if (arg1 != 0)
        uint32_t edx_1 = zx.d(arg1.w)
        
        if (edx_1 u>= data_63e5ac)
        label_4a9a15:
            var_10 = "DataArray<struct UI2>::DataArrayGet"
            ecx_1 = "DataArrayTryToGet(id) != NULL"
            var_14 = 0x6d
            var_18 = "d:\ax\trunk\ax2017\engine\dataarray.h"
        else
            int32_t esi_1 = data_63e5a8
            result = edx_1 * 0x1418
            
            if (*(result + esi_1 + 0x1410) != arg1)
                goto label_4a9a15
            
            if (arg2 != 0)
                uint32_t edx_2 = zx.d(arg2.w)
                
                if (edx_2 u>= data_63e5ac)
                    goto label_4a9a15
                
                result = edx_2 * 0x1418
                
                if (*(result + esi_1 + 0x1410) != arg2)
                    goto label_4a9a15
                
                result = *(edx_2 * 0x1418 + esi_1 + 0xff8)
                int32_t temp0_1 = *(edx_1 * 0x1418 + esi_1 + 0xff8)
                
                if (temp0_1 != result)
                    result.b = temp0_1 s< result
                    return result
                
                var_10 = "CompareParentsOnly"
                var_14 = 0x23a3
                var_18 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                ecx_1 = "uiA.attribItemIndex != uiB.attribItemIndex"
            else
                var_10 = "DataArray<struct UI2>::DataArrayGet"
                var_14 = 0x6c
                ecx_1 = "id != DATAID_NULL"
                var_18 = "d:\ax\trunk\ax2017\engine\dataarray.h"
    else
        var_10 = "DataArray<struct UI2>::DataArrayGet"
        var_14 = 0x6c
        ecx_1 = "id != DATAID_NULL"
        var_18 = "d:\ax\trunk\ax2017\engine\dataarray.h"
    
    sub_489550(result, &data_5b2591, ecx_1, var_18, var_14, var_10)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
