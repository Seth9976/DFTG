// 函数名称: sub_42a220
// 虚拟地址: 0x42a220
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*sub_42a220(void* arg1)
{
    // 第一条实际指令: char* result = *(arg1 + 8)
    char* result = *(arg1 + 8)
    
    if (result != 0 && *result != 0)
        result = sub_48a080(arg1 + 8)
        
        if (*(result + 8) s> 0)
            sub_48a560(sub_437f10(*(data_6d00d8 + 0xbe4)), arg1 + 8)
            sub_437ba0(data_6d00d8)
            result = data_6cfe4c
            
            if (result == 0)
                sub_489550(result, &data_5b2591, "gClient", 
                    "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            *(result + 0xa80) = 1
    
    return result
}
