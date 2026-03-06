// 函数名称: sub_48a4e0
// 虚拟地址: 0x48a4e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_48a4e0(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: char* ecx = *arg1
    char* ecx = *arg1
    char* const eax = &data_5b2591
    
    if (ecx != 0)
        eax = ecx
    
    while (true)
        ecx.b = *eax
        char temp0_1 = *arg2
        bool c_1 = ecx.b u< temp0_1
        
        if (ecx.b == temp0_1)
            if (ecx.b == 0)
                break
            
            ecx.b = eax[1]
            char temp1_1 = arg2[1]
            c_1 = ecx.b u< temp1_1
            
            if (ecx.b == temp1_1)
                eax = &eax[2]
                arg2 = &arg2[2]
                
                if (ecx.b == 0)
                    break
                
                continue
        
        int32_t result
        result.b = (sbb.d(eax, eax, c_1) | 1) != 0
        return result
    
    int32_t eax_1
    eax_1.b = false
    return 0
}
