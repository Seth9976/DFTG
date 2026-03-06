// 函数名称: sub_4c0580
// 虚拟地址: 0x4c0580
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4c0580(int128_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59f94c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_1516408 s> *(*fsbase->ThreadLocalStoragePointer + 4))
        __Init_thread_header(&data_1516408)
        
        if (data_1516408 == 0xffffffff)
            int32_t var_8_1 = 0
            data_151640c = sub_4d0b50("sys\white_pixel.texture", 3)
            int32_t var_8_2 = 0xffffffff
            __Init_thread_footer(&data_1516408)
    
    int128_t xmm0 = data_60cad0
    int32_t* ecx = data_151640c
    int32_t var_1c = *arg2
    int32_t var_18 = 0
    int128_t var_2c = xmm0
    int32_t result = sub_4c0210(&var_2c, arg1, ecx, &var_2c, &var_1c, nullptr)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
