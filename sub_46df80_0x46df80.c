// 函数名称: sub_46df80
// 虚拟地址: 0x46df80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_46df80(int32_t arg1, void* arg2, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* eax_2 = *(arg2 + 4)
    int32_t ecx
    char const* const edx
    
    if (eax_2 == 3)
        if (arg4 != eax_2)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_2
        
        if (data_62b224 != 0x14)
            if (data_62b234 != 0x14)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return eax_2
            
            ecx = data_62b238
        else
            ecx = data_62b228
        
        if (ecx == 0)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_2
        
        edx = "tblCards"
    label_46dfd8:
        eax_2 = sub_4b9ba0(sub_4baa30(ecx, edx))
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return eax_2
    
    char const* const var_128
    int32_t var_124
    char const* const var_120
    char* ecx_5
    
    if (arg4 == 3)
        if (data_62b1ac != 0x21)
            ecx = 0
            
            if (data_62b1bc == 0x21)
                ecx = data_62b1c0
        else
            ecx = data_62b1b0
        
        if (eax_2 != 1)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_2
        
        int32_t edx_2 = *(arg2 + 8)
        
        if (edx_2 != 0)
            uint32_t esi_1 = zx.d(edx_2.w)
            
            if (esi_1 u>= data_62d6c8)
                goto label_46e2cc
            
            int32_t edi_1 = data_62d6c4
            eax_2 = esi_1 * 0x8ac
            
            if (*(eax_2 + edi_1 + 0x8a8) != edx_2)
                goto label_46e2cc
            
            eax_2 = esi_1 * 0x8ac
            
            if (*(eax_2 + edi_1) == 0)
                edx = "rgn_tileZoom"
                goto label_46dfd8
            
            var_120 = "GameSpecific_DragUpdateAction"
            var_124 = 0x60d3
            var_128 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
            ecx_5 = "gfx.type == ROLLGFX_TILE"
        else
            var_120 = "DataArray<struct RollGfx>::DataArrayGet"
            var_124 = 0x6c
            ecx_5 = "id != DATAID_NULL"
            var_128 = "d:\ax\trunk\ax2017\engine\dataarray.h"
    else if (eax_2 == 1)
        if (arg4 != 0)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_2
        
        int32_t ecx_6 = *(arg2 + 8)
        
        if (ecx_6 != 0)
            uint32_t edx_3 = zx.d(ecx_6.w)
            
            if (edx_3 u>= data_62d6c8)
            label_46e2cc:
                var_120 = "DataArray<struct RollGfx>::DataArrayGet"
                ecx_5 = "DataArrayTryToGet(id) != NULL"
                var_124 = 0x6d
                var_128 = "d:\ax\trunk\ax2017\engine\dataarray.h"
            else
                int32_t edi_2 = data_62d6c4
                eax_2 = edx_3 * 0x8ac
                
                if (*(eax_2 + edi_2 + 0x8a8) != ecx_6)
                    goto label_46e2cc
                
                void* esi_3 = edx_3 * 0x8ac + edi_2
                eax_2 = *esi_3
                int32_t edx_4
                
                if (eax_2 == 1)
                    eax_2 = sub_4541a0()
                    
                    if (eax_2.b != 0 || data_632564 != 0)
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return eax_2
                    
                    eax_2 = sub_453be0(esi_3)
                    
                    if (eax_2 == 0 || eax_2 == 1)
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return eax_2
                    
                    data_632564 = *(esi_3 + 0x8a8)
                    data_63e5f4 = 1
                    edx_4 = sub_4c4810(arg3, &data_632568)
                    goto label_46e1ab
                
                void var_10c
                int32_t var_ac
                int128_t* eax_7
                
                if (eax_2 == 2)
                    data_632564 = *(esi_3 + 0x8a8)
                    data_63e5f4 = 1
                    edx_4 = sub_4c4810(arg3, &data_632568)
                    var_ac = 0
                    int128_t var_a4_1 = zx.o(0)
                    int128_t var_34
                    __builtin_memset(&var_34, 0, 0x28)
                label_46e1ab:
                    eax_7 = sub_481680(&var_10c, edx_4, esi_3 + 0x174, &var_10c)
                    int32_t var_a8 = 0x20
                label_46e1c9:
                    int128_t var_94 = *eax_7
                    int128_t var_84 = eax_7[1]
                    int128_t var_74 = eax_7[2]
                    int128_t var_64 = eax_7[3]
                    int128_t var_54 = eax_7[4]
                    int128_t var_44 = eax_7[5]
                    int32_t eax_8 = sub_4528c0(eax_7, &var_ac, esi_3 + 0x70, 2, 0)
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return eax_8
                
                if (eax_2 != 0)
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return eax_2
                
                if (sub_453780(esi_3) == 0)
                    int32_t eax_10 = sub_4564b0(esi_3)
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return eax_10
                
                int32_t* ecx_18 = data_6cfe4c
                eax_2 = *(esi_3 + 0x8a8)
                data_632564 = eax_2
                
                if (ecx_18 != 0)
                    data_6327e0 = *ecx_18
                    data_6327e4 = ecx_18[1]
                    data_63e5f4 = 1
                    int32_t edx_6 = sub_4c4810(arg3, &data_632568)
                    var_ac = 0
                    int128_t var_a4_2 = zx.o(0)
                    int128_t var_34_1
                    __builtin_memset(&var_34_1, 0, 0x28)
                    eax_7 = sub_481680(&var_10c, edx_6, esi_3 + 0x174, &var_10c)
                    int32_t var_a8_1 = 0x21
                    goto label_46e1c9
                
                var_120 = "GetClient"
                var_124 = 0x75
                var_128 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
                ecx_5 = "gClient"
        else
            var_120 = "DataArray<struct RollGfx>::DataArrayGet"
            var_124 = 0x6c
            ecx_5 = "id != DATAID_NULL"
            var_128 = "d:\ax\trunk\ax2017\engine\dataarray.h"
    else
        var_120 = "GameSpecific_DragUpdateAction"
        var_124 = 0x60ed
        var_128 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
        ecx_5 = "item.type == HIT_GFX"
    
    sub_489550(eax_2, &data_5b2591, ecx_5, var_128, var_124, var_120)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
