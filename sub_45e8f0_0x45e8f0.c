// 函数名称: sub_45e8f0
// 虚拟地址: 0x45e8f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_45e8f0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* i_1 = nullptr
    int32_t* i_1 = nullptr
    sub_481430(&data_62d6c4, &i_1)
    
    for (int32_t* i = i_1; i != 0xffffffff; i = i_1)
        if (*i == 1 && i[6] == *arg1 && *(i + 0x21) != 0)
            int32_t eax_4 = i[4] - 9
            
            if (eax_4 u<= 4)
                return &i[2]
            
            sub_489550(eax_4, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
                0x353c, "TryGetPhaseSelectionDie")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        sub_481430(&data_62d6c4, &i_1)
    
    return 0
}
