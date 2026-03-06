// 函数名称: sub_4c2f10
// 虚拟地址: 0x4c2f10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4c2f10()
{
    // 第一条实际指令: char const* const var_18
    char const* const var_18
    int32_t var_14
    char const* const var_10
    void* eax
    char* ecx_1
    
    if (data_114e818 == 0)
        int32_t* eax_1 = sub_498440(0x38)
        eax_1[3] += 1
        int32_t* edi_1 = *eax_1
        
        if (edi_1 == 0)
            sub_4982d0(eax_1)
            edi_1 = *eax_1
        
        *eax_1 = *edi_1
        _memset(edi_1, 0, 0x38)
        data_114e818 = edi_1
        edi_1[0xd] = 0x3b83126f
        int32_t* eax_3 = sub_498440(0x20)
        eax_3[3] += 1
        int32_t* ecx_3 = *eax_3
        
        if (ecx_3 == 0)
            sub_4982d0(eax_3)
            ecx_3 = *eax_3
        
        eax = *ecx_3
        *eax_3 = eax
        void* esi_3 = data_114e818
        __builtin_memset(ecx_3, 0, 0x20)
        edi_1[1] = ecx_3
        
        if (esi_3 != 0)
            int32_t* esi_4 = *(esi_3 + 4)
            *esi_4 = 0
            esi_4[1] = 0
            esi_4[2] = 0x40
            esi_4[3] = 0
            sub_4f49a0(esi_4)
            esi_4[4] = 0
            esi_4[5] = 0
            esi_4[6] = 0x40
            esi_4[7] = 0
            eax = sub_4f4a20(&esi_4[4])
            void*** ebx_1 = data_114e818
            
            if (ebx_1 == 0)
                goto label_4c2fa7
            
            int32_t* eax_4 = sub_498440(0x1c)
            eax_4[3] += 1
            void** esi_5 = *eax_4
            
            if (esi_5 == 0)
                sub_4982d0(eax_4)
                esi_5 = *eax_4
            
            eax = *esi_5
            *eax_4 = eax
            __builtin_memset(esi_5, 0, 0x14)
            esi_5[5] = 1
            esi_5[6] = 0
            *ebx_1 = esi_5
            
            if (*esi_5 == 0)
                void* eax_5 = sub_4c2e40(0x1b000)
                void* ebx_2 = data_114e818
                *esi_5 = eax_5
                esi_5[2] = 0x400
                eax = 0xd908
                esi_5[6] = "Structures"
                esi_5[5] = 0xd908
                
                if (ebx_2 == 0)
                    goto label_4c2fa7
                
                int32_t* eax_6 = sub_498440(0x1c)
                eax_6[3] += 1
                void** esi_6 = *eax_6
                
                if (esi_6 == 0)
                    sub_4982d0(eax_6)
                    esi_6 = *eax_6
                
                eax = *esi_6
                *eax_6 = eax
                __builtin_memset(esi_6, 0, 0x14)
                esi_6[5] = 1
                esi_6[6] = 0
                *(ebx_2 + 0xc) = esi_6
                
                if (*esi_6 == 0)
                    *esi_6 = sub_4c2e40(0x25000)
                    esi_6[2] = 0x400
                    eax = 0xdd2c
                    esi_6[6] = "Flanims"
                    esi_6[5] = 0xdd2c
                    bool cond:1_1 = data_6c9b9c == 0
                    data_15117cc = 1
                    
                    if (cond:1_1)
                        void* eax_8 = sub_4c2e40(0xc00)
                        void* ebx_3 = data_114e818
                        data_6c9b9c = eax_8
                        data_6c9ba4 = 0x80
                        eax = 0xd36c
                        data_6c9bb4 = "spines"
                        data_6c9bb0 = 0xd36c
                        
                        if (ebx_3 == 0)
                            goto label_4c2fa7
                        
                        int32_t* eax_9 = sub_498440(0x30)
                        eax_9[3] += 1
                        void** esi_7 = *eax_9
                        
                        if (esi_7 == 0)
                            sub_4982d0(eax_9)
                            esi_7 = *eax_9
                        
                        eax = *esi_7
                        *eax_9 = eax
                        __builtin_memset(esi_7, 0, 0x14)
                        esi_7[5] = 1
                        __builtin_memset(&esi_7[6], 0, 0x18)
                        *(ebx_3 + 0x10) = esi_7
                        
                        if (*esi_7 == 0)
                            void* eax_10 = sub_4c2e40(0x1f000)
                            void* ebx_4 = data_114e818
                            *esi_7 = eax_10
                            esi_7[2] = 0x400
                            eax = 0xdfdc
                            esi_7[6] = "Particles"
                            esi_7[5] = 0xdfdc
                            
                            if (ebx_4 == 0)
                                goto label_4c2fa7
                            
                            void** eax_11 = sub_498440(0x1c)
                            eax_11[3] += 1
                            void* esi_8 = *eax_11
                            
                            if (esi_8 == 0)
                                sub_4982d0(eax_11)
                                esi_8 = *eax_11
                            
                            eax = *esi_8
                            *eax_11 = eax
                            __builtin_memset(esi_8, 0, 0x14)
                            *(esi_8 + 0x14) = 1
                            *(esi_8 + 0x18) = 0
                            *(ebx_4 + 0x14) = esi_8
                            
                            if (*esi_8 == 0)
                                *esi_8 = sub_4c2e40(0xd000)
                                *(esi_8 + 8) = 0x400
                                *(esi_8 + 0x18) = "Attachments"
                                bool cond:2 = data_a9fb7f != 0
                                *(esi_8 + 0x14) = 0xd640
                                
                                if (cond:2)
                                    return 0xd640
                                
                                jump(*(*data_aca1ec + 8))
                            
                            var_10 = "DataArray<struct Attachment>::DataArrayInitialize"
                        else
                            var_10 = "DataArray<struct ParticleSystem>::DataArrayInitialize"
                    else
                        var_10 = "DataArray<struct Spine>::DataArrayInitialize"
                else
                    var_10 = "DataArray<struct Flanim>::DataArrayInitialize"
            else
                var_10 = "DataArray<struct Structure>::DataArrayInitialize"
            
            var_14 = 0xce
            var_18 = "d:\ax\trunk\ax2017\engine\dataarray.h"
            ecx_1 = "mpBlock == NULL"
        else
        label_4c2fa7:
            var_10 = "GetGameData"
            var_14 = 0x45
            var_18 = "d:\ax\trunk\ax2017\engine\game.h"
            ecx_1 = "gpGameData"
    else
        var_10 = "GameInitialize"
        var_14 = 0x2c
        var_18 = "d:\ax\trunk\ax2017\engine\game.cpp"
        ecx_1 = "gpGameData == NULL"
    
    sub_489550(eax, &data_5b2591, ecx_1, var_18, var_14, var_10)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
