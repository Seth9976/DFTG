// 函数名称: sub_4a9f50
// 虚拟地址: 0x4a9f50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4a9f50(int32_t arg1, int32_t arg2, char* arg3, int32_t* arg4)
{
    // 第一条实际指令: *(arg3 + 0xe24) = 0
    *(arg3 + 0xe24) = 0
    *(arg3 + 0xffc) = 0
    void* eax = sub_4a9e30(arg3, arg2)
    
    if (eax != 0)
        return sub_4a9db0(eax, arg2, eax, arg4)
    
    sub_489550(eax, &data_5b2591, "&attribMap", "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x2453, 
        "AssignPropertyRect")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
