// 函数名称: sub_425120
// 虚拟地址: 0x425120
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int80_tsub_425120()
{
    // 第一条实际指令: void* edi = data_6cfe4c
    void* edi = data_6cfe4c
    char const* const var_18
    int32_t var_14
    char const* const var_10_1
    int32_t* eax
    char* ecx
    
    if (edi == 0)
        var_10_1 = "GetClient"
        var_14 = 0x75
        var_18 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx = "gClient"
    else if (*(edi + 0xa48) == 0)
        uint32_t eax_1 = sub_426d50(0x100)
        *(edi + 0xa48) = sub_498490(eax_1 << 2)
        eax = eax_1 - 1
        *(edi + 0xa4c) = eax
        
        if (*(edi + 0x848) == 0)
            *(edi + 0x848) = sub_4c2e40(0xf400)
            *(edi + 0x850) = 0x80
            *(edi + 0x860) = "networkGames"
            *(edi + 0x85c) = 0xde10
            eax = data_6d00d0
            
            if (eax != 0)
                float xmm4_1 = eax[1]
                int32_t xmm0_1 = (zx.o(0)).d
                float xmm3_1 = *eax
                int32_t xmm1_1
                
                if (0f <= xmm4_1)
                    xmm1_1 = _mm_min_ss(0x3f800000, xmm4_1)
                else
                    xmm1_1 = (zx.o(0)).d
                
                void* eax_4 = data_114e838
                *(eax_4 + 0x1c) = xmm1_1
                
                if (not(0f > xmm3_1))
                    xmm0_1 = _mm_min_ss(0x3f800000, xmm3_1)
                
                *(eax_4 + 0x20) = xmm0_1
                void* eax_5 = sub_437f10(*(data_6d00d8 + 0xbe4))
                
                if (*(eax_5 + 0x248) != 1)
                    *(eax_5 + 0x248) = 0
                    sub_41fd00()
                
                eax = sub_4c3860()
                
                if (data_63c468 == 0)
                    if (sub_498260() != 1)
                        sub_4892e0("Gamecenter Connect fail")
                    else
                        sub_4892e0("Gamecenter Connect success")
                        data_63c468 = 1
                    
                    int16_t x87control_1 = sub_4892e0("Gamecenter complete")
                    eax = data_126c250
                    bool cond:2_1 = data_62b090 == 0
                    data_63e5ec = eax
                    data_62b220 = 1
                    data_62b270 = 0x19
                    
                    if (cond:2_1)
                        data_62b090 = sub_4c2e40(0x2fe0)
                        data_62b098 = 4
                        data_62b0a8 = "cardsets"
                        data_62b0a4 = 0xd594
                        data_63e5f0 = &data_634a58
                        eax = sub_44fb20()
                        
                        if (data_62d6c4 == 0)
                            data_62d6c4 = sub_4c2e40(0x22b000)
                            data_62d6cc = 0x400
                            eax = 0xdf90
                            data_62d6dc = &data_5e3f90
                            bool cond:3_1 = data_632824 == 0
                            data_62d6d8 = 0xdf90
                            
                            if (cond:3_1)
                                data_632824 = sub_4c2e40(0xe00)
                                data_63282c = 0x80
                                eax = 0xd190
                                data_63283c = &data_5e7190
                                bool cond:4_1 = data_632a10 != 0
                                data_632838 = 0xd190
                                
                                if (not(cond:4_1))
                                    data_632a10 = sub_4c2e40(0x90)
                                    void* i = &data_632a2c
                                    data_632a18 = 4
                                    data_632a28 = "rtts"
                                    data_632a24 = 0xd194
                                    int80_t result
                                    
                                    do
                                        int32_t eax_11
                                        int16_t x87control_2
                                        int80_t st0_1
                                        st0_1, eax_11, x87control_2 =
                                            sub_598170(x87control_1, data_126cc28)
                                        int32_t eax_12
                                        int80_t st0_2
                                        st0_2, eax_12 = sub_598170(x87control_2, data_126cc24)
                                        int32_t var_10_2 = 0
                                        int32_t* eax_13
                                        int16_t x87control_3
                                        eax_13, x87control_3 = sub_4d2c50(eax_12, eax_11, eax_12, 1, 3)
                                        float xmm0_4 = data_126cc28
                                        *i = eax_13
                                        int32_t eax_14
                                        int16_t x87control_4
                                        int80_t st0_3
                                        st0_3, eax_14, x87control_4 = sub_598170(x87control_3, xmm0_4)
                                        int32_t eax_15
                                        result, eax_15 = sub_598170(x87control_4, data_126cc24)
                                        int32_t var_10_3 = 0
                                        int32_t* eax_16
                                        eax_16, x87control_1 =
                                            sub_4d2c50(eax_15, eax_14, eax_15, 0x50, 4)
                                        i += 4
                                        data_632a3c = eax_16
                                    while (i s< &data_632a3c)
                                    
                                    sub_424fd0()
                                    *(data_114ec70 + 0x25c) = data_126cbd8
                                    return result
                                
                                var_10_1 = "DataArray<struct TileTexture>::DataArrayInitialize"
                            else
                                var_10_1 = "DataArray<struct SimpleEffect>::DataArrayInitialize"
                        else
                            var_10_1 = "DataArray<struct RollGfx>::DataArrayInitialize"
                    else
                        var_10_1 = "DataArray<struct Cardset>::DataArrayInitialize"
                    
                    goto label_4254ad
                
                var_10_1 = "GameCenterConnect"
                var_14 = 0x1db
                var_18 = "d:\ax\trunk\ax2017\engine\gamecenter.cpp"
                ecx = "gGameCenter.type == GAME_CENTER_NONE"
            else
                var_10_1 = "GetLocalSettings"
                var_14 = 0x24c
                var_18 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp"
                ecx = "gGameSettings.localSettings"
        else
            var_10_1 = "DataArray<struct GameSave>::DataArrayInitialize"
        label_4254ad:
            var_14 = 0xce
            var_18 = "d:\ax\trunk\ax2017\engine\dataarray.h"
            ecx = "mpBlock == NULL"
    else
        var_10_1 = "XMap<enum AccountID,struct PresenceInfo>::SetNumBuckets"
        var_14 = 0x72
        var_18 = "d:\ax\trunk\ax2017\engine\xmap.h"
        ecx = "mNodeBuckets == NULL"
    
    sub_489550(eax, &data_5b2591, ecx, var_18, var_14, var_10_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
