// 函数名称: sub_4b2540
// 虚拟地址: 0x4b2540
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*sub_4b2540()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_59f7c6
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_604 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* esi = *fsbase->ThreadLocalStoragePointer
    
    if (data_15163e8 s> *(esi + 4))
        __Init_thread_header(&data_15163e8)
        
        if (data_15163e8 == 0xffffffff)
            int32_t var_14_1 = 0
            data_15163ec = sub_4d0b50("sys/editor/ui2/editor_styles.ui2", 0x22)
            int32_t var_14_2 = 0xffffffff
            __Init_thread_footer(&data_15163e8)
    
    bool cond:0 = data_642620 == 0
    char* result_1 = data_63e5ec
    int32_t eax_6 = data_15163ec
    data_63e5ec = eax_6
    
    if (cond:0)
        sub_489550(eax_6, &data_5b2591, "gUI2Editor.asset", "d:\ax\trunk\ax2017\engine\ui2.cpp", 
            0x30c2, "UI2EditorUpdate")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    float xmm0_1 = data_620d84 * 1000f
    float xmm0_2
    
    if (0 f<= xmm0_1)
        xmm0_2 = xmm0_1 + 0.5f
    else
        xmm0_2 = xmm0_1 - 0.5f
    
    data_642628 += int.d(xmm0_2)
    bool cond:1 = data_6c4470 != 0
    data_642630 = data_63c748
    data_642634 = data_63c74c
    data_642638 = data_63c750
    data_64263c = data_63c754
    int128_t var_5f8
    float var_5cc
    struct _EXCEPTION_REGISTRATION_RECORD** eax_19
    
    if (cond:1)
        eax_19 = sub_4aa860()
    else
        if (sub_489e40(&var_5cc) != 0)
            struct InputHitResult::UI2HitResult::VTable** eax_14 =
                sub_49f910(&var_5cc, data_642640, &var_5f8, &var_5cc)
            data_642630 = eax_14[1]
            data_642634 = eax_14[2]
            data_642638 = eax_14[3]
            data_64263c = eax_14[4]
        
        void* eax_17
        
        if ((*(data_114e840 + 0xc) & 1) != 0)
            eax_17.b = *(data_aca1f0 + 0x18)
        
        char edx_1
        
        if ((*(data_114e840 + 0xc) & 1) == 0 || eax_17.b == 0)
            edx_1 = 0
        else
            edx_1 = 1
        
        eax_19 =
            sub_4d02d0(&var_5cc, edx_1, 0x6c84b4, 0, data_642628, &data_64262c, &var_5cc, &data_5d2324)
    
    struct _EXCEPTION_REGISTRATION_RECORD** eax_20 =
        sub_4ba390(eax_19, data_642630, 0x6c84b4, 0xffffffff)
    float xmm0_3 = data_620d84
    int32_t* ecx_6 = data_642620
    void* var_5b0 = data_642648
    void* var_5b4 = data_64264c
    float xmm0_6 = data_642644
    data_63e5ec = result_1
    bool cond:2 = ecx_6[1] != 0x22
    float var_5bc = xmm0_6
    
    if (cond:2)
        sub_489550(eax_20, &data_5b2591, "ptr->assetType == ASSET_TYPE_UI2", 
            "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x8ae, "UI2DefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* eax_21 = sub_4981f0(ecx_6)
    float xmm5 = var_5bc
    float xmm1_1 = xmm5 * (var_5b0 ^ (data_60cca0.o).d)
    float xmm3_2 = xmm5 * 0f + 0f
    float xmm2_3 = xmm5 * (var_5b4 ^ (data_60cca0.o).d)
    float var_5d8 = xmm1_1 + xmm3_2
    float var_5d4 = xmm2_3 + xmm3_2
    float var_5d0 = (*(eax_21 + 0x10) - 0f) * xmm5 + 0f + xmm1_1
    int32_t* var_61c = data_642620
    var_5cc = (*(eax_21 + 0x14) - 0f) * xmm5 + 0f + xmm2_3
    int32_t var_5f4 = (var_5d8.o).d
    char eax_23 = sub_49ec40(&var_5f8:4, &data_642624, "editor asset", var_61c, &var_5f8:4, &var_5f8:4, 
        0, nullptr, 1)
    data_6c4473 = eax_23
    
    if (eax_23 != 0)
        sub_4892e0("reloaded ui asset")
    
    int32_t var_608_2 = 0xffffffff
    sub_4a8570(data_642624)
    sub_4a8e00()
    sub_4a4740(data_642624, 1, xmm0_3)
    data_63e5ec = data_15163ec
    
    if (data_15163f0 s> *(esi + 4))
        __Init_thread_header(&data_15163f0)
        
        if (data_15163f0 == 0xffffffff)
            int32_t var_14_3 = 1
            data_15163f4 = sub_4d0b50("sys/editor/ui2/editor_main.ui2", 0x22)
            int32_t var_14_4 = 0xffffffff
            __Init_thread_footer(&data_15163f0)
    
    void* eax_27 = data_aca1ec
    uint128_t xmm1_3 = zx.o(*(eax_27 + 0x18))
    float xmm0_23 = _mm_cvtepi32_ps(zx.o(*(eax_27 + 0x14)))
    var_5d4 = 0f
    int32_t var_5d0_1 = 0
    var_5f4 = 0
    int32_t* var_61c_1 = data_15163f4
    char* xmm1_4 = _mm_cvtepi32_ps(xmm1_3)
    var_5f4 = 0
    var_5cc = xmm0_23
    char* var_5c8 = xmm1_4
    var_5f4 = xmm0_23
    var_5f4 = xmm1_4
    sub_49ec40(&var_5f8:4, &data_642640, "editor ui", var_61c_1, &var_5f8:4, &var_5d4, 0x61a8, nullptr, 
        1)
    sub_4b2440(data_642640, sub_4b0bf0)
    int32_t eax_29 = sub_4b24c0(data_642640, sub_4af940)
    char* const var_5ac
    char* i_5
    void* eax_32
    
    if (data_643654 s<= 0 || data_642618 s<= 0)
        eax_32 = sub_4a8830(eax_29, &data_63de8c, data_642640, 0, 0xffffffff)
    else
        char* eax_30 = sub_4a7d60(data_642654)
        char* ecx_12 = eax_30
        
        if (data_64365e != 0)
            int32_t edx_6 = *(ecx_12 + 0x1410)
            
            if (edx_6 == 0)
                sub_489550(eax_30, &data_5b2591, "id != DATAID_NULL", 
                    "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6c, 
                    "DataArray<struct UI2>::DataArrayGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            uint32_t esi_1 = zx.d(edx_6.w)
            int32_t edi
            
            if (esi_1 u< data_63e5ac)
                edi = data_63e5a8
                eax_30 = esi_1 * 0x1418
            
            if (esi_1 u>= data_63e5ac || *(eax_30 + edi + 0x1410) != edx_6)
                sub_489550(eax_30, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                    "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, 
                    "DataArray<struct UI2>::DataArrayGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            eax_30 = esi_1 * 0x1418
            *(eax_30 + edi + 0xfd0) = sub_4a6e20
        
        void var_528
        int32_t eax_31 = sub_4ac920(eax_30, &var_528, ecx_12, nullptr)
        eax_32 = sub_4a8830(eax_31, &data_63de8c, data_642640, eax_31, 0xffffffff)
        char* edi_1 = nullptr
        
        if (eax_31 s> 0)
            void var_520
            eax_32 = &var_520
            var_5b0 = &var_520
            
            do
                int32_t esi_3 = *(eax_32 - 4)
                data_63e5ec = result_1
                sub_4acc60(eax_32, ecx_12, &i_5, esi_3, edi_1)
                int32_t var_14_5 = 2
                void* edx_9 = var_5b0
                int32_t eax_33 = data_15163ec
                data_63e5ec = eax_33
                char* edx_10 = *edx_9
                
                if (edx_10 == 0)
                    sub_489550(eax_33, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 
                        0x94, "XString::XString")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                sub_48a2c0(&var_5ac, edx_10)
                var_14_5.b = 3
                sub_4a8930(&var_5ac, &data_63e04c, data_642640, &var_5ac, edi_1)
                var_14_5.b = 4
                
                if (data_aca1f4 != 0)
                    char* eax_35 = var_5ac
                    
                    if (eax_35 != 0 && *eax_35 != 0)
                        char* eax_36 = sub_48a080(&var_5ac)
                        int32_t temp1_1 = *(eax_36 + 4)
                        *(eax_36 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            sub_4984f0(eax_36, *(eax_36 + 0xc) + 0x10)
                            var_5ac = &data_5b2591
                
                var_14_5.b = 2
                sub_4a8930(&i_5, &data_63e58c, data_642640, &i_5, edi_1)
                int128_t* eax_39 = sub_4add30(ecx_12, edi_1, *(ecx_12 + 0x1410), &var_5d8)
                int32_t i_6 = eax_39[1].d
                var_5f8 = *eax_39
                int128_t* eax_41 = sub_4add30(ecx_12, edi_1, *(ecx_12 + 0x1410), &var_5d8)
                uint128_t xmm0_25 = *eax_41
                var_5c8 = eax_41[1].d
                
                if (_mm_bsrli_si128(xmm0_25, 0xc) == 3)
                    char* var_608_7 = edi_1
                    sub_4a8570(data_642640)
                    var_5b4 = sub_4ac800(ecx_12, esi_3)
                    int32_t eax_45 = sub_4f0fd0(&data_6218dc, esi_3)
                    int32_t ecx_25 = data_126cc50
                    void* edx_18 = var_5b4
                    
                    if (eax_45 != ecx_25)
                        int32_t* eax_47 = sub_4f0e70(eax_45, edx_18, &data_6218dc, data_126cd24, esi_3)
                        int32_t var_5a0
                        sub_49a390(eax_47, eax_47, &var_5a0, edi_1, 0x5d24d4)
                        var_14_5.b = 5
                        int32_t var_530
                        
                        if (var_530 s<= 1)
                            int32_t var_59c
                            
                            if (var_59c != 0)
                                if (var_59c == 1)
                                    sub_489550(var_59c - 1, &data_5b2591, "Halt", 
                                        "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x93b, "EvalValEval")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_489700()
                                    noreturn
                                
                                sub_489550(var_59c - 1, &data_5b2591, "Halt", 
                                    "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x93f, "EvalValEval")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            void var_594
                            void* edx_21 = &var_594
                            float eax_50 = sub_498600(var_5a0, edx_21)
                            int32_t ecx_29 = data_642640
                            var_5bc = eax_50
                            sub_4a85f0(&var_5bc, edx_21, ecx_29, &var_5bc, edi_1)
                        
                        var_14_5.b = 6
                        void var_598
                        `eh vector vbase constructor iterator'(&var_598, 0x34, 2, sub_498c00)
                        var_14_5.b = 2
                    else
                        int32_t* eax_46
                        int32_t edx_19
                        eax_46, edx_19 = sub_4f0e70(eax_45, edx_18, &data_6218dc, ecx_25, esi_3)
                        sub_4a85f0(eax_46, edx_19, data_642640, eax_46, edi_1)
                
                int32_t i = i_6
                
                if (i - 0x64 u> 0x10)
                    goto label_4b2ca2
                
                switch (i)
                    case 0x65, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6f, 0x70
                        goto label_4b2ca2
                    case 0x71, 0x72, 0x73, 0x74
                        i = 0x70
                    label_4b2ca2:
                        void* eax_54 = sub_4a9c40(ecx_12)
                        int32_t* eax_55
                        
                        if (eax_54 == 0)
                            int32_t* eax_56 = sub_498ef0(ecx_12)
                            int32_t ecx_33 = 0
                            int32_t edx_23 = *eax_56
                            
                            if (edx_23 s<= 0)
                            label_4b2cec:
                                eax_55 = nullptr
                            else
                                eax_55 = eax_56[2]
                                
                                while (*eax_55 != i)
                                    ecx_33 += 1
                                    eax_55 = &eax_55[4]
                                    
                                    if (ecx_33 s>= edx_23)
                                        goto label_4b2cec_1
                        else
                            int32_t edx_22 = *(eax_54 + 8)
                            int32_t ecx_31 = 0
                            
                            if (edx_22 s<= 0)
                            label_4b2cec_1:
                                eax_55 = nullptr
                            else
                                eax_55 = *(eax_54 + 0x10)
                                
                                while (*eax_55 != i)
                                    ecx_31 += 1
                                    eax_55 = &eax_55[4]
                                    
                                    if (ecx_31 s>= edx_22)
                                        goto label_4b2cec_1
                        
                        eax_55.b = eax_55 == 0
                        
                        if (eax_55.b != 0)
                            char* var_608_10 = edi_1
                            sub_4a8570(data_642640)
                
                int32_t var_14_6 = 7
                
                if (data_aca1f4 != 0)
                    char* i_8 = i_5
                    
                    if (i_8 != 0 && *i_8 != 0)
                        char* eax_57 = sub_48a080(&i_5)
                        int32_t temp6_1 = *(eax_57 + 4)
                        *(eax_57 + 4) -= 1
                        
                        if (temp6_1 == 1)
                            sub_4984f0(eax_57, *(eax_57 + 0xc) + 0x10)
                            i_5 = &data_5b2591
                
                int32_t var_14_7 = 0xffffffff
                edi_1 = &edi_1[1]
                eax_32 = var_5b0 + 0x14
                var_5b0 = eax_32
            while (edi_1 s< eax_31)
    
    int32_t edi_2 = data_643660
    
    if (edi_2 != 0xffffffff && data_642618 s> 0)
        int32_t var_608_11 = edi_2
        sub_4a8570(data_642640)
        void* eax_60 = sub_4a7d60(data_642654)
        var_5b0 = eax_60
        int128_t* eax_62 = sub_4add30(&var_5d8, edi_2, *(eax_60 + 0x1410), &var_5d8)
        int32_t ecx_41 = *(eax_60 + 0x1410)
        int32_t i_1 = eax_62[1].d
        var_5f8 = *eax_62
        int128_t* eax_64 = sub_4add30(&var_5d8, edi_2, ecx_41, &var_5d8)
        uint128_t xmm0_28 = *eax_64
        var_5c8 = eax_64[1].d
        int32_t xmm0_29 = _mm_bsrli_si128(xmm0_28, 0xc)
        
        if (xmm0_29 u> 5)
            sub_489550(xmm0_29, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x3142, 
                "UI2EditorUpdate")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        switch (xmm0_29)
            case 4
                int32_t var_608_14 = edi_2
                sub_4a8570(data_642640)
        
        if (i_1 - 0x64 u> 0x10)
        label_4b2e9f:
            void* eax_68 = sub_4a9c40(var_5b0)
            
            if (eax_68 != 0)
                int32_t edx_34 = *(eax_68 + 8)
                int32_t ecx_44 = 0
                
                if (edx_34 s<= 0)
                label_4b2efe:
                    eax_32 = nullptr
                label_4b2f02:
                    eax_32.b = eax_32 != 0
                    
                    if (eax_32.b != 0)
                        int32_t var_608_15 = edi_2
                        eax_32 = sub_4a8570(data_642640)
                    
                    goto label_4b2f1d
                
                eax_32 = *(eax_68 + 0x10)
                
                while (*eax_32 != i_1)
                    ecx_44 += 1
                    eax_32 += 0x10
                    
                    if (ecx_44 s>= edx_34)
                        goto label_4b2efe
                
                goto label_4b2f02
            
            eax_32 = var_5b0
            
            if (i_1 != 0x75)
            label_4b2ee2:
                int32_t* eax_69 = sub_498ef0(eax_32)
                int32_t ecx_47 = 0
                int32_t edx_35 = *eax_69
                
                if (edx_35 s<= 0)
                    goto label_4b2efe
                
                eax_32 = eax_69[2]
                
                while (*eax_32 != i_1)
                    ecx_47 += 1
                    eax_32 += 0x10
                    
                    if (ecx_47 s>= edx_35)
                        goto label_4b2efe
                
                goto label_4b2f02
            
            char* ecx_45 = *(eax_32 + 0xff0)
            
            if (ecx_45 != 0 && *ecx_45 != 0)
                goto label_4b2ee2
        else
            eax_32 = zx.d(*(i_1 + 0x4b3c18))
            
            switch (eax_32)
                case nullptr
                label_4b2f1d:
                    
                    if (i_1 == 0x6e || i_1 == 0x70)
                        int32_t var_608_16 = edi_2
                        sub_4a8570(data_642640)
                        int32_t var_608_17 = edi_2
                        eax_32 = sub_4a8570(data_642640)
                case 1
                    goto label_4b2e9f
    
    int32_t esi_6 = data_643664
    
    if (esi_6 != 0xffffffff)
        int32_t var_608_18 = esi_6
        sub_4a8570(data_642640)
        void* eax_70 = sub_4a7d60(data_642654)
        eax_32 = _mm_bsrli_si128(*sub_4add30(&var_5f8, esi_6, *(eax_70 + 0x1410), &var_5f8), 0xc)
        char* i_2
        int32_t edi_4
        
        if (eax_32 == 2)
            data_643664
            *(eax_70 + 0x1410)
            edi_4 = 0
            int32_t* esi_7 = sub_4ae550() + 4
            
            for (i_2 = *esi_7; i_2 != 0; i_2 = *esi_7)
                sub_48a2c0(&i_5, i_2)
                int32_t var_14_8 = 8
                sub_4a8930(&i_5, &data_6c8914, data_642640, &i_5, edi_4)
                int32_t var_14_9 = 9
                
                if (data_aca1f4 != 0)
                    char* i_9 = i_5
                    
                    if (i_9 != 0 && *i_9 != 0)
                        char* eax_75 = sub_48a080(&i_5)
                        int32_t temp0_1 = *(eax_75 + 4)
                        *(eax_75 + 4) -= 1
                        
                        if (temp0_1 == 1)
                            sub_4984f0(eax_75, *(eax_75 + 0xc) + 0x10)
                            i_5 = &data_5b2591
                
                esi_7 = &esi_7[2]
                int32_t var_14_10 = 0xffffffff
                edi_4 += 1
            
            eax_32 = sub_4a8830(i_2, &data_6c8930, data_642640, edi_4, data_643660)
        else if (eax_32 == 5)
            data_643664
            data_63e5ec = result_1
            i_2 = sub_4adf30(*(eax_70 + 0x1410))
            char* i_7 = i_2
            data_63e5ec = data_15163ec
            edi_4 = 0
            
            for (char* i_3 = *i_7; i_3 != 0; i_3 = *i_7)
                sub_48a2c0(&i_5, i_3)
                int32_t var_14_11 = 0xa
                i_2 = sub_4a8930(&i_5, &data_6c8914, data_642640, &i_5, edi_4)
                int32_t var_14_12 = 0xb
                
                if (data_aca1f4 != 0)
                    i_2 = i_5
                    
                    if (i_2 != 0 && *i_2 != 0)
                        i_2 = sub_48a080(&i_5)
                        int32_t temp2_1 = *(i_2 + 4)
                        *(i_2 + 4) -= 1
                        
                        if (temp2_1 == 1)
                            i_2 = sub_4984f0(i_2, *(i_2 + 0xc) + 0x10)
                            i_5 = &data_5b2591
                
                i_7 = &i_7[4]
                int32_t var_14_13 = 0xffffffff
                edi_4 += 1
            
            eax_32 = sub_4a8830(i_2, &data_6c8930, data_642640, edi_4, data_643660)
    
    sub_4a8830(eax_32, &data_6c894c, data_642640, data_64261c, 0xffffffff)
    int32_t eax_78 = data_642618
    float edx_49 = 0f
    int32_t var_5a4_2 = 0
    var_5bc = 0f
    
    if (eax_78 s> 0)
        char* const ecx_67 = &data_63e61c
        var_5ac = &data_63e61c
        
        do
            if (*(ecx_67 + 8) != 2)
                void* edi_5 = *(ecx_67 - 4)
                void* var_5b8_2 = edi_5
                sub_48a2c0(&var_5b0, &data_5b2591)
                int32_t var_14_14 = 0xc
                int32_t i_4 = 0
                char* const eax_79 = var_5ac
                
                if (*eax_79 s> 0)
                    do
                        sub_48a670(&var_5b0, &data_5d59f8)
                        i_4 += 1
                    while (i_4 s< *eax_79)
                    
                    edi_5 = var_5b8_2
                
                char* eax_80 = *(edi_5 + 0xfd8)
                char* const ecx_70 = &data_5b2591
                void* esi_8 = var_5b0
                
                if (eax_80 != 0)
                    ecx_70 = eax_80
                
                char* const var_608_23 = ecx_70
                void* eax_81 = &data_5b2591
                
                if (esi_8 != 0)
                    eax_81 = esi_8
                
                void* var_60c_13 = eax_81
                sub_48a9d0(&var_5b4, "%s%s")
                var_14_14.b = 0xd
                sub_4a8930(&var_5b4, &data_6c8968, data_642640, &var_5b4, var_5a4_2)
                int32_t edx_50 = data_643654
                int32_t eax_83 = 0
                
                if (edx_50 s> 0)
                    do
                        if (*(edi_5 + 0xff8) == (&data_642654)[eax_83])
                            int32_t edx_51 = data_642640
                            
                            if (edx_51 == 0)
                                sub_489550(eax_83, &data_5b2591, "id != DATAID_NULL", 
                                    "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6c, 
                                    "DataArray<struct UI2>::DataArrayGet")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            uint32_t eax_84 = zx.d(edx_51.w)
                            void* ecx_74
                            
                            if (eax_84 u< data_63e5ac)
                                ecx_74 = eax_84 * 0x1418 + data_63e5a8
                            
                            if (eax_84 u< data_63e5ac && *(ecx_74 + 0x1410) == edx_51)
                                sub_4a8420(eax_84, &data_6c8984, ecx_74, 0x3f800000, var_5a4_2)
                                break
                            
                            sub_489550(eax_84, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                                "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, 
                                "DataArray<struct UI2>::DataArrayGet")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        eax_83 += 1
                    while (eax_83 s< edx_50)
                
                if (*(sub_498ef0(edi_5) + 0x10) s> 0 || *(edi_5 + 0xfec) == 6)
                    char* const eax_86 = var_5ac
                    int32_t edx_52 = data_642640
                    uint32_t eax_87
                    void* ecx_77
                    void** edx_53
                    
                    if (*(eax_86 + 8) != 0)
                        if (edx_52 == 0)
                            sub_489550(eax_86, &data_5b2591, "id != DATAID_NULL", 
                                "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6c, 
                                "DataArray<struct UI2>::DataArrayGet")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        eax_87 = zx.d(edx_52.w)
                        
                        if (eax_87 u< data_63e5ac)
                            ecx_77 = eax_87 * 0x1418 + data_63e5a8
                        
                        if (eax_87 u>= data_63e5ac || *(ecx_77 + 0x1410) != edx_52)
                            sub_489550(eax_87, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                                "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, 
                                "DataArray<struct UI2>::DataArrayGet")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        edx_53 = &data_6c8a2c
                    else
                        if (edx_52 == 0)
                            sub_489550(eax_86, &data_5b2591, "id != DATAID_NULL", 
                                "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6c, 
                                "DataArray<struct UI2>::DataArrayGet")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        eax_87 = zx.d(edx_52.w)
                        
                        if (eax_87 u< data_63e5ac)
                            ecx_77 = eax_87 * 0x1418 + data_63e5a8
                        
                        if (eax_87 u>= data_63e5ac || *(ecx_77 + 0x1410) != edx_52)
                            sub_489550(eax_87, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                                "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, 
                                "DataArray<struct UI2>::DataArrayGet")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        edx_53 = &data_6c8a10
                    
                    sub_4a8420(eax_87, edx_53, ecx_77, 0x3f800000, var_5a4_2)
                
                char* edi_7
                
                if (*(edi_5 + 0x112c) != 0)
                    int32_t* eax_88 = sub_498ef0(edi_5)
                    edi_7 = sub_4f0df0(eax_88, eax_88, &data_6218dc, 0x6e)
                else
                    edi_7 = nullptr
                
                char* i_10 = sub_4a9b60(var_5b8_2, &var_5c8)
                char* eax_92
                
                if (i_10 != 2)
                    eax_92 = sub_4a9b60(var_5b8_2, &var_5c8)
                    
                    if (eax_92 == 1)
                        int32_t var_608_28 = var_5a4_2
                        eax_92 = sub_4a8570(data_642640)
                    else if (*edi_7 != 0)
                        char* var_5dc
                        sub_48a2c0(&var_5dc, edi_7)
                        var_14_14.b = 0x10
                        eax_92 = sub_4a8930(&var_5dc, &data_6c8a48, data_642640, &var_5dc, var_5a4_2)
                        var_14_14.b = 0x11
                        
                        if (data_aca1f4 != 0)
                            eax_92 = var_5dc
                            
                            if (eax_92 != 0 && *eax_92 != 0)
                                eax_92 = sub_48a080(&var_5dc)
                                int32_t temp8_1 = *(eax_92 + 4)
                                *(eax_92 + 4) -= 1
                                
                                if (temp8_1 == 1)
                                    eax_92 = sub_4984f0(eax_92, *(eax_92 + 0xc) + 0x10)
                                    var_5dc = &data_5b2591
                        
                        var_14_14.b = 0xd
                else
                    int32_t edi_8
                    
                    if (*edi_7 == 0)
                        edi_8 = var_5a4_2
                    else
                        sub_48a2c0(&i_5, edi_7)
                        edi_8 = var_5a4_2
                        var_14_14.b = 0xe
                        i_10 = sub_4a8930(&i_5, &data_6c8a48, data_642640, &i_5, edi_8)
                        var_14_14.b = 0xf
                        
                        if (data_aca1f4 != 0)
                            i_10 = i_5
                            
                            if (i_10 != 0 && *i_10 != 0)
                                i_10 = sub_48a080(&i_5)
                                int32_t temp7_1 = *(i_10 + 4)
                                *(i_10 + 4) -= 1
                                
                                if (temp7_1 == 1)
                                    i_10 = sub_4984f0(i_10, *(i_10 + 0xc) + 0x10)
                                    i_5 = &data_5b2591
                        
                        var_14_14.b = 0xd
                    
                    int32_t edx_59 = data_642640
                    
                    if (edx_59 == 0)
                        sub_489550(i_10, &data_5b2591, "id != DATAID_NULL", 
                            "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6c, 
                            "DataArray<struct UI2>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    uint32_t eax_91 = zx.d(edx_59.w)
                    void* ecx_86
                    
                    if (eax_91 u< data_63e5ac)
                        ecx_86 = eax_91 * 0x1418 + data_63e5a8
                    
                    if (eax_91 u>= data_63e5ac || *(ecx_86 + 0x1410) != edx_59)
                        sub_489550(eax_91, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                            "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, 
                            "DataArray<struct UI2>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    eax_92 = sub_4a8420(eax_91, &data_6c89d8, ecx_86, 0x3f800000, edi_8)
                
                if (*(var_5b8_2 + 6) != 0)
                    int32_t edx_65 = data_642640
                    
                    if (edx_65 == 0)
                        sub_489550(eax_92, &data_5b2591, "id != DATAID_NULL", 
                            "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6c, 
                            "DataArray<struct UI2>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    uint32_t eax_94 = zx.d(edx_65.w)
                    void* ecx_94
                    
                    if (eax_94 u< data_63e5ac)
                        ecx_94 = eax_94 * 0x1418 + data_63e5a8
                    
                    if (eax_94 u>= data_63e5ac || *(ecx_94 + 0x1410) != edx_65)
                        sub_489550(eax_94, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                            "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, 
                            "DataArray<struct UI2>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    eax_92 = sub_4a8420(eax_94, &data_6c89a0, ecx_94, 0x3f800000, var_5a4_2)
                
                int32_t edi_10
                
                if (*(var_5b8_2 + 7) == 0)
                    edi_10 = var_5a4_2
                else
                    int32_t edx_66 = data_642640
                    
                    if (edx_66 == 0)
                        sub_489550(eax_92, &data_5b2591, "id != DATAID_NULL", 
                            "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6c, 
                            "DataArray<struct UI2>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    uint32_t eax_95 = zx.d(edx_66.w)
                    void* ecx_96
                    
                    if (eax_95 u< data_63e5ac)
                        ecx_96 = eax_95 * 0x1418 + data_63e5a8
                    
                    if (eax_95 u>= data_63e5ac || *(ecx_96 + 0x1410) != edx_66)
                        sub_489550(eax_95, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                            "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, 
                            "DataArray<struct UI2>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    edi_10 = var_5a4_2
                    sub_4a8420(eax_95, &data_6c89bc, ecx_96, 0x3f800000, edi_10)
                
                var_5a4_2 = edi_10 + 1
                var_14_14.b = 0x12
                
                if (data_aca1f4 != 0)
                    void* eax_96 = var_5b4
                    
                    if (eax_96 != 0 && *eax_96 != 0)
                        char* eax_97 = sub_48a080(&var_5b4)
                        int32_t temp9_1 = *(eax_97 + 4)
                        *(eax_97 + 4) -= 1
                        
                        if (temp9_1 == 1)
                            sub_4984f0(eax_97, *(eax_97 + 0xc) + 0x10)
                            var_5b4 = &data_5b2591
                
                int32_t var_14_15 = 0x13
                
                if (data_aca1f4 != 0 && esi_8 != 0 && *esi_8 != 0)
                    char* eax_98 = sub_48a080(&var_5b0)
                    int32_t temp10_1 = *(eax_98 + 4)
                    *(eax_98 + 4) -= 1
                    
                    if (temp10_1 == 1)
                        sub_4984f0(eax_98, *(eax_98 + 0xc) + 0x10)
                        var_5b0 = &data_5b2591
                
                int32_t var_14_16 = 0xffffffff
                eax_78 = data_642618
                ecx_67 = var_5ac
                edx_49 = var_5bc
            
            edx_49 += 1
            ecx_67 = &ecx_67[0x10]
            var_5bc = edx_49
            var_5ac = ecx_67
        while (edx_49 s< eax_78)
    
    char* const esi_10 = *(data_642620 + 0x20)
    var_5ac = esi_10
    
    if (esi_10 != 0 && *esi_10 != 0)
        char* eax_99 = sub_48a080(&var_5ac)
        *(eax_99 + 4) += 1
    
    int32_t var_14_17 = 0x14
    
    if (data_11510ac != 0)
        sub_48a670(&var_5ac, U"*")
        esi_10 = var_5ac
    
    sub_4a8930(&var_5ac, &data_6c8a64, data_642640, &var_5ac, 0xffffffff)
    sub_4a4740(data_642640, 0, data_620d84)
    int32_t ecx_106
    
    if (data_642618 == 0)
        ecx_106 = 1
    else if (data_64365c.b != 0 || data_64365e != 0)
        sub_489e40(&var_5cc)
        int32_t eax_102 = sub_4abb60(var_5cc, var_5c8)
        
        if (eax_102 == 0xffffffff)
            ecx_106 = 1
        else
            if (eax_102 u> 7)
                sub_489550(eax_102, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x31e3, 
                    "UI2EditorUpdate")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            switch (eax_102)
                case 0, 7
                    ecx_106 = 5
                case 1, 6
                    ecx_106 = 3
                case 2, 5
                    ecx_106 = 6
                case 3, 4
                    ecx_106 = 4
    else if (data_64365c:1.b == 0)
        ecx_106 = 1
    else
        sub_489e40(&var_5cc)
        int32_t eax_101 = sub_4ac2c0(var_5cc, var_5c8)
        
        if (eax_101 == 0xffffffff)
            ecx_106 = 1
        else
            if (eax_101 u> 7)
                sub_489550(eax_101, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x3209, 
                    "UI2EditorUpdate")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            switch (eax_101)
                case 0, 7
                    ecx_106 = 5
                case 1, 6
                    ecx_106 = 3
                case 2, 5
                    ecx_106 = 6
                case 3, 4
                    ecx_106 = 4
    
    sub_489d20(ecx_106)
    char* result = result_1
    data_63e5ec = result
    data_6c4471 = 0
    int32_t var_14_18 = 0x15
    
    if (data_aca1f4 != 0 && esi_10 != 0 && *esi_10 != 0)
        result = sub_48a080(&var_5ac)
        int32_t temp5_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp5_1 == 1)
            result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
