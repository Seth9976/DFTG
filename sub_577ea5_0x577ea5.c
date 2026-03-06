// 函数名称: sub_577ea5
// 虚拟地址: 0x577ea5
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_577ea5(void* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *(arg1 - 0x10)
    *arg1
}
