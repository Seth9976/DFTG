// 函数名称: sub_445390
// 虚拟地址: 0x445390
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_445390(int32_t* arg1)
{
    // 第一条实际指令: void* eax_3 = *arg1
    void* eax_3 = *arg1
    int32_t edx = 0
    int32_t ecx = *(eax_3 + 0x34)
    
    if (ecx s> 0)
        void* eax = eax_3 + 0x38
        
        do
            if (*eax == 0)
                return 1
            
            edx += 1
            eax += 0xc
        while (edx s< ecx)
    
    return 0
}
