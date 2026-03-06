// 函数名称: sub_4239d0
// 虚拟地址: 0x4239d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4239d0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t edi = *(arg1 + 0xec)
    int32_t edi = *(arg1 + 0xec)
    int32_t esi = 0
    void* eax
    
    if (edi s> 0)
        eax = arg1 + 0x28
        
        do
            if (*(eax - 4) == 1 && *eax == arg2)
                return eax - 0x18
            
            esi += 1
            eax += 0x2c
        while (esi s< edi)
    
    sub_489550(eax, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameclient.cpp", 
        0x824, "GetPlayerByAccountID")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
