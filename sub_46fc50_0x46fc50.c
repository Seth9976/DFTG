// 函数名称: sub_46fc50
// 虚拟地址: 0x46fc50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_46fc50(int32_t* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_59e12c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_11c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    uint32_t result = sub_46b510(arg1)
    
    if (result.b != 0)
        int32_t* edi_1 = data_126bd24
        
        if (edi_1[1] != 2)
            sub_489550(result, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_STRUCTURE", 
                "d:\ax\trunk\ax2017\engine\structure.cpp", 0x559, "StructureGetDef")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t* eax_3 = sub_4981f0(edi_1)
        float var_70 = 0f
        int32_t var_6c_1 = 0
        void* ecx_1 = *eax_3
        void* var_120_1 = ecx_1
        float var_68_1 = *(ecx_1 + 0x4c) f- *(ecx_1 + 0x40)
        float var_64_1 = *(ecx_1 + 0x50) f- *(ecx_1 + 0x44)
        int128_t var_38
        float xmm1_3[0x4] = *sub_49ad10(&var_38, nullptr, data_126c254, &var_38, 0)
        float var_30_1 = _mm_shuffle_ps(xmm1_3, xmm1_3, 0xaa) f- xmm1_3
        float var_2c_1 = _mm_shuffle_ps(xmm1_3, xmm1_3, 0xff) - _mm_shuffle_ps(xmm1_3, xmm1_3, 0x55)
        int128_t var_48
        var_38 = *sub_4829a0(&var_48, &var_38:8, &data_5d27f8, &var_48)
        void var_110
        float var_d0[0x8]
        int128_t* eax_10 =
            sub_482820(&var_110, sub_4cdde0(&var_d0, &var_38, &var_70, &var_d0), &arg1[0x1ee], &var_110)
        char const* const var_50 = "Material"
        bool cond:0_1 = *arg1 != 0
        int128_t var_b0 = *eax_10
        int128_t var_a0_1 = eax_10[1]
        int128_t var_90_1 = eax_10[2]
        int128_t var_80_1 = eax_10[3]
        var_48 = data_5d2464
        
        if (cond:0_1)
            sub_489550(eax_10, &data_5b2591, "gfx.type == ROLLGFX_TILE", 
                "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x64da, "GetTileTextureForDisplay")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t eax_11 = arg1[0xe]
        void* esi_1
        
        if (eax_11 != 3)
            esi_1 = &data_62ce60
        
        if (eax_11 == 3 || eax_11 == 1)
            esi_1 = &data_62ce64
        
        int32_t eax_12
        int32_t edx_4
        edx_4:eax_12 = muls.dp.d(0x4ec4ec4f, arg1[0xc] - &data_5b6ba8)
        int32_t edx_5 = edx_4 s>> 4
        int32_t eax_15 = (edx_5 u>> 0x1f) + edx_5
        int32_t esi_2 = *(esi_1 + (eax_15 << 3))
        
        if (esi_2 == 0)
            sub_489550(eax_15, &data_5b2591, "id != DATAID_NULL", 
                "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6c, 
                "DataArray<struct TileTexture>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        uint32_t ecx_8 = zx.d(esi_2.w)
        int32_t edx_6
        
        if (ecx_8 u< data_632a14)
            edx_6 = data_632a10
            eax_15 = ecx_8 * 9
        
        if (ecx_8 u>= data_632a14 || *(edx_6 + (eax_15 << 2) + 0x20) != esi_2)
            sub_489550(eax_15, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, 
                "DataArray<struct TileTexture>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t eax_16 = data_632a04
        uint32_t ecx_9 = ecx_8 * 9
        *(edx_6 + (ecx_9 << 2)) = eax_16
        
        if (data_632a04 == 0)
            sub_489550(eax_16, &data_5b2591, "tex->frame = gRollClient.gameFrame", 
                "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x64e1, "GetTileTextureForDisplay")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t var_4c_1 = *((*(edx_6 + (ecx_9 << 2) + 0x1c) << 2) + &data_632a2c)
        
        if (data_1514888 s> *(*fsbase->ThreadLocalStoragePointer + 4))
            int32_t eax_21
            eax_21, edx_6 = __Init_thread_header(&data_1514888)
            
            if (data_1514888 == 0xffffffff)
                int32_t var_14_1 = 0
                
                if (edi_1[1] != 2)
                    sub_489550(eax_21, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_STRUCTURE", 
                        "d:\ax\trunk\ax2017\engine\assetutils.cpp", 0x312, "StructureDefGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                int32_t* eax_22 = sub_4981f0(edi_1)
                int32_t edi_2 = 0
                int32_t** var_2c_2 = eax_22
                int32_t* ecx_12 = *eax_22
                
                if (*ecx_12 s> 0)
                    int32_t esi_3 = 0
                    
                    while (true)
                        int32_t eax_23 = ecx_12[2]
                        char const* const ecx_13 = "Material"
                        char* eax_24 = *(eax_23 + esi_3 + 8)
                        int32_t eax_26
                        
                        while (true)
                            char edx_7 = *eax_24
                            char const temp0_1 = *ecx_13
                            bool c_1 = edx_7 u< temp0_1
                            
                            if (edx_7 == temp0_1)
                                if (edx_7 == 0)
                                    eax_26 = 0
                                    break
                                
                                edx_7 = eax_24[1]
                                char temp1_1 = ecx_13[1]
                                c_1 = edx_7 u< temp1_1
                                
                                if (edx_7 == temp1_1)
                                    eax_24 = &eax_24[2]
                                    ecx_13 = &ecx_13[2]
                                    
                                    if (edx_7 != 0)
                                        continue
                                    
                                    eax_26 = 0
                                    break
                            
                            eax_26 = sbb.d(eax_24, eax_24, c_1) | 1
                            break
                        
                        if (eax_26 == 0)
                            *(eax_23 + esi_3 + 0x50) = 0xa
                        
                        edi_2 += 1
                        esi_3 += 0x150
                        ecx_12 = *var_2c_2
                        
                        if (edi_2 s>= *ecx_12)
                            break
                
                data_151488c = 1
                int32_t var_14_2 = 0xffffffff
                __Init_thread_footer(&data_1514888)
        
        edx_6.b = 0
        int32_t eax_31 = sub_492260(sub_46c270(arg1, edx_6.b) << 0x10)
        sub_494fb0(&var_50, &var_b0, edi_1, &eax_3[0x10], nullptr, &var_50, 1)
        result = sub_492260(eax_31)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
