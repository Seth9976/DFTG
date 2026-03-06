// 函数名称: sub_4218b0
// 虚拟地址: 0x4218b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4218b0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    void* ecx = data_6cfe4c
    
    if (ecx != 0)
        return sub_426880(ecx + 0x848, arg1)
    
    sub_489550(arg1, &data_5b2591, "gClient", 
        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
