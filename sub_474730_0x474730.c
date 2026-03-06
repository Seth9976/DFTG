// 函数名称: sub_474730
// 虚拟地址: 0x474730
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_474730(int32_t arg1, void* arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t esi = *(arg2 + 0x8a8)
    int32_t esi = *(arg2 + 0x8a8)
    int32_t edx = 0
    int32_t edi = *(arg3 + 0xe68)
    
    if (edi s> 0)
        void* eax = arg3 + 0xdc8
        
        do
            if (*eax == esi)
                return 3
            
            edx += 1
            eax += 4
        while (edx s< edi)
    
    int32_t edx_1 = *(arg3 + 0xdc4)
    int32_t eax_1 = 0
    
    if (edx_1 s> 0)
        void* ecx = arg3 + 0xbe4
        
        do
            if (*ecx == esi)
                int32_t result = *(arg3 + (eax_1 << 3) + 0xc84)
                *arg4 = *(arg3 + (eax_1 << 3) + 0xc88)
                return result
            
            eax_1 += 1
            ecx += 4
        while (eax_1 s< edx_1)
    
    sub_489550(eax_1, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x6d54, 
        "CalcReturnWhere")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
