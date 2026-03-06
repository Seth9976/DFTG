// 函数名称: sub_46a420
// 虚拟地址: 0x46a420
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_46a420(void* arg1)
{
    // 第一条实际指令: void* var_c = arg1
    void* var_c = arg1
    void* result = data_6cfe4c
    
    if (result == 0)
        sub_489550(result, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (*(result + 0x834) != 0)
        result = sub_46a6a0()
        
        if (result != 0 && arg1 == *(result + 0x1c))
            result = sub_46a220(arg1)
            
            if (result.b != 0)
                return sub_46a060()
    
    return result
}
