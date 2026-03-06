// 函数名称: sub_50fd30
// 虚拟地址: 0x50fd30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOL __fastcallsub_50fd30(HWND arg1)
{
    // 第一条实际指令: int32_t* var_424
    int32_t* var_424
    int32_t eax_1 = __security_cookie ^ &var_424
    HWND hWnd = GetDlgItem(arg1, 0x85)
    LRESULT eax_4 = SendMessageA(GetDlgItem(data_1151080, 0x7b), 0x188, 0, 0)
    int32_t edi_1
    
    if (eax_4 != 0xffffffff)
        edi_1 = eax_4 + 1
    else
        edi_1 = 0
    
    var_424 = sub_50c7a0()
    int32_t lParam[0x101]
    SendMessageA(hWnd, 0x191, 0x100, &lParam)
    LRESULT eax_6
    char* ecx
    eax_6, ecx = SendMessageA(hWnd, 0x190, 0, 0)
    int32_t ebx_1 = 0
    
    if (eax_6 s> 0)
        do
            char* eax_7 = lParam[ebx_1]
            
            if (eax_7 u> 0x79)
                sub_489550(eax_7, &data_5b2591, 
                    "paramToolIndex >= 0 && paramToolIndex < gParticleParamToolDataCount", 
                    "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 0x828, "EditorPickDialogOk")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            int32_t edx_1 = *((eax_7 << 3) + &data_626358)
            
            if (edx_1 != 0x70)
                int32_t* eax_8 = var_424
                ecx = nullptr
                int32_t esi_1 = *eax_8
                
                if (esi_1 s> 0)
                    int32_t* eax_9 = eax_8[2]
                    
                    do
                        if (*eax_9 == edx_1)
                            goto label_50fe6b
                        
                        ecx = &ecx[1]
                        eax_9 = &eax_9[4]
                    while (ecx s< esi_1)
                
                char* eax_11
                int32_t edx_2
                
                if (*(sub_4f0fd0(&data_626728, edx_1) + 0x10) != 8)
                    char* var_420_1
                    var_420_1.q = 0
                    int32_t var_41c
                    edx_2 = var_41c
                    eax_11 = var_420_1
                else
                    edx_2:eax_11 = 0x5b2591
                
                int32_t* esi_2 = var_424
                ecx = sub_4f0910(eax_11, esi_2, &data_626728, *((eax_7 << 3) + &data_626358), eax_11, 
                    edx_2)
                int32_t eax_13 = *esi_2 - 1
                
                if (edi_1 != eax_13)
                    int32_t* eax_14 = sub_4cf8e0(data_12bac50, 8)
                    ecx = sub_518b90(eax_14, eax_14, esi_2, eax_13, edi_1)
                
                edi_1 += 1
            
        label_50fe6b:
            ebx_1 += 1
        while (ebx_1 s< eax_6)
    
    void* eax_15 = data_1151ad8
    
    if (eax_15 != 0)
        int32_t eax_16 = *(eax_15 + 4)
        
        if (eax_16 == 0x19)
            ecx = sub_50e390(0xffffffff, edi_1 - 1)
        else if (eax_16 == 0x1b)
            ecx = sub_50e950(0xffffffff)
    
    data_1151084 = 0
    sub_50c600(ecx)
    BOOL result = EndDialog(arg1, 1)
    @__security_check_cookie@4(eax_1 ^ &var_424)
    return result
}
