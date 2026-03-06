// 函数名称: sub_453650
// 虚拟地址: 0x453650
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_453650(void* arg1)
{
    // 第一条实际指令: int32_t result = *(arg1 + 4)
    int32_t result = *(arg1 + 4)
    
    if (result u> 0x1e)
        int32_t eax
        sub_489550(eax, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
            0x5a1, "GetInputPhase")
        
        if (IsDebuggerPresent() != 1)
            noreturn sub_489700() __tailcall
        
        breakpoint
    
    bool cond:0_1
    
    switch (result)
        case 0, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e
            return result
        case 1, 2
            int32_t eax_2 = data_632590
            
            if (eax_2 == 1)
                return result
            
            cond:0_1 = eax_2 == 2
        case 3
            int32_t eax_3 = data_632590
            
            if (eax_3 == 1)
                return result
            
            cond:0_1 = eax_3 == 3
        case 4, 5
            cond:0_1 = data_632590 == 6
        case 6, 7
            int32_t eax_4 = data_632590
            
            if (eax_4 == 3)
                return result
            
            cond:0_1 = eax_4 == 2
        case 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe
            if (data_632590 == 5)
                return result
            
            cond:0_1 = data_632594 == 1
        case 0xf, 0x10
            if (data_632590 == 5)
                return result
            
            cond:0_1 = data_632594 == 2
        case 0x11, 0x12
            if (data_632590 == 5)
                return result
            
            cond:0_1 = data_632594 == 3
        case 0x13, 0x14
            if (data_632590 == 5)
                return result
            
            cond:0_1 = data_632594 == 4
        case 0x15, 0x16
            if (data_632590 == 5)
                return result
            
            cond:0_1 = data_632594 == 5
    
    if (cond:0_1)
        return result
    
    return 0
}
