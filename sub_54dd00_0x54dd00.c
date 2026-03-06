// 函数名称: sub_54dd00
// 虚拟地址: 0x54dd00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_54dd00()
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    
    if (data_1267868 s> 0)
        int32_t* ebx_1 = &data_11e8070
        
        do
            int32_t* esi_1 = *ebx_1
            int32_t eax
            
            if (esi_1[1] != 0)
                sub_489550(eax, &data_5b2591, "gUI.undoStack[i].def->pParseTree == NULL", 
                    "d:\ax\trunk\ax2017\engine\editor\uieditor.cpp", 0x5d, "UIEditorDispose")
                
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
            ebx_1 = &ebx_1[0x404]
        while (i s< data_1267868)
    
    int32_t ecx_3 = data_11e6054
    data_1267864 = 0
    data_1267868 = 0
    data_11e705c = 0
    sub_4ca490(ecx_3)
    HWND hWnd = data_1150b8c
    data_11e6054 = 0
    return DragAcceptFiles(hWnd, 0)
}
