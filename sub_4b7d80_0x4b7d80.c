// 函数名称: sub_4b7d80
// 虚拟地址: 0x4b7d80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (*sub_4b7d80(int32_t* arg1, uint32_t arg2))[0x4]
{
    // 第一条实际指令: int32_t* ecx = data_642620
    int32_t* ecx = data_642620
    char const* const var_28_2
    int32_t var_24
    char const* const var_20
    int32_t* eax
    char* ecx_1
    
    if (ecx[1] == 0x22)
        int32_t* eax_1 = sub_4981f0(ecx)
        void* eax_3 = sub_498ef0(*(sub_4a7d60(arg2) + 0x112c))
        void* i_1 = nullptr
        *(eax_3 + 0x10) += 1
        sub_4bc830(&data_63e5a8, &i_1)
        
        for (void* i = i_1; i != 0xffffffff; i = i_1)
            if (*(i + 0xff4) == data_642620)
                int32_t eax_5 = *(i + 0xff8)
                
                if (eax_5 s>= arg2)
                    *(i + 0xff8) = eax_5 + 1
            
            sub_4bc830(&data_63e5a8, &i_1)
        
        int32_t edx_1 = data_643654
        int32_t eax_7 = 0
        
        if (edx_1 s> 0)
            do
                int32_t ecx_4 = (&data_642654)[eax_7]
                
                if (ecx_4 s>= arg2)
                    (&data_642654)[eax_7] = ecx_4 + 1
                    edx_1 = data_643654
                
                eax_7 += 1
            while (eax_7 s< edx_1)
        
        int32_t* eax_8 = sub_4cf8e0(data_12bac58, 0)
        sub_518980(eax_8, eax_8, eax_1, arg2, 1)
        int32_t eax_9 = *eax_1
        char const* const var_28_1 = "newGroup"
        int32_t* esi_2 = eax_9 + arg2 * 0x18
        int32_t var_30_1 = 6
        int32_t* edi_1 = arg1
        int32_t* var_38_1 = edi_1
        eax = sub_4f0e70(
            sub_4f0a90(
                sub_4f0a90(sub_4f0a90(eax_9, esi_2, &data_6218dc, 0x64), esi_2, &data_6218dc, 0x66), 
                esi_2, &data_6218dc, 0x75), 
            esi_2, &data_6218dc, data_12baca4, 0x75)
        int32_t edx_7 = 0xc
        
        while (true)
            if (*eax != *edi_1)
                var_20 = "AssignPropertyRect"
                var_24 = 0x2421
                ecx_1 = "memcmp(val, &value, sizeof(value)) == 0"
                goto label_4b7f5c
            
            eax = &eax[1]
            edi_1 = &edi_1[1]
            int32_t temp0_1 = edx_7
            edx_7 -= 4
            
            if (temp0_1 u< 4)
                int32_t ecx_10 = data_642624
                
                if (ecx_10 != 0)
                    uint32_t edx_8 = zx.d(ecx_10.w)
                    
                    if (edx_8 u< data_63e5ac)
                        int32_t edi_2 = data_63e5a8
                        eax = edx_8 * 0x1418
                        
                        if (*(eax + edi_2 + 0x1410) == ecx_10)
                            uint32_t esi_4 = edx_8 * 0x1418 + edi_2
                            uint32_t (* result)[0x4] = sub_49a850(esi_4)
                            uint32_t ecx_12 = *(esi_4 + 0xff4)
                            (*result)[0x3fe] = arg2
                            (*result)[0x3fd] = ecx_12
                            return result
                    
                    var_20 = "DataArray<struct UI2>::DataArrayGet"
                    var_24 = 0x6d
                    var_28_2 = "d:\ax\trunk\ax2017\engine\dataarray.h"
                    ecx_1 = "DataArrayTryToGet(id) != NULL"
                else
                    var_20 = "DataArray<struct UI2>::DataArrayGet"
                    var_24 = 0x6c
                    var_28_2 = "d:\ax\trunk\ax2017\engine\dataarray.h"
                    ecx_1 = "id != DATAID_NULL"
                
                break
    else
        var_20 = "UI2DefGet"
        var_24 = 0x8ae
        ecx_1 = "ptr->assetType == ASSET_TYPE_UI2"
    label_4b7f5c:
        var_28_2 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
    
    sub_489550(eax, &data_5b2591, ecx_1, var_28_2, var_24, var_20)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
