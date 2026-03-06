// 函数名称: __EH_epilog3_GS
// 虚拟地址: 0x577f1a
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t__EH_epilog3_GS(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: @__security_check_cookie@4(arg1[-4] ^ arg1)
    @__security_check_cookie@4(arg1[-4] ^ arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = arg1[-3]
    *arg1
    *arg1 = __return_addr
}
