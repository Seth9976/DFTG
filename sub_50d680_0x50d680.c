// 函数名称: sub_50d680
// 虚拟地址: 0x50d680
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOLsub_50d680()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?shortsort@@YAXPAD0IP6AHPBX1@Z@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ecx = data_1151ad8
    BOOL lpString_3
    
    if (ecx == 0 || ecx[1] != 0x19)
        ShowWindow(GetDlgItem(data_1151080, 0x87), SW_HIDE)
        lpString_3 = ShowWindow(GetDlgItem(data_1151080, 0x88), SW_HIDE)
    else if (sub_4981f0(ecx) == 0)
        ShowWindow(GetDlgItem(data_1151080, 0x87), SW_HIDE)
        lpString_3 = ShowWindow(GetDlgItem(data_1151080, 0x88), SW_HIDE)
    else
        HWND hWnd = GetDlgItem(data_1151080, 0x7b)
        LRESULT wParam = SendMessageA(hWnd, 0x188, 0, 0)
        
        if (wParam == 0xffffffff)
            ShowWindow(GetDlgItem(data_1151080, 0x87), SW_HIDE)
            lpString_3 = ShowWindow(GetDlgItem(data_1151080, 0x88), SW_HIDE)
        else
            LRESULT eax_4 = SendMessageA(hWnd, 0x199, wParam, 0)
            
            if (eax_4 == 0x4a || eax_4 == 5 || eax_4 == 8 || eax_4 == 9 || eax_4 == 0xa || eax_4 == 0xb
                    || eax_4 == 0x4c)
                ShowWindow(GetDlgItem(data_1151080, 0x87), SW_SHOW)
                ShowWindow(GetDlgItem(data_1151080, 0x88), SW_SHOW)
                void* eax_7 = sub_50c9e0()
                
                if (eax_7 == 0)
                    BOOL eax_9 = SetDlgItemTextA(data_1151080, 0x87, &data_5b2591)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_9
                
                BOOL lpString_2
                sub_50d560(&lpString_2, eax_7)
                BOOL lpString_1 = lpString_2
                char* const lpString = &data_5b2591
                
                if (lpString_1 != 0)
                    lpString = lpString_1
                
                lpString_3 = SetDlgItemTextA(data_1151080, 0x87, lpString)
                int32_t var_8_1 = 0
                
                if (data_aca1f4 != 0)
                    lpString_3 = lpString_2
                    
                    if (lpString_3 != 0 && *lpString_3 != 0)
                        lpString_3 = sub_48a080(&lpString_2)
                        int32_t temp0_1 = *(lpString_3 + 4)
                        *(lpString_3 + 4) -= 1
                        
                        if (temp0_1 == 1)
                            int32_t eax_8 = sub_4984f0(lpString_3, *(lpString_3 + 0xc) + 0x10)
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_8
            else
                ShowWindow(GetDlgItem(data_1151080, 0x87), SW_HIDE)
                lpString_3 = ShowWindow(GetDlgItem(data_1151080, 0x88), SW_HIDE)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return lpString_3
}
