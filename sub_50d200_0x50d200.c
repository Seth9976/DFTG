// 函数名称: sub_50d200
// 虚拟地址: 0x50d200
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_50d200(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    int32_t* ecx = data_1151ad8
    int32_t* eax
    
    if (ecx != 0 && ecx[1] == 0x19)
        eax = sub_4981f0(ecx)
    
    int32_t var_14
    char* ecx_3
    
    if (ecx == 0 || ecx[1] != 0x19 || eax == 0)
        char const* const var_10_1 = "EmitterSetIndent"
        var_14 = 0x337
        ecx_3 = "pParticleDef"
    else
        if (arg1 s>= 0 && arg1 s< eax[2])
            int32_t result = *eax
            *(arg1 * 0x168 + result + 0x10) = arg2
            return result
        
        char const* const var_10 = "EmitterSetIndent"
        var_14 = 0x339
        ecx_3 = "emitterIndex >= 0 && emitterIndex < pParticleDef->mEmitterCount"
    
    sub_489550(eax, &data_5b2591, ecx_3, "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", var_14, 
        "EmitterSetIndent")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
