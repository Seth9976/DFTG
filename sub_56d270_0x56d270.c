// 函数名称: sub_56d270
// 虚拟地址: 0x56d270
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_56d270(void* arg1, char* arg2)
{
    // 第一条实际指令: char* ebx = arg2
    char* ebx = arg2
    int32_t result = 0
    
    while (true)
        if (*(arg1 + 0x10) == 0)
        label_56d2a1:
            
            if (*(arg1 + 0xa8) u>= *(arg1 + 0xac))
                break
        else
            int32_t eax_2
            eax_2, arg2 = (*(arg1 + 0x18))(*(arg1 + 0x1c))
            
            if (eax_2 != 0)
                if (*(arg1 + 0x20) == 0)
                    break
                
                goto label_56d2a1
        
        arg2.b = *ebx
        
        if (arg2.b - 0x30 u> 9)
            break
        
        char* eax_5 = *(arg1 + 0xa8)
        result = sx.d(arg2.b) - 0x30 + result * 0xa
        
        if (eax_5 u< *(arg1 + 0xac))
            int32_t ecx
            ecx.b = *eax_5
            *(arg1 + 0xa8) = &eax_5[1]
            *ebx = ecx.b
        else if (*(arg1 + 0x20) == 0)
            *ebx = 0
        else
            sub_561250(arg1)
            char* eax_7 = *(arg1 + 0xa8)
            char ecx_2 = *eax_7
            *(arg1 + 0xa8) = &eax_7[1]
            *ebx = ecx_2
    
    return result
}
