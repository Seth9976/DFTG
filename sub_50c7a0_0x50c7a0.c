// 函数名称: sub_50c7a0
// 虚拟地址: 0x50c7a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_50c7a0()
{
    // 第一条实际指令: LRESULT eax_1 = SendMessageA(GetDlgItem(data_1151080, 0x76), 0x188, 0, 0)
    LRESULT eax_1 = SendMessageA(GetDlgItem(data_1151080, 0x76), 0x188, 0, 0)
    LRESULT esi = eax_1
    
    if (esi == 0xffffffff)
        return 0
    
    int32_t* ecx = data_1151ad8
    
    if (ecx != 0 && ecx[1] == 0x19)
        eax_1 = sub_4981f0(ecx)
        
        if (eax_1 != 0 && esi s>= 0 && esi s< *(eax_1 + 8))
            return esi * 0x168 + *eax_1
    
    sub_489550(eax_1, &data_5b2591, 
        "pParticleDef && currentSelection >= 0 && currentSelection < pParticleDef->mEmitterCount", 
        "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 0x1c6, "EditorGetSelectedEmitter")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
