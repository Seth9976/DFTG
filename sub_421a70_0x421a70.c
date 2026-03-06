// 函数名称: sub_421a70
// 虚拟地址: 0x421a70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_421a70(int32_t arg1)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    void* result = data_6cfe4c
    
    if (result != 0)
        *(result + 0x82c) = 4
        *(result + 0x83c) = 2
        *(result + 0x840) = arg1
        return result
    
    sub_489550(result, &data_5b2591, "gClient", 
        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
