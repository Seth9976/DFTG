// 函数名称: sub_4bc7d0
// 虚拟地址: 0x4bc7d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4bc7d0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_4 = arg1
    int32_t* var_4 = arg1
    int32_t eax = arg1[1]
    
    if (eax == 0)
        return sub_498700(*arg1, &arg1[3])
    
    int32_t var_c
    
    var_c = eax == 1 ? 0x93b : 0x93f
    
    sub_489550(eax - 1, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\ui2.cpp", var_c, "EvalValEval")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
