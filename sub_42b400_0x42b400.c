// 函数名称: sub_42b400
// 虚拟地址: 0x42b400
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_42b400()
{
    // 第一条实际指令: int32_t i = data_62bbe4
    int32_t i = data_62bbe4
    int32_t var_c_1
    int32_t eax
    char const* const ecx
    
    if (i s>= 0)
        eax = *(data_6d00d8 + 0xbe0)
        
        if (i s>= eax)
            char const* const __saved_edi_1 = "DeleteProfileBySlot"
            var_c_1 = 0x295
            ecx = "slot < gGameSettings.profileSettings->numProfiles"
        else if (eax != 1)
            void* eax_2 = sub_437ec0(i)
            void* edx_1 = data_6d00d8
            eax = *(edx_1 + 0xbe4)
            
            if (eax != *(eax_2 + 0x240))
                if (i s< *(edx_1 + 0xbe0) - 1)
                    void* edi_1 = i * 0x2f8
                    
                    do
                        void* ecx_3 = edi_1 + edx_1
                        sub_438270(ecx_3, ecx_3 + 0x2f8)
                        edx_1 = data_6d00d8
                        edi_1 += 0x2f8
                        i += 1
                    while (i s< *(edx_1 + 0xbe0) - 1)
                
                *(edx_1 + 0xbe0) -= 1
                return sub_437ba0(data_6d00d8) __tailcall
            
            char const* const __saved_edi_3 = "DeleteProfileBySlot"
            var_c_1 = 0x297
            ecx = "gGameSettings.profileSettings->activeProfileIndex != GetProfileBySlot(slot).profileIndex"
        else
            char const* const __saved_edi_2 = "DeleteProfileBySlot"
            var_c_1 = 0x296
            ecx = "gGameSettings.profileSettings->numProfiles != 1"
    else
        char const* const __saved_edi = "DeleteProfileBySlot"
        var_c_1 = 0x294
        ecx = "slot >= 0"
    
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 
        var_c_1, "DeleteProfileBySlot")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
