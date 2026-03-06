// 函数名称: sub_4991a0
// 虚拟地址: 0x4991a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __fastcallsub_4991a0(char** arg1, int32_t* arg2)
{
    // 第一条实际指令: char** var_8 = arg1
    char** var_8 = arg1
    char* eax = *arg2
    void* ecx = arg2[1]
    char** var_8_1 = arg1
    
    if (eax != 0)
        *arg1 = &data_5b2591
        sub_48a6e0(arg1, eax, ecx)
        return arg1
    
    sub_489550(eax, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x9a, 
        "XString::XString")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
