// 函数名称: sub_4b6550
// 虚拟地址: 0x4b6550
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4b6550(void* arg1)
{
    // 第一条实际指令: void* result = nullptr
    void* result = nullptr
    void* result_1 = data_63e5a8
    void* esi_1 = data_63e5ac * 0x1418 + result_1
    
    while (true)
        if (result != 0)
            result += 0x1418
        else
            result = result_1
        
        if (result u>= esi_1)
            break
        
        while ((*(result + 0x1410) & 0xffff0000) == 0)
            result += 0x1418
            
            if (result u>= esi_1)
                return nullptr
        
        int32_t edi_1 = *(result + 0x1190)
        int32_t ecx = 0
        
        if (edi_1 s> 0)
            void* edx_1 = result + 0x1194
            
            while (true)
                if (*edx_1 == *(arg1 + 0x1410))
                    if (ecx == 0)
                        break
                    
                    int32_t ecx_1 = *(result + (ecx << 2) + 0x1190)
                    int32_t var_14
                    char* ecx_2
                    
                    if (ecx_1 != 0)
                        result = zx.d(ecx_1.w)
                        
                        if (result u< data_63e5ac)
                            result = result * 0x1418 + data_63e5a8
                            
                            if (*(result + 0x1410) == ecx_1)
                                return result
                        
                        char const* const var_10_1 = "DataArray<struct UI2>::DataArrayGet"
                        var_14 = 0x6d
                        ecx_2 = "DataArrayTryToGet(id) != NULL"
                    else
                        char const* const var_10 = "DataArray<struct UI2>::DataArrayGet"
                        var_14 = 0x6c
                        ecx_2 = "id != DATAID_NULL"
                    
                    sub_489550(result, &data_5b2591, ecx_2, "d:\ax\trunk\ax2017\engine\dataarray.h", 
                        var_14, "DataArray<struct UI2>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                ecx += 1
                edx_1 += 4
                
                if (ecx s>= edi_1)
                    goto label_4b6570
            
            break
        
    label_4b6570:
        result_1 = data_63e5a8
    
    return nullptr
}
