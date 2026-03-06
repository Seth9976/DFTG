// 函数名称: sub_494fb0
// 虚拟地址: 0x494fb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_494fb0(int32_t arg1, int128_t* arg2, int32_t* arg3, void** arg4, int32_t* arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_59ee38
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_8c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int128_t* edi = arg2
    int128_t* var_54 = edi
    
    if (arg3[1] != 2)
        sub_489550(arg6, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_STRUCTURE", 
            "d:\ax\trunk\ax2017\engine\assetutils.cpp", 0x312, "StructureDefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t* result = sub_4981f0(arg3)
    
    if (*result != 0)
        void* esi_1 = *fsbase->ThreadLocalStoragePointer
        
        if (data_1515668 s> *(esi_1 + 4))
            __Init_thread_header(&data_1515668)
            
            if (data_1515668 == 0xffffffff)
                int32_t var_14_1 = 0
                data_151566c = sub_4d0b50("sys/draw3d.material", 5)
                int32_t var_14_2 = 0xffffffff
                __Init_thread_footer(&data_1515668)
        
        if (data_1515670 s> *(esi_1 + 4))
            __Init_thread_header(&data_1515670)
            
            if (data_1515670 == 0xffffffff)
                int32_t var_14_3 = 1
                data_1515674 = sub_4d0b50("sys/pbr/brdf_lut.texture", 3)
                int32_t var_14_4 = 0xffffffff
                __Init_thread_footer(&data_1515670)
        
        int32_t i_1 = 0
        int32_t* eax_10 = *result
        
        if (*eax_10 s> 0)
            int32_t ecx_2 = 0
            int32_t var_68_1 = 0
            int32_t i
            
            do
                int32_t esi_2 = 0
                float eax_12 = eax_10[2] + ecx_2
                void** ecx_3 = arg4
                int32_t eax_13 = ecx_3[2]
                bool cond:1_1 = eax_13 == 0
                void* var_58
                void* esi_3
                
                if (eax_13 s> 0)
                    int32_t* edi_1 = nullptr
                    
                    do
                        char* edx = *(edi_1 + *ecx_3)
                        char* ecx_4 = edx
                        var_58 = &ecx_4[1]
                        void* eax_15
                        
                        do
                            eax_15.b = *ecx_4
                            ecx_4 = &ecx_4[1]
                        while (eax_15.b != 0)
                        
                        if (__strnicmp(*(eax_12 i+ 8), edx, ecx_4 - var_58) == 0)
                            esi_3 = esi_2 * 0x30 + *arg4
                            goto label_49514d
                        
                        ecx_3 = arg4
                        esi_2 += 1
                        edi_1 = &edi_1[0xc]
                        eax_13 = ecx_3[2]
                    while (esi_2 s< eax_13)
                    
                    cond:1_1 = eax_13 == 0
                
                if (cond:1_1)
                    sub_489550(eax_13, &data_5b2591, "materialTable.numMaterials", 
                        "d:\ax\trunk\ax2017\engine\draw3d.cpp", 0x7dd, "GetMaterialEntry")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                esi_3 = *ecx_3
            label_49514d:
                float ecx_9 = eax_12
                void* edi_2 = *(esi_3 + 0x10)
                char var_49_1 = 0
                int32_t edx_1 = *(ecx_9 i+ 0x50)
                
                if (edx_1 u>= 0xa && edx_1 u< arg7 + 0xa)
                    float xmm0_1 = *(arg6 + ((edx_1 * 3 - 0x1d) << 3))
                    void* eax_20 = *(arg6 + ((edx_1 * 3 - 0x1d) << 3) - 4)
                    int128_t* ecx_8 = arg6 + ((edx_1 * 3 - 0x1d) << 3)
                    
                    if (eax_20 != 0)
                        edi_2 = eax_20
                    
                    xmm0_1 - 1f
                    eax_20:1.b = (xmm0_1 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 1f) ? 1 : 0) << 2
                        | (xmm0_1 < 1f ? 1 : 0)
                    bool p_2 = unimplemented  {test ah, 0x44}
                    
                    if (p_2)
                        sub_492210(ecx_8)
                        var_49_1 = 1
                    else
                        float xmm0_2 = *(ecx_8 + 4)
                        xmm0_2 - 1f
                        eax_20:1.b = (xmm0_2 == 1f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_2, 1f) ? 1 : 0) << 2 | (xmm0_2 < 1f ? 1 : 0)
                        bool p_4 = unimplemented  {test ah, 0x44}
                        
                        if (p_4)
                            sub_492210(ecx_8)
                            var_49_1 = 1
                        else
                            float xmm0_3 = *(ecx_8 + 8)
                            xmm0_3 - 1f
                            eax_20:1.b = (xmm0_3 == 1f ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_3, 1f) ? 1 : 0) << 2 | (xmm0_3 < 1f ? 1 : 0)
                            bool p_6 = unimplemented  {test ah, 0x44}
                            
                            if (p_6)
                                sub_492210(ecx_8)
                                var_49_1 = 1
                            else
                                float xmm0_4 = *(ecx_8 + 0xc)
                                xmm0_4 - 1f
                                eax_20:1.b = (xmm0_4 == 1f ? 1 : 0) << 6
                                    | (is_unordered.d(xmm0_4, 1f) ? 1 : 0) << 2 | (xmm0_4 < 1f ? 1 : 0)
                                bool p_8 = unimplemented  {test ah, 0x44}
                                
                                if (p_8)
                                    sub_492210(ecx_8)
                                    var_49_1 = 1
                    
                    ecx_9 = eax_12
                
                int32_t edx_3 = *(esi_3 + 0x28)
                uint32_t var_9c_1
                void** var_98_2
                int32_t var_94_2
                int32_t* var_90_2
                void** eax_24
                void* var_34
                
                if (edx_3 == 0)
                    int32_t eax_26 = *(esi_3 + 0x20)
                    int32_t edx_4
                    
                    if (eax_26 != 0)
                        edx_4 = *(esi_3 + 0x18)
                    
                    if (eax_26 == 0 || edx_4 == 0)
                        int32_t edx_5 = *(esi_3 + 0x18)
                        var_90_2 = arg5
                        
                        if (edx_5 == 0)
                            if (eax_26 != 0)
                                int32_t var_30_3 = eax_26
                                int32_t var_2c_3 = data_1515674
                                uint32_t var_9c_3 = *(esi_3 + 8)
                                var_34 = edi_2
                                int32_t var_28_3 = 0
                                sub_489550(
                                    sub_493c70(&var_34, var_54, ecx_9, var_9c_3, &var_34, 3, var_90_2), 
                                    &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\draw3d.cpp", 
                                    0x832, "Draw3DStructureMaterialTableMatrixOverrides")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            eax_24 = *(esi_3 + 8)
                            
                            if (eax_24 == 0)
                                if (*(esi_3 + 0x10) == 0)
                                    var_94_2 = 0
                                    var_98_2 = nullptr
                                else
                                    var_94_2 = 1
                                    eax_24 = &var_58
                                    var_58 = edi_2
                                    var_98_2 = &var_58
                                
                                var_9c_1 = data_151566c
                            else
                                var_94_2 = 1
                                var_58 = edi_2
                                var_98_2 = &var_58
                                var_9c_1 = eax_24
                        else
                            var_94_2 = 2
                            void* var_7c
                            eax_24 = &var_7c
                            var_7c = edi_2
                            var_98_2 = &var_7c
                            var_9c_1 = *(esi_3 + 8)
                            int32_t var_78_1 = edx_5
                    else
                        var_90_2 = arg5
                        int32_t var_2c_1 = eax_26
                        int32_t var_28_1 = data_1515674
                        eax_24 = &var_34
                        var_94_2 = 4
                        var_98_2 = &var_34
                        var_9c_1 = *(esi_3 + 8)
                        var_34 = edi_2
                        int32_t var_30_1 = edx_4
                else
                    int32_t eax_21 = *(esi_3 + 0x18)
                    var_90_2 = arg5
                    
                    if (eax_21 == 0)
                        int32_t var_30_2 = *(esi_3 + 0x20)
                        int32_t var_28_2 = data_1515674
                        uint32_t var_9c_2 = *(esi_3 + 8)
                        int32_t var_2c_2 = edx_3
                        var_34 = edi_2
                        sub_489550(sub_493c70(&var_34, var_54, ecx_9, var_9c_2, &var_34, 4, var_90_2), 
                            &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\draw3d.cpp", 0x822, 
                            "Draw3DStructureMaterialTableMatrixOverrides")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    int32_t var_44_1 = eax_21
                    int32_t var_40_1 = *(esi_3 + 0x20)
                    int32_t var_38_1 = data_1515674
                    void* var_48
                    eax_24 = &var_48
                    var_94_2 = 5
                    var_98_2 = &var_48
                    var_9c_1 = *(esi_3 + 8)
                    var_48 = edi_2
                    int32_t var_3c_1 = edx_3
                edi = var_54
                float eax_28 = sub_493c70(eax_24, edi, ecx_9, var_9c_1, var_98_2, var_94_2, var_90_2)
                
                if (var_49_1 != 0)
                    if (data_114e7d9 == 0)
                        sub_489550(eax_28, &data_5b2591, "gDraw3DData.submittingRenderItems", 
                            "d:\ax\trunk\ax2017\engine\draw3d.cpp", 0x2ff, "Draw3DSetMaterialColor")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    data_aca6a8 = data_5d2464
                
                i = i_1 + 1
                ecx_2 = var_68_1 + 0x150
                i_1 = i
                eax_10 = *result
                var_68_1 = ecx_2
            while (i s< *eax_10)
        
        result = sub_4947b0(eax_10, edi, arg3, arg5)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
