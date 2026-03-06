// 函数名称: sub_426f60
// 虚拟地址: 0x426f60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_426f60(int32_t arg1)
{
    // 第一条实际指令: void* result = data_6cfe4c
    void* result = data_6cfe4c
    
    if (result != 0)
        *(result + 0x82c) = 2
        *(result + 0x830) = arg1
        return result
    
    sub_489550(result, &data_5b2591, "gClient", 
        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
