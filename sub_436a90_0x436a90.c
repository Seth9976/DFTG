// 函数名称: sub_436a90
// 虚拟地址: 0x436a90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_436a90(int32_t arg1, void* arg2, void* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t i_1 = arg4
    *(arg2 + 0xf0) = *(arg3 + 0xe8)
    *(arg2 + 0x100) = *(arg3 + 0xf8)
    *(arg2 + 0x108) = *(arg3 + 0x100)
    *(arg2 + 0xec) = 0
    
    if (i_1 s> 0)
        void* edx = arg3 + 8
        int32_t i
        
        do
            if (*(edx + 0x14) != 0)
                void* ecx = *(arg2 + 0xec) * 0x2c
                *(ecx + arg2 + 0x10) = *edx
                void* ecx_1 = ecx + arg2
                *(ecx_1 + 0x20) = *(edx + 0x10)
                *(ecx_1 + 0x30) = *(edx + 0x20)
                *(ecx_1 + 0x38) = *(edx + 0x28)
                *(arg2 + 0xec) += 1
            
            edx += 0x2c
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t ecx_2 = arg5
    
    if (ecx_2 == 0xffffffff)
        ecx_2 = sub_48dd80()
        arg5 = ecx_2
    
    int32_t edx_2 = *(arg2 + 0xf8) - 0x64
    int128_t var_1c
    __builtin_memcpy(&var_1c, 
        "\x00\x00\x00\x00\x01\x00\x00\x00\x02\x00\x00\x00\x03\x00\x00\x00\x04\x00\x00\x00", 0x14)
    void* result_1
    void* result
    int32_t ebx_1
    
    if (edx_2 u> 0xd)
        ebx_1 = 0
        result = *(arg2 + 0xec) - 1
        result_1 = result
    
    char const* const var_38
    int32_t var_34
    char const* const var_30
    char* ecx_7
    
    if (edx_2 u<= 0xd || result s<= 0)
    label_436ba6:
        int32_t ecx_4 = 0
        *(arg2 + 0xf0) = arg5
        result = *(arg2 + 0xec)
        
        if (result s> 0)
            void* edx_6 = arg2 + 0x2c
            
            do
                edx_6 += 0x2c
                *(edx_6 - 0x2c) = *(&var_1c + (ecx_4 << 2))
                ecx_4 += 1
                result = *(arg2 + 0xec)
            while (ecx_4 s< result)
        
        int32_t ebx_2 = 0
        
        if (result s<= 0)
        label_436c2f:
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return result
        
        void* esi_4 = arg2 + 0x110
        
        while (true)
            if (*esi_4 != 0)
                var_30 = "LocalGameInitNew"
                var_34 = 0x68
                var_38 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesave.cpp"
                ecx_7 = "save.logs.logs[i].logBytes == NULL"
                break
            
            *(esi_4 + 8) = 0x1000
            result = sub_586f5f(0x1000, 0x10)
            
            if (result == 0)
                var_30 = "XMalloc"
                var_34 = 0x57
                var_38 = "d:\ax\trunk\ax2017\engine\xmemory.cpp"
                ecx_7 = "pBuffer"
                break
            
            *esi_4 = result
            ebx_2 += 1
            *(esi_4 + 0x14) = 0
            *(esi_4 + 0x10) = 0
            *(esi_4 + 0xc) = 0
            esi_4 += 0x18
            
            if (ebx_2 s>= *(arg2 + 0xec))
                goto label_436c2f
    else if (0 s> result)
        var_30 = "RandomLCIntRange"
        var_34 = 0xd3
        var_38 = "d:\ax\trunk\ax2017\engine\random.cpp"
        ecx_7 = "min <= max"
    else
        while (result - ebx_1 + 1 s> 0)
            ecx_2 = ecx_2 * 0x41c64e6d + 0x3039
            int32_t esi_3 = *(&var_1c + (ebx_1 << 2))
            int32_t edx_5 = modu.dp.d(0:ecx_2, result - ebx_1 + 1) + ebx_1
            *(&var_1c + (ebx_1 << 2)) = *(&var_1c + (edx_5 << 2))
            ebx_1 += 1
            result = result_1
            *(&var_1c + (edx_5 << 2)) = esi_3
            
            if (ebx_1 s>= result)
                goto label_436ba6
        
        var_30 = "RandomLCInt"
        var_34 = 0xcd
        var_38 = "d:\ax\trunk\ax2017\engine\random.cpp"
        ecx_7 = "maxPlusOne > 0"
    
    sub_489550(result, &data_5b2591, ecx_7, var_38, var_34, var_30)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
