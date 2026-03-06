// 函数名称: sub_4ebd70
// 虚拟地址: 0x4ebd70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4ebd70(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a1048
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_120 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ecx = *(arg1 + 0x60)
    
    if (ecx[1] != 2)
        sub_489550(&ExceptionList, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_STRUCTURE", 
            "d:\ax\trunk\ax2017\engine\structure.cpp", 0x559, "StructureGetDef")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* eax_4
    int32_t edx
    eax_4, edx = sub_4981f0(ecx)
    int32_t eax_5
    uint128_t xmm0
    uint128_t xmm1
    
    if (*(arg2 + 0x480) s<= *(arg2 + 0x5c))
        xmm0 = *(arg1 + 0x10)
        eax_5 = *(arg1 + 0x30)
        xmm1 = *(arg1 + 0x20)
    else
        xmm0 = *(arg2 + 0x484)
        eax_5 = *(arg2 + 0x4a4)
        xmm1 = *(arg2 + 0x494)
    
    int32_t var_38 = eax_5
    uint128_t var_58 = xmm0
    uint128_t var_48 = xmm1
    uint128_t var_24
    int128_t var_a8 = *sub_4eebc0(&var_24, edx, &var_58:0xc, &var_24)
    uint128_t var_9c
    var_9c:4.q = xmm0
    var_9c:0xc.d = _mm_bsrli_si128(xmm0, 8)
    int128_t var_34 = xmm1:8.d.o
    var_24 = var_9c
    int128_t var_d4
    sub_4ddac0(arg2 + 0x3c, &var_34, &var_d4, arg2 + 0x3c)
    var_34 = var_d4
    var_24 = xmm0
    uint32_t eax_9 = sub_4979c0(arg2 + 0x40)
    
    if (eax_9.b == 0)
        sub_489550(eax_9, &data_5b2591, "QuatIsValid(state.transform.t.r)", 
            "d:\ax\trunk\ax2017\engine\fabdef.cpp", 0x27f, "FabModelDraw")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    uint32_t eax_10 = sub_4979c0(&var_34:4)
    
    if (eax_10.b == 0)
        sub_489550(eax_10, &data_5b2591, "QuatIsValid(transform.r)", 
            "d:\ax\trunk\ax2017\engine\fabdef.cpp", 0x280, "FabModelDraw")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int128_t xmm1_1 = *(arg1 + 0x70)
    xmm1_1 f- 1f
    float var_c4_1 = xmm1_1.d
    eax_10:1.b = (xmm1_1 f== 1f ? 1 : 0) << 6 | (is_unordered.d(xmm1_1, 1f) ? 1 : 0) << 2
        | (xmm1_1 f< 1f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        sub_492210(&var_a8:0xc)
    else
        float xmm1_2 = xmm1_1:4.d
        xmm1_2 - 1f
        eax_10:1.b = (xmm1_2 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm1_2, 1f) ? 1 : 0) << 2
            | (xmm1_2 < 1f ? 1 : 0)
        bool p_3 = unimplemented  {test ah, 0x44}
        
        if (p_3)
            sub_492210(&var_a8:0xc)
        else
            float xmm1_3 = xmm1_1:8.d
            xmm1_3 - 1f
            eax_10:1.b = (xmm1_3 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm1_3, 1f) ? 1 : 0) << 2
                | (xmm1_3 < 1f ? 1 : 0)
            bool p_5 = unimplemented  {test ah, 0x44}
            
            if (p_5)
                sub_492210(&var_a8:0xc)
            else
                float xmm1_4 = xmm1_1:0xc.d
                xmm1_4 - 1f
                eax_10:1.b = (xmm1_4 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm1_4, 1f) ? 1 : 0) << 2
                    | (xmm1_4 < 1f ? 1 : 0)
                bool p_7 = unimplemented  {test ah, 0x44}
                
                if (p_7)
                    sub_492210(&var_a8:0xc)
    
    char* eax_24 = *(arg1 + 0x68)
    int32_t* var_78 = nullptr
    
    if (*eax_24 != 0)
        int32_t ecx_7 = *(arg2 + 0x4bc)
        
        if (ecx_7 == 0)
            int32_t* ecx_8 = *(arg1 + 0x60)
            
            if (ecx_8 == 0)
                sub_489550(eax_24, &data_5b2591, "el.model != NULL", 
                    "d:\ax\trunk\ax2017\engine\fabdef.cpp", 0x28d, "FabModelDraw")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            char** eax_11 = sub_4dcc00(ecx_8)
            char* eax_12 = *(arg1 + 0x68)
            int32_t* eax_13 = *(arg1 + 0x60)
            
            if (eax_13[1] != 2)
                sub_489550(eax_13, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_STRUCTURE", 
                    "d:\ax\trunk\ax2017\engine\structure.cpp", 0x559, "StructureGetDef")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            int32_t edi_1 = 0
            void* eax_15 = *sub_4981f0(eax_13)
            int32_t ecx_10 = *(eax_15 + 0x60)
            int32_t eax_20
            
            if (ecx_10 s> 0)
                int32_t* eax_17 = *(eax_15 + 0x68) + 8
                int32_t* var_78_1 = eax_17
                
                while (true)
                    char* eax_18 = *eax_17
                    char* ecx_11 = eax_12
                    
                    while (true)
                        char edx_2 = *eax_18
                        char temp0_1 = *ecx_11
                        bool c_4 = edx_2 u< temp0_1
                        
                        if (edx_2 == temp0_1)
                            if (edx_2 == 0)
                                eax_20 = 0
                                break
                            
                            edx_2 = eax_18[1]
                            char temp1_1 = ecx_11[1]
                            c_4 = edx_2 u< temp1_1
                            
                            if (edx_2 == temp1_1)
                                eax_18 = &eax_18[2]
                                ecx_11 = &ecx_11[2]
                                
                                if (edx_2 != 0)
                                    continue
                                
                                eax_20 = 0
                                break
                        
                        eax_20 = sbb.d(eax_18, eax_18, c_4) | 1
                        break
                    
                    if (eax_20 == 0)
                        break
                    
                    edi_1 += 1
                    eax_17 = &var_78_1[6]
                    var_78_1 = eax_17
                    
                    if (edi_1 s>= ecx_10)
                        goto label_4ebfc0
            
            char** edi_2
            
            if (ecx_10 s<= 0 || edi_1 == 0xffffffff)
            label_4ebfc0:
                char* var_124_1 = eax_12
                sub_4892e0("can't find anim clip: %s")
                edi_2 = eax_11
            else
                edi_2 = eax_11
                sub_4f2cc0(eax_20, eax_13, edi_2, edi_1)
            
            ecx_7 = edi_2[0x1a]
            *(arg2 + 0x4bc) = ecx_7
        
        int32_t* eax_23 = sub_4dd880(ecx_7)
        var_78 = eax_23
        eax_24 = sub_4dcf10(eax_23)
    
    int32_t* ecx_13 = *(arg1 + 0x60)
    
    if (ecx_13[1] != 2)
        sub_489550(eax_24, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_STRUCTURE", 
            "d:\ax\trunk\ax2017\engine\structure.cpp", 0x559, "StructureGetDef")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* eax_25 = sub_4981f0(ecx_13)
    int32_t esi_1 = 0
    void* var_80_1 = eax_25
    void** edx_4
    
    if (*(eax_25 + 0x58) s> 0)
        int32_t* edi_4 = nullptr
        
        while (__stricmp(*(edi_4 + *(eax_25 + 0x50)), *(arg1 + 0x80)) != 0)
            eax_25 = var_80_1
            esi_1 += 1
            edi_4 = &edi_4[6]
            
            if (esi_1 s>= *(eax_25 + 0x58))
                goto label_4ec061
        
        if (esi_1 != 0xffffffff)
            edx_4 = *(eax_4 + 0x50) + ((esi_1 * 3 + 1) << 3)
            goto label_4ec06e
    
    label_4ec061:
    
    if (*(eax_4 + 0x48) == 0)
    label_4ec161:
        
        if (data_15166f0 s> *(*fsbase->ThreadLocalStoragePointer + 4))
            __Init_thread_header(&data_15166f0)
            
            if (data_15166f0 == 0xffffffff)
                int32_t var_8_3 = 1
                data_15166f4 = sub_4d0b50("sys/draw3d.material", 5)
                int32_t var_8_4 = 0xffffffff
                __Init_thread_footer(&data_15166f0)
        
        int32_t var_128_3 = 0
        sub_495460(arg1, &var_34, *(arg1 + 0x60), data_15166f4, 0, var_78)
    else
        edx_4 = eax_4 + 0x40
    label_4ec06e:
        
        if (edx_4 == 0)
            goto label_4ec161
        
        if (data_6cad10 != 0)
            if (data_15166e8 s> *(*fsbase->ThreadLocalStoragePointer + 4))
                __Init_thread_header(&data_15166e8)
                
                if (data_15166e8 == 0xffffffff)
                    int32_t var_8_1 = 0
                    data_15166ec = sub_4d0b50("sys/draw3d.material", 5)
                    int32_t var_8_2 = 0xffffffff
                    __Init_thread_footer(&data_15166e8)
            
            int32_t var_128_2 = 0
            sub_495460(arg1, &var_34, *(arg1 + 0x60), data_15166ec, 0, var_78)
        else
            void var_114
            int128_t* eax_30 = sub_482820(&var_114, edx_4, &var_34, &var_114)
            int128_t var_74 = *eax_30
            int128_t var_64_1 = eax_30[1]
            var_58 = eax_30[2]
            var_48 = eax_30[3]
            sub_494fb0(arg1, &var_74, *(arg1 + 0x60), edx_4, var_78, 0, 0)
    
    var_c4_1 - 1f
    int32_t* result
    result:1.b = (var_c4_1 == 1f ? 1 : 0) << 6 | (is_unordered.d(var_c4_1, 1f) ? 1 : 0) << 2
        | (var_c4_1 < 1f ? 1 : 0)
    bool p_9 = unimplemented  {test ah, 0x44}
    
    if (p_9)
        sub_492210(&data_5d2464)
    else
        float xmm1_6 = xmm1_1:4.d
        xmm1_6 - 1f
        result:1.b = (xmm1_6 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm1_6, 1f) ? 1 : 0) << 2
            | (xmm1_6 < 1f ? 1 : 0)
        bool p_11 = unimplemented  {test ah, 0x44}
        
        if (p_11)
            sub_492210(&data_5d2464)
        else
            float xmm1_7 = xmm1_1:8.d
            xmm1_7 - 1f
            result:1.b = (xmm1_7 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm1_7, 1f) ? 1 : 0) << 2
                | (xmm1_7 < 1f ? 1 : 0)
            bool p_13 = unimplemented  {test ah, 0x44}
            
            if (p_13)
                sub_492210(&data_5d2464)
            else
                float xmm1_8 = xmm1_1:0xc.d
                xmm1_8 - 1f
                result:1.b = (xmm1_8 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm1_8, 1f) ? 1 : 0) << 2
                    | (xmm1_8 < 1f ? 1 : 0)
                bool p_15 = unimplemented  {test ah, 0x44}
                
                if (p_15)
                    sub_492210(&data_5d2464)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
