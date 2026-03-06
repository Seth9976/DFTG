// 函数名称: sub_435c50
// 虚拟地址: 0x435c50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* const __fastcallsub_435c50(int32_t arg1)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    void* const result = &data_5b4cb0
    
    while (*result != arg1)
        result += 0x18
        
        if (result == &data_5b4f38)
            result = &data_5b56d8
            
            while (*result != arg1)
                result += 0x18
                
                if (result == 0x5b57c8)
                    sub_489550(result, &data_5b2591, "Halt", 
                        "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x8ae7, 
                        "GameSpecific_GetDlgDef")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
            
            break
    
    return result
}
