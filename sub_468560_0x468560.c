// 函数名称: sub_468560
// 虚拟地址: 0x468560
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_468560()
{
    // 第一条实际指令: void var_48
    void var_48
    void* eax_1 = __security_cookie ^ &var_48
    void* var_c = eax_1
    void* ecx = data_6cfe4c
    char const* const var_5c
    int32_t var_58
    char const* const var_54
    char* ecx_1
    
    if (ecx != 0)
        void* eax_2 = sub_452b90(*(ecx + 0xa68))
        int32_t eax_3 = sub_467300(eax_2)
        int32_t var_3c[0xc]
        sub_4c5670(data_126be00, &var_3c)
        void* eax_4
        int32_t ecx_6
        eax_4, ecx_6 = sub_4c5920(&var_3c)
        
        if (eax_3 - 1 u> 6)
            @__security_check_cookie@4(var_c ^ &var_48)
            return eax_4
        
        int32_t* var_44
        
        switch (eax_3)
            case 1
                int32_t i = 0
                
                if (*(eax_2 + 0x4cc) s> 0)
                    eax_4 = eax_2 + 0x33c
                    var_44 = eax_4
                    
                    do
                        int32_t* eax_5
                        int32_t edx_3
                        eax_5, edx_3 = sub_457200(*eax_2, *eax_4)
                        
                        if (eax_5[4] != 7)
                            sub_456d60(eax_5, edx_3, eax_5, 0)
                        
                        i += 1
                        eax_4 = &var_44[1]
                        var_44 = eax_4
                    while (i s< *(eax_2 + 0x4cc))
                
                @__security_check_cookie@4(var_c ^ &var_48)
                return eax_4
            case 2, 4, 5
                @__security_check_cookie@4(var_c ^ &var_48)
                return eax_4
            case 3
                void* eax_7 = sub_45eb20(eax_2)
                @__security_check_cookie@4(var_c ^ &var_48)
                return eax_7
            case 6
                eax_1 = data_632a50
                int32_t* i_2
                int32_t* i_1
                
                if (eax_1 u> 5)
                    var_54 = "RollHandleUndo"
                    var_58 = 0x4d33
                    var_5c = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                    ecx_1 = "Halt"
                else
                    switch (eax_1)
                        case nullptr
                            sub_480db0(&data_62d6c4, &var_44)
                            i_1 = i_2
                            
                            if (i_1 == 0xffffffff)
                            label_46894c:
                                data_632a50.o = zx.o(0)
                                @__security_check_cookie@4(var_c ^ &var_48)
                                return i_1
                            
                            do
                                if (*i_1 == 2)
                                    sub_4683d0(eax_2, i_1)
                                
                                sub_481430(var_44, &i_2)
                                i_1 = i_2
                            while (i_1 != 0xffffffff)
                            
                            data_632a50.o = zx.o(0)
                            @__security_check_cookie@4(var_c ^ &var_48)
                            return i_1
                        case 1
                            eax_1 = data_632a54
                            
                            if (eax_1 != 0)
                                uint32_t ecx_26 = zx.d(eax_1.w)
                                
                                if (ecx_26 u< data_62d6c8)
                                    void* edx_7 = data_62d6c4
                                    int32_t ecx_27 = ecx_26 * 0x8ac
                                    
                                    if (*(ecx_27 + edx_7 + 0x8a8) == eax_1)
                                        int32_t eax_9 = sub_4683d0(eax_2, edx_7 + ecx_27)
                                        data_632a50.o = zx.o(0)
                                        @__security_check_cookie@4(var_c ^ &var_48)
                                        return eax_9
                                
                            label_468704:
                                var_54 = "DataArray<struct RollGfx>::DataArrayGet"
                                var_58 = 0x6d
                                var_5c = "d:\ax\trunk\ax2017\engine\dataarray.h"
                                ecx_1 = "DataArrayTryToGet(id) != NULL"
                            else
                            label_468799:
                                var_54 = "DataArray<struct RollGfx>::DataArrayGet"
                                var_58 = 0x6c
                                var_5c = "d:\ax\trunk\ax2017\engine\dataarray.h"
                                ecx_1 = "id != DATAID_NULL"
                        case 2
                            eax_1 = data_632a54
                            
                            if (eax_1 == 0)
                                goto label_468799
                            
                            uint32_t ecx_31 = zx.d(eax_1.w)
                            
                            if (ecx_31 u< data_62d6c8)
                                void* edx_9 = data_62d6c4
                                int32_t ecx_32 = ecx_31 * 0x8ac
                                
                                if (*(ecx_32 + edx_9 + 0x8a8) == eax_1)
                                    int32_t var_54_3 = ecx_32
                                    int32_t eax_10 = sub_4684e0(eax_2, edx_9 + ecx_32)
                                    data_632a50.o = zx.o(0)
                                    @__security_check_cookie@4(var_c ^ &var_48)
                                    return eax_10
                            
                            goto label_468704
                        case 3
                            int32_t var_58_1 = ecx_6
                            int32_t* eax_11 = sub_452c30(data_632a5c)
                            int32_t* eax_12 = sub_452c30(data_632a58)
                            uint32_t eax_13 = sub_468190(eax_12, eax_12, eax_2, eax_11, 0)
                            data_632a50.o = zx.o(0)
                            @__security_check_cookie@4(var_c ^ &var_48)
                            return eax_13
                        case 4
                            sub_480db0(&data_62d6c4, &var_44)
                            i_1 = i_2
                            
                            if (i_1 == 0xffffffff)
                                goto label_46894c
                            
                            do
                                if (*i_1 == 2 && i_1[0x12] == 0)
                                    sub_4683d0(eax_2, i_1)
                                
                                sub_481430(var_44, &i_2)
                                i_1 = i_2
                            while (i_1 != 0xffffffff)
                            
                            data_632a50.o = zx.o(0)
                            @__security_check_cookie@4(var_c ^ &var_48)
                            return i_1
                        case 5
                            int32_t ecx_45 = sub_480db0(&data_62d6c4, &var_44)
                            
                            for (i_1 = i_2; i_1 != 0xffffffff; i_1 = i_2)
                                if (*i_1 == 2 && i_1[0x12] != 0)
                                    int32_t var_54_7 = ecx_45
                                    sub_4684e0(eax_2, i_1)
                                
                                ecx_45 = sub_481430(var_44, &i_2)
                            
                            goto label_46894c
            case 7
                while (*(eax_2 + 0xdc4) != 0)
                    eax_1 = *(eax_2 + 0xbe4)
                    
                    if (eax_1 == 0)
                        goto label_468799
                    
                    uint32_t ecx_14 = zx.d(eax_1.w)
                    
                    if (ecx_14 u>= data_62d6c8)
                        goto label_468704
                    
                    int32_t edx_4 = data_62d6c4
                    void* ecx_15 = ecx_14 * 0x8ac
                    
                    if (*(ecx_15 + edx_4 + 0x8a8) != eax_1)
                        goto label_468704
                    
                    eax_4 = sub_456d60(eax_1, edx_4, ecx_15 + edx_4, 0)
                
                if (*(eax_2 + 0xe68) == 0)
                    @__security_check_cookie@4(var_c ^ &var_48)
                    return eax_4
                
                while (true)
                    eax_1 = *(eax_2 + 0xdc8)
                    
                    if (eax_1 == 0)
                        goto label_468799
                    
                    uint32_t ecx_17 = zx.d(eax_1.w)
                    
                    if (ecx_17 u>= data_62d6c8)
                        break
                    
                    int32_t edx_5 = data_62d6c4
                    void* ecx_18 = ecx_17 * 0x8ac
                    
                    if (*(ecx_18 + edx_5 + 0x8a8) != eax_1)
                        break
                    
                    void* eax_8 = sub_456d60(eax_1, edx_5, ecx_18 + edx_5, 0)
                    
                    if (*(eax_2 + 0xe68) == 0)
                        @__security_check_cookie@4(var_c ^ &var_48)
                        return eax_8
                
                goto label_468704
    else
        var_54 = "GetClient"
        var_58 = 0x75
        var_5c = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_1 = "gClient"
    
    sub_489550(eax_1, &data_5b2591, ecx_1, var_5c, var_58, var_54)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
