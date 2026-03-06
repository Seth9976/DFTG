// 函数名称: sub_45c790
// 虚拟地址: 0x45c790
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

HANDLEsub_45c790(void* arg1, int32_t arg2, int32_t arg3, char* arg4, int32_t* arg5, char* arg6, int32_t* arg7, int32_t arg8, int32_t arg9, void** arg10)
{
    // 第一条实际指令: *((arg2 << 3) + &data_a755f8) = *(arg2 * 0x1bc + arg1 + 0x1c0)
    *((arg2 << 3) + &data_a755f8) = *(arg2 * 0x1bc + arg1 + 0x1c0)
    
    if (arg3 != 2 || *(arg1 + 0x10) != 0)
        return data_62147c(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10)
    
    void** lpParameter_1 = sub_586f5f(0x340, 0x10)
    void** lpParameter = lpParameter_1
    char const* const var_1c_1
    int32_t var_18_1
    char const* const var_14_1
    char* ecx
    
    if (lpParameter != 0)
        *lpParameter = arg1
        lpParameter[1] = arg2
        lpParameter[2] = 2
        int32_t edx_1
        
        if (arg5 == 0)
            edx_1 = 0
        else
            edx_1 = *arg5
        
        lpParameter[0x67] = edx_1
        int32_t ecx_1
        
        if (arg7 == 0)
            ecx_1 = 0
        else
            ecx_1 = *arg7
        
        lpParameter[0xcd] = arg8
        lpParameter[0xce] = arg9
        lpParameter_1 = arg10
        lpParameter[0xcc] = ecx_1
        lpParameter[0xcf] = lpParameter_1
        
        if (edx_1 s> 0)
            lpParameter_1 = sub_579300(&lpParameter[3], arg4, *arg5 << 2)
            ecx_1 = lpParameter[0xcc]
        
        if (ecx_1 s> 0)
            lpParameter_1 = sub_579300(&lpParameter[0x68], arg6, *arg7 << 2)
        
        if (*((arg2 << 3) + &data_a755f4) == 0)
            HANDLE result = CreateThread(nullptr, 0x100000, sub_45c720, lpParameter, 
                THREAD_CREATE_RUN_IMMEDIATELY, nullptr)
            *((arg2 << 3) + &data_a755f4) = result
            return result
        
        var_14_1 = "thread_ai_make_choice"
        var_18_1 = 0x2a0b
        var_1c_1 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
        ecx = "aiThreads[who].handle == NULL"
    else
        var_14_1 = "XMalloc"
        var_18_1 = 0x57
        var_1c_1 = "d:\ax\trunk\ax2017\engine\xmemory.cpp"
        ecx = "pBuffer"
    
    sub_489550(lpParameter_1, &data_5b2591, ecx, var_1c_1, var_18_1, var_14_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
