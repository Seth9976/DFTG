// 函数名称: sub_41fd00
// 虚拟地址: 0x41fd00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_41fd00()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* esi = data_6d00d4
    char const* const var_20
    int32_t var_1c
    char const* const var_18
    void* result
    char* ecx_1
    
    if (esi != 0)
        result = data_6cfe4c
        
        if (result != 0)
            int32_t eax = *(result + 0x14)
            void* edx = data_aca0dc
            
            if (eax != 0)
                uint32_t ecx_2 = zx.d(eax.w)
                
                if (ecx_2 u< *(edx + 4))
                    int128_t* ecx_4 = ecx_2 * 0x4c + *edx
                    
                    if (*(ecx_4 + 0x48) == eax)
                        sub_48b510(ecx_4)
            
            char* edi = *(esi + 0x10)
            int16_t esi_1 = (*(esi + 8)).w
            void* eax_1 = sub_48b280()
            
            if (sub_48afe0(eax_1, edi, eax_1, esi_1) == 0)
                sub_48b510(eax_1)
                *(result + 0x14) = 0
                *(result + 0x18) = 1
                return result
            
            if (eax_1 == 0)
                *(result + 0x14) = 0
                *(result + 0x18) = 1
                return result
            
            int32_t ecx_7 = *(eax_1 + 0x48)
            *(eax_1 + 0x14) = 1
            *(eax_1 + 0x24) = 1
            *(eax_1 + 0x28) = 2
            *(result + 0x14) = ecx_7
            *(result + 0x18) = 1
            return result
        
        var_18 = "GetClient"
        var_1c = 0x75
        var_20 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_1 = "gClient"
    else
        var_18 = "GetChannelSettings"
        var_1c = 0x252
        var_20 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp"
        ecx_1 = "gGameSettings.channelSettings"
    
    sub_489550(result, &data_5b2591, ecx_1, var_20, var_1c, var_18)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
