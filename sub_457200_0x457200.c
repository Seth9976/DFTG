// 函数名称: sub_457200
// 虚拟地址: 0x457200
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_457200(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* result_1 = arg1
    int32_t* result_1 = arg1
    result_1 = nullptr
    void* eax_1
    
    while (true)
        eax_1 = sub_481430(&data_62d6c4, &result_1)
        
        if (eax_1.b == 0)
            break
        
        int32_t* result = result_1
        
        if (*result == 1 && result[6] == arg1)
            if (result[0xb] == arg2)
                return result
    
    sub_489550(eax_1, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x1159, 
        "LookupDie")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
