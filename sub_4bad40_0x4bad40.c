// 函数名称: sub_4bad40
// 虚拟地址: 0x4bad40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (*sub_4bad40(uint32_t (* arg1)[0x4], int32_t arg2))[0x4]
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    int32_t ecx
    int32_t eax_1 = sub_4ad220(eax, "tbl_opponents", ecx, 0xffffffff)
    int32_t edx = eax_1
    
    if (edx != 0)
        uint32_t ecx_1 = zx.d(edx.w)
        char const* const var_78_1
        int32_t var_74
        char const* const var_70
        char* ecx_4
        
        if (ecx_1 u>= data_63e5ac)
        label_4baf10:
            var_70 = "DataArray<struct UI2>::DataArrayGet"
            var_74 = 0x6d
            ecx_4 = "DataArrayTryToGet(id) != NULL"
        label_4baf1c:
            var_78_1 = "d:\ax\trunk\ax2017\engine\dataarray.h"
        label_4baf26:
            sub_489550(eax_1, &data_5b2591, ecx_4, var_78_1, var_74, var_70)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t esi_1 = data_63e5a8
        eax_1 = ecx_1 * 0x1418
        
        if (*(eax_1 + esi_1 + 0x1410) != edx)
            goto label_4baf10
        
        eax_1 = arg2
        void* ecx_3 = ecx_1 * 0x1418 + esi_1
        
        if (eax_1 s< 0)
            var_70 = "UI2GetSubTableTransform"
            var_74 = 0x40b3
            var_78_1 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
            ecx_4 = "tableIdx >= 0"
            goto label_4baf26
        
        if (eax_1 s>= *(ecx_3 + 0x1190))
            var_70 = "UI2GetSubTableTransform"
            var_74 = 0x40b4
            var_78_1 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
            ecx_4 = "tableIdx < table.numChildren"
            goto label_4baf26
        
        eax_1 = sub_4ad220(eax_1, "tbl_oppDictate", *(ecx_3 + (eax_1 << 2) + 0x1194), 0xffffffff)
        int32_t esi_2 = eax_1
        
        if (esi_2 == 0)
            var_70 = "DataArray<struct UI2>::DataArrayGet"
            var_74 = 0x6c
            ecx_4 = "id != DATAID_NULL"
            goto label_4baf1c
        
        uint32_t ecx_6 = zx.d(esi_2.w)
        
        if (ecx_6 u>= data_63e5ac)
            goto label_4baf10
        
        void* edx_1 = data_63e5a8
        eax_1 = ecx_6 * 0x1418
        
        if (*(eax_1 + edx_1 + 0x1410) != esi_2)
            goto label_4baf10
        
        eax_1 = ecx_6 * 0x1418
        int32_t ecx_7 = *(eax_1 + edx_1 + 0x1190)
        
        if (ecx_7 != 0)
            if (ecx_7 s<= 0)
                var_70 = "UI2GetSubTableTransform"
                var_74 = 0x40c3
                var_78_1 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                ecx_4 = "Halt"
                goto label_4baf26
            
            int32_t ecx_8 = *(eax_1 + edx_1 + 0x1194)
            
            if (ecx_8 == 0)
                var_70 = "DataArray<struct UI2>::DataArrayGet"
                var_74 = 0x6c
                ecx_4 = "id != DATAID_NULL"
                goto label_4baf1c
            
            uint32_t esi_3 = zx.d(ecx_8.w)
            
            if (esi_3 u< data_63e5ac)
                eax_1 = esi_3 * 0x1418
                
                if (*(eax_1 + edx_1 + 0x1410) == ecx_8)
                    uint32_t (* ecx_10)[0x4] = edx_1 + 0x1014 + esi_3 * 0x1418
                    *arg1 = *ecx_10
                    arg1[1] = ecx_10[1]
                    arg1[2] = ecx_10[2]
                    arg1[3] = ecx_10[3]
                    arg1[4] = ecx_10[4]
                    arg1[5] = ecx_10[5]
                    return arg1
            
            goto label_4baf10
    
    uint32_t var_64[0x4]
    _memset(&var_64, 0, 0x60)
    *arg1 = var_64
    int128_t var_54
    arg1[1] = var_54
    int128_t var_44
    arg1[2] = var_44
    int128_t var_34
    arg1[3] = var_34
    int128_t var_24
    arg1[4] = var_24
    int128_t var_14
    arg1[5] = var_14
    return arg1
}
