// 函数名称: sub_4c2e40
// 虚拟地址: 0x4c2e40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4c2e40(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8
    int32_t var_8
    void* result
    char const* const ecx
    
    if (arg1 s<= 0)
        char const* const var_4 = "XMalloc"
        var_8 = 0x3d
        ecx = "size > 0"
    else if (arg1 s< 0x77359400)
        result = sub_586f5f(arg1, 0x10)
        
        if (result != 0)
            return result
        
        char const* const var_4_2 = "XMalloc"
        var_8 = 0x57
        ecx = "pBuffer"
    else
        char const* const var_4_1 = "XMalloc"
        var_8 = 0x3e
        ecx = "size < 2000000000"
    
    sub_489550(result, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\xmemory.cpp", var_8, "XMalloc")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
