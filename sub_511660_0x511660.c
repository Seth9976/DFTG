// 函数名称: sub_511660
// 虚拟地址: 0x511660
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __stdcallsub_511660(HWND arg1, int32_t arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: void var_108
    void var_108
    int32_t eax_1 = __security_cookie ^ &var_108
    int32_t* ecx = data_1151ad8
    
    if (ecx != 0)
        if (ecx[1] != 0x19)
            goto label_5116ad
        
        if (sub_4981f0(ecx) != 0)
        label_5116cc:
            int32_t ecx_1 = data_11510b0
            HWND (__stdcall* const hWnd_5)(HWND hDlg, int32_t nIDDlgItem) = GetDlgItem
            int32_t var_118_1
            char const* const var_114_1
            HWND (__stdcall* const hWnd_4)(HWND hDlg, int32_t nIDDlgItem)
            RECT rect
            char* ecx_2
            int32_t* ecx_4
            
            if (ecx_1 == 0 || arg2 != ecx_1)
                ecx_4 = arg4
            label_511b0f:
                int32_t var_ec
                
                if (arg2 u<= 0x200)
                    if (arg2 == 0x200)
                        bool cond:1 = data_115108d == 0
                        int32_t edi_15 = sx.d((ecx_4 u>> 0x10).w)
                        int32_t hWnd_9 = sx.d(ecx_4.w)
                        hWnd_4 = hWnd_9
                        
                        if (cond:1)
                            sub_50ebb0(hWnd_9, hWnd_9, &hWnd_4, edi_15)
                            HWND (__stdcall* const hWnd_11)(HWND hDlg, int32_t nIDDlgItem) = hWnd_4
                            
                            if (hWnd_11 == 1)
                                data_1151088 = var_ec
                                data_115108c = 0
                            else if (hWnd_11 != 2)
                                data_1151088 = 0xffffffff
                            else
                                data_1151088 = var_ec
                                data_115108c = 1
                        else
                            sub_50f520(hWnd_9, edi_15)
                            int32_t* eax_158 = sub_50ca90()
                            
                            if (eax_158 == 0)
                            label_512f75:
                                sub_489550(eax_158, &data_5b2591, "pNode", 
                                    "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 0x747, 
                                    "EditorMoveNode")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            int32_t esi_31 = data_1151084
                            
                            if (esi_31 s< 0 || esi_31 s>= eax_158[2])
                                goto label_512f75
                            
                            int32_t esi_32 = esi_31 << 4
                            int32_t* esi_33 = esi_32 + *eax_158
                            
                            if (esi_32 == neg.d(*eax_158))
                                goto label_512f75
                            
                            float hWnd_10
                            float edx_33
                            hWnd_10, edx_33 = sub_50d010(hWnd_4, edi_15)
                            bool cond:3_1 = data_115108c != 0
                            float xmm0_1 = edx_33
                            hWnd_4 = hWnd_10
                            
                            if (not(cond:3_1))
                                float xmm1_2 = esi_33[1] f- *esi_33
                                *esi_33 = xmm0_1
                                xmm0_1 = xmm0_1 + xmm1_2
                            
                            esi_33[1] = xmm0_1
                            esi_33[2] = hWnd_4
                            sub_50f6f0()
                            sub_50c600(sub_50db60())
                        
                        GetWindowRect(GetDlgItem(data_1151080, 0x80), &hWnd_4)
                        ScreenToClient(data_1151080, &hWnd_4)
                        POINT point
                        ScreenToClient(data_1151080, &point)
                        int128_t xmm0_3 = hWnd_4.o
                        rect.left = xmm0_3.d
                        rect.top = xmm0_3:4.d
                        rect.right = xmm0_3:8.d
                        rect.bottom = xmm0_3:0xc.d
                        InvalidateRect(data_1151080, &rect, 0)
                        @__security_check_cookie@4(eax_1 ^ &var_108)
                        return 0
                    
                    if (arg2 == 0x110)
                        hWnd_5 = MakeDragList(GetDlgItem(arg1, 0x76))
                        
                        if (hWnd_5 != 0)
                            data_11510b0 = RegisterWindowMessageA("commctrl_DragListMsg")
                            @__security_check_cookie@4(eax_1 ^ &var_108)
                            return 0
                        
                        var_114_1 = "ParamsDialogWndProc"
                        var_118_1 = 0xc8b
                        ecx_2 = "result"
                        goto label_512fa7
                    
                    void var_b8
                    
                    if (arg2 == 0xf)
                        sub_50f9e0(BeginPaint(arg1, &var_b8))
                        EndPaint(arg1, &var_b8)
                        @__security_check_cookie@4(eax_1 ^ &var_108)
                        return 0
                    
                    if (arg2 == 0x7b)
                        HWND eax_28 = GetDlgItem(data_1151080, 0x76)
                        
                        if (arg3 == eax_28)
                            int32_t pt = sx.d(arg4.w)
                            int32_t y = sx.d((arg4 u>> 0x10).w)
                            rect.left = pt
                            HMENU hMenu = CreatePopupMenu()
                            int32_t y_1 = y
                            int32_t hWnd_6 = LBItemFromPt(eax_28, pt, 0)
                            hWnd_4 = hWnd_6
                            HMENU hMenu_1
                            
                            if (hWnd_6 == 0xffffffff)
                                SendMessageA(eax_28, 0x186, 0xffffffff, 0)
                                SendMessageA(GetDlgItem(data_1151080, 0x7b), 0x184, 0, 0)
                                sub_50db60()
                                sub_50d680()
                                sub_50d910(sub_50d840())
                                sub_50da90()
                                hMenu_1 = hMenu
                                InsertMenuA(hMenu_1, 0xffffffff, MF_BYPOSITION, 0xa0, "Add Root")
                            else
                                sub_50f800()
                                int32_t eax_31 = sub_50d180(hWnd_6)
                                int32_t edi_4 = hWnd_6 - 1
                                
                                if (hWnd_6 - 1 s< 0)
                                label_511bc2:
                                    edi_4 = 0xffffffff
                                else
                                    while (true)
                                        int32_t eax_32 = sub_50d180(edi_4)
                                        
                                        if (eax_32 s< eax_31)
                                            goto label_511bc2
                                        
                                        if (eax_32 == eax_31)
                                            break
                                        
                                        int32_t temp7_1 = edi_4
                                        edi_4 -= 1
                                        
                                        if (temp7_1 - 1 s< 0)
                                            goto label_511bc2
                                
                                HWND (__stdcall* hWnd_12)(HWND hDlg, int32_t nIDDlgItem)
                                hWnd_12.b = sub_50d310(hWnd_4) == 0xffffffff
                                hWnd_4 = hWnd_12
                                InsertMenuA(hMenu, 0xffffffff, MF_BYPOSITION, 0xa0, "Add Child")
                                InsertMenuA(hMenu, 0xffffffff, MF_BYPOSITION, 0xa1, "Add Sibling")
                                hMenu_1 = hMenu
                                int32_t eax_34
                                eax_34.b = edi_4 == 0xffffffff
                                InsertMenuA(hMenu_1, 0xffffffff, eax_34 + 0x400, 0xa3, 
                                    "Sibling Order Up")
                                InsertMenuA(hMenu_1, 0xffffffff, hWnd_4 | 0x400, 0xa4, 
                                    "Sibling Order Down")
                                InsertMenuA(hMenu_1, 0xffffffff, MF_BYPOSITION, 0xa5, "Delete")
                                InsertMenuA(hMenu_1, 0xffffffff, MF_BYPOSITION, 0xa6, "Duplicate")
                                InsertMenuA(hMenu_1, 0xffffffff, 0xc00, 0, &data_5b2591)
                                InsertMenuA(hMenu_1, 0xffffffff, MF_BYPOSITION, 0xa7, "Hide")
                                InsertMenuA(hMenu_1, 0xffffffff, MF_BYPOSITION, 0xa8, "Show")
                            
                            TrackPopupMenu(hMenu_1, TPM_LEFTBUTTON, rect.left, y, 0, arg1, nullptr)
                            @__security_check_cookie@4(eax_1 ^ &var_108)
                            return 0
                    
                    if (arg2 == 0x111)
                        uint32_t esi_13 = zx.d(arg3.w)
                        uint32_t edi_5 = arg3 u>> 0x10
                        
                        if (edi_5 == 1 && (esi_13 == 0x76 || esi_13 == 0x7b))
                            sub_50f800()
                            data_1151084 = 0
                            @__security_check_cookie@4(eax_1 ^ &var_108)
                            return 0
                        
                        if (esi_13 == 0x81 || esi_13 == 0x82 || esi_13 == 0x83 || esi_13 == 0x96)
                            if (edi_5 == 0x300)
                                ecx_4 = sub_50fad0()
                            else if (edi_5 == 0x200)
                                ecx_4 = 0xffffffff
                                sub_50f800()
                        
                        if ((esi_13 == 0x90 || esi_13 == 0x91) && edi_5 == 1)
                            ecx_4 = sub_50fad0()
                        
                        if (esi_13 != 0x97 && esi_13 != 0x98)
                            if (edi_5 == 0)
                                goto label_511eeb
                            
                            goto label_511e87
                        
                        LRESULT eax_46
                        void* ecx_92
                        void* edi_11
                        bool cond:11_1
                        
                        if (edi_5 != 0)
                        label_511e87:
                            
                            if (edi_5 != 2)
                                if (edi_5 == 0)
                                label_512564:
                                    
                                    if (esi_13 == 0x8e)
                                        sub_5175f0(ecx_4)
                                        @__security_check_cookie@4(eax_1 ^ &var_108)
                                        return 0
                                    
                                    if (esi_13 != 0x8f)
                                        goto label_512834
                                    
                                    sub_517940(ecx_4)
                                    @__security_check_cookie@4(eax_1 ^ &var_108)
                                    return 0
                                
                                int32_t top_1
                                char* left
                                HWND (__stdcall* const hWnd_14)(HWND hDlg, int32_t nIDDlgItem)
                                LRESULT esi_22
                                
                                if (edi_5 == 1)
                                    if (esi_13 != 0x8c)
                                        goto label_512834
                                    
                                    int32_t* ecx_108 = data_1151ad8
                                    
                                    if (ecx_108 == 0 || ecx_108[1] != 0x19)
                                        esi_22 = 0
                                    else if (sub_4981f0(ecx_108) == 0)
                                        esi_22 = 0
                                    else
                                        HWND hWnd_1 = GetDlgItem(data_1151080, 0x7b)
                                        hWnd_4 = hWnd_1
                                        LRESULT wParam_1 = SendMessageA(hWnd_1, 0x188, 0, 0)
                                        
                                        if (wParam_1 == 0xffffffff)
                                            esi_22 = 0
                                        else
                                            esi_22 = SendMessageA(hWnd_4, 0x199, wParam_1, 0)
                                    
                                    hWnd_5 = sub_50c7a0()
                                    hWnd_4 = hWnd_5
                                    
                                    if (hWnd_5 == 0)
                                        var_114_1 = "EditorSetBool"
                                        var_118_1 = 0xa80
                                        ecx_2 = "pEmitter"
                                        goto label_512fa7
                                    
                                    int32_t top
                                    
                                    if (SendMessageA(GetDlgItem(data_1151080, 0x8c), 0x188, 0, 0) != 0)
                                        rect.left = 0
                                        rect.top = 0
                                        top = rect.top
                                        left = rect.left
                                    else
                                        left = 1
                                        top = 0
                                    
                                    hWnd_14 = hWnd_4
                                    top_1 = top
                                    goto label_512695
                                
                                if (edi_5 != 0x300)
                                    goto label_512834
                                
                                if (esi_13 != 0x93)
                                    if (esi_13 != 0x94)
                                        goto label_512834
                                    
                                    int32_t* ecx_114 = data_1151ad8
                                    
                                    if (ecx_114 == 0 || ecx_114[1] != 0x19)
                                        esi_22 = 0
                                    else if (sub_4981f0(ecx_114) == 0)
                                        esi_22 = 0
                                    else
                                        HWND hWnd_3 = GetDlgItem(data_1151080, 0x7b)
                                        WPARAM wParam_3 = SendMessageA(hWnd_3, 0x188, 0, 0)
                                        
                                        if (wParam_3 == 0xffffffff)
                                            esi_22 = 0
                                        else
                                            esi_22 = SendMessageA(hWnd_3, 0x199, wParam_3, 0)
                                    
                                    HWND (__stdcall* hWnd_17)(HWND hDlg, int32_t nIDDlgItem) =
                                        sub_50c7a0()
                                    
                                    if (hWnd_17 != 0)
                                        void string
                                        GetDlgItemTextA(data_1151080, 0x94, &string, 0x50)
                                        int32_t top_3
                                        top_3:left = sx.q(__atoi64(&string))
                                        top_1 = top_3
                                        hWnd_14 = hWnd_17
                                        goto label_512695
                                    
                                    sub_489550(hWnd_17, &data_5b2591, "pEmitter", 
                                        "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 0xaa7, 
                                        "EditorSetInt")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_489700()
                                    noreturn
                                
                                int32_t* ecx_112 = data_1151ad8
                                
                                if (ecx_112 == 0 || ecx_112[1] != 0x19)
                                    esi_22 = 0
                                else if (sub_4981f0(ecx_112) == 0)
                                    esi_22 = 0
                                else
                                    HWND hWnd_2 = GetDlgItem(data_1151080, 0x7b)
                                    WPARAM wParam_2 = SendMessageA(hWnd_2, 0x188, 0, 0)
                                    
                                    if (wParam_2 == 0xffffffff)
                                        esi_22 = 0
                                    else
                                        esi_22 = SendMessageA(hWnd_2, 0x199, wParam_2, 0)
                                
                                int32_t* hWnd_16 = sub_50c7a0()
                                
                                if (hWnd_16 == 0)
                                    sub_489550(hWnd_16, &data_5b2591, "pEmitter", 
                                        "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 0xa94, 
                                        "EditorSetString")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_489700()
                                    noreturn
                                
                                char* eax_116 = sub_4f0df0(
                                    GetDlgItemTextA(data_1151080, 0x93, &var_b8, 0x50), hWnd_16, 
                                    &data_626728, esi_22)
                                void* ecx_113 = &var_b8
                                int32_t eax_118
                                
                                while (true)
                                    char edx_25 = *eax_116
                                    char temp9_1 = *ecx_113
                                    bool c_1 = edx_25 u< temp9_1
                                    
                                    if (edx_25 == temp9_1)
                                        if (edx_25 == 0)
                                            eax_118 = 0
                                            break
                                        
                                        edx_25 = eax_116[1]
                                        char temp11_1 = *(ecx_113 + 1)
                                        c_1 = edx_25 u< temp11_1
                                        
                                        if (edx_25 == temp11_1)
                                            eax_116 = &eax_116[2]
                                            ecx_113 += 2
                                            
                                            if (edx_25 != 0)
                                                continue
                                            
                                            eax_118 = 0
                                            break
                                    
                                    eax_118 = sbb.d(eax_116, eax_116, c_1) | 1
                                    break
                                
                                if (eax_118 != 0)
                                    int32_t top_2
                                    top_2:left = &var_b8
                                    top_1 = top_2
                                    hWnd_14 = hWnd_16
                                label_512695:
                                    sub_50c600(sub_4f0910(left, hWnd_14, &data_626728, esi_22, left, 
                                        top_1))
                                    @__security_check_cookie@4(eax_1 ^ &var_108)
                                    return 0
                            else if (esi_13 != 0x7b)
                            label_512834:
                                
                                if (esi_13 == 0xa0)
                                    ecx_4.b = 1
                                    sub_5110a0(ecx_4.b)
                                    @__security_check_cookie@4(eax_1 ^ &var_108)
                                    return 0
                                
                                if (esi_13 == 0xa1)
                                    ecx_4.b = 0
                                    sub_5110a0(ecx_4.b)
                                    @__security_check_cookie@4(eax_1 ^ &var_108)
                                    return 0
                                
                                if (esi_13 == 0xa3)
                                    int32_t* ecx_119 = data_1151ad8
                                    
                                    if (ecx_119 != 0 && ecx_119[1] == 0x19)
                                        int32_t* eax_124 = sub_4981f0(ecx_119)
                                        
                                        if (eax_124 != 0)
                                            LRESULT eax_126 = SendMessageA(
                                                GetDlgItem(data_1151080, 0x76), 0x188, 0, 0)
                                            rect.left = eax_126
                                            
                                            if (eax_126 != 0xffffffff)
                                                edi_11 = eax_126 - 1
                                                hWnd_4 = sub_50d180(eax_126)
                                                void* var_dc_1 = edi_11
                                                
                                                if (edi_11 s>= 0)
                                                    while (true)
                                                        int32_t eax_128 = sub_50d180(edi_11)
                                                        HWND (__stdcall* const hWnd_15)(HWND hDlg, 
                                                            int32_t nIDDlgItem) = hWnd_4
                                                        
                                                        if (eax_128 s< hWnd_15)
                                                            goto label_512eed
                                                        
                                                        if (eax_128 == hWnd_15)
                                                            break
                                                        
                                                        void* temp13_1 = edi_11
                                                        edi_11 -= 1
                                                        var_dc_1 = edi_11
                                                        
                                                        if (temp13_1 - 1 s< 0)
                                                            @__security_check_cookie@4(eax_1 ^ &var_108)
                                                            return 0
                                                    
                                                    if (edi_11 != 0xffffffff)
                                                        int32_t eax_130
                                                        eax_130, ecx_92 = sub_50d280(eax_126)
                                                        int32_t i_5 = eax_130 + 1
                                                        
                                                        if (eax_130 + 1 s> 0)
                                                            int32_t left_2 = rect.left
                                                            HWND (__stdcall* const hWnd_7)(HWND hDlg, 
                                                                int32_t nIDDlgItem) = edi_11 - left_2
                                                            hWnd_4 = hWnd_7
                                                            int32_t i
                                                            
                                                            do
                                                                void* esi_26 = hWnd_7 + left_2
                                                                int32_t* eax_133 =
                                                                    sub_4cf8e0(data_12bad08, 0)
                                                                sub_518b90(eax_133, eax_133, eax_124, 
                                                                    left_2, esi_26)
                                                                ecx_92 = sub_510860(left_2, esi_26)
                                                                hWnd_7 = hWnd_4
                                                                left_2 += 1
                                                                i = i_5
                                                                i_5 -= 1
                                                            while (i != 1)
                                                            edi_11 = var_dc_1
                                                        
                                                        goto label_512413
                                else if (esi_13 == 0xa4)
                                    int32_t* ecx_128 = data_1151ad8
                                    
                                    if (ecx_128 != 0 && ecx_128[1] == 0x19)
                                        int32_t eax_134 = sub_4981f0(ecx_128)
                                        rect.left = eax_134
                                        
                                        if (eax_134 != 0)
                                            LRESULT eax_136 = SendMessageA(
                                                GetDlgItem(data_1151080, 0x76), 0x188, 0, 0)
                                            
                                            if (eax_136 != 0xffffffff)
                                                HWND (__stdcall* hWnd_8)(HWND hDlg, 
                                                    int32_t nIDDlgItem) = sub_50d310(eax_136)
                                                hWnd_4 = hWnd_8
                                                
                                                if (hWnd_8 != 0xffffffff)
                                                    void* esi_28 = sub_50d280(hWnd_8) + hWnd_4
                                                    void* eax_138
                                                    eax_138, ecx_92 = sub_50d280(eax_136)
                                                    HWND (__stdcall* const eax_139)(HWND hDlg, 
                                                        int32_t nIDDlgItem) = eax_138 + 1
                                                    hWnd_4 = eax_139
                                                    
                                                    if (eax_139 s> 0)
                                                        HWND (__stdcall* const i_6)(HWND hDlg, 
                                                            int32_t nIDDlgItem) = eax_139
                                                        HWND (__stdcall* const i_1)(HWND hDlg, 
                                                            int32_t nIDDlgItem)
                                                        
                                                        do
                                                            int32_t* eax_140 =
                                                                sub_4cf8e0(data_12bad08, 0)
                                                            sub_518b90(eax_140, eax_140, rect.left, 
                                                                eax_136, esi_28)
                                                            ecx_92 = sub_510860(eax_136, esi_28)
                                                            i_1 = i_6
                                                            i_6 -= 1
                                                        while (i_1 != 1)
                                                        eax_139 = hWnd_4
                                                    
                                                    void* esi_29 = esi_28 - eax_139
                                                    void* eax_141 = data_1151ad8
                                                    
                                                    if (eax_141 == 0)
                                                        goto label_512b60
                                                    
                                                    int32_t eax_142 = *(eax_141 + 4)
                                                    
                                                    if (eax_142 == 0x19)
                                                        ecx_92 = esi_29 + 1
                                                    label_512432:
                                                        sub_50c600(sub_50e390(ecx_92, 0xffffffff))
                                                        sub_546950()
                                                        sub_546800()
                                                        @__security_check_cookie@4(eax_1 ^ &var_108)
                                                        return 0
                                                    
                                                    if (eax_142 != 0x1b)
                                                        goto label_512b60
                                                    
                                                    ecx_92 = esi_29 + 1
                                                label_512b5b:
                                                    ecx_92 = sub_50e950(ecx_92)
                                                label_512b60:
                                                    sub_50c600(ecx_92)
                                                    sub_546950()
                                                    sub_546800()
                                                    @__security_check_cookie@4(eax_1 ^ &var_108)
                                                    return 0
                                else if (esi_13 != 0xa5)
                                    if (esi_13 == 0xa6)
                                        sub_5112c0()
                                        @__security_check_cookie@4(eax_1 ^ &var_108)
                                        return 0
                                    
                                    if (esi_13 == 0xa7)
                                        ecx_4.b = 1
                                        sub_5115d0(ecx_4)
                                        @__security_check_cookie@4(eax_1 ^ &var_108)
                                        return 0
                                    
                                    if (esi_13 == 0xa8)
                                        ecx_4.b = 0
                                        sub_5115d0(ecx_4)
                                        @__security_check_cookie@4(eax_1 ^ &var_108)
                                        return 0
                                else
                                    int32_t* ecx_135 = data_1151ad8
                                    
                                    if (ecx_135 != 0 && ecx_135[1] == 0x19)
                                        void* eax_143 = sub_4981f0(ecx_135)
                                        
                                        if (eax_143 != 0)
                                            LRESULT eax_145 = SendMessageA(
                                                GetDlgItem(data_1151080, 0x76), 0x188, 0, 0)
                                            
                                            if (eax_145 != 0xffffffff)
                                                int32_t i_8 = sub_50d280(eax_145) + 1
                                                
                                                if (i_8 s> 0)
                                                    int32_t i_2
                                                    
                                                    do
                                                        int32_t* eax_147 = sub_4cf8e0(data_12bad08, 0)
                                                        sub_518ab0(eax_147, eax_147, eax_143, eax_145, 
                                                            0)
                                                        sub_5107f0(eax_145)
                                                        i_2 = i_8
                                                        i_8 -= 1
                                                    while (i_2 != 1)
                                                
                                                ecx_92 = 0xffffffff
                                                int32_t eax_149 = *(eax_143 + 8)
                                                
                                                if (eax_145 == eax_149 && eax_149 s> 0)
                                                    ecx_92 = eax_145 - 1
                                                
                                                void* eax_150 = data_1151ad8
                                                
                                                if (eax_150 == 0)
                                                    goto label_512b60
                                                
                                                int32_t eax_151 = *(eax_150 + 4)
                                                
                                                if (eax_151 == 0x19)
                                                    goto label_512432
                                                
                                                if (eax_151 != 0x1b)
                                                    goto label_512b60
                                                
                                                goto label_512b5b
                            else
                                eax_46 = sub_50c830()
                                
                                if (eax_46 == 5 || eax_46 == 0x4a)
                                label_511ec5:
                                    sub_510b70()
                                    @__security_check_cookie@4(eax_1 ^ &var_108)
                                    return 0
                                
                                cond:11_1 = eax_46 == 8
                            label_511eab:
                                
                                if (cond:11_1 || eax_46 == 9 || eax_46 == 0xa || eax_46 == 0xb
                                        || eax_46 == 0x4c)
                                    goto label_511ec5
                        else
                            ecx_4 = sub_50fad0()
                        label_511eeb:
                            
                            if (esi_13 == 0x7c)
                                DialogBoxParamA(GetModuleHandleA(nullptr), 0x84, data_11518c4, 
                                    sub_50ff10, 0)
                                @__security_check_cookie@4(eax_1 ^ &var_108)
                                return 0
                            
                            if (esi_13 == 0x7d)
                                HWND hWnd = GetDlgItem(data_1151080, 0x7b)
                                hWnd_4 = hWnd
                                WPARAM wParam = SendMessageA(hWnd, 0x188, 0, 0)
                                
                                if (wParam != 0xffffffff)
                                    int32_t* eax_50 = sub_50c7a0()
                                    LRESULT eax_51 = SendMessageA(hWnd_4, 0x199, wParam, 0)
                                    char* ecx_51 = sub_4f0b40(eax_51, eax_50, &data_626728, eax_51)
                                    int32_t eax_52 = *eax_50
                                    LRESULT edx_9 = 0xffffffff
                                    
                                    if (wParam == eax_52 && eax_52 s> 0)
                                        edx_9 = wParam - 1
                                    
                                    void* eax_53 = data_1151ad8
                                    
                                    if (eax_53 != 0)
                                        int32_t eax_54 = *(eax_53 + 4)
                                        
                                        if (eax_54 == 0x19)
                                            char* ecx_52 = sub_50e390(0xffffffff, edx_9)
                                            data_1151084 = 0
                                            sub_50c600(ecx_52)
                                            @__security_check_cookie@4(eax_1 ^ &var_108)
                                            return 0
                                        
                                        if (eax_54 == 0x1b)
                                            ecx_51 = sub_50e950(0xffffffff)
                                    
                                    data_1151084 = 0
                                    sub_50c600(ecx_51)
                                    @__security_check_cookie@4(eax_1 ^ &var_108)
                                    return 0
                            else
                                int32_t eax_63
                                char* ecx_59
                                
                                if (esi_13 == 0x7e)
                                    LRESULT eax_58 =
                                        SendMessageA(GetDlgItem(data_1151080, 0x7b), 0x188, 0, 0)
                                    
                                    if (eax_58 != 0xffffffff && eax_58 != 0)
                                        int32_t* eax_59 = sub_50c7a0()
                                        int32_t* eax_61 = sub_4cf8e0(data_12bac50, 8)
                                        ecx_59 = sub_518b90(eax_61, eax_61, eax_59, eax_58, eax_58 - 1)
                                        void* eax_62 = data_1151ad8
                                        
                                        if (eax_62 == 0)
                                            goto label_512160
                                        
                                        eax_63 = *(eax_62 + 4)
                                        
                                        if (eax_63 == 0x19)
                                            sub_50c600(sub_50e390(0xffffffff, eax_58 - 1))
                                            @__security_check_cookie@4(eax_1 ^ &var_108)
                                            return 0
                                        
                                    label_512153:
                                        
                                        if (eax_63 != 0x1b)
                                            goto label_512160
                                        
                                        ecx_59 = sub_50e950(0xffffffff)
                                    label_512160:
                                        sub_50c600(ecx_59)
                                        @__security_check_cookie@4(eax_1 ^ &var_108)
                                        return 0
                                else if (esi_13 != 0x7f)
                                    if (esi_13 == 0x77)
                                        sub_510920()
                                        @__security_check_cookie@4(eax_1 ^ &var_108)
                                        return 0
                                    
                                    LRESULT left_1
                                    
                                    if (esi_13 == 0x8d)
                                        LRESULT eax_75 =
                                            SendMessageA(GetDlgItem(data_1151080, 0x76), 0x188, 0, 0)
                                        
                                        if (eax_75 != 0xffffffff)
                                            int32_t* ecx_74 = data_1151ad8
                                            LRESULT esi_17 = eax_75 + 1
                                            int32_t* var_f8_3
                                            
                                            if (ecx_74 == 0 || ecx_74[1] != 0x19)
                                                var_f8_3 = nullptr
                                            else
                                                int32_t* eax_76
                                                eax_76, ecx_74 = sub_4981f0(ecx_74)
                                                var_f8_3 = eax_76
                                            
                                            int32_t* var_118_18 = ecx_74
                                            int32_t* eax_77 = sub_4cf8e0(data_12bad08, 0)
                                            sub_518870(eax_77, eax_77, var_f8_3, esi_17)
                                            sub_510770(esi_17)
                                            int32_t eax_78 = *var_f8_3
                                            int32_t i_3 = 0
                                            hWnd_4 = esi_17 * 0x168 + eax_78
                                            left_1 = eax_75 * 0x168 + eax_78
                                            rect.left = left_1
                                            
                                            if (*left_1 s> 0)
                                                int32_t esi_18 = 0
                                                
                                                do
                                                    int32_t* ecx_80 = *(left_1 + 8)
                                                    char* eax_80
                                                    int32_t edx_17
                                                    edx_17:eax_80 = sx.q(*(ecx_80 + esi_18 + 8))
                                                    sub_4f0910(eax_80, hWnd_4, &data_626728, 
                                                        *(ecx_80 + esi_18), eax_80, edx_17)
                                                    left_1 = rect.left
                                                    esi_18 += 0x10
                                                    i_3 += 1
                                                while (i_3 s< *left_1)
                                            
                                            void* eax_81 = data_1151ad8
                                            
                                            if (eax_81 == 0)
                                                goto label_51235a
                                            
                                            int32_t eax_82 = *(eax_81 + 4)
                                            
                                            if (eax_82 != 0x19)
                                                if (eax_82 != 0x1b)
                                                    goto label_51235a
                                                
                                                left_1 = sub_50e950(esi_17)
                                                goto label_51235a
                                            
                                            left_1 = sub_50e390(esi_17, 0xffffffff)
                                        label_51235a:
                                            data_1151084 = 0
                                            sub_50c600(left_1)
                                            sub_546950()
                                            sub_546800()
                                            @__security_check_cookie@4(eax_1 ^ &var_108)
                                            return 0
                                    else if (esi_13 == 0x78)
                                        LRESULT eax_84 =
                                            SendMessageA(GetDlgItem(data_1151080, 0x76), 0x188, 0, 0)
                                        
                                        if (eax_84 != 0xffffffff)
                                            int32_t* ecx_82 = data_1151ad8
                                            void* const edi_10
                                            
                                            if (ecx_82 == 0 || ecx_82[1] != 0x19)
                                                edi_10 = nullptr
                                            else
                                                edi_10 = sub_4981f0(ecx_82)
                                            
                                            int32_t* eax_86 = sub_4cf8e0(data_12bad08, 0)
                                            sub_518ab0(eax_86, eax_86, edi_10, eax_84, 0)
                                            sub_5107f0(eax_84)
                                            int32_t eax_87 = *(edi_10 + 8)
                                            left_1 = 0xffffffff
                                            
                                            if (eax_84 == eax_87 && eax_87 s> 0)
                                                left_1 = eax_84 - 1
                                            
                                            void* eax_88 = data_1151ad8
                                            
                                            if (eax_88 == 0)
                                                goto label_51235a
                                            
                                            int32_t eax_89 = *(eax_88 + 4)
                                            
                                            if (eax_89 == 0x19)
                                                left_1 = sub_50e390(left_1, 0xffffffff)
                                                goto label_51235a
                                            
                                            if (eax_89 != 0x1b)
                                                goto label_51235a
                                            
                                            left_1 = sub_50e950(left_1)
                                            goto label_51235a
                                    else
                                        int32_t eax_96
                                        
                                        if (esi_13 != 0x79)
                                            if (esi_13 != 0x7a)
                                                if (esi_13 != 0x88)
                                                    goto label_512564
                                                
                                                eax_46 = sub_50c830()
                                                
                                                if (eax_46 == 5 || eax_46 == 8)
                                                    goto label_511ec5
                                                
                                                cond:11_1 = eax_46 == 0x4a
                                                goto label_511eab
                                            
                                            LRESULT eax_99 = SendMessageA(
                                                GetDlgItem(data_1151080, 0x76), 0x188, 0, 0)
                                            int32_t* ecx_96 = data_1151ad8
                                            int32_t* eax_100
                                            
                                            if (ecx_96 == 0 || ecx_96[1] != 0x19)
                                                eax_100 = nullptr
                                            else
                                                eax_100 = sub_4981f0(ecx_96)
                                            
                                            if (eax_99 != 0xffffffff && eax_99 != eax_100[2] - 1)
                                                edi_11 = eax_99 + 1
                                                int32_t* eax_103 = sub_4cf8e0(data_12bad08, 0)
                                                sub_518b90(eax_103, eax_103, eax_100, eax_99, edi_11)
                                                ecx_92 = sub_510860(eax_99, edi_11)
                                                void* eax_104 = data_1151ad8
                                                
                                                if (eax_104 == 0)
                                                    goto label_512b60
                                                
                                                eax_96 = *(eax_104 + 4)
                                                
                                                if (eax_96 != 0x19)
                                                    goto label_512459
                                                
                                                sub_50c600(sub_50e390(edi_11, 0xffffffff))
                                                sub_546950()
                                                sub_546800()
                                                @__security_check_cookie@4(eax_1 ^ &var_108)
                                                return 0
                                        else
                                            LRESULT eax_92 = SendMessageA(
                                                GetDlgItem(data_1151080, 0x76), 0x188, 0, 0)
                                            int32_t* ecx_88 = data_1151ad8
                                            int32_t* var_fc_3
                                            
                                            if (ecx_88 == 0 || ecx_88[1] != 0x19)
                                                var_fc_3 = nullptr
                                            else
                                                var_fc_3 = sub_4981f0(ecx_88)
                                            
                                            if (eax_92 != 0xffffffff && eax_92 != 0)
                                                edi_11 = eax_92 - 1
                                                int32_t* eax_94 = sub_4cf8e0(data_12bad08, 0)
                                                sub_518b90(eax_94, eax_94, var_fc_3, eax_92, edi_11)
                                                ecx_92 = sub_510860(eax_92, edi_11)
                                            label_512413:
                                                void* eax_95 = data_1151ad8
                                                
                                                if (eax_95 == 0)
                                                    goto label_512b60
                                                
                                                eax_96 = *(eax_95 + 4)
                                                
                                                if (eax_96 == 0x19)
                                                    ecx_92 = edi_11
                                                    goto label_512432
                                                
                                            label_512459:
                                                
                                                if (eax_96 != 0x1b)
                                                    goto label_512b60
                                                
                                                ecx_92 = edi_11
                                                goto label_512b5b
                                else
                                    LRESULT eax_66 =
                                        SendMessageA(GetDlgItem(data_1151080, 0x7b), 0x188, 0, 0)
                                    int32_t* eax_67 = sub_50c7a0()
                                    
                                    if (eax_66 != 0xffffffff && eax_66 != *eax_67 - 1)
                                        int32_t* eax_69 = sub_4cf8e0(data_12bac50, 8)
                                        ecx_59 = sub_518b90(eax_69, eax_69, eax_67, eax_66, eax_66 + 1)
                                        void* eax_70 = data_1151ad8
                                        
                                        if (eax_70 == 0)
                                            goto label_512160
                                        
                                        eax_63 = *(eax_70 + 4)
                                        
                                        if (eax_63 != 0x19)
                                            goto label_512153
                                        
                                        sub_50c600(sub_50e390(0xffffffff, eax_66 + 1))
                                        @__security_check_cookie@4(eax_1 ^ &var_108)
                                        return 0
                else if (arg2 == 0x201)
                    sub_50f830(sx.d(ecx_4.w), sx.d((ecx_4 u>> 0x10).w))
                else
                    if (arg2 == 0x202)
                        if (data_115108d != 0)
                            data_115108d = 0
                            sub_50cbd0(&data_1151094, &data_1151090)
                            void* eax_173 = data_1151ad8
                            
                            if (eax_173 != 0)
                                int32_t eax_174 = *(eax_173 + 4)
                                
                                if (eax_174 == 0x19)
                                    sub_50e390(0xffffffff, 0xffffffff)
                                    ReleaseCapture()
                                    @__security_check_cookie@4(eax_1 ^ &var_108)
                                    return 0
                                
                                if (eax_174 == 0x1b)
                                    sub_50e950(0xffffffff)
                        
                        ReleaseCapture()
                        @__security_check_cookie@4(eax_1 ^ &var_108)
                        return 0
                    
                    if (arg2 == 0x204)
                        int32_t eax_165 = sx.d((ecx_4 u>> 0x10).w)
                        sub_50ebb0(eax_165, sx.d(ecx_4.w), &hWnd_4, eax_165)
                        
                        if (hWnd_4 == 1)
                            hWnd_5 = sub_50ca90()
                            
                            if (hWnd_5 == 0)
                                var_114_1 = "EditorRightButtonDown"
                                var_118_1 = 0x72e
                                ecx_2 = "pTrack"
                                goto label_512fa7
                            
                            if (*(hWnd_5 + 8) != 1)
                                int32_t* eax_166 = sub_4cf8e0(data_12bad4c, 0)
                                char* ecx_157 =
                                    sub_518ab0(eax_166, eax_166, hWnd_5, var_ec, arg2 - 0x204)
                                int32_t eax_167 = data_1151084
                                
                                if (eax_167 s> var_ec)
                                    data_1151084 = eax_167 - 1
                                
                                void* eax_169 = data_1151ad8
                                
                                if (eax_169 != 0)
                                    int32_t eax_170 = *(eax_169 + 4)
                                    
                                    if (eax_170 == 0x19)
                                        sub_50c600(sub_50e390(0xffffffff, 0xffffffff))
                                        @__security_check_cookie@4(eax_1 ^ &var_108)
                                        return 0
                                    
                                    if (eax_170 == 0x1b)
                                        ecx_157 = sub_50e950(0xffffffff)
                                
                                sub_50c600(ecx_157)
                                @__security_check_cookie@4(eax_1 ^ &var_108)
                                return 0
            else
                if (arg3 != 0x76)
                    var_114_1 = "ParamsDialogWndProc"
                    var_118_1 = 0xc52
                    ecx_2 = "wParam == IDC_EMITTER_LIST"
                label_512fa7:
                    sub_489550(hWnd_5, &data_5b2591, ecx_2, 
                        "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", var_118_1, var_114_1)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                HWND hLB = GetDlgItem(data_1151080, 0x76)
                int32_t var_118_3 = arg4[3]
                int32_t eax_6 = LBItemFromPt(hLB, arg4[2], 1)
                ecx_4 = arg4
                int32_t edx_1 = *ecx_4
                
                if (edx_1 != 0x485)
                    if (edx_1 == 0x486)
                        if (sub_511280(eax_6) != 0)
                            if (arg2 != 0x132 && arg2 != 0x133 && arg2 != 0x134 && arg2 != 0x135
                                    && arg2 != 0x136 && arg2 != 0x137 && arg2 != 0x138 && arg2 != 0x39
                                    && arg2 != 0x2e && arg2 != 0x2f && arg2 != 0x37 && arg2 != 0x110)
                                SetWindowLongA(arg1, 0, 2)
                            
                            @__security_check_cookie@4(eax_1 ^ &var_108)
                            return 2
                        
                        goto label_5117fc
                    
                    if (edx_1 != 0x487)
                        if (edx_1 != 0x488)
                            goto label_511b0f
                        
                        data_11510b4 = 0
                        @__security_check_cookie@4(eax_1 ^ &var_108)
                        return 1
                    
                    if (sub_511280(eax_6) != 0)
                        int32_t* ecx_13 = data_1151ad8
                        void* esi_5 = data_11510b8
                        
                        if (ecx_13 != 0 && ecx_13[1] == 0x19)
                            int32_t eax_12 = sub_4981f0(ecx_13)
                            rect.left = eax_12
                            
                            if (eax_12 != 0)
                                int32_t eax_13 = sub_50d180(esi_5)
                                void* esi_7 = esi_5
                                int32_t eax_15 = sub_50d180(eax_6) + 1 - eax_13
                                char* i_9 = sub_50d280(esi_7) + 1
                                
                                if (i_9 s> 0)
                                    int32_t eax_17 = eax_6 + 1
                                    HWND (__stdcall* hWnd_13)(HWND hDlg, int32_t nIDDlgItem) =
                                        esi_7 - (eax_6 + 1)
                                    int32_t var_d4_1 = eax_17
                                    hWnd_4 = hWnd_13
                                    char* i_7 = i_9
                                    char* i_4
                                    
                                    do
                                        int32_t var_f8_1
                                        
                                        if (esi_7 s<= eax_6)
                                            var_f8_1 = eax_6
                                        else
                                            esi_7 = hWnd_13 + eax_17
                                            var_f8_1 = eax_17
                                        
                                        sub_50d200(esi_7, sub_50d180(esi_7) + eax_15)
                                        
                                        if (esi_7 != var_f8_1)
                                            int32_t* eax_20 = sub_4cf8e0(data_12bad08, 0)
                                            sub_518b90(eax_20, eax_20, rect.left, esi_7, var_f8_1)
                                            sub_510860(esi_7, var_f8_1)
                                        
                                        esi_7 = esi_5
                                        eax_17 = var_d4_1 + 1
                                        i_4 = i_7
                                        i_7 -= 1
                                        hWnd_13 = hWnd_4
                                        var_d4_1 = eax_17
                                    while (i_4 != 1)
                                
                                if (esi_7 s<= eax_6)
                                    void* eax_25 = eax_6 + 1 - i_9
                                    i_9 = data_1151ad8
                                    
                                    if (i_9 != 0)
                                        i_9 = *(i_9 + 4)
                                        
                                        if (i_9 == 0x19)
                                            i_9 = sub_50e390(eax_25, 0xffffffff)
                                        else if (i_9 == 0x1b)
                                            i_9 = sub_50e950(eax_25)
                                else
                                    void* eax_22 = data_1151ad8
                                    
                                    if (eax_22 != 0)
                                        int32_t eax_23 = *(eax_22 + 4)
                                        
                                        if (eax_23 == 0x19)
                                            i_9 = sub_50e390(eax_6 + 1, 0xffffffff)
                                        else if (eax_23 == 0x1b)
                                            i_9 = sub_50e950(eax_6 + 1)
                                
                                sub_50c600(i_9)
                                sub_546950()
                                sub_546800()
                    
                    @__security_check_cookie@4(eax_1 ^ &var_108)
                    return 1
                
                if (eax_6 != 0xffffffff)
                    data_11510b4 = 1
                    data_11510b8 = eax_6
                label_5117fc:
                    
                    if (arg2 == 0x132)
                        @__security_check_cookie@4(eax_1 ^ &var_108)
                        return 1
                    
                    if (arg2 == 0x133 || arg2 == 0x134 || arg2 == 0x135 || arg2 == 0x136
                            || arg2 == 0x137 || arg2 == 0x138 || arg2 == 0x39 || arg2 == 0x2e
                            || arg2 == 0x2f || arg2 == 0x37 || arg2 == 0x110)
                        @__security_check_cookie@4(eax_1 ^ &var_108)
                        return 1
                    
                    SetWindowLongA(arg1, 0, 1)
                    @__security_check_cookie@4(eax_1 ^ &var_108)
                    return 1
                
                data_11510b4 = 0
                
                if (arg2 != 0x132 && arg2 != 0x133 && arg2 != 0x134 && arg2 != 0x135 && arg2 != 0x136
                        && arg2 != 0x137 && arg2 != 0x138 && arg2 != 0x39 && arg2 != 0x2e
                        && arg2 != 0x2f && arg2 != 0x37 && arg2 != 0x110)
                    SetWindowLongA(arg1, 0, 0)
                    @__security_check_cookie@4(eax_1 ^ &var_108)
                    return 0
        else
            ecx = data_1151ad8
        label_5116ad:
            
            if (ecx != 0 && ecx[1] == 0x1b && sub_4981f0(ecx) != 0)
                goto label_5116cc
    
    label_512eed:
    @__security_check_cookie@4(eax_1 ^ &var_108)
    return 0
}
