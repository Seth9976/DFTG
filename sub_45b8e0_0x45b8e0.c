// 函数名称: sub_45b8e0
// 虚拟地址: 0x45b8e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_45b8e0(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: void* eax = arg2[4]
    void* eax = arg2[4]
    
    if (eax != arg4)
        arg2[5] = eax
        arg2[4] = arg4
    
    uint32_t eax_1 = sub_45a640(eax, arg2, arg3, arg4, 0, 1)
    int32_t eax_2 = sub_459da0(arg4)
    
    if (eax_1 s< 0)
        sub_489550(eax_2, &data_5b2591, "slot >= 0", 
            "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x25c1, "QueueSpawnDie")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t var_a4 = 0
    uint32_t var_9c[0x9][0x4]
    _memset(&var_9c, 0, 0x8c)
    int32_t var_ac = eax_2
    int32_t var_1b8 = 1
    uint32_t var_a8 = eax_1
    int32_t var_b0 = *arg3
    int32_t var_a0 = 0xffffffff
    void var_154
    __builtin_memcpy(&var_154, &var_b0, 0xa0)
    arg2[0x1aa] = 0
    __builtin_memcpy(&arg2[0x1c], &var_1b8, 0x104)
    __builtin_memcpy(&arg2[0x5d], &var_1b8, 0x104)
    return &arg2[0x1c]
}
