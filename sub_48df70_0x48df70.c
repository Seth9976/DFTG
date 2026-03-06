// 函数名称: sub_48df70
// 虚拟地址: 0x48df70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_48df70()
{
    // 第一条实际指令: int32_t performanceCount_1
    int32_t performanceCount_1
    QueryPerformanceCounter(&performanceCount_1)
    void* eax = data_aca1ec
    
    if (eax != 0)
        uint32_t eax_1 = GetFileAttributesA(*(eax + 4))
        char ecx_1 = data_621f8c
        
        if (eax_1 != 0xffffffff)
            ecx_1 = 0
        
        data_621f8c = ecx_1
    
    sub_4e28f0()
    char* eax_2 = sub_489c60()
    char* eax_3
    int32_t ecx_3
    int32_t edx
    eax_3, ecx_3, edx = sub_4cf720(eax_2)
    char* var_4c_2 = eax_2
    sub_41da20(eax_3, edx, ecx_3, &data_aca0e0, "%slog.txt")
    GetFullPathNameA(&data_aca0e0, 0x104, &data_aca0e0, nullptr)
    SymInitialize(GetCurrentProcess(), nullptr, 1)
    SymSetOptions(0x10)
    SetUnhandledExceptionFilter(sub_4890e0)
    uint32_t performanceCount_5 = sub_498360()
    char const* const var_54_1
    int32_t var_50_1
    char const* const var_4c_3
    char* ecx_4
    
    if (data_aca1f0 == 0)
        int32_t* eax_5 = sub_498440(0x30)
        eax_5[3] += 1
        int32_t* edi_1 = *eax_5
        
        if (edi_1 == 0)
            sub_4982d0(eax_5)
            edi_1 = *eax_5
        
        *eax_5 = *edi_1
        _memset(edi_1, 0, 0x30)
        data_aca1f0 = edi_1
        uint32_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        int32_t* ecx_6 = data_aca1f0
        int32_t var_3c_1 = 0
        *ecx_6 = performanceCount
        int32_t var_34
        ecx_6[1] = var_34
        ecx_6[2] = performanceCount
        ecx_6[3] = var_34
        void* eax_11 = data_aca1ec
        ecx_6[4] = 0
        int32_t xmm0_1
        
        if (*(eax_11 + 0x27) == 0)
            xmm0_1 = 0x3c23d70a
        else
            xmm0_1 = 0x3c5a740e
        
        data_620b24 = xmm0_1
        data_1150da4 = data_60c7a0
        sub_4e52f0()
        int32_t* ecx_7 = data_114ec78
        
        if (ecx_7 != 0)
            (**ecx_7)()
        
        int32_t* eax_13 = sub_498440(0x74)
        eax_13[3] += 1
        int32_t* edi_2 = *eax_13
        
        if (edi_2 == 0)
            sub_4982d0(eax_13)
            edi_2 = *eax_13
        
        *eax_13 = *edi_2
        _memset(edi_2, 0, 0x74)
        data_114e848 = edi_2
        
        if (data_114e834 != 0)
            int32_t* eax_15 = sub_498440(0x28)
            eax_15[3] += 1
            int32_t* esi_3 = *eax_15
            
            if (esi_3 == 0)
                sub_4982d0(eax_15)
                esi_3 = *eax_15
            
            *eax_15 = *esi_3
            esi_3[7] = 0
            esi_3[8] = 0
            esi_3[9] = 0
            __builtin_memset(esi_3, 0, 0x14)
            esi_3[5] = 1
            esi_3[6] = 0
            data_114e838 = esi_3
            void* eax_17 = sub_4c2e40(0x6400)
            int32_t* ecx_10 = data_114e834
            *esi_3 = eax_17
            esi_3[2] = 0x100
            esi_3[6] = "SoundInstances"
            esi_3[5] = 0xdb18
            void* eax_18 = data_114e838
            *(eax_18 + 0x1c) = 0x3f59999a
            *(eax_18 + 0x20) = 0x3f59999a
            *(eax_18 + 0x24) = 0x3f800000
            (**ecx_10)()
        
        sub_4d46f0()
        sub_4dfa30()
        int32_t i = 0
        
        if (data_1150ee8 s> 0)
            do
                sub_4f5800(*((i << 2) + &data_1150ef8))
                i += 1
            while (i s< data_1150ee8)
        
        void* eax_20 = sub_4c2e40(0x20)
        data_114e86c = eax_20
        __builtin_memset(eax_20, 0, 0x20)
        *(eax_20 + 0x18) = 0x400
        *(eax_20 + 0x1c) = 0
        sub_4d7960(eax_20 + 0x10)
        int32_t* ecx_13 = data_114e86c
        *ecx_13 = 0
        ecx_13[1] = 0
        ecx_13[2] = 0x400
        ecx_13[3] = 0
        sub_4d79e0(ecx_13)
        sub_4d0620()
        int32_t* eax_21 = sub_498440(4)
        eax_21[3] += 1
        int32_t* ecx_14 = *eax_21
        
        if (ecx_14 == 0)
            sub_4982d0(eax_21)
            ecx_14 = *eax_21
        
        bool cond:0_1 = data_621f8c != 0
        *eax_21 = *ecx_14
        *ecx_14 = &data_5b2591
        data_1150b90 = ecx_14
        
        if (not(cond:0_1) && data_a9fb7e == 0)
            bool cond:1_1 = sub_4c83d0(*(data_aca1ec + 4)) != 0
            int32_t var_4c_5 = *(data_aca1ec + 4)
            char const* const var_50_2
            
            if (cond:1_1)
                var_50_2 = "Loaded xpack file: '%s'"
            else
                var_50_2 = "Can't load xpack file: '%s'"
            
            sub_4894d0(var_50_2)
        
        int32_t performanceCount_2
        QueryPerformanceCounter(&performanceCount_2)
        int32_t performanceCount_6 = performanceCount_2
        int32_t performanceCount_9 = performanceCount_1
        int32_t var_2c
        int32_t var_24
        performanceCount_5 = sub_489b30(performanceCount_6 - performanceCount_9, 
            sbb.d(var_24, var_2c, performanceCount_6 u< performanceCount_9))
        void* ecx_19 = data_aca1ec
        performanceCount = performanceCount_5
        
        if (*(ecx_19 + 0x27) != 0)
            performanceCount_5 = data_1150db4
            
            if (performanceCount_5 == 1)
                int32_t* ecx_20 = data_1150db8
                
                if (ecx_20 == 0)
                    data_1150db4 = 0
                else if ((*(*ecx_20 + 0xc))() == 0)
                    (*(*data_1150db8 + 8))()
                    int32_t* ecx_23 = data_1150db8
                    
                    if (ecx_23 != 0)
                        (**ecx_23)(0)
                        int32_t eax_36 = data_1150db8
                        
                        if (eax_36 != 0)
                            _aligned_free_base(eax_36)
                    
                    data_1150db8 = 0
                    
                    if ((*(*nullptr + 0xc))() == 0)
                        (*(*data_1150db8 + 8))()
                        int32_t* ecx_26 = data_1150db8
                        
                        if (ecx_26 != 0)
                            (**ecx_26)(0)
                            int32_t eax_42 = data_1150db8
                            
                            if (eax_42 != 0)
                                _aligned_free_base(eax_42)
                        
                        bool cond:3_1 = data_1150db4 != 1
                        data_1150db8 = 0
                        
                        if (not(cond:3_1))
                            data_1150db4 = 0
                    else
                        data_1150db4 = 5
                else
                    data_1150db4 = 3
                
                goto label_48e38c
            
            if (performanceCount_5 == 3 || performanceCount_5 == 5)
            label_48e38c:
                data_1150e24 = _mm_unpacklo_ps(0xbd03126f, 0x80000000)
                data_1150e30 = _mm_unpacklo_ps(0x3d03126f, 0)
                int128_t xmm0_4 = data_5d2b78
                data_1150e2c = 0x80000000
                data_1150e38 = 0
                __builtin_memcpy(&data_1150e3c, 
                    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x"
                "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                    0x20)
                data_1150ebc = xmm0_4
            label_48e3e8:
                int32_t performanceCount_3
                QueryPerformanceCounter(&performanceCount_3)
                int32_t performanceCount_7 = performanceCount_3
                int32_t var_14
                uint32_t var_54_4 = sub_489b30(performanceCount_7 - performanceCount_9, 
                    sbb.d(var_14, var_2c, performanceCount_7 u< performanceCount_9)) - performanceCount
                sub_4892e0("VRInitialize time %d ms")
                sub_4de040()
                data_1150ecc = data_60c7a0
                performanceCount_5 = sub_4eaf60()
                
                if (data_114e84c == 0)
                    int32_t* eax_43 = sub_498440(0xc)
                    eax_43[3] += 1
                    int32_t* ecx_27 = *eax_43
                    
                    if (ecx_27 == 0)
                        sub_4982d0(eax_43)
                        ecx_27 = *eax_43
                    
                    *eax_43 = *ecx_27
                    *ecx_27 = 0
                    ecx_27[1] = 0
                    ecx_27[2] = 0
                    data_114e84c = ecx_27
                    uint32_t* eax_45 = sub_498440(0x1c)
                    eax_45[3] += 1
                    uint32_t ecx_29 = *eax_45
                    
                    if (ecx_29 == 0)
                        sub_4982d0(eax_45)
                        ecx_29 = *eax_45
                    
                    performanceCount_5 = *ecx_29
                    *eax_45 = performanceCount_5
                    bool cond:2_1 = data_aca1e4 == 0
                    __builtin_memset(ecx_29, 0, 0x1c)
                    data_114e840 = ecx_29
                    
                    if (cond:2_1)
                        goto label_48e6e3
                    
                    int32_t* eax_46 = sub_498440(0x5c)
                    eax_46[3] += 1
                    int32_t* esi_7 = *eax_46
                    
                    if (esi_7 == 0)
                        sub_4982d0(eax_46)
                        esi_7 = *eax_46
                    
                    *eax_46 = *esi_7
                    performanceCount_5 = _memset(esi_7, 0, 0x5c)
                    esi_7[5] = 1
                    esi_7[8] = 0
                    esi_7[9] = 0
                    esi_7[0xa] = 0
                    esi_7[0xb] = 0
                    esi_7[0xc] = 1
                    __builtin_memset(&esi_7[0xd], 0, 0x28)
                    bool cond:4_1 = esi_7[7] == 0
                    data_aca0dc = esi_7
                    
                    if (cond:4_1)
                        esi_7[7] = sub_4c2e40(0x180)
                        esi_7[9] = 0x20
                        performanceCount_5 = 0xde98
                        esi_7[0xd] = "NetListens"
                        esi_7[0xc] = 0xde98
                        int32_t* esi_8 = data_aca0dc
                        
                        if (*esi_8 == 0)
                            int32_t eax_49 = sub_4c2e40(0x4b1c0)
                            int32_t* ecx_32 = data_aca1e4
                            *esi_8 = eax_49
                            esi_8[2] = 0xfd0
                            esi_8[6] = "NetLocs"
                            esi_8[5] = 0xdea4
                            performanceCount_5 = (**ecx_32)()
                        label_48e6e3:
                            
                            if (data_a9fb7d == 0)
                                goto label_48e784
                            
                            if (data_6c9d74 == 0)
                                data_6c9d74 = sub_4c2e40(0x700000)
                                data_6c9d7c = 0x4000
                                performanceCount_5 = 0xd594
                                data_6c9d8c = "ui elements"
                                bool cond:6_1 = data_6c9d90 == 0
                                data_6c9d88 = 0xd594
                                
                                if (cond:6_1)
                                    data_6c9d90 = sub_4c2e40(0x10e000)
                                    data_6c9d98 = 0x400
                                    performanceCount_5 = 0xd5a0
                                    data_6c9da8 = "ui states"
                                    data_6c9da4 = 0xd5a0
                                label_48e784:
                                    
                                    if (data_63e5a8 == 0)
                                        data_63e5a8 = sub_4c2e40(0x5060000)
                                        data_63e5b0 = 0x4000
                                        performanceCount_5 = 0xd1a0
                                        data_63e5c0 = "ui2 elements"
                                        bool cond:5_1 = data_63e5c4 == 0
                                        data_63e5bc = 0xd1a0
                                        
                                        if (cond:5_1)
                                            data_63e5c4 = sub_4c2e40(0x248000)
                                            data_63e5cc = 0x1000
                                            performanceCount_5 = 0xd1b0
                                            data_63e5dc = "ui2 expressions"
                                            bool cond:7_1 = data_1150c9f == 0
                                            data_63e5d8 = 0xd1b0
                                            
                                            if (cond:7_1)
                                                goto label_48e86a
                                            
                                            if (data_6cacf4 == 0)
                                                data_6cacf4 = sub_4c2e40(0x1340000)
                                                data_6cacfc = 0x4000
                                                data_6cad0c = &data_5b2591
                                                data_6cad08 = 0xd591
                                            label_48e86a:
                                                int32_t* eax_56 = sub_498440(0x284)
                                                eax_56[3] += 1
                                                int32_t* edi_6 = *eax_56
                                                
                                                if (edi_6 == 0)
                                                    sub_4982d0(eax_56)
                                                    edi_6 = *eax_56
                                                
                                                *eax_56 = *edi_6
                                                _memset(edi_6, 0, 0x284)
                                                char* (__fastcall* var_4c_12)(char** arg1) = sub_4224e0
                                                `eh vector constructor iterator'(edi_6, 0x4c, 8, 
                                                    sub_422450)
                                                edi_6[0x9a] = &data_5b2591
                                                data_114e830 = edi_6
                                                InitializeCriticalSectionAndSpinCount(&edi_6[0x9b], 
                                                    0x400)
                                                void** eax_59 = data_aca1ec
                                                void** ecx_34 = &data_63b860
                                                
                                                if (eax_59 != 0)
                                                    ecx_34 = eax_59
                                                
                                                data_aca1ec = ecx_34
                                                (**ecx_34)()
                                                int32_t performanceCount_4
                                                QueryPerformanceCounter(&performanceCount_4)
                                                int32_t performanceCount_8 = performanceCount_4
                                                int32_t var_c
                                                uint32_t var_54_7 = sub_489b30(
                                                    performanceCount_8 - performanceCount_1, 
                                                    sbb.d(var_c, var_2c, 
                                                        performanceCount_8 u< performanceCount_1))
                                                return sub_4892e0("AppInitialize time %d ms")
                                            
                                            var_4c_3 = "DataArray<struct FabState>::DataArrayInitialize"
                                        else
                                            var_4c_3 =
                                                "DataArray<struct UI2ExprTreeRT>::DataArrayInitialize"
                                    else
                                        var_4c_3 = "DataArray<struct UI2>::DataArrayInitialize"
                                else
                                    var_4c_3 = "DataArray<struct UIState>::DataArrayInitialize"
                            else
                                var_4c_3 = "DataArray<struct UIStateElement>::DataArrayInitialize"
                        else
                            var_4c_3 = "DataArray<struct NetLoc>::DataArrayInitialize"
                    else
                        var_4c_3 = "DataArray<struct NetListen>::DataArrayInitialize"
                    
                    var_50_1 = 0xce
                    var_54_1 = "d:\ax\trunk\ax2017\engine\dataarray.h"
                    ecx_4 = "mpBlock == NULL"
                else
                    var_4c_3 = "AssetUtilInitForApp"
                    var_50_1 = 0x28
                    var_54_1 = "d:\ax\trunk\ax2017\engine\assetutils.cpp"
                    ecx_4 = "!gpAssetUtilData"
            else
                var_4c_3 = "VRInitForApp"
                var_50_1 = 0x68
                var_54_1 = "d:\ax\trunk\ax2017\engine\vr.cpp"
                ecx_4 = "Halt"
        else
            if (data_1150db4 == 0)
                goto label_48e3e8
            
            var_4c_3 = "VRInitForApp"
            var_50_1 = 0x1e
            var_54_1 = "d:\ax\trunk\ax2017\engine\vr.cpp"
            ecx_4 = "gGlobalVRAppType == VRAPP_NONE"
    else
        var_4c_3 = "AppInitialize"
        var_50_1 = 0x55
        var_54_1 = "d:\ax\trunk\ax2017\engine\appcontroller.cpp"
        ecx_4 = "gpAppData == NULL"
    
    sub_489550(performanceCount_5, &data_5b2591, ecx_4, var_54_1, var_50_1, var_4c_3)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
