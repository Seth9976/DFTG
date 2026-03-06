// 函数名称: sub_4bc760
// 虚拟地址: 0x4bc760
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4bc760(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_4 = arg1
    int32_t* var_4 = arg1
    int32_t eax = arg1[1]
    int32_t eax_1 = eax
    int32_t var_c
    char const* const var_8
    char const* const ecx
    
    if (eax == 0)
        if (*arg1 == 1)
            return arg1[4]
        
        var_8 = "EvalValGet"
        var_c = 0x6c0
        ecx = "stateType == UISTATE_INT"
    else
        ecx = "Halt"
        var_8 = "EvalValEval"
        int32_t temp1_1 = eax_1
        eax_1 -= 1
        
        var_c = temp1_1 == 1 ? 0x93b : 0x93f
    
    sub_489550(eax_1, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\ui2.cpp", var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
