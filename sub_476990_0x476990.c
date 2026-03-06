// 函数名称: sub_476990
// 虚拟地址: 0x476990
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_476990()
{
    // 第一条实际指令: int32_t* var_964
    int32_t* var_964
    int32_t eax_1 = __security_cookie ^ &var_964
    float xmm0
    float var_95c = xmm0
    var_95c = data_620d84
    OSVERSIONINFOEXW versionInformation
    versionInformation.dwOSVersionInfoSize = 0x11c
    versionInformation.dwMajorVersion = 0
    versionInformation.dwMinorVersion = 0
    versionInformation.dwBuildNumber = 0
    versionInformation.dwPlatformId = 0
    var_944
    _memset(&var_944, 0, 0x100)
    versionInformation.wServicePackMajor = 0
    versionInformation.wServicePackMinor = 0
    versionInformation.wSuiteMask = 0
    int32_t var_98c = 0
    versionInformation.wProductType = 0
    versionInformation.wReserved = 0
    int32_t ConditionMask
    int32_t edx
    ConditionMask, edx = VerSetConditionMask(0, VER_MAJORVERSION, 3)
    int32_t var_984 = edx
    int32_t ConditionMask_1
    int32_t edx_1
    ConditionMask_1, edx_1 = VerSetConditionMask(ConditionMask, VER_MINORVERSION, 3)
    int32_t var_97c_1 = edx_1
    int32_t dwlConditionMask
    int32_t edx_2
    dwlConditionMask, edx_2 = VerSetConditionMask(ConditionMask_1, VER_SERVICEPACKMAJOR, 3)
    int32_t var_974 = edx_2
    versionInformation.dwMajorVersion = 0xa
    versionInformation.dwMinorVersion = 0
    versionInformation.wServicePackMajor = 0
    
    if (VerifyVersionInfoW(&versionInformation, 
            VER_MINORVERSION | VER_MAJORVERSION | VER_SERVICEPACKMAJOR, dwlConditionMask) == 0)
        sub_424fd0()
    
    var_964 = &data_632824
    int32_t* var_960 = nullptr
    sub_4815c0(&data_632824, &var_960)
    int32_t* esi = var_960
    char const* const var_97c_2
    int32_t var_978_2
    char const* const var_974_4
    int32_t* result
    char* ecx_5
    
    if (esi == 0xffffffff)
    label_476af3:
        result = data_6cfe4c
        
        if (result != 0)
            if (result[0x20d] == 0)
            label_476dc2:
                @__security_check_cookie@4(eax_1 ^ &var_964)
                return result
            
            int32_t* esi_1 = data_632808
            
            if (esi_1 == 0)
            label_476bc5:
                data_632a04 += 1
                sub_47df40()
                sub_47a330()
                result = sub_45c4c0()
                void* ecx_8 = data_6cfe4c
                
                if (ecx_8 == 0)
                    goto label_476afc
                
                void* eax_8 = sub_452b90(*(ecx_8 + 0xa68))
                int32_t* eax_9
                int32_t edx_5
                eax_9, edx_5 = sub_458130(eax_8, &versionInformation)
                var_964 = eax_9
                void var_590
                int32_t* eax_10 = sub_457f30(eax_8, &var_590)
                *(eax_8 + 0xbcc) = 0
                char eax_11 = sub_457930(eax_10, &versionInformation, &var_590, 0, edx_5, eax_8 + 0x80c)
                int16_t eax_12 = var_964.w
                char ecx_13
                
                if (eax_12.b == 0)
                    ecx_13 = 0
                else if (var_964:2.b == 0)
                    ecx_13 = eax_11
                    
                    if (eax_12:1.b != 0)
                        ecx_13 = 0
                else
                    ecx_13 = 0
                
                *(eax_8 + 0xbd0) = ecx_13
                int32_t* esi_3 = nullptr
                void* ebx_1
                
                while (true)
                    if (esi_3 != 0)
                        esi_3 = &esi_3[0x22b]
                    else
                        esi_3 = data_62d6c4
                    
                    int32_t eax_16 = data_62d6c8 * 0x8ac + data_62d6c4
                    
                    if (esi_3 u>= eax_16)
                        break
                    
                    while (true)
                        if ((esi_3[0x22a] & 0xffff0000) != 0)
                            if (*esi_3 != 2)
                                break
                            
                            if (esi_3[0x1aa] != 0)
                                ebx_1.b = esi_3[0xdf] == 1
                            else
                                ebx_1.b = 0
                            
                            if (sub_480dd0(&esi_3[0x1c], data_620d84) != 0 && ebx_1.b == 0)
                                sub_4767c0(esi_3)
                            
                            sub_46b8e0(esi_3)
                            break
                        
                        esi_3 = &esi_3[0x22b]
                        
                        if (esi_3 u>= eax_16)
                            goto label_476d26
                
            label_476d26:
                int32_t** esi_4 = nullptr
                
                while (true)
                    if (esi_4 != 0)
                        esi_4 = &esi_4[0x22b]
                    else
                        esi_4 = data_62d6c4
                    
                    result = data_62d6c8 * 0x8ac + data_62d6c4
                    
                    if (esi_4 u>= result)
                        goto label_476dc2
                    
                    while ((esi_4[0x22a] & 0xffff0000) == 0)
                        esi_4 = &esi_4[0x22b]
                        
                        if (esi_4 u>= result)
                            goto label_476dc2
                    
                    if (*esi_4 != 2)
                        if (esi_4[0x1aa] != 0)
                            ebx_1.b = esi_4[0xdf] == 1
                        else
                            ebx_1.b = 0
                        
                        if (sub_480dd0(&esi_4[0x1c], data_620d84) != 0 && ebx_1.b == 0)
                            sub_4767c0(esi_4)
                        
                        int32_t eax_20
                        
                        if (esi_4[0x1aa] == 0 && esi_4[0x5d] == 1)
                            eax_20 = esi_4[0x77]
                        
                        if (esi_4[0x1aa] == 0 && esi_4[0x5d] == 1 && (eax_20 == 8 || eax_20 == 0)
                                && esi_4[0xd] != 2)
                            if (*esi_4 == 0)
                                data_632554 += 1
                            
                            if (esi_4[1] != 0)
                                sub_49a5a0(&esi_4[1])
                        else
                            result = *esi_4
                            
                            if (result == 0)
                                if (sub_4543d0(esi_4) != 6)
                                    int32_t eax_24 = *esi_4[0xc]
                                    
                                    if (eax_24 == 0)
                                        if (esi_4[0xe] == 3)
                                            goto label_476e90
                                        
                                        sub_46d750(esi_4)
                                        continue
                                    
                                    if (eax_24 == 1)
                                    label_476e90:
                                        
                                        if (sub_4543d0(esi_4) != 2 && sub_4543d0(esi_4) != 3)
                                            sub_49a5a0(&esi_4[1])
                                            continue
                                
                                sub_46e9d0(esi_4, 1)
                                continue
                            else if (result != 1)
                                if (result == 2)
                                    var_974_4 = "GameSpecific_Update"
                                    var_978_2 = 0x7247
                                    break
                                
                                if (result != 3)
                                    var_974_4 = "GameSpecific_Update"
                                    var_978_2 = 0x7254
                                    break
                                
                                sub_459a70(esi_4)
                                result = sub_4bc0f0(esi_4[1])
                                
                                if (result.b == 0)
                                    continue
                                else if (esi_4[0x1aa] != 0)
                                    continue
                                else
                                    if (*esi_4 != 3)
                                        var_974_4 = "CompleteFlyingToken"
                                        var_978_2 = 0x2437
                                        var_97c_2 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                                        ecx_5 = "gfx.type == ROLLGFX_TOKEN"
                                        goto label_476f8b
                                    
                                    void* eax_27 = sub_452b90(esi_4[0x17])
                                    int32_t edx_9 = esi_4[0x18]
                                    int32_t ecx_34 = esi_4[0x16]
                                    
                                    if (edx_9 s<= 0)
                                        *(eax_27 + (ecx_34 << 2) + 0x318) -= edx_9
                                    else
                                        *(eax_27 + (ecx_34 << 2) + 0x310) -= edx_9
                                    
                                    if (esi_4[1] != 0)
                                        sub_49a5a0(&esi_4[1])
                            else
                                sub_4709b0(esi_4)
                                continue
                        
                        int32_t ecx_23 = data_62d6d0
                        data_62d6d0 = zx.d(esi_4[0x22a].w)
                        esi_4[0x22a] = ecx_23
                        data_62d6d4 -= 1
                
                var_97c_2 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                ecx_5 = "Halt"
            else if (data_632a00 == 0)
                if (sub_45de90() != 0)
                    goto label_476bc5
                
                result = sub_45dd60(&var_95c)
                
                if (result.b != 0)
                    goto label_476bc5
                
                bool cond:0_1 = data_aca1e8 == 0
                data_632a00 = 1
                
                if (cond:0_1)
                    void* eax_14 = data_632808
                    data_aca1e8 = eax_14
                    result = ReleaseSemaphore(*(eax_14 + 0xc), 1, nullptr)
                    
                    if (result != 0)
                        goto label_476bc5
                    
                    var_974_4 = "mutex_release"
                    var_978_2 = 0x83
                    var_97c_2 = "d:\ax\trunk\ax2017\engine\coroutine.cpp"
                    ecx_5 = "Halt"
                else
                    var_974_4 = "co_resume_async"
                    var_978_2 = 0x1c2
                    var_97c_2 = "d:\ax\trunk\ax2017\engine\coroutine.cpp"
                    ecx_5 = "g_current_coroutine == NULL"
            else if (data_aca1e8 != 0)
                result = WaitForSingleObject(esi_1[4], 0)
                
                if (result == 0)
                    bool cond:1_1 = *esi_1 != 2
                    data_aca1e8 = 0
                    
                    if (not(cond:1_1))
                        sub_48da70(esi_1)
                        data_632808 = 0
                    
                    data_632a00 = 0
                    sub_46a800(*sub_425de0())
                    goto label_476bc5
                
                if (result == 0x102)
                    goto label_476bc5
                
                var_974_4 = "mutex_timed_lock"
                var_978_2 = 0x62
                var_97c_2 = "d:\ax\trunk\ax2017\engine\coroutine.cpp"
                ecx_5 = "Halt"
            else
                var_974_4 = "co_async_complete"
                var_978_2 = 0x1cc
                var_97c_2 = "d:\ax\trunk\ax2017\engine\coroutine.cpp"
                ecx_5 = "g_current_coroutine != NULL"
        else
        label_476afc:
            var_974_4 = "GetClient"
            var_978_2 = 0x75
            var_97c_2 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
            ecx_5 = "gClient"
    else
        while (true)
            if (sub_4556f0(esi) != 0)
                int32_t eax_5 = *esi
                result = eax_5 - 2
                
                if (eax_5 != 2)
                    var_974_4 = "UpdateEffects"
                    var_978_2 = 0xdb6
                    break
                
                int32_t var_974_2 = 0
                sub_4d99b0(&esi[4], &esi[2], esi[1], var_95c, &esi[4], 1f)
            else
                int32_t ecx_2 = data_632830
                data_632830 = zx.d(esi[6].w)
                esi[6] = ecx_2
                data_632834 -= 1
            
            sub_4815c0(var_964, &var_960)
            esi = var_960
            
            if (esi == 0xffffffff)
                goto label_476af3
        
        var_97c_2 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
        ecx_5 = "Halt"
    
    label_476f8b:
    sub_489550(result, &data_5b2591, ecx_5, var_97c_2, var_978_2, var_974_4)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
