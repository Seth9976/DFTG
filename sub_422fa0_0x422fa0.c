// 函数名称: sub_422fa0
// 虚拟地址: 0x422fa0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_422fa0(int32_t arg1)
{
    // 第一条实际指令: void* edi = data_6cfe4c
    void* edi = data_6cfe4c
    char const* const var_14
    int32_t var_10
    char const* const __saved_esi
    char* ecx
    
    if (edi != 0)
        if (arg1 s>= 0)
            if (arg1 s< *(edi + 0x824))
                int32_t esi_1 = arg1 << 4
                sub_48a5e0(edi + 0x2c + esi_1, &data_5b2591)
                char* result = sub_579a90(edi + 0x24 + esi_1, edi + 0x34 + esi_1, 
                    ((*(edi + 0x824) - arg1) << 4) - 0x10)
                *(edi + 0x824) -= 1
                return result
            
            __saved_esi = "GameClientRemoveFriendAtIndex"
            var_10 = 0x718
            ecx = "friendIndex < c.numFriends"
        else
            __saved_esi = "GameClientRemoveFriendAtIndex"
            var_10 = 0x717
            ecx = "friendIndex >= 0"
        
        var_14 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameclient.cpp"
    else
        __saved_esi = "GetClient"
        var_10 = 0x75
        var_14 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx = "gClient"
    
    int32_t eax
    sub_489550(eax, &data_5b2591, ecx, var_14, var_10, __saved_esi)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
