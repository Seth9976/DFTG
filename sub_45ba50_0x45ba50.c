// 函数名称: sub_45ba50
// 虚拟地址: 0x45ba50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (* __convention("regparm")sub_45ba50(int32_t arg1, void* arg2, void* arg3, int32_t* arg4))[0x4]
{
    // 第一条实际指令: *(arg2 + 0xc) = sub_45b9f0(arg2)
    *(arg2 + 0xc) = sub_45b9f0(arg2)
    uint32_t eax_1 = *(arg2 + 0x10)
    
    if (eax_1 != 4)
        *(arg2 + 0x14) = eax_1
        *(arg2 + 0x10) = 4
    
    int32_t var_1c8
    char const* const var_1c4
    char* ecx_1
    
    if (*arg4 == 0)
        bool cond:0_1 = *arg2 == 1
        eax_1 = arg4[0x22a]
        *(arg2 + 0x1c) = eax_1
        
        if (cond:0_1)
            int32_t eax_2 = *(arg2 + 0x10)
            int32_t ecx_2 = *(arg2 + 0x8a8)
            
            if (eax_2 != 4)
                *(arg2 + 0x14) = eax_2
                *(arg2 + 0x10) = 4
            
            int32_t eax_3 = *(arg3 + 0x2c4)
            *(arg2 + 0x28) = eax_3
            *(arg3 + 0x2c4) = ecx_2
            eax_1 = sub_45a140(eax_3, 4, arg3, arg2, 1)
            
            if (eax_1 s>= 0)
                uint32_t var_1b0[0x6][0x4]
                uint32_t (* result)[0x4] = sub_459e70(&var_1b0, arg4, 0xf, &var_1b0, eax_1)
                int32_t var_110 = 1
                void var_ac
                __builtin_memcpy(&var_ac, result, 0xa0)
                *(arg2 + 0x6a8) = 0
                __builtin_memcpy(arg2 + 0x70, &var_110, 0x104)
                __builtin_memcpy(arg2 + 0x174, &var_110, 0x104)
                return result
            
            var_1c4 = "QueueSpawnDieGood"
            var_1c8 = 0x25fb
            ecx_1 = "slot >= 0"
        else
            var_1c4 = "GetRollD"
            var_1c8 = 0xb38
            ecx_1 = "gfx.type == ROLLGFX_DIE"
    else
        var_1c4 = "GetRollT"
        var_1c8 = 0x8fb
        ecx_1 = "gfx.type == ROLLGFX_TILE"
    
    sub_489550(eax_1, &data_5b2591, ecx_1, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_1c8, 
        var_1c4)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
