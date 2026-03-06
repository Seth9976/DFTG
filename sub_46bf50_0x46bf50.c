// 函数名称: sub_46bf50
// 虚拟地址: 0x46bf50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_46bf50(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_4 = arg1
    int32_t* var_4 = arg1
    char const* const var_10
    int32_t var_c
    char const* const var_8
    int32_t result
    char* ecx
    
    if (*arg1 == 1)
        if (arg1[4] == 4)
            return sub_46be80(sub_452cc0(arg1[7]))
        
        if ((arg1[0x1c] == 1 && arg1[0x36] == 0x23) || (arg1[0x5d] == 1 && arg1[0x77] == 0x23)
                || (arg1[0x1aa] != 0 && arg1[0xb8] == 0x23))
            result.b = 1
            return result
        
        void* edx_1 = data_6cfe4c
        
        if (edx_1 != 0)
            if (arg1[6] != *(edx_1 + 0xa68))
                result = sub_4542f0(arg1, 0x10)
            
            if (arg1[6] == *(edx_1 + 0xa68) || result.b == 0)
                result.b = 0
                return result
            
            result.b = 1
            return result
        
        var_8 = "GetClient"
        var_c = 0x75
        var_10 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx = "gClient"
    else
        var_8 = "IsDisplayDie"
        var_c = 0x5ae8
        var_10 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
        ecx = "gfx.type == ROLLGFX_DIE"
    
    sub_489550(result, &data_5b2591, ecx, var_10, var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
