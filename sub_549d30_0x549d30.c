// 函数名称: sub_549d30
// 虚拟地址: 0x549d30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_549d30(int32_t* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) =
        __ehhandler$??0UMSThreadProxy@details@Concurrency@@QAE@PAUIThreadProxyFactory@12@PAXI@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t var_a4 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    bool cond:0 = data_1152b94 != 0
    data_11d2fe8 = 0xffffffff
    void var_98
    
    if (not(cond:0))
        int32_t ecx = data_11d2fe4
        int128_t var_64 = data_63c264
        data_11e6020 = 0
        int128_t var_54 = data_63c274
        sub_4ebc60(&var_98, 0, ecx, &var_98)
        int32_t eax_4
        eax_4.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_4
    
    int64_t xmm0_2 = data_11e6004
    float xmm1_1 = xmm0_2:4.d f- data_aca218:8
    float xmm2_1 = data_11e600c f- data_aca218:0xc
    int128_t var_3c = data_11e5ff4.o
    float xmm0_5 = xmm0_2.d f- data_aca218:4
    float xmm0_9 = sub_41dbe0(xmm0_5 * xmm0_5 + xmm1_1 * xmm1_1 + xmm2_1 * xmm2_1)
    
    if (data_11e6020 != 3)
        var_3c = data_5d2b78
    
    void* esi = *fsbase->ThreadLocalStoragePointer
    int128_t var_64_1 = (xmm0_9 / 10f).o
    int128_t var_54_1 = var_3c
    
    if (data_1516858 s> *(esi + 4))
        __Init_thread_header(&data_1516858)
        
        if (data_1516858 == 0xffffffff)
            int32_t var_14_1 = 0
            data_151685c = sub_4d0b50("sys/editor/translate.fab", 0x20)
            int32_t var_14_2 = 0xffffffff
            __Init_thread_footer(&data_1516858)
    
    if (data_1516860 s> *(esi + 4))
        __Init_thread_header(&data_1516860)
        
        if (data_1516860 == 0xffffffff)
            int32_t var_14_3 = 1
            data_1516864 = sub_4d0b50("sys/editor/rotate_quarter.fab", 0x20)
            int32_t var_14_4 = 0xffffffff
            __Init_thread_footer(&data_1516860)
    
    if (data_1516868 s> *(esi + 4))
        __Init_thread_header(&data_1516868)
        
        if (data_1516868 == 0xffffffff)
            int32_t var_14_5 = 2
            data_151686c = sub_4d0b50("sys/editor/scale.fab", 0x20)
            int32_t var_14_6 = 0xffffffff
            __Init_thread_footer(&data_1516868)
    
    int32_t eax_13 = data_11e6020
    int128_t* var_a8_1
    void* eax_16
    int32_t ecx_3
    int32_t edx
    
    if (eax_13 == 2)
        edx = data_151685c
    label_549fc9:
        ecx_3 = data_11d2fe4
        eax_16 = &var_98
        var_a8_1 = &var_98
    else
        if (eax_13 == 3)
            edx = data_1516864
            goto label_549fc9
        
        ecx_3 = data_11d2fe4
        eax_16 = &var_98
        var_a8_1 = &var_98
        
        if (eax_13 != 4)
            int128_t var_64_2 = data_63c264
            int128_t var_54_2 = data_63c274
            sub_4ebc60(eax_16, 0, ecx_3, var_a8_1)
            int32_t eax_17
            eax_17.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_17
        
        edx = data_151686c
    
    sub_4ebc60(eax_16, edx, ecx_3, var_a8_1)
    data_11d2fe8 = sub_4ee4b0(data_11d2fe4, arg1)
    int32_t eax_18
    eax_18.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_18
}
