// 函数名称: sub_475ef0
// 虚拟地址: 0x475ef0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_475ef0(void* arg1)
{
    // 第一条实际指令: int32_t var_388
    int32_t var_388
    void* eax_1 = __security_cookie ^ &var_388
    void* var_c = eax_1
    void* ecx = data_6cfe4c
    char const* const var_39c_1
    int32_t var_398_1
    char const* const var_394_1
    char* ecx_1
    
    if (ecx != 0)
        eax_1 = sub_452b90(*(ecx + 0xa68))
        int32_t edx_1 = data_632564
        void* edi_1 = eax_1
        void* var_368_1 = edi_1
        
        if (edx_1 != 0)
            eax_1 = zx.d(edx_1.w)
            
            if (eax_1 u< data_62d6c8)
                eax_1 = data_62d6c4 + eax_1 * 0x8ac
                void* var_36c_1 = eax_1
                
                if (*(eax_1 + 0x8a8) == edx_1)
                    int32_t var_364 = 4
                    int32_t* result = &var_364
                    void* ecx_4 = 4
                    int32_t* result_1 = &var_364
                    
                    if (*arg1 != 0x12)
                        ecx_4 = nullptr
                    
                    if (*arg1 == 0x13)
                        ecx_4 = 5
                    
                    int32_t var_360_1 = 5
                    
                    while (true)
                        int32_t eax_3 = *result
                        int32_t edx_2 = 0
                        var_388 = 0
                        int32_t ecx_5 = *(edi_1 + (eax_3 << 2) + 0x29c)
                        void* esi_1
                        
                        if (ecx_5 == 0)
                            esi_1 = nullptr
                        else
                            int32_t* eax_4 = sub_452cc0(ecx_5)
                            edx_2 = var_388
                            esi_1 = eax_4
                        
                        void* var_384_1 = esi_1
                        int32_t var_380
                        eax_1 = Unlock(&var_380)
                        int32_t edi_2 = var_380
                        
                        while (esi_1 != edi_2)
                            if (esi_1 == 0)
                                var_394_1 = "Tiles::TileIt::operator *"
                                var_398_1 = 0x2ac
                                var_39c_1 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                                ecx_1 = &data_5e3f90
                                goto label_476268
                            
                            eax_1 = ecx_4
                            
                            if (eax_3 == eax_1)
                                eax_1 = arg1
                                
                                if (edx_2 == *(eax_1 + 4))
                                    edx_2 += 1
                                    var_388 = edx_2
                            
                            if (esi_1 != var_36c_1)
                                if (*(esi_1 + 0x174) != 0 && data_632810 == 1)
                                    void var_a0
                                    int128_t* eax_6 = sub_458af0(&var_a0, edx_2, esi_1 + 0x1d8, &var_a0)
                                    int128_t xmm0_1 = *eax_6
                                    int128_t xmm1_1 = eax_6[1]
                                    int128_t xmm2_1 = eax_6[2]
                                    int128_t xmm3_1 = eax_6[3]
                                    int128_t xmm4_1 = eax_6[4]
                                    int128_t xmm5_1 = eax_6[5]
                                    *(esi_1 + 0x174) = 0
                                    *(esi_1 + 0x178) = xmm0_1
                                    *(esi_1 + 0x188) = xmm1_1
                                    *(esi_1 + 0x198) = xmm2_1
                                    *(esi_1 + 0x1a8) = xmm3_1
                                    *(esi_1 + 0x1b8) = xmm4_1
                                    *(esi_1 + 0x1c8) = xmm5_1
                                
                                eax_1 = *(esi_1 + 0x34) - 1
                                
                                if (eax_1 u> 4)
                                    var_394_1 = "TileWhereToLoc"
                                    var_398_1 = 0xb62
                                    var_39c_1 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                                    ecx_1 = "Halt"
                                    goto label_476268
                                
                                int32_t edi_3
                                
                                switch (eax_1)
                                    case nullptr, 1
                                        edi_3 = 0
                                    case 2
                                        edi_3 = 5
                                    case 3
                                        edi_3 = 6
                                    case 4
                                        edi_3 = 7
                                
                                int32_t var_34c_1 = 0
                                uint32_t var_344[0x8][0x4]
                                _memset(&var_344, 0, 0x8c)
                                bool cond:2_1 = *(esi_1 + 0x6a8) != 0
                                int32_t edx_3 = var_388
                                int32_t var_358 = *(esi_1 + 0x3c)
                                int32_t var_354_1 = edi_3
                                int32_t var_350_1 = edx_3
                                int32_t var_348_1 = *(esi_1 + 0x38)
                                
                                if (not(cond:2_1) && (*(esi_1 + 0x1dc) != edi_3
                                        || *(esi_1 + 0x1e0) != edx_3 || *(esi_1 + 0x1e4) != var_34c_1))
                                    int32_t var_3c[0xc]
                                    sub_4c5670(data_126be70, &var_3c)
                                    sub_4c5920(&var_3c)
                                    edx_3 = var_388
                                
                                eax_1 = esi_1 + 0x70
                                int32_t var_1a8 = 1
                                *(eax_1 + 0x744) = 0
                                edx_2 = edx_3 + 1
                                var_388 = edx_2
                                void var_144
                                __builtin_memcpy(&var_144, &var_358, 0xa0)
                                __builtin_memcpy(eax_1, eax_1 + 0x104, 0x104)
                                void var_2b8
                                __builtin_memcpy(&var_2b8, &var_1a8, 0x104)
                                int32_t var_1b4_1 = 1
                                int32_t var_1b0_1 = 0
                                __builtin_memcpy(eax_1 + 0x208, &var_2b8, 0x10c)
                                *(eax_1 + 0x638) = 1
                                edi_2 = var_380
                                esi_1 = var_384_1
                            
                            int32_t ecx_9 = *(esi_1 + 0x40)
                            
                            if (ecx_9 != 0)
                                eax_1 = sub_452cc0(ecx_9)
                                edx_2 = var_388
                                esi_1 = eax_1
                            else
                                esi_1 = nullptr
                            
                            var_384_1 = esi_1
                        
                        result = &result_1[1]
                        result_1 = result
                        void var_35c
                        
                        if (result == &var_35c)
                            break
                        
                        edi_1 = var_368_1
                    
                    @__security_check_cookie@4(var_c ^ &var_388)
                    return result
            
            var_394_1 = "DataArray<struct RollGfx>::DataArrayGet"
            var_398_1 = 0x6d
            ecx_1 = "DataArrayTryToGet(id) != NULL"
        else
            var_394_1 = "DataArray<struct RollGfx>::DataArrayGet"
            var_398_1 = 0x6c
            ecx_1 = "id != DATAID_NULL"
        
        var_39c_1 = "d:\ax\trunk\ax2017\engine\dataarray.h"
    else
        var_394_1 = "GetClient"
        var_398_1 = 0x75
        var_39c_1 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_1 = "gClient"
    
    label_476268:
    sub_489550(eax_1, &data_5b2591, ecx_1, var_39c_1, var_398_1, var_394_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
