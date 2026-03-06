// 函数名称: sub_435420
// 虚拟地址: 0x435420
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_435420(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4 @ esi, void* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d120
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* const var_14 = arg3
    int32_t ebx
    int32_t var_18 = ebx
    int32_t var_1c = arg4
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_48a2c0(&var_14, "btnNotification")
    char* const ecx_1 = &data_5b2591
    char* edx = *(arg5 + 4)
    char* eax_4 = var_14
    
    if (eax_4 != 0)
        ecx_1 = eax_4
    
    int32_t esi
    
    while (true)
        ebx.b = *ecx_1
        char temp0_1 = *edx
        bool c_1 = ebx.b u< temp0_1
        
        if (ebx.b == temp0_1)
            if (ebx.b == 0)
                esi = 0
                break
            
            ebx.b = ecx_1[1]
            char temp1_1 = edx[1]
            c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                ecx_1 = &ecx_1[2]
                edx = &edx[2]
                
                if (ebx.b != 0)
                    continue
                
                esi = 0
                break
        
        esi = sbb.d(arg4, arg4, c_1) | 1
        break
    
    int32_t var_8_1 = 0
    
    if (data_aca1f4 != 0 && eax_4 != 0 && *eax_4 != 0)
        eax_4 = sub_48a080(&var_14)
        int32_t temp2_1 = *(eax_4 + 4)
        *(eax_4 + 4) -= 1
        
        if (temp2_1 == 1)
            eax_4 = sub_4984f0(eax_4, *(eax_4 + 0xc) + 0x10)
            var_14 = &data_5b2591
    
    int32_t var_8_2 = 0xffffffff
    
    if (esi == 0)
        eax_4 = sub_4238a0(data_62c83c)
        char* esi_2 = eax_4
        
        if (esi_2 != 0)
            void* ecx_5 = data_6cfe4c
            
            if (ecx_5 == 0)
                sub_489550(eax_4, &data_5b2591, "gClient", 
                    "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            eax_4 = sub_426880(ecx_5 + 0x848, esi_2)
            
            if (*(eax_4 + 0x104) == 1)
                void* eax_5 = sub_421ad0(esi_2)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_5
            
            data_6d00b4 = esi_2
            data_6d00ac = 2
            data_62b220 = 0xe
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4
}
