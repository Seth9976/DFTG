// 函数名称: sub_430920
// 虚拟地址: 0x430920
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_430920(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = sub_429080(arg1)
    int32_t eax = sub_429080(arg1)
    int32_t var_c_1
    
    switch (eax)
        case 0
            char const* const var_8 = "StoreItemAction"
            var_c_1 = 0x11e9
            goto label_4309c4
        case 1
            void* result = sub_480430(arg1)
            
            if (data_63c468 == 1)
                int32_t esi_1 = *(result + 8)
                
                if ((*(*SteamUtils() + 0x44))() == 0)
                    data_63c484 = 3
                    return 3
                
                (*(*SteamFriends() + 0x7c))(esi_1, 1)
                result = 1
                data_63c484 = 1
            
            return result
        case 2, 5
            return sub_430ff0(4) __tailcall
        case 4
            return sub_4898f0(*(sub_480430(arg1) + 0x4c)) __tailcall
        default
            char const* const var_8_1 = "StoreItemAction"
            var_c_1 = 0x1209
        label_4309c4:
            sub_489550(eax, &data_5b2591, "Halt", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", var_c_1, 
                "StoreItemAction")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
}
