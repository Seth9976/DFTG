// 函数名称: sub_4305f0
// 虚拟地址: 0x4305f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4305f0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: uint32_t (* esi)[0x4] = data_6cfe70
    uint32_t (* esi)[0x4] = data_6cfe70
    char const* const var_728_1
    int32_t var_724_1
    char const* const var_720_1
    int32_t result
    char* ecx_1
    
    if (esi != 0)
    label_4306de:
        result = arg1
        data_6cfe74 = result
        data_6cfe78 = arg2
        data_6cfe6c = 0
        esi[0x96][0] = 0
        esi[0xbc] = data_5d2770
        int32_t esi_2
        
        if (result != 0)
        label_430712:
            esi_2 = 0
        label_430714:
            void* edi_1 = data_6cfe70
            int32_t edx_1 = 0
            *(edi_1 + 0x960) = 0
            
            if (esi_2 s> 0)
                do
                    int32_t eax_8 = *(edi_1 + 0x960)
                    void* ecx_6 = (eax_8 << 4) + edi_1
                    *(edi_1 + 0x960) = eax_8 + 1
                    *ecx_6 = *((edx_1 << 2) + &data_1514ef0)
                    *(ecx_6 + 0xc) = 1
                    *(ecx_6 + 4) = *((edx_1 << 2) + &data_1515148)
                    result = *((edx_1 << 2) + &data_15153a0)
                    edx_1 += 1
                    *(ecx_6 + 8) = result
                while (edx_1 s< esi_2)
            
            data_62b220 = 0x14
            return result
        
        if (arg2 == 0)
            result = data_1514eec
            TEB* fsbase
            
            if (result s> *(*fsbase->ThreadLocalStoragePointer + 4))
                result = __Init_thread_header(&data_1514eec)
                
                if (data_1514eec == 0xffffffff)
                    void var_70c
                    _memset(&var_70c, 0, 0x708)
                    int32_t ebx_1 = data_126c260
                    int32_t esi_3 = 0
                    int32_t edi_2 = data_126c25c
                    data_15118a4 = 0
                    int32_t ecx_11 = 0
                    
                    for (void** const i = &data_5b6bb4; i s< 0x5b7abc; i = &i[0xd])
                        int32_t eax_13 = i[-3]
                        void var_708
                        void var_4b8
                        void var_4b4
                        void var_260
                        void var_25c
                        
                        if (eax_13 == 0)
                            esi_3 += 2
                            *(&var_70c + ecx_11) = *i
                            *(&var_4b4 + ecx_11) = ebx_1
                            *(&var_25c + ecx_11) = &data_639d48
                            *(&var_708 + ecx_11) = 0
                            ecx_11 += 8
                            *(&var_4b8 + ecx_11) = 0
                            data_15118a4 = esi_3
                            *(&var_260 + ecx_11) = 0
                        else if (eax_13 == 2)
                            esi_3 += 1
                            *(&var_70c + ecx_11) = *i
                            ecx_11 += 4
                            *(&var_4b8 + ecx_11) = edi_2
                            data_15118a4 = esi_3
                            *(&var_260 + ecx_11) = 0
                        else if (eax_13 == 3)
                            esi_3 += 2
                            *(&var_70c + ecx_11) = *i
                            int32_t eax_18 = i[6]
                            *(&var_4b4 + ecx_11) = edi_2
                            *(&var_25c + ecx_11) = 0
                            *(&var_708 + ecx_11) = eax_18
                            ecx_11 += 8
                            *(&var_4b8 + ecx_11) = edi_2
                            data_15118a4 = esi_3
                            *(&var_260 + ecx_11) = 0
                    
                    __builtin_memcpy(&data_1514ef0, &var_70c, 0x708)
                    result = __Init_thread_footer(&data_1514eec)
            
            esi_2 = data_15118a4
            
            if (esi_2 s< 0x96)
                goto label_430714
            
            var_720_1 = "GameSpecific_GetGameExpansionDecls"
            var_724_1 = 0x8b59
            ecx_1 = "numTiles < MAX_CARDSET"
            var_728_1 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
        else
            if (arg2 == 1 || arg2 == 2)
                goto label_430712
            
            var_720_1 = "GameSpecific_GetGameExpansionDecls"
            var_724_1 = 0x8b61
            ecx_1 = "Halt"
            var_728_1 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
    else
        result = data_62b0a0
        
        if (result u< data_62b098)
            result = data_62b09c
            int32_t result_1 = data_62b094
            
            if (result u<= result_1)
                int32_t ecx_2 = data_62b090
                int32_t eax_1
                
                if (result != result_1)
                    result_1 = result
                    eax_1 = *(result * 0xbf8 + ecx_2 + 0xbf4)
                else
                    eax_1 = result_1 + 1
                    data_62b094 = eax_1
                
                void* var_720_2 = 0xbf4
                char var_724_2 = 0
                data_62b09c = eax_1
                esi = result_1 * 0xbf8 + ecx_2
                _memset(esi, var_724_2, var_720_2)
                (*esi)[0x2fd] = data_62b0a4 << 0x10 | result_1
                int32_t eax_7 = data_62b0a4 + 1
                
                if (eax_7 == 0x10000)
                    eax_7 = 1
                
                data_62b0a0 += 1
                data_62b0a4 = eax_7
                esi[0xbd][0] = 0xffffffff
                (*esi)[0x2f6] = 0xffffffff
                data_6cfe70 = esi
                goto label_4306de
            
            var_720_1 = "DataArray<struct Cardset>::DataArrayAlloc"
            var_724_1 = 0xf5
            var_728_1 = "d:\ax\trunk\ax2017\engine\dataarray.h"
            ecx_1 = "mFreeListHead <= mMaxUsedCount"
        else
            var_720_1 = "DataArray<struct Cardset>::DataArrayAlloc"
            var_724_1 = 0xf4
            var_728_1 = "d:\ax\trunk\ax2017\engine\dataarray.h"
            ecx_1 = "mUsedCount < mMaxSize"
    
    sub_489550(result, &data_5b2591, ecx_1, var_728_1, var_724_1, var_720_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
