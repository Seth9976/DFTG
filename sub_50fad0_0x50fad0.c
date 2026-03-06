// 函数名称: sub_50fad0
// 虚拟地址: 0x50fad0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_50fad0()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* result = __security_cookie ^ &__saved_ebp
    int32_t* result_1 = result
    
    if (data_1151098 == 0)
        result = sub_50ca90()
        
        if (result != 0)
            int32_t edi_1 = data_1151084
            
            if (edi_1 s>= 0 && edi_1 s< result[2])
                int32_t edi_2 = edi_1 << 4
                int32_t* edi_3 = edi_2 + *result
                
                if (edi_2 != neg.d(*result))
                    void* eax_1 = sub_50ca90()
                    void string_3
                    GetDlgItemTextA(data_1151080, 0x81, &string_3, 0x50)
                    void string
                    GetDlgItemTextA(data_1151080, 0x82, &string, 0x50)
                    void string_2
                    GetDlgItemTextA(data_1151080, 0x83, &string_2, 0x50)
                    void string_1
                    int32_t ecx_1
                    int32_t edx_1
                    ecx_1, edx_1 = GetDlgItemTextA(data_1151080, 0x96, &string_1, 0x50)
                    int32_t* var_168_1 = edi_3
                    int32_t ecx_2
                    int32_t edx_2
                    ecx_2, edx_2 = sub_48d8d0(&string_3, edx_1, ecx_1, &string_3, &data_5fd99c)
                    void* var_168_2 = &edi_3[2]
                    int32_t ecx_3
                    int32_t edx_3
                    ecx_3, edx_3 = sub_48d8d0(&string_2, edx_2, ecx_2, &string_2, &data_5fd99c)
                    void* var_168_3 = eax_1 + 0x10
                    int32_t ecx_4
                    int32_t edx_4
                    ecx_4, edx_4 = sub_48d8d0(&string_1, edx_3, ecx_3, &string_1, &data_5fd99c)
                    float var_150 = 0f
                    int32_t* var_168_4 = &var_150
                    
                    if (sub_48d8d0(&string, edx_4, ecx_4, &string, &data_5fd99c) == 1)
                        edi_3[1] = *edi_3 + var_150
                    
                    sub_50f6f0()
                    sub_50cbd0(&data_1151094, &data_1151090)
                    HWND hWnd = GetDlgItem(data_1151080, 0x91)
                    LRESULT wParam = SendMessageA(hWnd, 0x147, 0, 0)
                    int32_t var_16c_6
                    char* ecx_5
                    
                    if (wParam == 0xffffffff)
                        char const* const var_168_5 = "EditorNodeDataChanged"
                        var_16c_6 = 0x7ec
                        ecx_5 = "curveIndex != CB_ERR"
                    label_50fd15:
                        sub_489550(wParam, &data_5b2591, ecx_5, 
                            "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", var_16c_6, 
                            "EditorNodeDataChanged")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    edi_3[3] = SendMessageA(hWnd, 0x150, wParam, 0)
                    HWND hWnd_1 = GetDlgItem(data_1151080, 0x90)
                    wParam = SendMessageA(hWnd_1, 0x147, 0, 0)
                    
                    if (wParam == 0xffffffff)
                        char const* const var_168_6 = "EditorNodeDataChanged"
                        var_16c_6 = 0x7f1
                        ecx_5 = "distributionIndex != CB_ERR"
                        goto label_50fd15
                    
                    *(eax_1 + 0xc) = SendMessageA(hWnd_1, 0x150, wParam, 0)
                    uint32_t eax_11
                    eax_11.b = IsDlgButtonChecked(data_1151080, 0x97) != 0
                    *(eax_1 + 0x14) = eax_11.b
                    uint32_t eax_12
                    eax_12.b = IsDlgButtonChecked(data_1151080, 0x98) != 0
                    *(eax_1 + 0x15) = eax_12.b
                    result = sub_50c600(InvalidateRect(data_1151080, nullptr, 0))
    
    @__security_check_cookie@4(result_1 ^ &__saved_ebp)
    return result
}
