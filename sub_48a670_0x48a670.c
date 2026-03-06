// 函数名称: sub_48a670
// 虚拟地址: 0x48a670
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __thiscallsub_48a670(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: if (*arg2 == 0)
    if (*arg2 == 0)
        return 
    
    char* eax_1 = *arg1
    
    if (eax_1 != 0 && *eax_1 != 0)
        char* esi = arg2
        char* ecx = *(sub_48a080(arg1) + 8)
        char* eax_2
        
        do
            eax_2.b = *esi
            esi = &esi[1]
        while (eax_2.b != 0)
        
        void* esi_1 = esi - &esi[1]
        sub_48a180(eax_2, esi_1 + ecx, arg1, 1)
        sub_579300(*arg1 + ecx, arg2, esi_1 + 1)
        return 
    
    sub_48a2c0(arg1, arg2)
}
