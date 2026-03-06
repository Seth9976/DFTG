// 函数名称: __lseeki64
// 虚拟地址: 0x58f7cf
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t__lseeki64(int32_t arg1, int32_t arg2, int32_t arg3, enum SET_FILE_POINTER_MOVE_METHOD arg4)
{
    // 第一条实际指令: return common_lseek<int64_t>(arg1, arg2, arg3, arg4)
    return common_lseek<int64_t>(arg1, arg2, arg3, arg4)
}
