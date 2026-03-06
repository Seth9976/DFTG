// 函数名称: sub_50ca90
// 虚拟地址: 0x50ca90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_50ca90()
{
    // 第一条实际指令: void* eax = data_1151ad8
    void* eax = data_1151ad8
    
    if (eax != 0)
        int32_t* eax_1 = *(eax + 4)
        int32_t var_14_3
        char const* const ecx
        
        if (eax_1 == 0x19)
            HWND hWnd = GetDlgItem(data_1151080, 0x7b)
            LRESULT wParam = SendMessageA(hWnd, 0x188, 0, 0)
            
            if (wParam != 0xffffffff)
                LRESULT eax_2 = SendMessageA(hWnd, 0x199, wParam, 0)
                eax_1 = sub_50c7a0()
                
                if (eax_1 == 0)
                    char const* const var_10 = "EditorGetSelectedTrack"
                    var_14_3 = 0x23d
                    ecx = "pEmitter"
                label_50cbb2:
                    sub_489550(eax_1, &data_5b2591, ecx, 
                        "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", var_14_3, 
                        "EditorGetSelectedTrack")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                void* eax_3 = sub_4f0830(&data_626728, eax_2)
                int32_t edx_2 = data_12bad4c
                
                if (*(eax_3 + 0xc) == edx_2)
                    return sub_4f0e70(eax_3, eax_1, &data_626728, edx_2, eax_2)
        else if (eax_1 != 0x1e && eax_1 != 0x20 && eax_1 != 0x12)
            if (eax_1 != 0x1b)
                char const* const var_10_3 = "EditorGetSelectedTrack"
                var_14_3 = 0x25f
                ecx = "Halt"
                goto label_50cbb2
            
            LRESULT eax_6 = SendMessageA(GetDlgItem(data_1151080, 0x76), 0x188, 0, 0)
            
            if (eax_6 != 0xffffffff)
                eax_1 = sub_50c780()
                
                if (eax_6 s>= 0 && eax_6 s< eax_1[2])
                    return *eax_1 + eax_6 * 0x18
                
                char const* const var_10_2 = "EditorGetSelectedTrack"
                var_14_3 = 0x25a
                ecx = "currentSelection >= 0 && currentSelection < graphDef->mTrackCount"
                goto label_50cbb2
    
    return 0
}
