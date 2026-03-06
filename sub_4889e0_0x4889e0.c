// 函数名称: sub_4889e0
// 虚拟地址: 0x4889e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t** __thiscallsub_4889e0(int32_t** arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59eb18
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t** var_14 = arg1
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = arg2
    int32_t* eax_5
    int32_t* arg_8
    
    if (esi != 0)
        eax_5 = esi[1]
        
        if (eax_5 != arg_8)
            sub_489550(eax_5, &data_5b2591, "assetPtr && assetPtr->assetType == assetType", 
                "d:\ax\trunk\ax2017\engine\defload.h", 0x19, "DefAutoLock::DefAutoLock")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    else
        int32_t* esi_1 = arg_8
        sub_4d18a0(&ExceptionList, "!Null\Null", &arg_8, esi_1)
        int32_t var_8_1 = 0
        char* const ecx_1 = &data_5b2591
        int32_t* eax_4 = arg_8
        
        if (eax_4 != 0)
            ecx_1 = eax_4
        
        eax_5 = sub_4d0b50(ecx_1, esi_1)
        esi = eax_5
        int32_t var_8_2 = 1
        
        if (data_aca1f4 != 0)
            eax_5 = arg_8
            
            if (eax_5 != 0 && *eax_5 != 0)
                eax_5 = sub_48a080(&arg_8)
                int32_t temp1_1 = eax_5[1]
                eax_5[1] -= 1
                
                if (temp1_1 == 1)
                    eax_5 = sub_4984f0(eax_5, eax_5[3] + 0x10)
                    arg_8 = &data_5b2591
        
        int32_t var_8_3 = 0xffffffff
    *arg1 = esi
    int32_t* ecx_4 = *esi
    
    if (ecx_4 == 0)
        sub_4d0ff0(eax_5, 0, esi, 1)
        ecx_4 = *esi
    
    esi[7] += 1
    *arg3 = *ecx_4
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
