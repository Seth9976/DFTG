// 函数名称: sub_46c0a0
// 虚拟地址: 0x46c0a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_46c0a0(int32_t* arg1)
{
    // 第一条实际指令: char const* const var_10
    char const* const var_10
    int32_t var_c
    char const* const var_8
    int32_t eax
    char* ecx
    
    if (*arg1 == 1)
        if (arg1[4] == 0x10)
            if (arg1[0x1aa] == 0 || arg1[0xdf] == 1)
                return 0x2bfd
            
            return 0x2d53
        
        if (sub_46b4c0(arg1) != 0)
            if (sub_46c060(arg1) != 0)
                return 0x2eb2
            
            return 0x2eb1
        
        if (sub_46bf50(arg1) != 0)
            if (sub_46c060(arg1) == 0 && arg1[4] == 4)
                return 0x2d85
            
            return 0x2d86
        
        if (arg1[0x1aa] != 0 && arg1[0xdf] != 1)
            if (sub_46c060(arg1) != 0)
                return 0x2d54
            
            if (sub_46bcc0(arg1) != 0)
                return 0x2d53
            
            if (sub_46b360(arg1) != 0 || arg1[0xb8] != 9)
                return 0x2d53
            
            return 0x2b5e
        
        if (sub_46c020(arg1) != 0)
            return 0x2bc3
        
        if (sub_46b510(arg1) != 0)
            return 0x2eb1
        
        if (sub_46bcc0(arg1) != 0)
            if (sub_46bdf0(arg1[6]) != 0)
                int32_t eax_19
                eax_19.b = arg1[4] == 4
                return (eax_19 << 1) + 0x2cbd
            
            if (sub_46bd40(arg1[6]) == 0)
                return 0x2c00
            
            int32_t eax_22
            eax_22.b = arg1[4] == 4
            return (eax_22 << 1) + 0x2c8b
        
        if (sub_46b360(arg1) == 0 || arg1[4] == 8)
            return 0x2b5e
        
        eax = sub_46c060(arg1)
        
        if (eax.b != 0)
            return 0x2bc4
        
        void* ecx_12 = data_6cfe4c
        
        if (ecx_12 != 0)
            if (arg1[6] == *(ecx_12 + 0xa68) && arg1[4] == 4)
                return 0x2b13
            
            return 0x2bc3
        
        var_8 = "GetClient"
        var_c = 0x75
        var_10 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx = "gClient"
    else
        var_8 = "IsDummyDie"
        var_c = 0x5afd
        var_10 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
        ecx = "gfx.type == ROLLGFX_DIE"
    
    sub_489550(eax, &data_5b2591, ecx, var_10, var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
