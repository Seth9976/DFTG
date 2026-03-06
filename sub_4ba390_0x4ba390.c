// 函数名称: sub_4ba390
// 虚拟地址: 0x4ba390
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __convention("regparm")sub_4ba390(struct _EXCEPTION_REGISTRATION_RECORD** arg1, struct _EXCEPTION_REGISTRATION_RECORD** arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: struct _EXCEPTION_REGISTRATION_RECORD** esi = arg2
    struct _EXCEPTION_REGISTRATION_RECORD** esi = arg2
    struct _EXCEPTION_REGISTRATION_RECORD** ecx = data_63e5e4
    struct _EXCEPTION_REGISTRATION_RECORD** var_10 = esi
    int32_t edx
    int32_t ebx_1
    
    if (ecx == 0)
        ebx_1 = arg4
    label_4ba412:
        edx = data_63e5a8
    else
        uint32_t ebx = zx.d(ecx.w)
        
        if (ebx u>= data_63e5ac)
        label_4baa12:
            sub_489550(arg1, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        edx = data_63e5a8
        arg1 = ebx * 0x1418
        
        if (*(arg1 + edx + 0x1410) != ecx)
            goto label_4baa12
        
        ebx_1 = arg4
        arg1 = ebx * 0x1418 + edx
        
        if (arg1[0x391].b != 0)
            if (*(arg3 + 4) == 0)
                data_63e5e4 = 0
                arg1[0x391].b = 0
                ecx = data_63e5e4
                goto label_4ba412
            
            esi = ecx
            ebx_1 |= 8
            var_10 = esi
            goto label_4ba418
    
    label_4ba418:
    int128_t var_38
    
    if (ebx_1 == 0x10 || ebx_1 == 0x40 || ebx_1 == 0x80 || ebx_1 == 0x20 || ebx_1 == 0x100)
        int32_t ecx_22 = data_63e5e8
        
        if (ecx_22 == 0)
            arg1.b = 0
            return arg1
        
        uint32_t esi_3 = zx.d(ecx_22.w)
        __builtin_memset(&var_38, 0, 0x1c)
        
        if (esi_3 u< data_63e5ac)
            arg1 = esi_3 * 0x1418
        
        char const* const var_54
        int32_t var_50
        char const* const var_4c_3
        char* ecx_29
        
        if (esi_3 u>= data_63e5ac || *(arg1 + edx + 0x1410) != ecx_22)
            var_4c_3 = "DataArray<struct UI2>::DataArrayGet"
            var_50 = 0x6d
            var_54 = "d:\ax\trunk\ax2017\engine\dataarray.h"
            ecx_29 = "DataArrayTryToGet(id) != NULL"
        label_4ba9e3:
            sub_489550(arg1, &data_5b2591, ecx_29, var_54, var_50, var_4c_3)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        void* esi_5 = esi_3 * 0x1418 + edx
        struct _EXCEPTION_REGISTRATION_RECORD** ecx_23 = *(esi_5 + 0xfb0)
        
        if (ecx_23 == 0)
            arg1 = *(esi_5 + 0xfd8)
            ecx_23 = &data_5b2591
            
            if (arg1 != 0)
                ecx_23 = arg1
        
        var_38:4.d = ecx_23
        
        if ((ebx_1.b & 0x10) != 0)
            int32_t var_20_2 = 2
            sub_4b9eb0(esi_5, &var_38)
            void* eax_23
            eax_23.b = 1
            return eax_23
        
        if (ebx_1.b s< 0)
            int32_t var_20_3 = 4
            sub_4b9eb0(esi_5, &var_38)
            void* eax_24
            eax_24.b = 1
            return eax_24
        
        if ((ebx_1.b & 0x40) != 0)
            int32_t var_20_4 = 3
            sub_4b9eb0(esi_5, &var_38)
            void* eax_25
            eax_25.b = 1
            return eax_25
        
        if ((ebx_1.b & 0x20) != 0)
            int32_t var_20_5 = 5
            sub_4b9eb0(esi_5, &var_38)
            void* eax_26
            eax_26.b = 1
            return eax_26
        
        if ((ebx_1 & 0x100) != 0)
            int32_t var_20_6 = 6
            sub_4b9eb0(esi_5, &var_38)
            arg1.b = 1
            return arg1
        
        var_4c_3 = "ActionToClickStyle"
        var_50 = 0x3ec4
        var_54 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
        ecx_29 = "Halt"
        goto label_4ba9e3
    
    arg1 = ebx_1 & 6
    uint8_t temp0_1 = (ebx_1 u>> 3).b & 1
    struct _EXCEPTION_REGISTRATION_RECORD** var_18_1 = arg1
    
    if (temp0_1 != 0 || arg1 != 0)
        arg1 = data_63e5e0
        
        if (esi != arg1)
            if (arg1 != 0)
                uint32_t ecx_1 = zx.d(arg1.w)
                
                if (ecx_1 u< data_63e5ac)
                    void* ecx_3 = ecx_1 * 0x1418 + edx
                    
                    if (*(ecx_3 + 0x1410) == arg1)
                        sub_4aee00(ecx_3)
                        arg1 = data_63e5e0
            
            edx.b = 0
            sub_4aec00(arg1, edx.b)
            ecx = data_63e5e4
            edx = data_63e5a8
    
    if (esi == 0)
        arg1.b = 0
        return arg1
    
    arg1 = zx.d(esi.w)
    
    if (arg1 u>= data_63e5ac)
        goto label_4baa12
    
    void* esi_1 = arg1 * 0x1418
    arg1 = var_10
    void* esi_2 = esi_1 + edx
    
    if (*(esi_2 + 0x1410) != arg1)
        goto label_4baa12
    
    edx.b = ebx_1.b
    edx.b &= 1
    char var_9_1 = edx.b
    int64_t var_28
    
    if (*(esi_2 + 0xfec) == 3 && *(esi_2 + 0xf8c) != 0)
        if (sub_49f140(esi_2) != 0)
            char* const ecx_6 = *(esi_2 + 0xfb0)
            var_38:0xc.q = 0
            var_28 = 0
            
            if (ecx_6 == 0)
                char* eax_3 = *(esi_2 + 0xfd8)
                ecx_6 = &data_5b2591
                
                if (eax_3 != 0)
                    ecx_6 = eax_3
            
            var_38.d = *(esi_2 + 0x1410)
            arg1 = *(esi_2 + 0x109c)
            var_38:4.d = ecx_6
            var_38:8.d = arg1
            
            if (*(arg3 + 0x325) != 0 && var_18_1 != 0)
                if (data_63e5e0 != var_10)
                    sub_4aee70(arg1, arg3 + 0x310, var_10, 0)
                
                sub_4b9eb0(esi_2, &var_38)
            else if (*(arg3 + 4) != 0)
                sub_508c90(esi_2 + 0x1134, 1, arg3 + 0x310)
                struct _EXCEPTION_REGISTRATION_RECORD** eax_6
                eax_6.b = 0
                return eax_6
            
            arg1.b = 0
            return arg1
        
        ecx = data_63e5e4
        arg1 = var_10
    
    int32_t edx_3 = *(esi_2 + 0xf50)
    
    if (edx_3 == 2 || edx_3 == 1 || edx_3 == 3)
        if (*(arg3 + 0x325) != 0)
            if (ecx != arg1)
                ecx = arg1
            
            data_63e5e4 = ecx
            *(esi_2 + 0xe44) = 1
            *(esi_2 + 0xe3c) = *(arg3 + 0x310)
            *(esi_2 + 0xe40) = *(arg3 + 0x314)
        else if (*(arg3 + 4) == 0)
            *(esi_2 + 0xe44) = 0
        
        if (*(esi_2 + 0xe44) == 0)
            arg1.b = 0
            return arg1
        
        float xmm1_1 = *(arg3 + 0x310) f- *(esi_2 + 0xe3c)
        float xmm0_4 = *(arg3 + 0x314) f- *(esi_2 + 0xe40)
        *(esi_2 + 0xe3c) = *(arg3 + 0x310)
        int32_t eax_21 = *(arg3 + 0x314)
        float var_1c = xmm1_1
        float var_18_3 = xmm0_4
        *(esi_2 + 0xe40) = eax_21
        sub_4b9af0(esi_2, &var_1c)
        int32_t eax_22
        eax_22.b = 0
        return eax_22
    
    arg1 = *(esi_2 + 0xfec)
    
    if (arg1 == 2 || arg1 != 5)
        arg1.b = 0
        return arg1
    
    if (data_63e5f4 != 1)
        if (sub_49f140(esi_2).b == 0)
            arg1.b = 0
            return arg1
    else
        arg1 = sub_49f1d0(esi_2)
        
        if (arg1.b == 0)
            return arg1
    
    if (var_9_1 != 0)
        void** eax_8 = sub_41f7d0(arg3 + 0x210, &data_63b89c)
        
        if (eax_8.b != 0 || data_63e5f4 != eax_8.b)
            sub_4a8420(eax_8, &data_63c600, esi_2, 0x3f800000, 0xfffffc18)
        else if (sub_41f7d0(arg3 + 0x110, arg3 + 0x210).b != 0)
            void** edx_4 = &data_63c61c
            
            if (*(arg3 + 4) != 0)
                edx_4 = &data_63c638
            
            sub_4a8420(&data_63c638, edx_4, esi_2, 0x3f800000, 0xfffffc18)
    
    if (data_63e5f4 != 0)
        arg1.b = 1
        return arg1
    
    if (var_18_1 != 0)
    label_4ba6b5:
        char* const ecx_14 = *(esi_2 + 0xfb0)
        var_38:0xc.d = 0
        
        if (ecx_14 == 0)
            char* eax_10 = *(esi_2 + 0xfd8)
            ecx_14 = &data_5b2591
            
            if (eax_10 != 0)
                ecx_14 = eax_10
        
        var_38.d = *(esi_2 + 0x1410)
        var_38:8.d = *(esi_2 + 0x109c)
        var_28.d = *(arg3 + 0x310)
        arg1 = nullptr
        var_38:4.d = ecx_14
        var_28:4.d = *(arg3 + 0x314)
        
        if ((ebx_1.b & 4) != 0)
            arg1 = 1
        
        struct _EXCEPTION_REGISTRATION_RECORD** var_20_1 = arg1
        
        if (*(esi_2 + 0xe44) != 0)
            sub_4a8420(arg1, &data_63c638, esi_2, 0x3f800000, 0xfffffc18)
            int32_t eax_14
            eax_14.b = *(arg3 + 4) != 0
            var_38:0xc.d = eax_14 + 3
            sub_4b9eb0(esi_2, &var_38)
            void* eax_16
            eax_16.b = 1
            return eax_16
        
        int32_t* eax_17
        
        if (*(arg3 + 0x325) != 0 && *(esi_2 + 0xfb4) != 0)
            eax_17 = sub_4a8420(arg1, &data_63c61c, esi_2, 0x3f800000, 0xfffffc18)
        label_4ba7e7:
            
            if (data_63e5e0 != var_10)
                sub_4aee70(eax_17, arg3 + 0x310, var_10, 0)
            
            sub_4b9eb0(esi_2, &var_38)
            void* eax_18
            eax_18.b = 1
            return eax_18
        
        if ((*(arg3 + 0x326) != 0 || *(arg3 + 0x327) != 0) && *(esi_2 + 0xfb4) == 0)
            eax_17 = sub_4a8420(arg1, &data_63c61c, esi_2, 0x3f800000, 0xfffffc18)
            
            if (*(arg3 + 0x328) == 0)
                eax_17 = var_38:0xc.d
                
                if (*(arg3 + 0x327) != 0)
                    eax_17 = 1
                
                var_38:0xc.d = eax_17
            else
                var_38:0xc.d = 2
            
            goto label_4ba7e7
    else if (temp0_1 != 0 && *(esi_2 + 0xe44) != 0)
        goto label_4ba6b5
    
    arg1.b = 0
    return arg1
}
