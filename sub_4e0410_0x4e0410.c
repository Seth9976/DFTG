// 函数名称: sub_4e0410
// 虚拟地址: 0x4e0410
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4e0410(HINSTANCE arg1, enum SHOW_WINDOW_CMD arg2)
{
    // 第一条实际指令: PWSTR lpCmdLine = GetCommandLineW()
    PWSTR lpCmdLine = GetCommandLineW()
    int32_t numArgs
    PWSTR* hMem = CommandLineToArgvW(lpCmdLine, &numArgs)
    int32_t numArgs_2 = numArgs
    int32_t esi = 2
    int32_t eax = sub_4e0130(hMem, numArgs_2, hMem, u"-opengl")
    
    if (eax.b != 0)
        esi = 1
    
    int32_t eax_1 = sub_4e0130(eax, numArgs_2, hMem, u"-dx11")
    data_62a5a0 = "Roll.xpack"
    data_62a5a4 = "Roll"
    
    if (eax_1.b != 0)
        esi = 2
    
    data_62a5a8 = "Roll for the Galaxy"
    data_114ec74 = esi
    void** esi_1 = &data_62a59c
    data_62a5c0 = 0x101
    data_aca1ec = &data_62a59c
    data_62a5bc = 0x101
    data_62a5b8 = 0
    data_62a5c5 = 1
    data_62a5ac = "Roll.Steam.1690"
    data_62a5cb = 0
    int32_t eax_2 = sub_4e0130(eax_1, numArgs_2, hMem, u"-widescreen")
    
    if (eax_2.b != 0)
        data_62a5b0 = 0x780
        data_62a5b4 = 0x438
    
    int32_t eax_3 = sub_4e0130(eax_2, numArgs_2, hMem, 0x5f8254)
    
    if (eax_3.b != 0)
        eax_3 = sub_4892e0("VR enabled")
        esi_1 = data_aca1ec
        *(esi_1 + 0x27) = 1
        numArgs_2 = numArgs
    
    int32_t eax_4 = sub_4e0130(eax_3, numArgs_2, hMem, u"-novr")
    
    if (eax_4.b != 0)
        eax_4 = sub_4892e0("VR disabled")
        esi_1 = data_aca1ec
        *(esi_1 + 0x27) = 0
        numArgs_2 = numArgs
    
    int32_t eax_5 = sub_4e0130(eax_4, numArgs_2, hMem, u"-hasDB")
    
    if (eax_5.b != 0)
        eax_5 = sub_4892e0("Has db")
        esi_1 = data_aca1ec
        *(esi_1 + 0x2b) = 1
        numArgs_2 = numArgs
    
    int32_t eax_6 = sub_4e0130(eax_5, numArgs_2, hMem, u"build_emscripten_assets")
    
    if (eax_6.b != 0)
        *(esi_1 + 0x27) = 0
        numArgs_2 = numArgs
    else
        eax_6 = sub_4e0130(eax_6, numArgs_2, hMem, u"build_assets")
        
        if (eax_6.b != 0)
            *(esi_1 + 0x27) = 0
            numArgs_2 = numArgs
        else
            eax_6 = sub_4e0130(eax_6, numArgs_2, hMem, u"build_xpack")
            
            if (eax_6.b != 0)
                *(esi_1 + 0x27) = 0
                numArgs_2 = numArgs
    
    int32_t eax_7 = sub_4e0130(eax_6, numArgs_2, hMem, u"-server")
    
    if (eax_7.b != 0)
        *(esi_1 + 0x2f) = 1
        numArgs_2 = numArgs
    
    if (*(esi_1 + 0x27) != 0)
        int32_t esi_2 = 1
        int32_t eax_8 = sub_4e0130(eax_7, numArgs_2, hMem, u"-oculus")
        
        if (eax_8.b != 0)
            esi_2 = 3
        
        if (sub_4e0130(eax_8, numArgs_2, hMem, u"-openvr") != 0)
            esi_2 = 5
        
        data_1150db4 = esi_2
    
    sub_4dff10()
    sub_48df70()
    PWSTR lpCmdLine_1 = lpCmdLine
    int32_t eax_10 = sub_4894d0("command line: %S")
    int32_t numArgs_1 = numArgs
    int32_t eax_11
    int32_t ecx_13
    int32_t edx_13
    eax_11, ecx_13, edx_13 = sub_4e0130(eax_10, numArgs_1, hMem, u"build_emscripten_assets")
    char* eax_12
    int32_t ecx_15
    int32_t edx_14
    
    if (eax_11.b == 0)
        int32_t eax_14
        int32_t ecx_17
        int32_t edx_16
        eax_14, ecx_17, edx_16 = sub_4e0130(eax_11, numArgs_1, hMem, u"build_assets")
        
        if (eax_14.b != 0)
            sub_4394f0(eax_14, edx_16, ecx_17, "building assets...\n")
            goto label_4e067b
        
        int32_t eax_15
        int32_t ecx_19
        int32_t edx_18
        eax_15, ecx_19, edx_18 = sub_4e0130(eax_14, numArgs_1, hMem, u"build_xpack")
        
        if (eax_15.b == 0)
            LocalFree(hMem)
            HWND hWnd = sub_4e01a0(arg1)
            
            if (hWnd != 0)
                int32_t* ecx_21 = data_114e834
                HWND hWnd_1 = hWnd
                data_1150c9e = 1
                data_1150b8c = hWnd_1
                
                if (ecx_21 != 0)
                    (*(*ecx_21 + 8))()
                    hWnd_1 = data_1150b8c
                    data_1150edc = 0
                
                int32_t* ecx_22 = data_114ec78
                
                if (ecx_22 != 0)
                    (*(*ecx_22 + 8))(hWnd_1)
                
                ShowWindow(hWnd, arg2)
                UpdateWindow(hWnd)
                int32_t* ecx_23 = data_aca1ec
                
                if (*(ecx_23 + 0x2f) == 0)
                    SetTimer(nullptr, 1, 0xa, sub_4dfee0)
                    ecx_23 = data_aca1ec
                
                (*(*ecx_23 + 0xc))()
                return 1
        else
            sub_4394f0(eax_15, edx_18, ecx_19, "building assets...\n")
            data_a9fb7f = 1
            sub_4e2720()
            eax_12, ecx_15, edx_14 = sub_50c360()
            sub_4394f0(eax_12, edx_14, ecx_15, "Done!\n")
    else
        sub_4394f0(eax_11, edx_13, ecx_13, "building emscripten assets...\n")
        data_1150c9c = 1
    label_4e067b:
        data_a9fb7f = 1
        eax_12, ecx_15, edx_14 = sub_543f30(sub_4e2720())
        sub_4394f0(eax_12, edx_14, ecx_15, "Done!\n")
    return 0
}
