// 函数名称: sub_49d920
// 虚拟地址: 0x49d920
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (* __convention("regparm")sub_49d920(int32_t arg1, int128_t* arg2, void* arg3, char* arg4, char arg5))[0x4]
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = __ehhandler$?_Init@?$numpunct@G@std@@IAEXABV_Locinfo@2@_N@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_c4 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg5 != 0 && *(arg3 + 0xf48) != 0)
        *(arg3 + 0x1190) = 0
    
    void* eax_5 = *fsbase->ThreadLocalStoragePointer
    void* ecx = eax_5
    int128_t var_80
    int128_t var_70
    int128_t var_60
    int128_t var_50
    int64_t var_40
    
    if (data_1515698 s> *(ecx + 4))
        __Init_thread_header(&data_1515698)
        
        if (data_1515698 == 0xffffffff)
            int32_t var_14_1 = 0
            _memset(&var_80, 0, 0x48)
            sub_4ce640(&var_80, data_126cd20)
            int32_t* var_c8_3 = &data_1515698
            data_15156a0 = var_80
            data_15156b0 = var_70
            data_15156c0 = var_60
            data_15156d0 = var_50
            data_15156e0 = var_40
            int32_t var_14_2 = 0xffffffff
            __Init_thread_footer(var_c8_3)
        
        ecx = eax_5
    
    if (data_15156e8 s> *(ecx + 4))
        __Init_thread_header(&data_15156e8)
        
        if (data_15156e8 == 0xffffffff)
            int32_t var_14_3 = 1
            sub_49d820()
            _atexit(sub_5a3c80)
            int32_t var_14_4 = 0xffffffff
            __Init_thread_footer(&data_15156e8)
    
    void* var_c8_7 = 0x154
    void* var_cc_2 = &data_15156f0
    *arg2 = data_15156a0
    arg2[1] = data_15156b0
    arg2[2] = data_15156c0
    arg2[3] = data_15156d0
    arg2[4].q = data_15156e0
    sub_579300(arg4, var_cc_2, var_c8_7)
    char* ecx_2 = arg4
    char* eax_8 = *(ecx_2 + 0x154)
    void* esi_1 = &ecx_2[0x154]
    
    if (eax_8 != 0 && eax_8 != &data_5b2591)
        if (data_aca1f4 != 0 && *eax_8 != 0)
            eax_8 = sub_48a080(esi_1)
            int32_t temp0_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp0_1 == 1)
                eax_8 = sub_4984f0(eax_8, *(eax_8 + 0xc) + 0x10)
            
            ecx_2 = arg4
        
        *esi_1 = &data_5b2591
    
    if (*(ecx_2 + 8) == 0)
        sub_489550(eax_8, &data_5b2591, "propsStatic.itemAlignment != TA_NONE", 
            "d:\ax\trunk\ax2017\engine\ui2.cpp", 0xf92, "UI2ItemReset")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t* eax_9 = sub_4bcae0(0x3f800000, &var_70)
    int128_t xmm1_1 = *(eax_9 + 0x10)
    int128_t xmm2 = *(eax_9 + 0x20)
    int64_t xmm3 = *(eax_9 + 0x30)
    int32_t eax_10 = eax_9[0xe]
    *(arg3 + 0x93c) = *eax_9
    *(arg3 + 0x94c) = xmm1_1
    *(arg3 + 0x95c) = xmm2
    *(arg3 + 0x96c) = xmm3
    int32_t xmm1_2 = 0x3f800000
    *(arg3 + 0x974) = eax_10
    int32_t* eax_11 = sub_4bcae0(xmm1_2, &var_70)
    int128_t xmm2_1 = *(eax_11 + 0x10)
    int128_t xmm3_1 = *(eax_11 + 0x20)
    int64_t xmm4 = *(eax_11 + 0x30)
    int32_t eax_12 = eax_11[0xe]
    *(arg3 + 0xb28) = *eax_11
    *(arg3 + 0xb38) = xmm2_1
    *(arg3 + 0xb48) = xmm3_1
    *(arg3 + 0xb58) = xmm4
    *(arg3 + 0xb60) = eax_12
    int32_t* eax_13 = sub_4bcae0(xmm1_2, &var_70)
    void* var_c8_11 = 0x68
    int128_t xmm1_3 = *(eax_13 + 0x10)
    char var_cc_3 = 0
    int128_t xmm2_2 = *(eax_13 + 0x20)
    int64_t xmm3_2 = *(eax_13 + 0x30)
    int32_t eax_14 = eax_13[0xe]
    *(arg3 + 0xaec) = *eax_13
    *(arg3 + 0xafc) = xmm1_3
    *(arg3 + 0xb0c) = xmm2_2
    *(arg3 + 0xb1c) = xmm3_2
    *(arg3 + 0xb24) = eax_14
    uint32_t var_a8[0x2][0x4]
    int32_t edx_3 = _memset(&var_a8, var_cc_3, var_c8_11)
    int32_t var_38 = 0
    var_40:4.d = 0xffffffff
    var_40.d = 1
    int128_t var_b8 = data_5d2760
    __builtin_memcpy(arg3 + 0xa68, &var_b8, 0x84)
    int32_t* eax_15 = sub_4bcc90(&var_70, 0xffffffff)
    int128_t xmm1_4 = *(eax_15 + 0x10)
    int128_t xmm2_3 = *(eax_15 + 0x20)
    int64_t xmm3_3 = *(eax_15 + 0x30)
    int32_t eax_16 = eax_15[0xe]
    *(arg3 + 0xc6c) = *eax_15
    *(arg3 + 0xc7c) = xmm1_4
    *(arg3 + 0xc8c) = xmm2_3
    *(arg3 + 0xc9c) = xmm3_3
    *(arg3 + 0xca4) = eax_16
    int32_t* eax_17 = sub_4bcc90(&var_70, 0)
    int128_t xmm1_5 = *(eax_17 + 0x10)
    int128_t xmm2_4 = *(eax_17 + 0x20)
    int64_t xmm3_4 = *(eax_17 + 0x30)
    int32_t eax_18 = eax_17[0xe]
    *(arg3 + 0xca8) = *eax_17
    *(arg3 + 0xcb8) = xmm1_5
    *(arg3 + 0xcc8) = xmm2_4
    *(arg3 + 0xcd8) = xmm3_4
    *(arg3 + 0xce0) = eax_18
    int32_t* eax_20 = sub_4bcd40(&var_70, edx_3, 0, &var_70)
    void* var_c8_13 = 0x40
    int128_t xmm1_6 = *(eax_20 + 0x10)
    char var_cc_5 = 0
    int128_t xmm2_5 = *(eax_20 + 0x20)
    int64_t xmm3_5 = *(eax_20 + 0x30)
    int32_t eax_21 = eax_20[0xe]
    *(arg3 + 0xb64) = *eax_20
    *(arg3 + 0xb74) = xmm1_6
    *(arg3 + 0xb84) = xmm2_5
    *(arg3 + 0xb94) = xmm3_5
    *(arg3 + 0xb9c) = eax_21
    uint32_t (* result)[0x4] = _memset(&var_80, var_cc_5, var_c8_13)
    int32_t var_84 = data_126cca0
    var_40:4.d = 0xffffffff
    var_40.d = 1
    *(arg3 + 0xba0) = data_126cc9c.o
    *(arg3 + 0xef4) = 0x3f800000
    int128_t xmm0_21 = var_80
    *(arg3 + 0xf0c) = 0x3f800000
    *(arg3 + 0xbb0) = xmm0_21
    *(arg3 + 0xbc0) = var_70
    *(arg3 + 0xbd0) = var_60
    *(arg3 + 0xbe0) = var_50
    *(arg3 + 0xbf0) = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
