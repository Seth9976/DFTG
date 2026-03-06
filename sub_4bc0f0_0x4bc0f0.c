// 函数名称: sub_4bc0f0
// 虚拟地址: 0x4bc0f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_4bc0f0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    uint32_t result
    
    if (arg1 != 0)
        int32_t esi_1 = data_63e5ac
        uint32_t edx_1 = zx.d(arg1.w)
        
        if (edx_1 u< esi_1)
            result = *(edx_1 * 0x1418 + data_63e5a8 + 0x1410)
            
            if (result == arg1)
                char const* const var_18
                int32_t var_14
                char const* const var_10
                char* ecx_3
                
                if (edx_1 u>= esi_1 || result != arg1)
                    var_10 = "DataArray<struct UI2>::DataArrayGet"
                label_4bc1e1:
                    ecx_3 = "DataArrayTryToGet(id) != NULL"
                    var_14 = 0x6d
                label_4bc1e8:
                    var_18 = "d:\ax\trunk\ax2017\engine\dataarray.h"
                label_4bc1f2:
                    sub_489550(result, &data_5b2591, ecx_3, var_18, var_14, var_10)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                uint32_t result_1 = edx_1 * 0x1418 + data_63e5a8
                
                if (*(result_1 + 0xfec) == 0xa)
                label_4bc175:
                    
                    if (result_1 != 0)
                        int32_t edx_3 = *(result_1 + 0xe60)
                        
                        if (edx_3 == 0)
                            var_10 = "DataArray<struct Spine>::DataArrayGet"
                            var_14 = 0x6c
                            ecx_3 = "id != DATAID_NULL"
                            goto label_4bc1e8
                        
                        uint32_t ecx_4 = zx.d(edx_3.w)
                        int32_t esi_3
                        
                        if (ecx_4 u< data_6c9ba0)
                            esi_3 = data_6c9b9c
                            result = ecx_4 * 3
                        
                        if (ecx_4 u>= data_6c9ba0 || *(esi_3 + (result << 3) + 0x14) != edx_3)
                            var_10 = "DataArray<struct Spine>::DataArrayGet"
                            goto label_4bc1e1
                        
                        uint32_t eax_3 = ecx_4 * 3
                        result = esi_3 + (eax_3 << 3)
                        
                        if (*(esi_3 + (eax_3 << 3) + 0xc) == 2)
                            result.b = *(result + 0x10)
                            return result
                        
                        var_10 = "SpineIsComplete"
                        var_14 = 0x335
                        var_18 = "d:\ax\trunk\ax2017\engine\spine.cpp"
                        ecx_3 = "spine.loopType == SPINE_PLAY_ONCE_AND_HOLD"
                        goto label_4bc1f2
                else
                    int32_t esi_2 = 0
                    
                    if (*(result_1 + 0x1190) s> 0)
                        while (true)
                            result = sub_4bc0a0(sub_49e970(result_1, esi_2))
                            
                            if (result != 0)
                                result_1 = result
                                break
                            
                            esi_2 += 1
                            
                            if (esi_2 s>= *(result_1 + 0x1190))
                                goto label_4bc16d
                        
                        goto label_4bc175
    
    label_4bc16d:
    result.b = 0
    return result
}
