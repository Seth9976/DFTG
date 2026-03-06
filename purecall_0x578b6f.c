// 函数名称: __purecall
// 虚拟地址: 0x578b6f
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void__purecall() __noreturn
{
    // 第一条实际指令: int32_t eax = __get_purecall_handler()
    int32_t eax = __get_purecall_handler()
    
    if (eax != 0)
        eax()
    
    sub_58a129()
    noreturn
}
