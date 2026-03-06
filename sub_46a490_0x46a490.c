// 函数名称: sub_46a490
// 虚拟地址: 0x46a490
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_46a490(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
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
        
        if (result != 0)
            if (arg1 == *(result + 0x1c))
                result = *(result + 0x28)
                
                if (result == 0 || result == arg2 || arg1 == 2)
                    return sub_46a060()
            else if (arg1 == 2)
                return sub_46a060()
    
    return result
}
