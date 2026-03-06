// 函数名称: sub_453af0
// 虚拟地址: 0x453af0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_453af0(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t esi = 0
    int32_t esi = 0
    int32_t ecx = *(arg1 + 0xdc4)
    void* eax
    
    if (ecx s> 0)
        eax = arg1 + 0xbe4
        
        do
            if (*eax == *(arg2 + 0x8a8))
                *(arg1 + 0xdc4) = ecx - 1
                *(arg1 + (esi << 2) + 0xbe4) = *(arg1 + ((ecx - 1) << 2) + 0xbe4)
                *(arg1 + (esi << 3) + 0xc84) = *(arg1 + ((ecx - 1) << 3) + 0xc84)
                int32_t result = *(arg1 + ((ecx - 1) << 3) + 0xc88)
                *(arg1 + (esi << 3) + 0xc88) = result
                return result
            
            esi += 1
            eax += 4
        while (esi s< ecx)
    
    sub_489550(eax, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x650, 
        "RemoveDieRecalled")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
