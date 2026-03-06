// 函数名称: sub_50d180
// 虚拟地址: 0x50d180
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_50d180(int32_t arg1)
{
    // 第一条实际指令: int32_t* ecx = data_1151ad8
    int32_t* ecx = data_1151ad8
    int32_t* eax
    
    if (ecx != 0 && ecx[1] == 0x19)
        eax = sub_4981f0(ecx)
    
    int32_t var_c
    char* ecx_2
    
    if (ecx == 0 || ecx[1] != 0x19 || eax == 0)
        char const* const var_8_1 = "EmitterGetIndent"
        var_c = 0x32d
        ecx_2 = "pParticleDef"
    else
        if (arg1 s>= 0 && arg1 s< eax[2])
            return *(arg1 * 0x168 + *eax + 0x10)
        
        char const* const var_8 = "EmitterGetIndent"
        var_c = 0x32f
        ecx_2 = "emitterIndex >= 0 && emitterIndex < pParticleDef->mEmitterCount"
    
    sub_489550(eax, &data_5b2591, ecx_2, "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", var_c, 
        "EmitterGetIndent")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
