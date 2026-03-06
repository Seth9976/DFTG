// 函数名称: sub_468190
// 虚拟地址: 0x468190
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_468190(int32_t arg1, int32_t* arg2, void* arg3, int32_t* arg4, char arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* eax_2 = sub_452cc0(arg4[7])
    int32_t eax_3 = arg4[0x78]
    uint32_t (* eax_4)[0x4] = sub_481490(&data_62d6c4)
    uint32_t (* edi)[0x4] = eax_4
    *edi = 2
    int32_t var_d4
    char const* const var_d0
    char* ecx_1
    
    if (*eax_2 == 0)
        eax_4 = eax_2[0xc]
        uint32_t ecx_2 = *eax_4
        
        if (ecx_2 u> 3)
            var_d0 = "GetTileType_ForDrop"
            var_d4 = 0x6c27
            ecx_1 = "Halt"
        else
            switch (ecx_2)
                case 0
                    int32_t ecx_4 = eax_2[0xe]
                    
                    if (ecx_4 == 2)
                    label_46823d:
                        eax_4 = eax_4[3][0]
                        goto label_468269
                    
                    if (ecx_4 != 3)
                        goto label_468266
                    
                    eax_4 = eax_4[3][0]
                    goto label_468269
                case 1
                label_468266:
                    eax_4 = (*eax_4)[6]
                label_468269:
                    (*edi)[0x13] = eax_4
                    
                    if (eax_4 != 0)
                        if (eax_4 != 1)
                            edi[5][0] = sub_454ce0(arg2)
                            (*edi)[0x15] = sub_454ce0(arg4)
                            uint32_t ebx_1
                            ebx_1.b = eax_3 != 0
                            int64_t var_a0 = 0
                            arg2[8].b = 1
                            (*edi)[0x225] = ebx_1
                            uint32_t var_94[0x8][0x4]
                            _memset(&var_94, 0, 0x88)
                            int32_t var_98 = eax_2[0x22a]
                            int32_t var_a8 = 0x1c
                            uint32_t var_a4 = ebx_1
                            int32_t var_ac = arg2[6]
                            sub_4741d0(sub_4741d0(sub_452860(&edi[7], &var_ac), arg2, arg3, edi, arg5), 
                                arg4, arg3, edi, arg5)
                            sub_46b8e0(edi)
                            sub_46a420(0x19)
                            data_632a50 = 1
                            uint32_t result = (*edi)[0x22a]
                            data_632a54 = result
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return result
                        
                        var_d0 = "ShipActionCreateLinkTray"
                        var_d4 = 0x4c90
                        ecx_1 = "tileKind != KIND_GRAY"
                    else
                        var_d0 = "ShipActionCreateLinkTray"
                        var_d4 = 0x4c8f
                        ecx_1 = "tileKind != KIND_DEV"
                case 2
                    if (eax_2[0xe] == 4)
                        goto label_468266
                    
                    var_d0 = "GetTileType_ForDrop"
                    var_d4 = 0x6c24
                    ecx_1 = "tile.tile.side == TILE_SIDE_STARTWORLD"
                case 3
                    int32_t ecx_3 = eax_2[0xe]
                    
                    if (ecx_3 == 0)
                        eax_4 = nullptr
                        goto label_468269
                    
                    if (ecx_3 == 1)
                        goto label_46823d
                    
                    var_d0 = "GetTileType_ForDrop"
                    var_d4 = 0x6c1a
                    ecx_1 = "tile.tile.side == TILE_SIDE_SETTLE"
    else
        var_d0 = "GetTileType_ForDrop"
        var_d4 = 0x6c0f
        ecx_1 = "tile.type == ROLLGFX_TILE"
    
    sub_489550(eax_4, &data_5b2591, ecx_1, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_d4, 
        var_d0)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
