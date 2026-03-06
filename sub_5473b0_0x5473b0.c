// 函数名称: sub_5473b0
// 虚拟地址: 0x5473b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_5473b0()
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    
    if (data_11d2f9c s> 0)
        int32_t* ebx_1 = &data_1153b9c
        
        do
            int32_t* esi_1 = *ebx_1
            int32_t eax
            
            if (esi_1[1] != 0)
                sub_489550(eax, &data_5b2591, "gFab.undoStack[i].def->pParseTree == NULL", 
                    "d:\ax\trunk\ax2017\engine\editor\fabeditor.cpp", 0x9d, "FabEditorDispose")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            if ((esi_1[2].b & 1) == 0)
                esi_1[3]
                sub_4cead0(*esi_1)
                char** ecx_2 = esi_1[1]
                *esi_1 = 0
                
                if (ecx_2 != 0)
                    sub_4d4bb0(ecx_2)
                    esi_1[1] = 0
            
            eax = _aligned_free_base(esi_1)
            i += 1
            ebx_1 = &ebx_1[0x402]
        while (i s< data_11d2f9c)
    
    HWND hWnd = data_1150b8c
    data_11d2f98 = 0
    data_11d2f9c = 0
    data_1152b94 = 0
    DragAcceptFiles(hWnd, 0)
    int32_t eax_1 = data_11d2fdc
    
    if (eax_1 != 0)
        void* eax_2 = sub_4eeb50(eax_1)
        int32_t edx_2 = data_6cad00
        data_6cad00 = zx.d(*(eax_2 + 0x4cc))
        *(eax_2 + 0x4cc) = edx_2
        data_6cad04 -= 1
        data_11d2fdc = 0
    
    void* result = data_11d2fe4
    
    if (result != 0)
        result = sub_4eeb50(result)
        int32_t edx_3 = data_6cad00
        data_6cad00 = zx.d(*(result + 0x4cc))
        *(result + 0x4cc) = edx_3
        data_6cad04 -= 1
        data_11d2fe4 = 0
    
    return result
}
