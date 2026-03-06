// 函数名称: sub_45cc10
// 虚拟地址: 0x45cc10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_45cc10(int32_t arg1, void* arg2, int32_t* arg3, char arg4, int32_t arg5)
{
    // 第一条实际指令: void* edi = arg2
    void* edi = arg2
    char const* const var_24 = "ai init"
    void* var_10 = edi
    sub_4892e0("ai init")
    int32_t* result
    int32_t* result_1 = result
    *arg3 = 0x15117b4
    int32_t ecx = result_1[2]
    char const* const var_2c_1
    int32_t var_28_1
    char const* const var_24_1
    char* eax_2
    char* ecx_3
    void* ecx_2
    
    if (ecx == 0)
        data_15117b8 = sx.d(arg4)
        ecx_2 = *arg3
    label_45cc77:
        int32_t i = 0
        int32_t i_2 = 0
        char* var_28
        
        if (*(ecx_2 + 4) s> 0)
            void* var_c_1 = &arg3[0x70]
            
            do
                void* eax_5 = sub_436a20(edi, i)
                var_24 = 0x10
                var_28 = 0x4000
                eax_2 = sub_586f5f(0x4000, 0x10)
                
                if (eax_2 == 0)
                    var_24_1 = "XMalloc"
                    var_28_1 = 0x57
                    var_2c_1 = "d:\ax\trunk\ax2017\engine\xmemory.cpp"
                    ecx_3 = "pBuffer"
                    goto label_45ce9d
                
                char* ecx_5 = *(eax_5 + 0xc)
                
                if (ecx_5 s>= 0x4000)
                    var_24_1 = "RollClientSetLog"
                    var_28_1 = 0x19d3
                    var_2c_1 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                    ecx_3 = "log.logSizeWritten < ROLL_BUFFER_SIZE"
                    goto label_45ce9d
                
                if (ecx_5 s> 0)
                    var_24 = ecx_5
                    sub_579300(eax_2, *eax_5, var_24)
                
                *(eax_5 + 8) = 0x4000
                *eax_5 = eax_2
                sub_425fe0(var_10 + 8, i_2)
                i = i_2 + 1
                i_2 = i
                *(var_c_1 - 4) = *eax_5
                edi = var_10
                *var_c_1 = *(eax_5 + 0x10) u>> 2
                *(var_c_1 + 4) = 0
                var_c_1 += 0x1bc
                ecx_2 = *arg3
            while (i s< *(ecx_2 + 4))
        
        int32_t* result_2 = result
        
        if (result_2[2] == 0)
            *(ecx_2 + 0xc) = 0
        else
            var_24 = arg3
            sub_4885f0(var_24)
            *(*arg3 + 0xc) = 0x1512ae0
        
        int32_t i_1 = 0
        **arg3 = arg5
        *(*arg3 + 8) = result_2[1]
        *(*arg3 + 0x14) = result_2[6]
        
        if (*(*arg3 + 4) s> 0)
            void* ebx_3 = &arg3[7]
            
            do
                int32_t eax_16 = **ebx_3
                
                if (eax_16 != 0)
                    var_28.q = (zx.o(0)).q
                    eax_16(arg3, i_1, var_28, var_24)
                
                i_1 += 1
                ebx_3 += 0x1bc
            while (i_1 s< *(*arg3 + 4))
        
        sub_4892e0("ai done")
        int32_t** eax_18 = sub_498440(0x18)
        eax_18[3] += 1
        int32_t* lpParameter = *eax_18
        
        if (lpParameter == 0)
            sub_4982d0(eax_18)
            lpParameter = *eax_18
        
        *eax_18 = *lpParameter
        __builtin_memset(lpParameter, 0, 0x18)
        lpParameter[2] = arg3
        lpParameter[1] = sub_458470
        lpParameter[4] = CreateSemaphoreA(nullptr, 1, 1, nullptr)
        HANDLE eax_21 = CreateSemaphoreA(nullptr, 1, 1, nullptr)
        HANDLE hHandle = lpParameter[4]
        lpParameter[3] = eax_21
        *lpParameter = 0
        eax_2 = WaitForSingleObject(hHandle, 0xffffffff)
        
        if (eax_2 == 0)
            eax_2 = WaitForSingleObject(lpParameter[3], 0xffffffff)
            
            if (eax_2 == 0)
                lpParameter[5] = CreateThread(eax_2, 0x100000, sub_48d990, lpParameter, eax_2, eax_2)
                result = lpParameter
                data_632a00 = 1
                sub_48db90(&result)
                data_632a00 = 0
                sub_46a800(*sub_425de0())
                return result
        
        var_24_1 = "mutex_lock"
        var_28_1 = 0x78
        ecx_3 = "Halt"
        var_2c_1 = "d:\ax\trunk\ax2017\engine\coroutine.cpp"
    else
        *(*arg3 + 4) = *sub_488530(ecx)
        ecx_2 = *arg3
        eax_2 = *(ecx_2 + 4)
        
        if (eax_2 == arg4.d)
            goto label_45cc77
        
        var_24_1 = "RollGameStartCo"
        var_28_1 = 0x2b8f
        var_2c_1 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
        ecx_3 = "rtfg->opt->num_players == numRealPlayers"
    label_45ce9d:
    sub_489550(eax_2, &data_5b2591, ecx_3, var_2c_1, var_28_1, var_24_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
