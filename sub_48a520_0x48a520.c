// 函数名称: sub_48a520
// 虚拟地址: 0x48a520
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_48a520(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: char* edx = *arg2
    char* edx = *arg2
    char* const eax = &data_5b2591
    
    if (edx != 0)
        eax = edx
    
    while (true)
        edx.b = *arg1
        char temp0_1 = *eax
        bool c_1 = edx.b u< temp0_1
        
        if (edx.b == temp0_1)
            if (edx.b == 0)
                break
            
            edx.b = arg1[1]
            char temp1_1 = eax[1]
            c_1 = edx.b u< temp1_1
            
            if (edx.b == temp1_1)
                arg1 = &arg1[2]
                eax = &eax[2]
                
                if (edx.b == 0)
                    break
                
                continue
        
        int32_t result
        result.b = (sbb.d(eax, eax, c_1) | 1) == 0
        return result
    
    int32_t eax_1
    eax_1.b = true
    return 1
}
