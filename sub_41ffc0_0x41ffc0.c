// 函数名称: sub_41ffc0
// 虚拟地址: 0x41ffc0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_41ffc0()
{
    // 第一条实际指令: void* esi = data_6d00d0
    void* esi = data_6d00d0
    char const* const var_10
    int32_t var_c
    char const* const var_8
    void* result
    char* ecx_1
    
    if (esi != 0)
        result.b = *(esi + 0x18)
        void* ecx
        ecx.b = result.b == 0
        *(esi + 0x18) = ecx.b
        
        if (result.b != 0)
            int32_t ecx_2 = 0x300
            
            if (*(esi + 0x1c) s> 0x300)
                ecx_2 = *(esi + 0x1c)
            
            *(data_aca1ec + 0x18) = ecx_2
            *(data_aca1ec + 0x14) = sub_41ff40(ecx_2, *(esi + 0x14))
            ecx.b = *(esi + 0x18)
        
        sub_489910(ecx.b)
        sub_436df0()
        result = data_6cfe4c
        
        if (result != 0)
            *(result + 0xa7c) = 1
            return result
        
        var_8 = "GetClient"
        var_c = 0x75
        var_10 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_1 = "gClient"
    else
        var_8 = "GetLocalSettings"
        var_c = 0x24c
        var_10 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp"
        ecx_1 = "gGameSettings.localSettings"
    
    sub_489550(result, &data_5b2591, ecx_1, var_10, var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
