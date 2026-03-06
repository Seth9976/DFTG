// 函数名称: sub_4b7480
// 虚拟地址: 0x4b7480
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOLsub_4b7480()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    HMENU hMenu_1 = CreatePopupMenu()
    POINT point
    GetCursorPos(&point)
    HMENU eax_2 = CreatePopupMenu()
    InsertMenuA(eax_2, 0xffffffff, MF_BYPOSITION, 0xa, "Left")
    InsertMenuA(eax_2, 0xffffffff, MF_BYPOSITION, 0xb, &data_5f3964)
    InsertMenuA(eax_2, 0xffffffff, MF_BYPOSITION, 0xc, "Right")
    InsertMenuA(eax_2, 0xffffffff, MF_BYPOSITION, 0xd, "Bottom")
    InsertMenuA(eax_2, 0xffffffff, MF_BYPOSITION, 0xe, "Center Vertically")
    InsertMenuA(eax_2, 0xffffffff, MF_BYPOSITION, 0xf, "Center Horizontally")
    InsertMenuA(eax_2, 0xffffffff, MF_BYPOSITION, 0x10, "Center")
    InsertMenuA(eax_2, 0xffffffff, 0xc00, 0, &data_5b2591)
    InsertMenuA(eax_2, 0xffffffff, MF_BYPOSITION, 0x11, "Tile")
    HMENU eax_3 = CreatePopupMenu()
    InsertMenuA(eax_3, 0xffffffff, MF_BYPOSITION, 0x12, "SizeToSource")
    HMENU hMenu = hMenu_1
    InsertMenuA(hMenu, 0xffffffff, 0x410, eax_2, "Align")
    InsertMenuA(hMenu, 0xffffffff, 0x410, eax_3, "Transform")
    BOOL eax_4 = TrackPopupMenu(hMenu, TPM_RETURNCMD, point.x, point.y, 0, data_1150b8c, nullptr)
    
    if (eax_4 u<= 0x12)
        eax_4 = zx.d(lookup_table_4b7d6c[eax_4])
        void var_80
        int128_t var_60
        int128_t var_50
        float var_40
        int128_t var_30
        
        switch (eax_4)
            case 0
                goto label_4b7cee
            case 1
                if (data_643654 != 0)
                    float xmm0_1 = *(data_114e818 + 0x2c)
                    int32_t i = 0
                    var_60 = *sub_4b7110(&var_50)
                    
                    if (data_643654 s> 0)
                        do
                            char* eax_7 = sub_4a7d60((&data_642654)[i])
                            int32_t edx_1 = sub_498790(&eax_7[0xc], xmm0_1, &var_40)
                            float xmm2_3 = var_60.d - var_40
                            var_30.d = xmm2_3 + var_40
                            float var_38
                            var_30:8.d = xmm2_3 + var_38
                            float var_3c
                            var_30:4.d = var_3c + 0f
                            float var_34
                            var_30:0xc.d = var_34 + 0f
                            var_50 = *sub_4be600(&var_80, edx_1, &var_30, &var_80)
                            sub_4a9f50(&var_50, 0x75, eax_7, &var_50)
                            i += 1
                        while (i s< data_643654)
                        
                        hMenu = hMenu_1
                    
                    sub_4a7e20(1)
                
                goto label_4b7cee
            case 2
                if (data_643654 != 0)
                    float xmm0_10 = *(data_114e818 + 0x2c)
                    int32_t i_1 = 0
                    var_50 = *sub_4b7110(&var_80)
                    
                    if (data_643654 s> 0)
                        do
                            char* eax_13 = sub_4a7d60((&data_642654)[i_1])
                            int32_t edx_2 = sub_498790(&eax_13[0xc], xmm0_10, &var_30)
                            float xmm2_7 = var_50:4.d f- var_30:4.d
                            var_40 = var_30.d + 0f
                            float var_3c_1 = xmm2_7 f+ var_30:4.d
                            float var_34_1 = xmm2_7 f+ var_30:0xc.d
                            float var_38_1 = var_30:8.d + 0f
                            var_60 = *sub_4be600(&var_80, edx_2, &var_40, &var_80)
                            sub_4a9f50(&var_60, 0x75, eax_13, &var_60)
                            i_1 += 1
                        while (i_1 s< data_643654)
                        
                        hMenu = hMenu_1
                    
                    sub_4a7e20(1)
                
                goto label_4b7cee
            case 3
                if (data_643654 != 0)
                    float xmm0_19 = *(data_114e818 + 0x2c)
                    int32_t i_2 = 0
                    var_50 = *sub_4b7110(&var_80)
                    
                    if (data_643654 s> 0)
                        do
                            char* eax_19 = sub_4a7d60((&data_642654)[i_2])
                            int32_t edx_3 = sub_498790(&eax_19[0xc], xmm0_19, &var_30)
                            float xmm2_11 = var_50:8.d f- var_30:8.d
                            float xmm2_12 = xmm2_11 f+ var_30:8.d
                            var_40 = xmm2_11 f+ var_30.d
                            float var_38_2 = xmm2_12
                            float var_3c_2 = var_30:4.d + 0f
                            float var_34_2 = var_30:0xc.d + 0f
                            var_60 = *sub_4be600(&var_80, edx_3, &var_40, &var_80)
                            sub_4a9f50(&var_60, 0x75, eax_19, &var_60)
                            i_2 += 1
                        while (i_2 s< data_643654)
                        
                        hMenu = hMenu_1
                    
                    sub_4a7e20(1)
                
                goto label_4b7cee
            case 4
                if (data_643654 != 0)
                    float xmm0_28 = *(data_114e818 + 0x2c)
                    int32_t i_3 = 0
                    var_50 = *sub_4b7110(&var_80)
                    
                    if (data_643654 s> 0)
                        do
                            char* eax_25 = sub_4a7d60((&data_642654)[i_3])
                            int32_t edx_4 = sub_498790(&eax_25[0xc], xmm0_28, &var_30)
                            float xmm2_15 = var_50:0xc.d f- var_30:0xc.d
                            var_40 = var_30.d + 0f
                            float var_3c_3 = xmm2_15 f+ var_30:4.d
                            float var_34_3 = xmm2_15 f+ var_30:0xc.d
                            float var_38_3 = var_30:8.d + 0f
                            var_60 = *sub_4be600(&var_80, edx_4, &var_40, &var_80)
                            sub_4a9f50(&var_60, 0x75, eax_25, &var_60)
                            i_3 += 1
                        while (i_3 s< data_643654)
                        
                        hMenu = hMenu_1
                    
                    sub_4a7e20(1)
                
                goto label_4b7cee
            case 5
                if (data_643654 != 0)
                    float xmm0_37 = *(data_114e818 + 0x2c)
                    int32_t i_4 = 0
                    var_30 = *sub_4b7110(&var_80)
                    
                    if (data_643654 s> 0)
                        float xmm0_41 = (var_30:4.d f+ var_30:0xc.d) * 0.5f
                        
                        do
                            char* eax_31 = sub_4a7d60((&data_642654)[i_4])
                            int32_t edx_5 = sub_498790(&eax_31[0xc], xmm0_37, &var_30)
                            float xmm2_19 = xmm0_41 - (var_30:4.d f+ var_30:0xc.d) * 0.5f
                            var_40 = var_30.d + 0f
                            float var_3c_4 = xmm2_19 f+ var_30:4.d
                            float var_34_4 = xmm2_19 f+ var_30:0xc.d
                            float var_38_4 = var_30:8.d + 0f
                            var_50 = *sub_4be600(&var_80, edx_5, &var_40, &var_80)
                            sub_4a9f50(&var_50, 0x75, eax_31, &var_50)
                            i_4 += 1
                        while (i_4 s< data_643654)
                        
                        hMenu = hMenu_1
                    
                    sub_4a7e20(1)
                
                goto label_4b7cee
            case 6
                if (data_643654 != 0)
                    float xmm0_52 = *(data_114e818 + 0x2c)
                    int32_t i_5 = 0
                    var_30 = *sub_4b7110(&var_80)
                    
                    if (data_643654 s> 0)
                        float xmm0_56 = (var_30.d f+ var_30:8.d) * 0.5f
                        
                        do
                            char* eax_37 = sub_4a7d60((&data_642654)[i_5])
                            int32_t edx_6 = sub_498790(&eax_37[0xc], xmm0_52, &var_30)
                            float xmm2_23 = xmm0_56 - (var_30.d f+ var_30:8.d) * 0.5f
                            float xmm2_24 = xmm2_23 f+ var_30:8.d
                            var_40 = xmm2_23 f+ var_30.d
                            float var_38_5 = xmm2_24
                            float var_3c_5 = var_30:4.d + 0f
                            float var_34_5 = var_30:0xc.d + 0f
                            var_50 = *sub_4be600(&var_80, edx_6, &var_40, &var_80)
                            sub_4a9f50(&var_50, 0x75, eax_37, &var_50)
                            i_5 += 1
                        while (i_5 s< data_643654)
                        
                        hMenu = hMenu_1
                    
                    sub_4a7e20(1)
                
                goto label_4b7cee
            case 7
                if (data_643654 != 0)
                    float xmm0_67 = *(data_114e818 + 0x2c)
                    int32_t i_6 = 0
                    int32_t i_7 = 0
                    var_30 = *sub_4b7110(&var_80)
                    
                    if (data_643654 s> 0)
                        float xmm0_71 = (var_30.d f+ var_30:8.d) * 0.5f
                        float xmm0_74 = (var_30:4.d f+ var_30:0xc.d) * 0.5f
                        
                        do
                            char* eax_43 = sub_4a7d60((&data_642654)[i_6])
                            sub_498790(&eax_43[0xc], xmm0_67, &var_30)
                            float* eax_44
                            int32_t edx_7
                            eax_44, edx_7 = sub_498790(&eax_43[0xc], xmm0_67, &var_80)
                            float xmm2_28 = xmm0_71 - (eax_44[2] + *eax_44) * 0.5f
                            float xmm1_5 = xmm0_74 - (eax_44[3] + eax_44[1]) * 0.5f
                            float xmm2_29 = xmm2_28 f+ var_30:8.d
                            var_40 = xmm2_28 f+ var_30.d
                            float var_38_6 = xmm2_29
                            float var_3c_6 = xmm1_5 f+ var_30:4.d
                            float var_34_6 = xmm1_5 f+ var_30:0xc.d
                            var_50 = *sub_4be600(&var_60, edx_7, &var_40, &var_60)
                            sub_4a9f50(&var_50, 0x75, eax_43, &var_50)
                            i_6 = i_7 + 1
                            i_7 = i_6
                        while (i_6 s< data_643654)
                    
                    sub_4a7e20(1)
                
                goto label_4b7cee
            case 8
                sub_4b7190()
            label_4b7cee:
                DestroyMenu(hMenu)
                DestroyMenu(eax_2)
                BOOL result = DestroyMenu(eax_3)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return result
            case 9
                sub_4bb290()
                goto label_4b7cee
    
    sub_489550(eax_4, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x3ac1, 
        "UI2DoRClickMenu")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
