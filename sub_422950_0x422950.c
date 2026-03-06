// 函数名称: sub_422950
// 虚拟地址: 0x422950
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_422950(char** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d008
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_11
    
    if (sub_4b6ba0(arg1, &var_11) != 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return var_11
    
    if (*arg1 != 1)
    label_4229e7:
        
        if (sub_480510(arg1) == 0)
            char* eax_7
            
            if (data_114e818[0x20] != 0)
                eax_7 = *arg1
                
                if (eax_7 == 1)
                    if (arg1[1] == 0x4e)
                        int32_t ecx_7 = data_1511878
                        int32_t var_2c_1 = ecx_7
                        data_1511878 = ecx_7 + 1
                        char* var_18
                        sub_48a9d0(&var_18, "New Notification %d")
                        int32_t var_8_1 = 0
                        char* const ebx_1 = &data_5b2591
                        char* eax_9 = var_18
                        
                        if (eax_9 != 0)
                            ebx_1 = eax_9
                        
                        EnterCriticalSection(data_114e830 + 0x26c)
                        void* edx_1 = data_114e830
                        
                        if (*(edx_1 + 0x260) - *(edx_1 + 0x264) s>= 8)
                            sub_4892e0("too many queued notifications")
                            edx_1 = data_114e830
                        
                        int32_t eax_14 = *(edx_1 + 0x260)
                        int32_t ecx_9 = eax_14 & 0x80000007
                        
                        if (ecx_9 s< 0)
                            ecx_9 = ((ecx_9 - 1) | 0xfffffff8) + 1
                        
                        *(edx_1 + 0x260) = eax_14 + 1
                        void* esi_2 = ecx_9 * 0x4c + edx_1
                        sub_48a5e0(esi_2, "Hi!")
                        sub_48a5e0(esi_2 + 4, ebx_1)
                        CRITICAL_SECTION* lpCriticalSection = data_114e830 + 0x26c
                        *(esi_2 + 0x48) = 0
                        LeaveCriticalSection(lpCriticalSection)
                        int32_t var_8_2 = 1
                        
                        if (data_aca1f4 != 0)
                            char* eax_17 = var_18
                            
                            if (eax_17 != 0 && *eax_17 != 0)
                                char* eax_18 = sub_48a080(&var_18)
                                int32_t temp0_1 = *(eax_18 + 4)
                                *(eax_18 + 4) -= 1
                                
                                if (temp0_1 == 1)
                                    sub_4984f0(eax_18, *(eax_18 + 0xc) + 0x10)
                                    var_18 = &data_5b2591
                        
                        int32_t var_8_3 = 0xffffffff
                        eax_7 = *arg1
                    
                    if (eax_7 == 1)
                        eax_7 = arg1[1]
                        
                        if (eax_7 == 0x5a && (arg1[2].b & 2) != 0)
                            sub_426040()
                            void* eax_19
                            eax_19.b = 1
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_19
                        
                        if (eax_7 == 0x59 && (arg1[2].b & 2) != 0)
                            sub_426160()
                            void* eax_20
                            eax_20.b = 1
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_20
            
            eax_7.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_7
    else
        int32_t eax_4 = arg1[1]
        
        if (eax_4 != 0xd || (arg1[2].b & 4) == 0)
            if (eax_4 != 0x57)
                goto label_4229e7
            
            sub_420070()
            char* eax_6
            eax_6.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_6
        
        sub_41ffc0()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 1
}
