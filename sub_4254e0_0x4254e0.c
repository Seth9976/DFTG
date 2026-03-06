// 函数名称: sub_4254e0
// 虚拟地址: 0x4254e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_4254e0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d120
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ebx = data_6cfe4c
    
    if (ebx == 0)
        sub_489550(&ExceptionList, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t eax_4 = sub_41d960(ebx + 0xa48)
    
    if (*(ebx + 0x848) != 0)
        sub_4267b0(ebx + 0x848)
        eax_4 = *(ebx + 0x848)
        
        if (eax_4 != 0)
            eax_4 = _aligned_free_base(eax_4)
        
        __builtin_memset(ebx + 0x848, 0, 0x14)
        *(ebx + 0x860) = 0
    
    void* esi_1 = data_6cfe4c
    
    if (esi_1 == 0)
        sub_489550(eax_4, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t eax_5 = *(esi_1 + 0x14)
    void* edx = data_aca0dc
    
    if (eax_5 != 0)
        uint32_t ecx_2 = zx.d(eax_5.w)
        
        if (ecx_2 u< *(edx + 4))
            int128_t* ecx_4 = ecx_2 * 0x4c + *edx
            
            if (*(ecx_4 + 0x48) == eax_5)
                sub_48b510(ecx_4)
    
    *(esi_1 + 0x18) = 0
    sub_4267b0(esi_1 + 0x848)
    int32_t esi_2 = data_114e81c
    
    if (esi_2 != 0)
        int32_t var_8_1 = 0
        `eh vector vbase constructor iterator'(esi_2 + 0x90, 0xc, 0xc, sub_4c40f0)
        `eh vector vbase constructor iterator'(esi_2, 0xc, 0xc, sub_4c40f0)
        int32_t var_8_2 = 0xffffffff
        sub_4984f0(data_114e81c, 0x128)
        data_114e81c = 0
    
    int32_t eax_7 = data_63c468
    
    if (eax_7 != 0)
        if (eax_7 != 1)
            sub_489550(eax_7 - 1, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\gamecenter.cpp", 
                0x22b, "GameCenterDisconnect")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        SteamAPI_Shutdown(eax_2)
    
    void* eax_10 = data_63c47c
    data_63c468 = 0
    
    if (eax_10 != 0 && eax_10 != &data_5b2591)
        if (data_aca1f4 != 0 && *eax_10 != 0)
            char* eax_11 = sub_48a080(&data_63c47c)
            int32_t temp2_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_4984f0(eax_11, *(eax_11 + 0xc) + 0x10)
        
        data_63c47c = &data_5b2591
    
    sub_434060()
    int32_t i = 0
    
    if (*(ebx + 0x824) s> 0)
        void* esi_3 = ebx + 0x2c
        
        do
            char* eax_12 = *esi_3
            
            if (eax_12 != 0 && eax_12 != &data_5b2591)
                if (data_aca1f4 != 0 && *eax_12 != 0)
                    char* eax_13 = sub_48a080(esi_3)
                    int32_t temp4_1 = *(eax_13 + 4)
                    *(eax_13 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        sub_4984f0(eax_13, *(eax_13 + 0xc) + 0x10)
                
                *esi_3 = &data_5b2591
            
            i += 1
            esi_3 += 0x10
        while (i s< *(ebx + 0x824))
    
    char* eax_14 = *(ebx + 0x20)
    
    if (eax_14 != 0 && eax_14 != &data_5b2591)
        if (data_aca1f4 != 0 && *eax_14 != 0)
            char* eax_15 = sub_48a080(ebx + 0x20)
            int32_t temp3_1 = *(eax_15 + 4)
            *(eax_15 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_4984f0(eax_15, *(eax_15 + 0xc) + 0x10)
        
        *(ebx + 0x20) = &data_5b2591
    
    if (*(ebx + 0x834) != 0)
        sub_436cb0(ebx + 0x868)
    
    sub_458360()
    
    if (data_62d6c4 != 0)
        sub_4813c0(&data_62d6c4)
        int32_t eax_16 = data_62d6c4
        
        if (eax_16 != 0)
            _aligned_free_base(eax_16)
        
        __builtin_memset(&data_62d6c4, 0, 0x14)
        data_62d6dc = 0
    
    if (data_632824 != 0)
        sub_481550(&data_632824)
        int32_t eax_17 = data_632824
        
        if (eax_17 != 0)
            _aligned_free_base(eax_17)
        
        __builtin_memset(&data_632824, 0, 0x14)
        data_63283c = 0
    
    if (data_632a10 != 0)
        sub_481620(&data_632a10)
        int32_t eax_18 = data_632a10
        
        if (eax_18 != 0)
            _aligned_free_base(eax_18)
        
        __builtin_memset(&data_632a10, 0, 0x14)
        data_632a28 = 0
    
    void* result = sub_41e1b0()
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
