// 函数名称: sub_4238a0
// 虚拟地址: 0x4238a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4238a0(int32_t arg1)
{
    // 第一条实际指令: void* ecx = data_6cfe4c
    void* ecx = data_6cfe4c
    
    if (ecx == 0)
        int32_t eax
        sub_489550(eax, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t* i_1 = nullptr
    sub_426820(ecx + 0x848, &i_1)
    
    for (int32_t* i = i_1; i != 0xffffffff; i = i_1)
        if (*i == arg1)
            return i[0x78]
        
        sub_426820(ecx + 0x848, &i_1)
    
    return 0
}
