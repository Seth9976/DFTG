// 函数名称: sub_45b670
// 虚拟地址: 0x45b670
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_45b670(void* arg1, char arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    ebx.b = arg2
    int32_t var_24
    char const* const var_20
    void* eax
    char* ecx
    
    if (*arg1 == 0)
        int32_t esi_1 = *(arg1 + 0x8a8)
        int32_t* i_1 = nullptr
        sub_481430(&data_62d6c4, &i_1)
        int32_t* i
        
        for (i = i_1; i != 0xffffffff; i = i_1)
            if (*i == 1 && i[7] == esi_1)
                int32_t* eax_1 = sub_45b5f0(i)
                
                if (eax_1 == 0)
                    if (ebx.b != 0)
                        if (i[0x78] != 0)
                            return i
                    else if (i[0x78] == eax_1)
                        return i
            
            sub_481430(&data_62d6c4, &i_1)
        
        i_1 = nullptr
        eax = sub_481430(&data_62d6c4, &i_1)
        
        for (i = i_1; i != 0xffffffff; i = i_1)
            if (*i == 1 && i[7] == esi_1 && sub_45b5f0(i) == 0)
                return i
            
            eax = sub_481430(&data_62d6c4, &i_1)
        
        var_20 = "TileGetGood"
        var_24 = 0x259c
        ecx = "Halt"
    else
        var_20 = "GetRollT"
        var_24 = 0x8fb
        ecx = "gfx.type == ROLLGFX_TILE"
    
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_24, 
        var_20)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
