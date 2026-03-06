// 函数名称: ??0thread_resource_error@threads@stdext@@QAE@ABV012@@Z
// 虚拟地址: 0x576d5d
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct std::exception::std::bad_alloc::VTable** __thiscall??0thread_resource_error@threads@stdext@@QAE@ABV012@@Z(struct std::exception::VTable** arg1, void* arg2)
{
    // 第一条实际指令: struct std::exception::std::bad_alloc::VTable** result = arg1
    struct std::exception::std::bad_alloc::VTable** result = arg1
    sub_544bb0(arg1, arg2)
    *result = &std::bad_alloc::`vftable'{for `std::exception'}
    return result
}
