// 函数名称: sub_42e090
// 虚拟地址: 0x42e090
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_42e090()
{
    // 第一条实际指令: void* result = data_6cfe4c
    void* result = data_6cfe4c
    data_62b220 = 0x11
    data_6cfe94 = 0
    data_6cfe98 = 0
    
    if (result != 0)
        if (*(result + 0x18) != 3)
            return result
        
        int32_t ecx
        ecx.b = 1
        return sub_4201b0(ecx) __tailcall
    
    sub_489550(result, &data_5b2591, "gClient", 
        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
