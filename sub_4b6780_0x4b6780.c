// 函数名称: sub_4b6780
// 虚拟地址: 0x4b6780
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4b6780(void* arg1)
{
    // 第一条实际指令: void* edi = *(arg1 + 0x112c)
    void* edi = *(arg1 + 0x112c)
    
    if (edi != 0)
        char const* const var_18
        int32_t var_14
        char const* const var_10
        int32_t eax
        char* ecx
        
        if (*(arg1 + 0x1130) != 0)
            var_10 = "UI2GetNext"
            var_14 = 0x3762
            var_18 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
            ecx = "target.clone == false"
        label_4b6889:
            sub_489550(eax, &data_5b2591, ecx, var_18, var_14, var_10)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t edx_1 = *(edi + 0x1190)
        int32_t ecx_1 = 0
        
        if (edx_1 s> 0)
            void* eax_1 = edi + 0x1194
            
            while (*eax_1 != *(arg1 + 0x1410))
                ecx_1 += 1
                eax_1 += 4
                
                if (ecx_1 s>= edx_1)
                    return 0
            
            eax = edx_1 - 1
            
            if (ecx_1 s< eax)
                int32_t ecx_2 = *(edi + (ecx_1 << 2) + 0x1198)
                
                if (ecx_2 != 0)
                    uint32_t edx_2 = zx.d(ecx_2.w)
                    int32_t edi_1
                    
                    if (edx_2 u< data_63e5ac)
                        edi_1 = data_63e5a8
                        eax = edx_2 * 0x1418
                    
                    if (edx_2 u>= data_63e5ac || *(eax + edi_1 + 0x1410) != ecx_2)
                        var_10 = "DataArray<struct UI2>::DataArrayGet"
                        var_14 = 0x6d
                        ecx = "DataArrayTryToGet(id) != NULL"
                        var_18 = "d:\ax\trunk\ax2017\engine\dataarray.h"
                    else
                        void* result = edx_2 * 0x1418 + edi_1
                        
                        if (*(result + 0x1130) == 0)
                            eax = *(result + 0xff4)
                            
                            if (eax == *(arg1 + 0xff4))
                                return result
                            
                            var_10 = "UI2GetNext"
                            var_14 = 0x376c
                            var_18 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                            ecx = "next.sourceAsset == target.sourceAsset"
                        else
                            var_10 = "UI2GetNext"
                            var_14 = 0x376b
                            var_18 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                            ecx = "next.clone == false"
                else
                    var_10 = "DataArray<struct UI2>::DataArrayGet"
                    var_14 = 0x6c
                    ecx = "id != DATAID_NULL"
                    var_18 = "d:\ax\trunk\ax2017\engine\dataarray.h"
                
                goto label_4b6889
    
    return 0
}
