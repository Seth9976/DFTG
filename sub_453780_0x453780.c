// 函数名称: sub_453780
// 虚拟地址: 0x453780
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_453780(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_4 = arg1
    int32_t* var_4 = arg1
    char const* const var_18
    int32_t var_14
    char const* const var_10
    char* ecx
    
    if (*arg1 == 0)
        void* ecx_1 = data_6cfe4c
        
        if (ecx_1 != 0)
            void* edi = sub_452b90(*(ecx_1 + 0xa68))
            void* result
            
            if (*edi == arg1[0xf])
                switch (sub_453650(edi) - 1)
                    case nullptr, 8, 0x1c
                        if (arg1[0xd] - 4 u<= 1)
                            result.b = 1
                            return result
                    case 0xa, 0xc
                        if (arg1[0xd] - 4 u<= 1)
                            return sub_452c00(edi, arg1[0x11])
            
            result.b = 0
            return result
        
        var_10 = "GetClient"
        var_14 = 0x75
        var_18 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx = "gClient"
    else
        var_10 = "CanDragTile"
        var_14 = 0x5a9
        var_18 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
        ecx = "gfx.type == ROLLGFX_TILE"
    
    int32_t eax
    sub_489550(eax, &data_5b2591, ecx, var_18, var_14, var_10)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
