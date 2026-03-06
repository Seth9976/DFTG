// 函数名称: sub_554b00
// 虚拟地址: 0x554b00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

LRESULT __stdcallsub_554b00(HWND arg1, uint32_t arg2, WPARAM arg3, LPARAM arg4)
{
    // 第一条实际指令: WPARAM wParam_1
    WPARAM wParam_1
    int32_t eax_1 = __security_cookie ^ &wParam_1
    wParam_1 = arg3
    HANDLE eax_5 = GetPropA(GetParent(GetParent(arg1)), "lpInsData")
    uint32_t Msg = arg2
    HANDLE esi = eax_5
    data_1511868 = esi
    
    if (Msg != 2)
        if (Msg != 8)
            int32_t var_130
            int32_t var_124
            
            if (Msg == 0xf)
                WPARAM wParam = wParam_1
                
                if (*(esi + 0x34) == 0)
                    CallWindowProcA(GetPropA(arg1, "Wprc"), arg1, 0xf, wParam, arg4)
                    HDC hDC = GetWindowDC(arg1)
                    GetClientRect(arg1, &var_130)
                    uint32_t eax_10 = GetSysColor(COLOR_WINDOW)
                    sub_553f50(eax_10, &var_130, hDC, 3, eax_10)
                    int32_t var_12c
                    int32_t var_12c_1 = var_12c + 1
                    var_130 += 1
                    var_124 += 2
                    uint32_t eax_11 = GetSysColor(COLOR_WINDOW)
                    sub_553f50(eax_11, &var_130, hDC, 0xf, eax_11)
                    ReleaseDC(arg1, hDC)
                    @__security_check_cookie@4(eax_1 ^ &wParam_1)
                    return 1
                
                sub_554100(eax_5, Msg, arg1, wParam, arg4)
                @__security_check_cookie@4(eax_1 ^ &wParam_1)
                return 1
            
            if (Msg != 0x20a)
                if (Msg == 0x87)
                    @__security_check_cookie@4(eax_1 ^ &wParam_1)
                    return 4
                
                if (Msg == 0x102)
                    WPARAM wParam_3 = wParam_1
                    
                    if (wParam_3 == 0xd)
                        void* eax_14 = *(esi + 4)
                        
                        if (eax_14 != 0)
                            int32_t eax_15 = *(eax_14 + 0x14)
                            void var_120
                            
                            if (eax_15 == 0xa)
                                var_130.o = zx.o(0)
                                _memset(&var_120, 0, 0x104)
                                SendMessageA(*(esi + 0x1c), 0x1001, 0, &var_130)
                                GetDateFormatA(0x400, 1, &var_130, nullptr, &var_120, 0x104)
                            label_554ecf:
                                _free(*(*(data_1511868 + 4) + 0x10))
                                *(*(data_1511868 + 4) + 0x10) = sub_553d60(&var_120)
                                ShowWindow(*(data_1511868 + 0x1c), SW_HIDE)
                                esi = data_1511868
                            else
                                if (eax_15 == 0xb)
                                    var_130.o = zx.o(0)
                                    _memset(&var_120, 0, 0x104)
                                    SendMessageA(*(esi + 0x1c), 0x1001, 0, &var_130)
                                    GetTimeFormatA(0x400, 0, &var_130, "hh':'mm':'ss tt", &var_120, 
                                        0x104)
                                    goto label_554ecf
                                
                                if (eax_15 == 0xc)
                                    var_130.o = zx.o(0)
                                    _memset(&var_120, (eax_15 - 0xb).b - 1, 0x104)
                                    SendMessageA(*(esi + 0x1c), 0x1001, 0, &var_130)
                                    GetDateFormatA(0x400, 1, &var_130, nullptr, &var_120, 0x104)
                                    void* edi_2 = &var_124:3
                                    char i
                                    
                                    do
                                        i = *(edi_2 + 1)
                                        edi_2 += 1
                                    while (i != 0)
                                    *edi_2 = 0x20
                                    SendMessageA(*(data_1511868 + 0x20), 0x1001, 0, &var_130)
                                    void* ecx_12 = &var_120
                                    char i_1
                                    
                                    do
                                        i_1 = *ecx_12
                                        ecx_12 += 1
                                    while (i_1 != 0)
                                    void var_11f
                                    int32_t ecx_13 = ecx_12 - &var_11f
                                    GetTimeFormatA(0x400, 0, &var_130, "hh':'mm':'ss tt", 
                                        &var_120 + ecx_13, 0x104 - ecx_13)
                                    _free(*(*(data_1511868 + 4) + 0x10))
                                    *(*(data_1511868 + 4) + 0x10) = sub_553d60(&var_120)
                                    ShowWindow(*(data_1511868 + 0x1c), SW_HIDE)
                                    ShowWindow(*(data_1511868 + 0x20), SW_HIDE)
                                    esi = data_1511868
                        
                        SetFocus(*(esi + 0x14))
                        sub_558b30()
                        @__security_check_cookie@4(eax_1 ^ &wParam_1)
                        return 1
                    
                    if (wParam_3 == 9)
                        void* eax_32 = *(esi + 4)
                        
                        if (eax_32 != 0)
                            if (*(eax_32 + 0x14) != 0xc)
                                if ((0x8000 & GetKeyState(0x10)) == 0)
                                label_555020:
                                    SendMessageA(arg1, 0x102, 0xd, 0)
                                    SetFocus(*(data_1511868 + 8))
                                    @__security_check_cookie@4(eax_1 ^ &wParam_1)
                                    return 1
                            else
                                HWND eax_33 = GetFocus()
                                void* ecx_22 = data_1511868
                                
                                if (*(ecx_22 + 0x1c) != eax_33)
                                    if (*(ecx_22 + 0x20) != eax_33)
                                        @__security_check_cookie@4(eax_1 ^ &wParam_1)
                                        return 1
                                    
                                    if ((0x8000 & GetKeyState(0x10)) == 0)
                                        goto label_555020
                                    
                                    SetFocus(*(data_1511868 + 0x1c))
                                    @__security_check_cookie@4(eax_1 ^ &wParam_1)
                                    return 1
                                
                                if ((0x8000 & GetKeyState(0x10)) == 0)
                                    SetFocus(*(data_1511868 + 0x20))
                                    @__security_check_cookie@4(eax_1 ^ &wParam_1)
                                    return 1
                            
                            SendMessageA(arg1, 0x102, 0xd, 0)
                            @__security_check_cookie@4(eax_1 ^ &wParam_1)
                            return 1
                else if (Msg == 0x100 && wParam_1 == 0x1b)
                    void* eax_44 = *(esi + 4)
                    
                    if (eax_44 != 0)
                        int32_t eax_45 = *(eax_44 + 0x14)
                        
                        if (eax_45 s>= 0xa)
                            if (eax_45 s<= 0xb)
                                ShowWindow(*(esi + 0x1c), SW_HIDE)
                                goto label_55509d
                            
                            if (eax_45 == 0xc)
                                ShowWindow(*(esi + 0x1c), SW_HIDE)
                                ShowWindow(*(data_1511868 + 0x20), SW_HIDE)
                                goto label_55509d
            else
                SendMessageA(arg1, 0x102, 0xd, 0)
            label_55509d:
                Msg = arg2
            
            LRESULT result = CallWindowProcA(GetPropA(arg1, "Wprc"), arg1, Msg, wParam_1, arg4)
            @__security_check_cookie@4(eax_1 ^ &wParam_1)
            return result
        
        void* eax_8 = *(esi + 4)
        
        if (eax_8 == 0 || *(eax_8 + 0x14) != 0xc)
            goto label_554bcc
        
        WPARAM wParam_2 = wParam_1
        
        if (*(esi + 0x1c) != wParam_2)
            HWND hWnd = *(esi + 0x20)
            
            if (hWnd != wParam_2)
                ShowWindow(hWnd, SW_HIDE)
            label_554bcc:
                sub_553f00(SendMessageA(arg1, 0x102, 0xd, 0), wParam_1)
                goto label_55509d
    else
        SetWindowLongA(arg1, 0xfffffffc, GetPropA(arg1, "Wprc"))
        RemovePropA(arg1, "Wprc")
    
    @__security_check_cookie@4(eax_1 ^ &wParam_1)
    return 0
}
