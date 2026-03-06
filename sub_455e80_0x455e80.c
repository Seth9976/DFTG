// 函数名称: sub_455e80
// 虚拟地址: 0x455e80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_455e80(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    void* eax_1 = __security_cookie ^ &__saved_ebp
    void* var_c = eax_1
    char const* const var_16c
    int32_t var_168
    char const* const var_164
    char* ecx
    
    if (*arg2 == 0)
        eax_1 = data_6cfe4c
        
        if (eax_1 != 0)
            int32_t esi_1 = arg2[0xf]
            
            if (esi_1 != *(eax_1 + 0xa68))
                if (esi_1 == *arg3)
                    int32_t var_144 = 0
                    uint32_t var_13c[0x8][0x4]
                    _memset(&var_13c, 0, 0x8c)
                    int32_t var_148 = arg4
                    int32_t eax_3 = arg2[0xe]
                    int32_t var_150 = esi_1
                    int32_t var_140 = eax_3
                    int32_t var_14c = 0x22
                    void var_b0
                    __builtin_memcpy(&var_b0, &var_150, 0xa0)
                    int32_t var_a4 = arg5
                    int32_t result = sub_4528c0(arg5, &var_b0, &arg2[0x1c], 5, 0)
                    @__security_check_cookie@4(var_c ^ &__saved_ebp)
                    return result
                
                var_164 = "QueueDisplayTile"
                var_168 = 0xe94
                ecx = "gfx.tile.owner == pgui.who"
            else
                var_164 = "QueueDisplayTile"
                var_168 = 0xe93
                ecx = "gfx.tile.owner != LocalWho()"
            
            var_16c = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
        else
            var_164 = "GetClient"
            var_168 = 0x75
            var_16c = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
            ecx = "gClient"
    else
        var_164 = "QueueDisplayTile"
        var_168 = 0xe90
        ecx = "gfx.type == ROLLGFX_TILE"
        var_16c = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
    
    sub_489550(eax_1, &data_5b2591, ecx, var_16c, var_168, var_164)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
