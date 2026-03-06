// 函数名称: __register_thread_local_exe_atexit_callback
// 虚拟地址: 0x57f79b
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t__register_thread_local_exe_atexit_callback(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0x20
    int32_t var_8 = 0x20
    
    if (data_6cf74c != __security_cookie)
        noreturn sub_58afe0() __tailcall
    
    int32_t result = __crt_fast_encode_pointer<void (__stdcall*)(struct _RTL_CONDITION_VARIABLE*)>(arg1)
    data_6cf74c = result
    return result
}
