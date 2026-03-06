// 函数名称: sub_4554e0
// 虚拟地址: 0x4554e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4554e0(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, char arg9)
{
    // 第一条实际指令: void var_15c
    void var_15c
    int32_t eax_1 = __security_cookie ^ &var_15c
    int32_t var_c = eax_1
    int32_t* var_158 = arg3
    int32_t var_170
    char const* const var_16c
    char* ecx
    
    if (*arg2 == 0)
        int32_t var_150
        uint32_t var_13c[0x8][0x4]
        uint32_t (* eax_3)[0x4]
        
        if (arg4 == 1)
            sub_455120(arg4, arg2, arg3, arg4, arg5, arg9)
            arg2[0xf] = 0xffffffff
            int32_t var_144 = 0
            eax_3 = _memset(&var_13c, 0, 0x8c)
            int32_t var_14c = 0
            var_150 = 0xffffffff
            int32_t var_148 = 0xffffffff
            int32_t var_140 = 0xffffffff
        label_45566a:
            void var_b0
            void* edx_1 = &var_b0
            __builtin_memcpy(&var_b0, &var_150, 0xa0)
            
            if (arg7 != 1)
                int32_t eax_9 = sub_452980(eax_3, edx_1, &arg2[0x1c], arg6, arg9)
                @__security_check_cookie@4(var_c ^ &var_15c)
                return eax_9
            
            int32_t eax_8 = sub_4528c0(eax_3, edx_1, &arg2[0x1c], arg6, arg9)
            @__security_check_cookie@4(var_c ^ &var_15c)
            return eax_8
        
        int32_t esi_2
        
        if (arg8 != 1)
            eax_1 = sub_455280(arg4, arg2, arg3, arg4, arg5, arg9)
            esi_2 = eax_1
            
            if (esi_2 == 0)
                eax_1 = arg4
            label_455612:
                eax_1 = sub_454d20(eax_1)
                
                if (esi_2 s>= 0)
                    int32_t var_144_1 = 0
                    _memset(&var_13c, 0, 0x8c)
                    int32_t var_14c_1 = eax_1
                    int32_t var_148_1 = esi_2
                    var_150 = *var_158
                    eax_3 = arg2[0xe]
                    uint32_t (* var_140_1)[0x4] = eax_3
                    goto label_45566a
                
                var_16c = "QueueMoveTile"
                var_170 = 0xd56
                ecx = "slot >= 0"
            else
                var_16c = "QueueMoveTile"
                var_170 = 0xd40
                ecx = "slot == 0"
        else
            int32_t i = arg3[arg4 + 0xa7]
            int32_t edi_1 = 0
            
            if (i != 0)
                do
                    edi_1 += 1
                    i = *(sub_452de0(i) + 0x10)
                while (i != 0)
                
                arg3 = var_158
            
            int32_t esi_1 = arg2[0xd]
            int32_t ecx_2 = edi_1 - 1
            eax_1 = arg4
            esi_2 = sub_455120(i, arg2, arg3, arg4, arg5, arg9)
            
            if (esi_1 != eax_1)
                ecx_2 = edi_1
            
            if (esi_2 == ecx_2)
                goto label_455612
            
            var_16c = "QueueMoveTile"
            var_170 = 0xd3b
            ecx = "slot == numTiles"
    else
        var_16c = "QueueMoveTile"
        var_170 = 0xd0c
        ecx = "gfx.type == ROLLGFX_TILE"
    
    sub_489550(eax_1, &data_5b2591, ecx, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_170, 
        var_16c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
