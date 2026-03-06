// 函数名称: sub_57e8e6
// 虚拟地址: 0x57e8e6
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __thiscallsub_57e8e6(int32_t* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: if (((*(*arg1 + 0xc) u>> 0xc).b & 1) == 0 || *(*arg1 + 4) != 0)
    if (((*(*arg1 + 0xc) u>> 0xc).b & 1) == 0 || *(*arg1 + 4) != 0)
        return __crt_stdio_output::output_adapter_common<char,class __crt_stdio_output::stream_output_adapter<char> >::write_string_impl(
            arg1) __tailcall
    
    *arg3 += arg2
    return arg2
}
