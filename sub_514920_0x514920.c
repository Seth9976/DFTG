// 函数名称: sub_514920
// 虚拟地址: 0x514920
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

LRESULT __stdcallsub_514920(HWND arg1, uint32_t arg2, WPARAM arg3, int32_t* arg4)
{
    // 第一条实际指令: __alloca_probe(0x104c)
    __alloca_probe(0x104c)
    void var_8
    int32_t eax_1 = __security_cookie ^ &var_8
    int32_t eax_2 = data_11510b0
    WPARAM ecx = arg3
    
    if (eax_2 == 0 || arg2 != eax_2)
    label_514ba7:
        
        if (arg2 == 0xf)
            int32_t __saved_ebp
            sub_50f9e0(BeginPaint(arg1, &__saved_ebp))
            EndPaint(arg1, &__saved_ebp)
        else if (arg2 != 0x4e)
            if (arg2 != 0x111)
                LRESULT result = DefWindowProcA(arg1, arg2, ecx, arg4)
                @__security_check_cookie@4(eax_1 ^ &var_8)
                return result
            
            if (ecx u>> 0x10 == 1 && ecx.w == 0xab)
                HWND hWnd = GetDlgItem(arg1, 0xab)
                LRESULT esi_1 = SendMessageA(hWnd, 0x190, 0, 0)
                
                if (esi_1 s> 0)
                    void lParam
                    SendMessageA(hWnd, 0x191, 0x400, &lParam)
                    
                    if (esi_1 s> 0x400)
                        esi_1 = 0x400
                    
                    sub_553980(&lParam, esi_1)
                else if (data_11e7060.b == 0 && data_11e7062 == 0)
                    data_11e705c = 0
                    sub_5539f0()
                
                sub_516090()
                SetFocus(data_1150b8c)
        else if (ecx == 0xac && arg4[2] == 0x42a)
            sub_513ec0(*arg4, arg4)
    else
        if (ecx != 0xab)
            sub_489550(eax_2, &data_5b2591, "wParam == IDC_UIELEMENT_LIST", 
                "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 0x117c, "UiEditorDialogWndProc")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        HWND hLB = GetDlgItem(data_1151080, ecx)
        int32_t var_1c_2 = arg4[3]
        int32_t eax_3 = LBItemFromPt(hLB, arg4[2], 1)
        int32_t ecx_1 = *arg4
        
        if (ecx_1 != 0x485)
            if (ecx_1 == 0x486)
                if (arg2 != 0x132 && arg2 != 0x133 && arg2 != 0x134 && arg2 != 0x135 && arg2 != 0x136
                        && arg2 != 0x137 && arg2 != 0x138 && arg2 != 0x39 && arg2 != 0x2e
                        && arg2 != 0x2f && arg2 != 0x37 && arg2 != 0x110)
                    SetWindowLongA(arg1, 0, 2)
                
                @__security_check_cookie@4(eax_1 ^ &var_8)
                return 2
            
            if (ecx_1 == 0x487)
                sub_553d00()
                @__security_check_cookie@4(eax_1 ^ &var_8)
                return 1
            
            if (ecx_1 != 0x488)
                ecx = arg3
                goto label_514ba7
            
            data_11510b4 = 0
            @__security_check_cookie@4(eax_1 ^ &var_8)
            return 1
        
        if (eax_3 != 0xffffffff)
            data_11510b4 = 1
            data_11510b8 = eax_3
            
            if (arg2 != 0x132 && arg2 != 0x133 && arg2 != 0x134 && arg2 != 0x135 && arg2 != 0x136
                    && arg2 != 0x137 && arg2 != 0x138 && arg2 != 0x39 && arg2 != 0x2e && arg2 != 0x2f
                    && arg2 != 0x37 && arg2 != 0x110)
                SetWindowLongA(arg1, 0, 1)
            
            @__security_check_cookie@4(eax_1 ^ &var_8)
            return 1
        
        data_11510b4 = 0
        
        if (arg2 != 0x132 && arg2 != 0x133 && arg2 != 0x134 && arg2 != 0x135 && arg2 != 0x136
                && arg2 != 0x137 && arg2 != 0x138 && arg2 != 0x39 && arg2 != 0x2e && arg2 != 0x2f
                && arg2 != 0x37 && arg2 != 0x110)
            SetWindowLongA(arg1, 0, 0)
    
    @__security_check_cookie@4(eax_1 ^ &var_8)
    return 0
}
