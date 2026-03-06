// 函数名称: ??1_StructuredTaskCollection@details@Concurrency@@QAE@XZ
// 虚拟地址: 0x41ce90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*??1_StructuredTaskCollection@details@Concurrency@@QAE@XZ()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59cdb8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_14
    char* lpThreadId = &var_14
    int32_t eax_3
    int32_t ecx
    eax_3, ecx = _rand_s(lpThreadId)
    
    if (eax_3 != 0)
        lpThreadId = "GoodRandSeed"
        sub_489550(eax_3, &data_5b2591, "result == 0", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x62, lpThreadId)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    sub_48dd30(ecx, var_14)
    lpThreadId = nullptr
    CreateThread(nullptr, 0x100000, sub_41c120, nullptr, THREAD_CREATE_RUN_IMMEDIATELY, lpThreadId)
    lpThreadId = sub_436f10(&data_6d00d0)
    sub_48a2c0(&lpThreadId, "channelsettings.xml")
    void var_1c
    sub_4cfce0(&var_1c, 1)
    int32_t var_8_1 = 0
    char** esi = data_126b920
    int32_t* eax_4 = sub_4d8120(esi, &var_1c)
    
    if (eax_4 != 0)
        int32_t* eax_5 = sub_4d60d0(eax_4, esi)
        sub_4d4bb0(eax_4)
        data_6d00d4 = eax_5
        
        if (eax_5 == 0)
            data_6d00d4 = sub_4cf0b0(data_126b920)
    else
        data_6d00d4 = eax_4
        data_6d00d4 = sub_4cf0b0(data_126b920)
    
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        char* const var_18
        char* eax_7 = var_18
        
        if (eax_7 != 0 && *eax_7 != 0)
            char* eax_8 = sub_48a080(&var_18)
            int32_t temp1_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_4984f0(eax_8, *(eax_8 + 0xc) + 0x10)
                var_18 = &data_5b2591
    
    int32_t var_8_3 = 0xffffffff
    sub_437f60(&data_6d00d8)
    int32_t* eax_9 = data_6d00d4
    
    if (eax_9 == 0)
        lpThreadId = "GetChannelSettings"
        sub_489550(eax_9, &data_5b2591, "gGameSettings.channelSettings", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x252, lpThreadId)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    char* lpThreadId_1 = *eax_9
    char const* const ecx_10 = "Live A"
    char* lpThreadId_2 = lpThreadId_1
    void* result
    int32_t edx_5
    
    while (true)
        edx_5.b = *lpThreadId_2
        char const temp0_1 = *ecx_10
        bool c_1 = edx_5.b u< temp0_1
        
        if (edx_5.b == temp0_1)
            if (edx_5.b == 0)
                result = nullptr
                break
            
            edx_5.b = lpThreadId_2[1]
            char temp2_1 = ecx_10[1]
            c_1 = edx_5.b u< temp2_1
            
            if (edx_5.b == temp2_1)
                lpThreadId_2 = &lpThreadId_2[2]
                ecx_10 = &ecx_10[2]
                
                if (edx_5.b != 0)
                    continue
                
                result = nullptr
                break
        
        result = sbb.d(lpThreadId_2, lpThreadId_2, c_1) | 1
        break
    
    void* esi_2 = data_aca1ec
    
    if (result != 0)
        ecx_10 = "Live B"
        char* lpThreadId_3 = lpThreadId_1
        
        while (true)
            edx_5.b = *lpThreadId_3
            char const temp3_1 = *ecx_10
            bool c_2 = edx_5.b u< temp3_1
            
            if (edx_5.b == temp3_1)
                if (edx_5.b == 0)
                    result = nullptr
                    break
                
                edx_5.b = lpThreadId_3[1]
                char temp4_1 = ecx_10[1]
                c_2 = edx_5.b u< temp4_1
                
                if (edx_5.b == temp4_1)
                    lpThreadId_3 = &lpThreadId_3[2]
                    ecx_10 = &ecx_10[2]
                    
                    if (edx_5.b != 0)
                        continue
                    
                    result = nullptr
                    break
            
            result = sbb.d(lpThreadId_3, lpThreadId_3, c_2) | 1
            break
        
        if (result != 0 || *(esi_2 + 0x2f) != 0)
            goto label_41d02f
    else if (*(esi_2 + 0x2f) != 0)
    label_41d02f:
        lpThreadId = lpThreadId_1
        int32_t var_30_1 = *(esi_2 + 0xc)
        sub_41da20(result, edx_5, ecx_10, 0x1511b30, "%s - %s")
        result = data_aca1ec
        *(result + 0xc) = 0x1511b30
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
