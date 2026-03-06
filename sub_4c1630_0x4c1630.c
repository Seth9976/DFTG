// 函数名称: sub_4c1630
// 虚拟地址: 0x4c1630
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_4c1630()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59f9c8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_5c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void var_54
    int128_t* eax_3 = sub_4c1010(&var_54)
    int128_t var_34 = *eax_3
    int128_t var_24 = eax_3[1]
    sub_4c0be0(&var_34)
    void* esi = *fsbase->ThreadLocalStoragePointer
    
    if (data_1516480 s> *(esi + 4))
        __Init_thread_header(&data_1516480)
        
        if (data_1516480 == 0xffffffff)
            int32_t var_8_1 = 0
            data_1516484 = sub_4d0b50("sys/sprite_3d_no_zread.material", 5)
            int32_t var_8_2 = 0xffffffff
            __Init_thread_footer(&data_1516480)
    
    if (data_1516488 s> *(esi + 4))
        __Init_thread_header(&data_1516488)
        
        if (data_1516488 == 0xffffffff)
            int32_t var_8_3 = 1
            data_151648c = sub_4d0b50("sys/SpineTint.material", 5)
            __Init_thread_footer(&data_1516488)
    
    void* result = data_114ec70
    *(result + 0x25c) = data_151648c
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
