// 函数名称: sub_4c5580
// 虚拟地址: 0x4c5580
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4c5580(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59fb08
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* var_14
    int32_t* var_28 = &var_14
    int32_t* result_1
    sub_4889e0(&result_1, *arg1, 0x15)
    int32_t var_8_1 = 0
    void* eax_4 = *(var_14 + 0x38)
    
    if (eax_4 == 0)
        sub_489550(eax_4, &data_5b2591, "pSoundData", "d:\ax\trunk\ax2017\engine\sound.cpp", 0x70, 
            "SoundInstanceFree")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (*(eax_4 + 0x10) == 2)
        int32_t* esi_1 = arg1[0x15]
        
        if (esi_1 != 0)
            ov_clear(esi_1, eax_2)
            
            if (esi_1 != 0)
                sub_4984f0(esi_1, 0x2e0)
            
            arg1[0x15] = 0
    
    (*(*data_114e834 + 0x30))(arg1)
    void* edx = data_114e838
    int32_t ecx_3 = *(edx + 0xc)
    *(edx + 0xc) = zx.d(arg1[0x18].w)
    int32_t* result = result_1
    arg1[0x18] = ecx_3
    *(edx + 0x10) -= 1
    
    if (result != 0)
        result[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
