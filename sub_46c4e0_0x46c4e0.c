// 函数名称: sub_46c4e0
// 虚拟地址: 0x46c4e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_46c4e0(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_59e038
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_10c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_90 = arg2
    void* eax_3 = data_aca1ec
    arg2.b = 0
    int32_t var_a0 = 0
    int32_t var_9c = 0
    int32_t var_98 = _mm_cvtepi32_ps(zx.o(*(eax_3 + 0x14)))
    int32_t eax_4 = arg1[0x11]
    int32_t var_94 = _mm_cvtepi32_ps(zx.o(*(eax_3 + 0x18)))
    void* eax_5 = sub_46c270(arg1, arg2.b)
    void var_100
    int128_t* eax_8 = sub_481680(&var_100, 
        sub_49ec40(&var_a0, (eax_4 << 2) + &data_62d288, "tile ui", data_126c254, &var_a0, &var_a0, 
            eax_5, nullptr, 0), 
        &arg1[0x5d], &var_100)
    int128_t var_88 = *eax_8
    int128_t var_78 = eax_8[1]
    int128_t var_68 = eax_8[2]
    int128_t var_58 = eax_8[3]
    int128_t var_48 = eax_8[4]
    int128_t var_38 = eax_8[5]
    sub_4a8700(*((eax_4 << 2) + &data_62d288), &var_88)
    int32_t var_110 = 0xffffffff
    sub_4a8570(*((eax_4 << 2) + &data_62d288))
    void* eax_9 = sub_46a6a0()
    
    if (eax_9 != 0)
        int32_t var_110_1
        
        if (*(eax_9 + 0x2c) == 0)
            var_110_1 = 0xffffffff
            sub_4a8570(*((eax_4 << 2) + &data_62d288))
        else
            void* eax_10 = data_6cfe4c
            
            if (eax_10 == 0)
                sub_489550(eax_10, &data_5b2591, "gClient", 
                    "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            if (arg1[0xf] == *(eax_10 + 0xa68))
                var_110_1 = 0xffffffff
                sub_4a8570(*((eax_4 << 2) + &data_62d288))
    
    int32_t var_110_2 = 0xffffffff
    sub_4a8570(*((eax_4 << 2) + &data_62d288))
    void* eax_12 = data_6d00d0
    
    if (eax_12 == 0)
        sub_489550(eax_12, &data_5b2591, "gGameSettings.localSettings", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, "GetLocalSettings")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    eax_12.b = *(eax_12 + 0x2c)
    int32_t var_110_3 = 0xffffffff
    sub_4a8570(*((eax_4 << 2) + &data_62d288))
    char* const var_8c
    char* eax_23
    
    if (var_90 == 2 || var_90 == 3)
        int32_t var_110_4 = 0xffffffff
        sub_4a8570(*((eax_4 << 2) + &data_62d288))
        int32_t var_110_5 = 0xffffffff
        sub_4a8570(*((eax_4 << 2) + &data_62d288))
        
        if (var_90 != 3)
            goto label_46c7a1
        
        int32_t eax_14 = arg1[0xe]
        int32_t eax_18
        
        if (eax_14 == 0)
            eax_18 = *(arg1[0xc] + 0x14)
        else
            if (eax_14 != 1)
                sub_489550(eax_14 - 1, &data_5b2591, "Halt", 
                    "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x406, "TileBaseCost")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            eax_18 = *(arg1[0xc] + 0x2c)
        
        int32_t eax_20 = sub_4530f0(&arg1[0xc])
        
        if (eax_18 == eax_20)
            int32_t var_110_7 = eax_18
            sub_48a9d0(&var_8c, &data_5efc90)
            int32_t var_14_4 = 2
            eax_23 =
                sub_4a8930(&var_8c, &data_6396b8, *((eax_4 << 2) + &data_62d288), &var_8c, 0xffffffff)
            int32_t var_14_5 = 3
        else
            int32_t var_110_6 = eax_20
            sub_48a9d0(&var_8c, &data_5efc90)
            int32_t var_14_1 = 0
            sub_4a8930(&var_8c, &data_6396b8, *((eax_4 << 2) + &data_62d288), &var_8c, 0xffffffff)
            int32_t var_118_2 = 0xffffffff
            eax_23 = sub_4a8570(*((eax_4 << 2) + &data_62d288))
            int32_t var_14_2 = 1
        
        if (data_aca1f4 != 0)
            eax_23 = var_8c
            
            if (eax_23 != 0 && *eax_23 != 0)
                eax_23 = sub_48a080(&var_8c)
                int32_t temp3_1 = *(eax_23 + 4)
                *(eax_23 + 4) -= 1
                
                if (temp3_1 == 1)
                    eax_23 = sub_4984f0(eax_23, *(eax_23 + 0xc) + 0x10)
                    var_8c = &data_5b2591
        
        int32_t var_14_3 = 0xffffffff
        goto label_46c751
    
    label_46c7a1:
    sub_48a2c0(&var_8c, &data_5b2591)
    int32_t var_14_6 = 4
    sub_4a8930(&var_8c, &data_6396b8, *((eax_4 << 2) + &data_62d288), &var_8c, 0xffffffff)
    int32_t var_14_7 = 5
    
    if (data_aca1f4 != 0)
        char* const eax_26 = var_8c
        
        if (eax_26 != 0 && *eax_26 != 0)
            char* eax_27 = sub_48a080(&var_8c)
            int32_t temp2_1 = *(eax_27 + 4)
            *(eax_27 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_4984f0(eax_27, *(eax_27 + 0xc) + 0x10)
                var_8c = &data_5b2591
    
    eax_23 = var_90
    int32_t var_14_8 = 0xffffffff
    
    if (eax_23 == 0 || eax_23 == 3)
    label_46c751:
        
        if (*arg1 != 0)
            sub_489550(eax_23, &data_5b2591, "tile.type == ROLLGFX_TILE", 
                "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x6bf1, "GetTileType_ForDisplay")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t* eax_28 = arg1[0xc]
        int32_t ecx_19 = *eax_28
        
        if (ecx_19 u> 3)
            sub_489550(eax_28, &data_5b2591, "Halt", 
                "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x6c09, "GetTileType_ForDisplay")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t eax_29
        
        switch (ecx_19)
            case 0
                if (arg1[0xe] == 2)
                    goto label_46c862
                
            label_46c853:
                eax_29 = eax_28[0xc]
                goto label_46c865
            case 1
            label_46c862:
                eax_29 = eax_28[6]
            label_46c865:
                
                if (eax_29 u> 5)
                    sub_489550(eax_29, &data_5b2591, "Halt", 
                        "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x5c92, "DeclareTileIcon")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
            case 2
                if (arg1[0xe] == 4)
                    goto label_46c862
                
                sub_489550(eax_28, &data_5b2591, "tile.tile.side == TILE_SIDE_STARTWORLD", 
                    "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x6c06, 
                    "GetTileType_ForDisplay")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            case 3
                int32_t ecx_20 = arg1[0xe]
                
                if (ecx_20 != 0)
                    if (ecx_20 == 1)
                        goto label_46c853
                    
                    sub_489550(eax_28, &data_5b2591, "tile.tile.side == TILE_SIDE_SETTLE", 
                        "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x6bfc, 
                        "GetTileType_ForDisplay")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                eax_29 = 0
        
        switch (eax_29)
            case 5
                nop
    
    int32_t var_110_8 = 0xffffffff
    sub_4a8570(*((eax_4 << 2) + &data_62d288))
    sub_4a4740(*((eax_4 << 2) + &data_62d288), 0, data_620d84)
    int32_t result = *((eax_4 << 2) + &data_62d288)
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
