// 函数名称: sub_577d4f
// 虚拟地址: 0x577d4f
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_577d4f(uint32_t arg1 @ esi, int32_t arg2 @ edi)
{
    // 第一条实际指令: int32_t var_4 = 0x14
    int32_t var_4 = 0x14
    int32_t var_8 = 0x61ba50
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ebp
    var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t entry_ebx
    int32_t var_2c = entry_ebx
    uint32_t var_30 = arg1
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_4 = 0x61ba50 ^ __security_cookie_1
    void* var_38 = __security_cookie_1 ^ &var_4
    int32_t* var_1c = &var_38
    void* const var_3c = &data_577d5b
    int32_t var_8_5 = 0xfffffffe
    int32_t var_c_1 = var_8_4
    fsbase->NtTib.ExceptionList = &ExceptionList
    var_3c = 1
    char eax = ___scrt_initialize_crt(var_3c)
    char eax_1
    int32_t eax_2
    
    if (eax != 0)
        entry_ebx.b = 0
        char var_1d_1 = 0
        int32_t var_8_1 = 0
        eax_1 = ___scrt_acquire_startup_lock()
        eax_2 = data_6cf318
    
    void* const* esp_1
    
    if (eax == 0 || eax_2 == 1)
        var_3c = 7
        esp_1 = &var_3c
        ___scrt_fastfail(var_3c)
    else
        if (eax_2 != 0)
            entry_ebx.b = 1
            char var_1d_2 = 1
        else
            data_6cf318 = 1
            var_3c = &data_5a6cac
            int32_t var_40_1 = 0x5a6c88
            
            if (__initterm_e(0x5a6c88, var_3c) != 0)
                int32_t var_8_2 = 0xfffffffe
                return sub_577ea5(ebp_1, arg2, var_30, var_2c) __tailcall
            
            var_3c = &data_5a6c84
            int32_t var_40_2 = 0x5a46fc
            __initterm(0x5a46fc, var_3c)
            data_6cf318 = 2
        
        var_3c = eax_1.d
        ___scrt_release_startup_lock(var_3c.b)
        
        if (data_1517680 != 0)
            var_3c = &data_1517680
            
            if (___scrt_is_nonwritable_in_current_image(var_3c) != 0)
                int32_t esi = data_1517680
                var_3c = nullptr
                int32_t var_40_3 = 2
                int32_t var_44_1 = 0
                esi(0, 2, var_3c)
        
        if (data_151767c != 0)
            var_3c = &data_151767c
            
            if (___scrt_is_nonwritable_in_current_image(var_3c) != 0)
                var_3c = data_151767c
                __register_thread_local_exe_atexit_callback(var_3c)
        
        var_3c = zx.d(___scrt_get_show_window_mode())
        void* var_40_4 = common_wincmdln<uint8_t>()
        int32_t var_44_2 = 0
        struct DOS_Header* const var_48_1 = &__dos_header
        esp_1 = &var_38
        arg1 = sub_4e1650(&__dos_header, SW_HIDE)
        
        if (___scrt_is_managed_app() != 0)
            if (entry_ebx.b == 0)
                __cexit()
            
            var_3c = nullptr
            int32_t var_40_5 = 1
            ___scrt_uninitialize_crt(1, var_3c.b)
            int32_t var_8_3 = 0xfffffffe
            return sub_577ea5(ebp_1, arg2, var_30, var_2c) __tailcall
    
    *(esp_1 - 4) = arg1
    _exit()
    noreturn
}
