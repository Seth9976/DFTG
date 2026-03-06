// 函数名称: sub_454090
// 虚拟地址: 0x454090
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_454090()
{
    // 第一条实际指令: void* result = sub_46a6a0()
    void* result = sub_46a6a0()
    
    if (result != 0)
        int32_t eax = *(result + 0x20)
        
        if (eax u> 8)
            sub_489550(eax, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
                0x779, "TutorialStepRestrictsOpponent")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        switch (eax)
            case 0, 2, 3, 5, 6, 7, 8
                result.b = 1
                return result
    
    result.b = 0
    return result
}
