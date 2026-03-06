// 函数名称: sub_46a500
// 虚拟地址: 0x46a500
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_46a500(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4 @ edi, void* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d370
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg3
    int32_t ebx
    int32_t var_18 = ebx
    int32_t var_20 = arg4
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_48a2c0(&var_14, "BtnOK")
    char* const esi = &data_5b2591
    char* eax_3 = var_14
    char* const ecx_1 = &data_5b2591
    char* edx_1 = *(arg5 + 4)
    
    if (eax_3 != 0)
        ecx_1 = eax_3
    
    int32_t edi
    
    while (true)
        ebx.b = *edx_1
        char temp0_1 = *ecx_1
        bool c_1 = ebx.b u< temp0_1
        
        if (ebx.b == temp0_1)
            if (ebx.b == 0)
                edi = 0
                break
            
            ebx.b = edx_1[1]
            char temp1_1 = ecx_1[1]
            c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                edx_1 = &edx_1[2]
                ecx_1 = &ecx_1[2]
                
                if (ebx.b != 0)
                    continue
                
                edi = 0
                break
        
        edi = sbb.d(arg4, arg4, c_1) | 1
        break
    
    int32_t var_8_1 = 0
    
    if (data_aca1f4 != 0 && eax_3 != 0 && *eax_3 != 0)
        char* eax_4 = sub_48a080(&var_14)
        int32_t temp2_1 = *(eax_4 + 4)
        *(eax_4 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_4984f0(eax_4, *(eax_4 + 0xc) + 0x10)
            var_14 = &data_5b2591
    
    int32_t var_8_2 = 0xffffffff
    
    if (edi == 0)
        void* eax_5 = data_6cfe4c
        
        if (eax_5 == 0)
            sub_489550(eax_5, &data_5b2591, "gClient", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        if (*(eax_5 + 0x834) != edi && sub_46a6a0() != 0)
            sub_46a060()
    
    sub_48a2c0(&var_14, "btnOverview")
    char* ecx_5 = *(arg5 + 4)
    char* eax_8 = var_14
    
    if (eax_8 != 0)
        esi = eax_8
    
    int32_t esi_2
    
    while (true)
        char edx_4 = *ecx_5
        char temp3_1 = *esi
        bool c_2 = edx_4 u< temp3_1
        
        if (edx_4 == temp3_1)
            if (edx_4 == 0)
                esi_2 = 0
                break
            
            edx_4 = ecx_5[1]
            char temp4_1 = esi[1]
            c_2 = edx_4 u< temp4_1
            
            if (edx_4 == temp4_1)
                ecx_5 = &ecx_5[2]
                esi = &esi[2]
                
                if (edx_4 != 0)
                    continue
                
                esi_2 = 0
                break
        
        esi_2 = sbb.d(esi, esi, c_2) | 1
        break
    
    int32_t var_8_3 = 1
    
    if (data_aca1f4 != 0 && eax_8 != 0 && *eax_8 != 0)
        char* eax_9 = sub_48a080(&var_14)
        int32_t temp5_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_4984f0(eax_9, *(eax_9 + 0xc) + 0x10)
    
    int32_t result = data_6d00a8
    
    if (esi_2 == 0)
        result = 3
    
    data_6d00a8 = result
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
