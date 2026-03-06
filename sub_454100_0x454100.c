// 函数名称: sub_454100
// 虚拟地址: 0x454100
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_454100(int32_t* arg1)
{
    // 第一条实际指令: void* result = sub_46a6a0()
    void* result = sub_46a6a0()
    
    if (result != 0)
        int32_t ecx = *(result + 0x20)
        
        if (ecx u> 8)
            sub_489550(result, &data_5b2591, "Halt", 
                "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x7a3, "TutorialStepRestrictsTiles")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        switch (ecx)
            case 0, 2, 4, 5, 6
                result.b = 1
                return result
            case 3, 7, 8
                result = *(result + 0x28)
                
                if (result != 0)
                    if (arg1 == 0 || *arg1 != 0)
                        result.b = 1
                        return result
                    
                    void* ecx_2 = arg1[0xc]
                    
                    if (*(ecx_2 + 4) != result && *(ecx_2 + 0x1c) != result)
                        result.b = 1
                        return result
    
    result.b = 0
    return result
}
