// 函数名称: sub_56d110
// 虚拟地址: 0x56d110
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_56d110(void* arg1, char* arg2)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    int32_t result
    
    while (true)
        if (*(esi + 0x10) == 0)
        label_56d137:
            
            if (*(esi + 0xa8) u< *(esi + 0xac))
                goto label_56d13f
        else
            int32_t eax_2
            eax_2, arg1 = (*(esi + 0x18))(*(esi + 0x1c))
            
            if (eax_2 == 0)
            label_56d13f:
                eax_2.b = *arg2
                
                if (eax_2.b == 0x20 || eax_2.b == 9 || eax_2.b == 0xa || eax_2.b == 0xb
                        || eax_2.b == 0xc || eax_2.b == 0xd)
                    char* eax_3 = *(esi + 0xa8)
                    
                    if (eax_3 u< *(esi + 0xac))
                        arg1.b = *eax_3
                        *(esi + 0xa8) = &eax_3[1]
                        *arg2 = arg1.b
                        continue
                    else if (*(esi + 0x20) == 0)
                        arg1.b = 0
                        *arg2 = 0
                        continue
                    else
                        sub_561250(esi)
                        char* eax_5 = *(esi + 0xa8)
                        arg1.b = *eax_5
                        *(esi + 0xa8) = &eax_5[1]
                        *arg2 = arg1.b
                        continue
            else if (*(esi + 0x20) != 0)
                goto label_56d137
        
        if (*(esi + 0x10) == 0)
        label_56d1bc:
            result = *(esi + 0xa8)
            
            if (result u>= *(esi + 0xac))
                break
        else
            result, arg1 = (*(esi + 0x18))(*(esi + 0x1c))
            
            if (result != 0)
                if (*(esi + 0x20) == 0)
                    break
                
                goto label_56d1bc
        
        if (*arg2 != 0x23)
            break
        
        while (true)
            int32_t eax_9
            
            if (*(esi + 0x10) == 0)
            label_56d1fc:
                
                if (*(esi + 0xa8) u>= *(esi + 0xac))
                    break
            else
                eax_9, arg1 = (*(esi + 0x18))(*(esi + 0x1c))
                
                if (eax_9 != 0)
                    if (*(esi + 0x20) == 0)
                        break
                    
                    goto label_56d1fc
            
            eax_9.b = *arg2
            
            if (eax_9.b == 0xa)
                break
            
            if (eax_9.b == 0xd)
                break
            
            char* eax_10 = *(esi + 0xa8)
            
            if (eax_10 u< *(esi + 0xac))
                arg1.b = *eax_10
                *(esi + 0xa8) = &eax_10[1]
                *arg2 = arg1.b
            else if (*(esi + 0x20) == 0)
                arg1.b = 0
                *arg2 = 0
            else
                sub_561250(esi)
                char* eax_12 = *(esi + 0xa8)
                arg1.b = *eax_12
                *(esi + 0xa8) = &eax_12[1]
                *arg2 = arg1.b
    
    return result
}
