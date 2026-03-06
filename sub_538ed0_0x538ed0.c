// 函数名称: sub_538ed0
// 虚拟地址: 0x538ed0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_538ed0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a2cf8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_98 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = data_114e834
    void* var_70 = eax_3
    
    if (*(eax_3 + 4) == 0)
        sub_489550(eax_3, &data_5b2591, "pSoundInterface->mDevice", 
            "d:\ax\trunk\ax2017\engine\windows\windowssound.cpp", 0x100, "DxSoundCreateBuffer")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    uint32_t (* var_68)[0x4]
    int32_t* var_9c = &var_68
    int32_t* var_64
    sub_4889e0(&var_64, *arg1, 0x15)
    int32_t var_8_1 = 0
    uint32_t eax_5 = (*var_68)[0xe]
    int32_t* result
    
    if (eax_5 != 0 && arg2 s< *(eax_5 + 0xc))
        int16_t var_28 = 1
        int32_t esi_1 = *eax_5
        int32_t var_24_1 = esi_1
        uint32_t ecx_4 = zx.d(*(eax_5 + 4))
        int16_t var_1a_1 = ecx_4.w
        uint32_t eax_7 = zx.d(*(eax_5 + 8))
        int16_t var_26_1 = eax_7.w
        int16_t var_18_1 = 0
        int32_t eax_9
        int32_t edx
        edx:eax_9 = sx.q(eax_7 * ecx_4)
        uint32_t eax_12 = zx.d(((eax_9 + (edx & 7)) s>> 3).w)
        int16_t var_1c_1 = eax_12.w
        int32_t eax_13 = eax_12 * esi_1
        int32_t var_20_1 = eax_13
        void* esi_3 = *(eax_5 + 0xc)
        int32_t eax_14 = eax_13 << 2
        void* var_78_1 = esi_3
        
        if (esi_3 s> eax_14)
            esi_3 = eax_14
            *(arg1 + 0x59) = 1
            var_78_1 = esi_3
            arg1[5] = eax_14
            arg1[7] = 0
        
        if (esi_3 - 4 u> 0xffffffb)
            sub_489550(esi_3 - 4, &data_5b2591, 
                "bufferSize >= DSBSIZE_MIN && bufferSize <= DSBSIZE_MAX", 
                "d:\ax\trunk\ax2017\engine\windows\windowssound.cpp", 0x127, "DxSoundCreateBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int128_t xmm0_1 = data_5b2330
        int32_t var_60 = 0x24
        int16_t* var_50_1 = &var_28
        int32_t var_5c_1 = 0x180e0
        int32_t* eax_17 = *(var_70 + 4)
        void* var_58_1 = esi_3
        int32_t var_54_1 = 0
        int128_t var_4c_1 = xmm0_1
        int32_t* result_1
        
        if ((*(*eax_17 + 0xc))(eax_17, &var_60, &result_1, 0) != 0)
            goto label_538f37
        
        int32_t* result_2 = result_1
        void var_8c
        void var_88
        uint32_t (* var_7c)[0x4]
        int32_t eax_19 = (*(*result_2 + 0x2c))(result_2, 0, 0, &var_7c, &var_8c, &var_88, &var_70, 2)
        
        if (eax_19 != 0)
            sub_489550(eax_19, &data_5b2591, "hr == S_OK", 
                "d:\ax\trunk\ax2017\engine\windows\windowssound.cpp", 0x7f, "DxSoundLockBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        if (var_70 != eax_19)
            sub_489550(eax_19, &data_5b2591, "b2 == 0", 
                "d:\ax\trunk\ax2017\engine\windows\windowssound.cpp", 0x80, "DxSoundLockBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        bool cond:0_1 = *(arg1 + 0x59) == 0
        uint32_t (* eax_20)[0x4] = var_7c
        var_68 = eax_20
        
        if (cond:0_1)
            sub_4c5fb0(eax_20, nullptr, arg1, eax_20, esi_3)
        else
            arg1[6] = arg2
            void* eax_22 = nullptr
            void* esi_5 = *(eax_5 + 0xc) - arg2
            
            if (esi_5 s< eax_14)
                eax_22 = eax_14 - esi_5
            
            void* eax_23 = var_78_1
            
            if (esi_5 s< eax_14)
                eax_23 = esi_5
            
            sub_538e20(eax_23, var_68, arg1, eax_23, eax_22)
        
        int32_t* result_3 = result_1
        int32_t var_3c = 0x14
        int128_t var_38_1 = zx.o(0)
        int32_t eax_25 = (*(*result_3 + 0xc))(result_3, &var_3c)
        
        if (eax_25 != 0)
            sub_489550(eax_25, &data_5b2591, "hr == S_OK", 
                "d:\ax\trunk\ax2017\engine\windows\windowssound.cpp", 0x89, "DxSoundUnlockBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t eax_27 = (*(*result_3 + 0x4c))(result_3, var_68, var_3c, 0, 0)
        
        if (eax_27 != 0)
            sub_489550(eax_27, &data_5b2591, "hr == S_OK", 
                "d:\ax\trunk\ax2017\engine\windows\windowssound.cpp", 0x8c, "DxSoundUnlockBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t* ecx_10 = var_64
        result = result_1
        
        if (ecx_10 != 0)
            ecx_10[7] -= 1
    else
    label_538f37:
        int32_t* eax_6 = var_64
        
        if (eax_6 != 0)
            eax_6[7] -= 1
        
        result = nullptr
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
