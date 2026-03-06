// 函数名称: sub_47cf60
// 虚拟地址: 0x47cf60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_47cf60(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8
    int32_t var_8
    int32_t eax
    char const* const ecx
    
    if (arg1 == 4)
        eax = *(arg2 + 0x1920)
        
        if (eax s> 0)
            return eax * 0xc8 + 0xbd8 + arg2
        
        char const* const var_4 = "OpponentGetDeployAssign"
        var_8 = 0x8390
        ecx = "turnBuffer.dev.numDeployments > 0"
    else if (arg1 != 5)
        char const* const var_4_2 = "OpponentGetDeployAssign"
        var_8 = 0x839a
        ecx = "Halt"
    else
        eax = *(arg2 + 0x26f0)
        
        if (eax s> 0)
            return eax * 0xc8 + 0x19a8 + arg2
        
        char const* const var_4_1 = "OpponentGetDeployAssign"
        var_8 = 0x8395
        ecx = "turnBuffer.settle.numDeployments > 0"
    
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_8, 
        "OpponentGetDeployAssign")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
