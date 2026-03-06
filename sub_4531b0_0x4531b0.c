// 函数名称: sub_4531b0
// 虚拟地址: 0x4531b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4531b0(int32_t arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t* eax_1 = sub_453010(sub_452b90(ecx), 5)
    
    if (eax_1 != 0)
        eax_1 = sub_452cc0(eax_1)
        
        if (eax_1 != 0)
            *arg2 = sub_4530f0(&eax_1[0xc])
            int32_t eax_3 = eax_1[0xe]
            
            if (eax_3 == 0)
                *arg3 = *(eax_1[0xc] + 0x18)
                int32_t* eax_5
                eax_5.b = 1
                return eax_5
            
            if (eax_3 == 1)
                *arg3 = *(eax_1[0xc] + 0x30)
                int32_t* eax_7
                eax_7.b = 1
                return eax_7
            
            sub_489550(eax_3, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
                0x421, "TileKind")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    
    eax_1.b = 0
    return eax_1
}
