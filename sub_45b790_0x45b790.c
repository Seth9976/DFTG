// 函数名称: sub_45b790
// 虚拟地址: 0x45b790
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_45b790(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t xmm0
    int32_t xmm0
    
    if (arg5 != 1)
        xmm0 = (zx.o(0)).d
    else
        xmm0 = 0x3f800000
    
    arg2[0x223] = xmm0
    arg2[0xd] = arg4
    int32_t eax = *arg3
    arg2[0xf] = eax
    arg2[0xe] = arg5
    int32_t eax_1
    
    if (arg4 == 4 || arg4 == 5 || arg4 == 3)
        eax_1 = sub_455120(eax, arg2, arg3, arg4, 0, 1)
    else
        eax_1 = sub_455280(eax, arg2, arg3, arg4, 3, 1)
    
    int32_t eax_2 = sub_454d20(arg4)
    
    if (eax_1 s< 0 && eax_2 != 0)
        sub_489550(eax_2, &data_5b2591, "slot >= 0 || loc == ROLL_LOC_BAG_TILE", 
            "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x25b5, "QueueSpawnTile")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t var_a0 = 0
    uint32_t var_98[0x8][0x4]
    _memset(&var_98, 0, 0x8c)
    int32_t var_a8 = eax_2
    int32_t var_a4 = eax_1
    int32_t var_ac = *arg3
    int32_t var_9c = arg2[0xe]
    int32_t var_1b4 = 1
    void var_150
    __builtin_memcpy(&var_150, &var_ac, 0xa0)
    arg2[0x1aa] = 0
    __builtin_memcpy(&arg2[0x1c], &var_1b4, 0x104)
    __builtin_memcpy(&arg2[0x5d], &var_1b4, 0x104)
    return &arg2[0x1c]
}
