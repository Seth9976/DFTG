// 函数名称: sub_41d960
// 虚拟地址: 0x41d960
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_41d960(int32_t* arg1)
{
    // 第一条实际指令: if (*arg1 == 0)
    if (*arg1 == 0)
        return 
    
    int32_t i = 0
    
    do
        int32_t eax_1 = *arg1
        int32_t* j = *(eax_1 + (i << 2))
        
        if (j != 0)
            do
                int32_t* j_1 = j
                j = j[6]
                sub_4984f0(j_1, 0x20)
            while (j != 0)
            
            eax_1 = *arg1
        
        *(eax_1 + (i << 2)) = 0
        i += 1
    while (i u<= arg1[1])
    
    int32_t eax_2 = arg1[1]
    int32_t* ecx = *arg1
    arg1[2] = 0
    sub_4984f0(ecx, (eax_2 << 2) + 4)
    *arg1 = 0
}
