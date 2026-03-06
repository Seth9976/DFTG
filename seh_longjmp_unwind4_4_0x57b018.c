// 函数名称: __seh_longjmp_unwind4@4
// 虚拟地址: 0x57b018
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __stdcall__seh_longjmp_unwind4@4(int32_t* arg1)
{
    // 第一条实际指令: ___except_validate_jump_buffer(arg1)
    ___except_validate_jump_buffer(arg1)
    *arg1
    return __local_unwind4(arg1[0xa], arg1[6], arg1[7])
}
