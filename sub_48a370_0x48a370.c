// 函数名称: sub_48a370
// 虚拟地址: 0x48a370
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __thiscallsub_48a370(int32_t* arg1, char* arg2, void* arg3)
{
    // 第一条实际指令: char** result = arg1
    char** result = arg1
    
    if (arg2 != 0)
        *result = &data_5b2591
        sub_48a6e0(arg1, arg2, arg3)
        return result
    
    sub_489550(arg2, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x9a, 
        "XString::XString")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
