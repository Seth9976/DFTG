// 函数名称: __EH_epilog3
// 虚拟地址: 0x577f05
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t__EH_epilog3(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = arg1[-3]
    *arg1
    *arg1 = __return_addr
}
