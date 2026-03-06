// 函数名称: sub_4adab0
// 虚拟地址: 0x4adab0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4adab0(int32_t arg1)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    int32_t result_2
    int32_t edx
    result_2, edx = sub_4ad640(sub_4ad220(eax, "layersTable", data_642640, 0xffffffff))
    int32_t result_1 = result_2
    char const* const var_2c
    int32_t var_28
    char const* const var_24
    char* ecx_2
    
    if (arg1 != 0)
        uint32_t ecx_3 = zx.d(arg1.w)
        int32_t edx_1
        
        if (ecx_3 u< data_63e5ac)
            edx_1 = data_63e5a8
            result_2 = ecx_3 * 0x1418
        
        if (ecx_3 u>= data_63e5ac || *(result_2 + edx_1 + 0x1410) != arg1)
            var_24 = "DataArray<struct UI2>::DataArrayGet"
            var_28 = 0x6d
            ecx_2 = "DataArrayTryToGet(id) != NULL"
            var_2c = "d:\ax\trunk\ax2017\engine\dataarray.h"
        else
            char* i_1 = ecx_3 * 0x1418 + edx_1
            
            if (*(sub_4ad970(i_1) + 0xc) == 2)
                char* i = i_1
                
                if (i_1 != 0)
                    do
                        if (i[8] != 0)
                            i[8] = 0
                            sub_4a9e30(i, 0x87)
                            sub_4f0ac0(0x87, 0)
                            sub_4a3580(i)
                            sub_4ada50(i)
                        
                        i = *(i + 0x112c)
                    while (i != 0)
                
                sub_4a8e00()
            
            result_2 = sub_4ad970(i_1)
            int32_t edi_2 = *(result_2 + 8)
            
            if (edi_2 != 0xffffffff)
                int32_t result = result_1
                
                if (edi_2 s>= result && edi_2 s<= edx)
                    return result
                
                void* esi_1 = data_64261c
                void* ebx_1 = edx - result
                int32_t eax_5
                int32_t edx_3
                edx_3:eax_5 = sx.q(ebx_1)
                int32_t eax_7 = (eax_5 - edx_3) s>> 1
                void* result_3 = edi_2 - eax_7
                void* ecx_9 = ebx_1 - eax_7 + edi_2
                
                if (edi_2 - eax_7 s< 0)
                    eax_7 -= edi_2
                    ecx_9 += eax_7
                    result_3 += eax_7
                    
                    if (ecx_9 s> esi_1)
                        ecx_9 = esi_1
                else if (ecx_9 s> esi_1)
                    void* esi_2 = esi_1 - ecx_9
                    eax_7 = 0
                    ecx_9 += esi_2
                    void* result_4 = result_3
                    result_3 += esi_2
                    
                    if (result_4 + esi_2 s< 0)
                        result_3 = nullptr
                
                result_1 = result_3
                void* var_c_1 = ecx_9
                return sub_4ad320(sub_4ad220(eax_7, "layersTable", data_642640, 0xffffffff), &result_1)
            
            var_24 = "UI2EditorSyncSelection"
            var_28 = 0x29c2
            var_2c = "d:\ax\trunk\ax2017\engine\ui2.cpp"
            ecx_2 = "display.displayIndex != -1"
    else
        var_24 = "DataArray<struct UI2>::DataArrayGet"
        var_28 = 0x6c
        ecx_2 = "id != DATAID_NULL"
        var_2c = "d:\ax\trunk\ax2017\engine\dataarray.h"
    
    sub_489550(result_2, &data_5b2591, ecx_2, var_2c, var_28, var_24)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
