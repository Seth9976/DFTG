// 函数名称: sub_553240
// 虚拟地址: 0x553240
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOLsub_553240()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    HMENU hMenu = CreatePopupMenu()
    POINT point
    GetCursorPos(&point)
    char eax_2 = sub_5531c0()
    char eax_3 = sub_553200()
    HMENU eax_4 = CreatePopupMenu()
    int32_t ecx
    ecx.b = eax_2 != 0
    InsertMenuA(eax_4, 0xffffffff, (ecx << 3) + 0x400, 0x16, "Lock")
    int32_t eax_5
    eax_5.b = eax_3 != 0
    InsertMenuA(eax_4, 0xffffffff, (eax_5 << 3) + 0x400, 0x17, "Hide")
    HMENU eax_7 = CreatePopupMenu()
    InsertMenuA(eax_7, 0xffffffff, MF_BYPOSITION, 0xa, "Left")
    InsertMenuA(eax_7, 0xffffffff, MF_BYPOSITION, 0xb, &data_5f3964)
    InsertMenuA(eax_7, 0xffffffff, MF_BYPOSITION, 0xc, "Right")
    InsertMenuA(eax_7, 0xffffffff, MF_BYPOSITION, 0xd, "Bottom")
    InsertMenuA(eax_7, 0xffffffff, MF_BYPOSITION, 0xe, "Center Vertically")
    InsertMenuA(eax_7, 0xffffffff, MF_BYPOSITION, 0xf, "Center Horizontally")
    InsertMenuA(eax_7, 0xffffffff, MF_BYPOSITION, 0x10, "Center")
    InsertMenuA(eax_7, 0xffffffff, 0xc00, 0, &data_5b2591)
    InsertMenuA(eax_7, 0xffffffff, MF_BYPOSITION, 0x12, "Move Forward\tCtrl-]")
    InsertMenuA(eax_7, 0xffffffff, MF_BYPOSITION, 0x13, "Move Back\tCtrl-[")
    InsertMenuA(eax_7, 0xffffffff, MF_BYPOSITION, 0x14, "To Front\tCtrl-Shift-]")
    InsertMenuA(eax_7, 0xffffffff, MF_BYPOSITION, 0x15, "To Back\tCtrl-Shift-[")
    HMENU eax_8 = CreatePopupMenu()
    InsertMenuA(eax_8, 0xffffffff, MF_BYPOSITION, 0x11, "SizeToSource")
    InsertMenuA(hMenu, 0xffffffff, 0x410, eax_4, "Layer")
    InsertMenuA(hMenu, 0xffffffff, 0x410, eax_7, "Align")
    InsertMenuA(hMenu, 0xffffffff, 0x410, eax_8, "Transform")
    BOOL eax_9 = TrackPopupMenu(hMenu, TPM_RETURNCMD, point.x, point.y, 0, data_1150b8c, nullptr)
    void var_68
    float var_50
    float var_24
    char* ecx_24
    
    switch (eax_9)
        case 0
            goto label_5538c3
        case 0xa
            int32_t eax_10 = data_11e705c
            
            if (eax_10 != 0)
                char* ecx_3
                float var_30_1
                
                if (eax_10 != 1)
                    void* eax_11
                    eax_11, ecx_3 = sub_54e110(data_11e605c, nullptr)
                    int32_t esi_1 = 1
                    int32_t eax_12 = data_11e705c
                    var_30_1 = *(eax_11 + 0x10)
                    
                    if (eax_12 s> 1)
                        do
                            void* eax_13
                            eax_13, ecx_3 = sub_54e110((&data_11e605c)[esi_1], nullptr)
                            esi_1 += 1
                            float xmm0_3 = __minss_xmmss_memss(*(eax_13 + 0x10), var_30_1)
                            eax_12 = data_11e705c
                            var_30_1 = xmm0_3
                        while (esi_1 s< eax_12)
                    
                    if (eax_12 s> 0)
                        goto label_55349d
                else
                    var_30_1 = 0f
                label_55349d:
                    int32_t i = 0
                    
                    do
                        void* eax_14
                        int32_t edx_1
                        eax_14, edx_1 = sub_54e110((&data_11e605c)[i], nullptr)
                        float xmm2_2 = var_30_1 f- *(eax_14 + 0x10)
                        var_24 = xmm2_2 f+ *(eax_14 + 0x10)
                        float var_20_1 = *(eax_14 + 0x14) + 0f
                        float var_1c_1 = *(eax_14 + 0x18) + xmm2_2
                        float var_18_1 = *(eax_14 + 0x1c) + 0f
                        int128_t* eax_16
                        eax_16, ecx_3 = sub_4be600(&var_50, edx_1, &var_24, &var_50)
                        i += 1
                        *(eax_14 + 0x10) = *eax_16
                    while (i s< data_11e705c)
                ecx_3.b = 1
                sub_54dee0(ecx_3)
            
            goto label_5538c3
        case 0xb
            int32_t eax_17 = data_11e705c
            
            if (eax_17 != 0)
                int32_t ecx_7 = data_11e605c
                char* ecx_8
                float xmm0_13
                
                if (eax_17 != 1)
                    void* eax_20
                    eax_20, ecx_8 = sub_54e110(ecx_7, nullptr)
                    xmm0_13 = *(eax_20 + 0x14)
                else
                    int32_t eax_18
                    eax_18, ecx_8 = sub_54e090(ecx_7)
                    
                    if (eax_18 == 0)
                        xmm0_13 = (zx.o(0)).d
                    else
                        int32_t* eax_19
                        eax_19, ecx_8 = sub_4c8c70(data_11e6050)
                        xmm0_13 = *(*eax_19 + 0x14)
                
                int32_t i_1 = 0
                
                if (data_11e705c s> 0)
                    do
                        void* eax_21
                        int32_t edx_2
                        eax_21, edx_2 = sub_54e110((&data_11e605c)[i_1], nullptr)
                        float xmm1_2 = xmm0_13 f- *(eax_21 + 0x14)
                        var_24 = *(eax_21 + 0x10) + 0f
                        float var_20_2 = *(eax_21 + 0x14) + xmm1_2
                        float var_1c_2 = *(eax_21 + 0x18) + 0f
                        float var_18_2 = *(eax_21 + 0x1c) + xmm1_2
                        int128_t* eax_23
                        eax_23, ecx_8 = sub_4be600(&var_50, edx_2, &var_24, &var_50)
                        i_1 += 1
                        *(eax_21 + 0x10) = *eax_23
                    while (i_1 s< data_11e705c)
                
                ecx_8.b = 1
                sub_54dee0(ecx_8)
            
            goto label_5538c3
        case 0xc
            int32_t eax_24 = data_11e705c
            
            if (eax_24 != 0)
                int32_t ecx_12 = data_11e605c
                char* ecx_13
                
                if (eax_24 != 1)
                    void* eax_29
                    eax_29, ecx_13 = sub_54e110(ecx_12, nullptr)
                    var_50 = *(eax_29 + 0x18)
                else
                    int32_t eax_25
                    eax_25, ecx_13 = sub_54e090(ecx_12)
                    
                    if (eax_25 == 0)
                        float xmm0_24[0x4] = *sub_552a80(&var_50)
                        var_50.o = _mm_shuffle_ps(xmm0_24, xmm0_24, 0xaa)
                    else
                        int32_t* eax_26
                        eax_26, ecx_13 = sub_4c8c70(data_11e6050)
                        var_50.o = *(*eax_26 + 0x18)
                
                int32_t i_2 = 0
                
                if (data_11e705c s> 0)
                    do
                        void* eax_30
                        int32_t edx_3
                        eax_30, edx_3 = sub_54e110((&data_11e605c)[i_2], nullptr)
                        float xmm1_4 = var_50 f- *(eax_30 + 0x18)
                        var_24 = xmm1_4 f+ *(eax_30 + 0x10)
                        float var_20_3 = *(eax_30 + 0x14) + 0f
                        float var_1c_3 = *(eax_30 + 0x18) + xmm1_4
                        float var_18_3 = *(eax_30 + 0x1c) + 0f
                        int128_t* eax_32
                        eax_32, ecx_13 = sub_4be600(&var_68, edx_3, &var_24, &var_68)
                        i_2 += 1
                        *(eax_30 + 0x10) = *eax_32
                    while (i_2 s< data_11e705c)
                
                ecx_13.b = 1
                sub_54dee0(ecx_13)
            
            goto label_5538c3
        case 0xd
            int32_t eax_33 = data_11e705c
            
            if (eax_33 != 0)
                int32_t ecx_17 = data_11e605c
                char* ecx_18
                
                if (eax_33 != 1)
                    void* eax_38
                    eax_38, ecx_18 = sub_54e110(ecx_17, nullptr)
                    var_50 = *(eax_38 + 0x1c)
                else
                    int32_t eax_34
                    eax_34, ecx_18 = sub_54e090(ecx_17)
                    
                    if (eax_34 == 0)
                        float xmm0_37[0x4] = *sub_552a80(&var_68)
                        var_50.o = _mm_shuffle_ps(xmm0_37, xmm0_37, 0xff)
                    else
                        int32_t* eax_35
                        eax_35, ecx_18 = sub_4c8c70(data_11e6050)
                        var_50.o = *(*eax_35 + 0x1c)
                
                int32_t i_3 = 0
                
                if (data_11e705c s> 0)
                    do
                        void* eax_39
                        int32_t edx_4
                        eax_39, edx_4 = sub_54e110((&data_11e605c)[i_3], nullptr)
                        float xmm1_6 = var_50 f- *(eax_39 + 0x1c)
                        var_24 = *(eax_39 + 0x10) + 0f
                        float var_20_4 = *(eax_39 + 0x14) + xmm1_6
                        float var_1c_4 = *(eax_39 + 0x18) + 0f
                        float var_18_4 = *(eax_39 + 0x1c) + xmm1_6
                        int128_t* eax_41
                        eax_41, ecx_18 = sub_4be600(&var_68, edx_4, &var_24, &var_68)
                        i_3 += 1
                        *(eax_39 + 0x10) = *eax_41
                    while (i_3 s< data_11e705c)
                
                ecx_18.b = 1
                sub_54dee0(ecx_18)
            
            goto label_5538c3
        case 0xe
            sub_552c20()
            char* ecx_22
            ecx_22.b = 1
            sub_54dee0(ecx_22)
        label_5538c3:
            DestroyMenu(hMenu)
            DestroyMenu(eax_7)
            DestroyMenu(eax_8)
            BOOL result = DestroyMenu(eax_4)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return result
        case 0xf
            goto label_5537f7
        case 0x10
            sub_552c20()
        label_5537f7:
            sub_552ae0()
            char* ecx_23
            ecx_23.b = 1
            sub_54dee0(ecx_23)
            goto label_5538c3
        case 0x11
            sub_552d60()
            goto label_5538c3
        case 0x12
            sub_551840()
            goto label_5538c3
        case 0x13
            sub_5518d0()
            goto label_5538c3
        case 0x14
            sub_5517e0()
            goto label_5538c3
        case 0x15
            sub_551810()
            goto label_5538c3
        case 0x16
            char eax_42
            eax_42, ecx_24 = sub_5531c0()
            int32_t i_4 = 0
            
            if (data_11e705c s> 0)
                bool var_25_1 = eax_42 == 0
                
                do
                    void* eax_43
                    eax_43, ecx_24 = sub_54e110((&data_11e605c)[i_4], nullptr)
                    ecx_24.b = var_25_1
                    i_4 += 1
                    *(eax_43 + 0x45) = ecx_24.b
                while (i_4 s< data_11e705c)
            
        label_55384d:
            ecx_24.b = 1
            sub_54dee0(ecx_24)
            sub_5151c0(data_11e6050)
            sub_5539f0()
            goto label_5538c3
        case 0x17
            char eax_44
            eax_44, ecx_24 = sub_553200()
            int32_t i_5 = 0
            
            if (data_11e705c s> 0)
                bool var_25_2 = eax_44 == 0
                
                do
                    void* eax_45
                    eax_45, ecx_24 = sub_54e110((&data_11e605c)[i_5], nullptr)
                    ecx_24.b = var_25_2
                    i_5 += 1
                    *(eax_45 + 0x44) = ecx_24.b
                while (i_5 s< data_11e705c)
            
            goto label_55384d
    
    sub_489550(eax_9, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\editor\uieditor.cpp", 0x8ed, 
        "DoRClickMenu")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
