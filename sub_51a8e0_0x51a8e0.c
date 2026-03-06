// 函数名称: sub_51a8e0
// 虚拟地址: 0x51a8e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_51a8e0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a2500
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_18 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_1151ad0 != 0)
        void* ecx_1 = data_1151ad8
        
        if (ecx_1 != 0)
            int32_t eax_3 = *(ecx_1 + 4)
            
            if (eax_3 == 0x22 || eax_3 == 0x1d || eax_3 == 0x19 || eax_3 == 0x1b || eax_3 == 0x1e
                    || eax_3 == 0x20)
                *(ecx_1 + 0x1c) -= 1
            
            data_1151ad8 = 0
        
        sub_54dd00()
        sub_4b9480()
        sub_5473b0()
        int32_t ecx_2 = data_126b8c0
        
        if (ecx_2 != 0)
            sub_4ca490(ecx_2)
            data_126b8c0 = 0
        
        sub_436340(data_1151ad0 + 0x34)
        sub_436340(data_1151ad0 + 0xc)
        result = sub_51b0b0(data_1151ad0)
        int32_t* esi_1 = data_1151ad0
        
        if (esi_1 != 0)
            int32_t var_8_1 = 0
            sub_436340(&esi_1[0xd])
            int32_t var_8_2 = 1
            sub_436340(&esi_1[3])
            int32_t var_8_3 = 2
            sub_51b0b0(esi_1)
            int32_t var_8_4 = 0xffffffff
            result = sub_4984f0(data_1151ad0, 0x88)
            data_1151ad0 = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
