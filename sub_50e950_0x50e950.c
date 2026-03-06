// 函数名称: sub_50e950
// 虚拟地址: 0x50e950
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOL __fastcallsub_50e950(LRESULT arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a1f60
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    LRESULT wParam = arg1
    LRESULT wParam_1 = arg1
    int32_t* ecx = data_1151ad8
    void* const edi
    
    if (ecx == 0 || ecx[1] != 0x1b)
        edi = nullptr
    else
        edi = sub_4981f0(ecx)
    
    HWND hWnd = GetDlgItem(data_1151080, 0x76)
    
    if (wParam == 0xffffffff || wParam s>= *(edi + 8))
        wParam = SendMessageA(hWnd, 0x188, 0, 0)
        
        if (wParam == 0xffffffff)
            wParam = 0
        
        wParam_1 = wParam
    
    SendMessageA(hWnd, 0x184, 0, 0)
    int32_t i = 0
    
    if (*(edi + 8) s> 0)
        do
            int32_t i_1 = i
            char* lParam_2
            sub_48a9d0(&lParam_2, "Graph %d")
            char* lParam_1 = lParam_2
            char* const lParam = &data_5b2591
            
            if (lParam_1 != 0)
                lParam = lParam_1
            
            SendMessageA(hWnd, 0x180, 0, lParam)
            int32_t var_8_1 = 0
            
            if (data_aca1f4 != 0)
                char* lParam_3 = lParam_2
                
                if (lParam_3 != 0 && *lParam_3 != 0)
                    char* eax_5 = sub_48a080(&lParam_2)
                    int32_t temp0_1 = *(eax_5 + 4)
                    *(eax_5 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_4984f0(eax_5, *(eax_5 + 0xc) + 0x10)
                        lParam_2 = &data_5b2591
            
            i += 1
            int32_t var_8_2 = 0xffffffff
        while (i s< *(edi + 8))
        
        wParam = wParam_1
    
    ShowWindow(GetDlgItem(data_1151080, 0x77), SW_SHOW)
    ShowWindow(GetDlgItem(data_1151080, 0x78), SW_SHOW)
    ShowWindow(GetDlgItem(data_1151080, 0x79), SW_SHOW)
    ShowWindow(GetDlgItem(data_1151080, 0x7a), SW_SHOW)
    ShowWindow(GetDlgItem(data_1151080, 0x8d), SW_SHOW)
    SendMessageA(hWnd, 0x186, wParam, 0)
    ShowWindow(GetDlgItem(data_1151080, 0x7b), SW_HIDE)
    ShowWindow(GetDlgItem(data_1151080, 0x7c), SW_HIDE)
    ShowWindow(GetDlgItem(data_1151080, 0x7d), SW_HIDE)
    ShowWindow(GetDlgItem(data_1151080, 0x7e), SW_HIDE)
    ShowWindow(GetDlgItem(data_1151080, 0x7f), SW_HIDE)
    ShowWindow(GetDlgItem(data_1151080, 0x9e), SW_HIDE)
    InvalidateRect(data_1151080, nullptr, 0)
    sub_50db60()
    
    if (sub_50ca90() != 0)
        sub_50cbd0(&data_1151094, &data_1151090)
    
    sub_50d680()
    sub_50d910(sub_50d840())
    sub_50da90()
    BOOL result = EnableWindow(GetDlgItem(data_1151080, 0x8e), zx.d(data_11510ac))
    data_1151088 = 0xffffffff
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
