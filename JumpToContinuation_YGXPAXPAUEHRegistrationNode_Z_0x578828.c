// 函数名称: ?_JumpToContinuation@@YGXPAXPAUEHRegistrationNode@@@Z
// 虚拟地址: 0x578828
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t?_JumpToContinuation@@YGXPAXPAUEHRegistrationNode@@@Z(int32_t arg1, void* arg2)
{
    // 第一条实际指令: void* var_8 = arg2 + 0xc
    void* var_8 = arg2 + 0xc
    TEB* fsbase
    fsbase->NtTib.ExceptionList = fsbase->NtTib.ExceptionList->Next
    *(arg2 - 4)
    jump(arg1)
}
