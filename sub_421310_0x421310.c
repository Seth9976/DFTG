// 函数名称: sub_421310
// 虚拟地址: 0x421310
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __convention("regparm")sub_421310(int32_t arg1, void* arg2, char** arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$??2@YAPAXIW4align_val_t@std@@ABUnothrow_t@1@@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** result = arg3
    char** result_1 = result
    int32_t* edx = arg4
    char* arg_4
    char* ebx = arg_4
    *edx = 0xffffffff
    int32_t eax_3 = *(ebx + 0x14)
    char* var_30_1
    
    if (eax_3 s> 0x3e8)
        if (eax_3 != 0x3e9)
        label_4216c9:
            sub_489550(eax_3, &data_5b2591, "Halt", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameclient.cpp", 0x476, 
                "PlayerGetNameAvatar")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        void* ecx_23 = arg2
        int32_t esi_3 = 0
        *edx = *(ebx + 0x10)
        int32_t edx_5 = 0
        
        if (*(ecx_23 + 0x1c) == 0x3e9)
            edx_5 = 1
            esi_3 = neg.d(sbb.d(0, 0, ecx_23 + 8 u< ebx))
        
        if (*(ecx_23 + 0x48) == 0x3e9)
            edx_5 += 1
            int32_t ecx_24 = esi_3 + 1
            
            if (ecx_23 + 0x34 u>= ebx)
                ecx_24 = esi_3
            
            esi_3 = ecx_24
            ecx_23 = arg2
        
        if (*(ecx_23 + 0x74) == 0x3e9)
            edx_5 += 1
            int32_t ecx_25 = esi_3 + 1
            
            if (ecx_23 + 0x60 u>= ebx)
                ecx_25 = esi_3
            
            esi_3 = ecx_25
            ecx_23 = arg2
        
        if (*(ecx_23 + 0xa0) == 0x3e9)
            edx_5 += 1
            int32_t ecx_26 = esi_3 + 1
            
            if (ecx_23 + 0x8c u>= ebx)
                ecx_26 = esi_3
            
            esi_3 = ecx_26
            ecx_23 = arg2
        
        if (*(ecx_23 + 0xcc) == 0x3e9)
            edx_5 += 1
            int32_t ecx_27 = esi_3 + 1
            
            if (ecx_23 + 0xb8 u>= ebx)
                ecx_27 = esi_3
            
            esi_3 = ecx_27
        
        int32_t edx_7 = neg.d(edx_5 - 1)
        int32_t edx_9 = sbb.d(edx_7, edx_7, edx_5 != 1) & (esi_3 + 1)
        
        if (edx_9 u> 4)
            sub_489550(esi_3 + 1, &data_5b2591, "Halt", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameclient.cpp", 0x3fc, 
                "GetGuestPlayerName")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        char* eax_15
        
        switch (edx_9)
            case 0, 1
                eax_15 = "Guest 1"
            case 2
                eax_15 = "Guest 2"
            case 3
                eax_15 = "Guest 3"
            case 4
                eax_15 = "Guest 4"
        
        var_30_1 = eax_15
        goto label_4213fd
    
    if (eax_3 == 0x3e8)
        void* eax_18 = data_6d00d8
        int32_t ecx_11 = 0
        int32_t esi_1 = *(eax_18 + 0xbe0)
        
        if (esi_1 s> 0)
            int32_t edx_2 = *(ebx + 0x18)
            edx = arg4
            
            while (true)
                ebx = arg_4
                
                if (*(eax_18 + 0x240) == edx_2)
                    break
                
                ecx_11 += 1
                eax_18 += 0x2f8
                
                if (ecx_11 s>= esi_1)
                    goto label_42146b
        
        if (esi_1 s<= 0 || eax_18 == 0)
        label_42146b:
            *edx = *(ebx + 0x10)
            var_30_1 = ebx
        label_4213fd:
            arg3 = result
            goto label_4213ff
        
        char* esi_2 = *sub_437f10(*(ebx + 0x18))
        arg_4 = esi_2
        
        if (esi_2 != 0 && *esi_2 != 0)
            char* eax_21 = sub_48a080(&arg_4)
            *(eax_21 + 4) += 1
        
        int32_t var_8_1 = 0
        *arg4 = *(sub_437f10(*(ebx + 0x18)) + 8)
        
        if (sub_48a4a0(&arg_4, &data_5b2591) == 0)
            *result = esi_2
            
            if (esi_2 != 0 && *esi_2 != 0)
                char* eax_27 = sub_48a080(result)
                *(eax_27 + 4) += 1
            
            int32_t var_8_3 = 2
        else
            sub_48a2c0(result, "Player")
            int32_t var_8_2 = 1
        
        if (data_aca1f4 != 0 && esi_2 != 0 && *esi_2 != 0)
            char* eax_25 = sub_48a080(&arg_4)
            int32_t temp6_1 = *(eax_25 + 4)
            *(eax_25 + 4) -= 1
            
            if (temp6_1 == 1)
                sub_4984f0(eax_25, *(eax_25 + 0xc) + 0x10)
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    if (eax_3 u> 3)
        goto label_4216c9
    
    switch (eax_3)
        case 0
            sub_48a2c0(arg3, "(Closed)")
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        case 1
            *edx = *(ebx + 0x10)
            var_30_1 = ebx
        label_4213ff:
            sub_48a320(arg3, var_30_1)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        case 2
            int32_t eax_5 = *(ebx + 0x18)
            
            if (eax_5 == 0)
                sub_48a2c0(arg3, "Open")
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            if (eax_5 == 1)
                sub_48a2c0(arg3, "Optional")
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            sub_489550(eax_5 - 1, &data_5b2591, "Halt", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameclient.cpp", 0x44a, 
                "PlayerGetNameAvatar")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        case 3
            int32_t ecx_4 = *(ebx + 0x18)
            
            if (ecx_4 != 0)
                if (ecx_4 == 1)
                    ecx_4 = 1
                else if (ecx_4 != 2)
                    sub_489550(ecx_4 - 2, &data_5b2591, "Halt", 
                        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameclient.cpp", 0x458, 
                        "PlayerGetNameAvatar")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
            
            *arg4 = sub_480b30(ecx_4)
            var_30_1 = sub_4210e0(arg2, ebx)
            goto label_4213fd
}
