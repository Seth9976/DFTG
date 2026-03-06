// 函数名称: sub_485a90
// 虚拟地址: 0x485a90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_485a90(int32_t arg1, char* const arg2, char** arg3, char arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59e74a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* const var_14 = arg2
    int32_t* result = arg3
    int32_t var_18 = 0
    *arg3 = &data_5b2591
    char ecx = arg4
    int32_t var_8_1 = 0
    char* arg_4
    int32_t* ebx = arg_4
    int32_t var_18_1 = 1
    
    if (*ebx s> 0)
        int32_t var_8_2 = 1
        char* ecx_2 = &data_5b2591
        char* eax_5 = *sub_484840(&ExceptionList, arg2, &arg_4, ebx, ecx)
        
        if (eax_5 != 0)
            ecx_2 = eax_5
        
        sub_48a670(arg3, ecx_2)
        int32_t var_8_3 = 2
        
        if (data_aca1f4 != 0)
            char* eax_6 = arg_4
            
            if (eax_6 != 0 && *eax_6 != 0)
                char* eax_7 = sub_48a080(&arg_4)
                int32_t temp0_1 = *(eax_7 + 4)
                *(eax_7 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
                    arg_4 = &data_5b2591
        
        ecx = arg4
        var_8_3.b = 0
        arg2 = var_14
    
    if (ebx[0xe] s> 0)
        int32_t var_8_4 = 3
        char* ecx_7 = &data_5b2591
        char* eax_10 = *sub_484450(&ebx[0xe], arg2, &arg_4, &ebx[0xe], ecx)
        
        if (eax_10 != 0)
            ecx_7 = eax_10
        
        sub_48a670(arg3, ecx_7)
        int32_t var_8_5 = 4
        
        if (data_aca1f4 != 0)
            char* eax_11 = arg_4
            
            if (eax_11 != 0 && *eax_11 != 0)
                char* eax_12 = sub_48a080(&arg_4)
                int32_t temp3_1 = *(eax_12 + 4)
                *(eax_12 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_4984f0(eax_12, *(eax_12 + 0xc) + 0x10)
                    arg_4 = &data_5b2591
    
    int32_t edi = ebx[0x2b]
    int32_t var_8_6 = 5
    char* esi_1 = &data_5b2591
    arg_4 = &data_5b2591
    int32_t var_18_2 = 3
    char* eax_23
    
    if (edi s<= 0)
        eax_23 = esi_1
    else
        char* const var_34_5 = var_14
        var_8_6.b = 6
        sub_48a560(&arg_4, sub_48a9d0(&var_14, "{normal_log}%s"))
        var_8_6.b = 7
        
        if (data_aca1f4 != 0)
            char* eax_14 = var_14
            
            if (eax_14 != 0 && *eax_14 != 0)
                char* eax_15 = sub_48a080(&var_14)
                int32_t temp2_1 = *(eax_15 + 4)
                *(eax_15 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_4984f0(eax_15, *(eax_15 + 0xc) + 0x10)
                    var_14 = &data_5b2591
        
        int32_t esi_2 = 0
        var_8_6.b = 5
        
        if (edi s> 0)
            void* eax_16 = &ebx[0x1c]
            void* var_1c_1 = eax_16
            
            do
                int32_t eax_17 = *eax_16
                char* ebx_1
                
                if (eax_17 != 0)
                    if (eax_17 == 1)
                        ebx_1 = "gains 1 credit {credit} from Technology Unions"
                    else
                        if (eax_17 != 2)
                            sub_489550(eax_17 - 2, &data_5b2591, "Halt", 
                                "d:\ax\trunk\ax2017\jams\roll\code\rolllog.cpp", 0x2b0, 
                                "MakeExploreMiscPowerDesc")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        ebx_1 = "draws and keeps an extra tile {tile} using Alien Research Team"
                    
                    goto label_485c86
                
                if (arg4 != 0)
                    ebx_1 = "rearranges construction zone tiles {tile} using Advanced Logistics"
                label_485c86:
                    char* var_34_7
                    
                    if (edi == 1 || esi_2 == 0)
                        var_34_7 = &data_5d59f8
                    else if (edi s< 2 || esi_2 != edi - 1)
                        var_34_7 = &data_5ee4a4
                    else
                        var_34_7 = " and "
                    
                    sub_48a670(&arg_4, var_34_7)
                    sub_48a670(&arg_4, ebx_1)
                
                esi_2 += 1
                eax_16 = var_1c_1 + 4
                var_1c_1 = eax_16
            while (esi_2 s< edi)
        
        sub_48a670(&arg_4, ".{br}")
        esi_1 = arg_4
        eax_23 = &data_5b2591
        
        if (esi_1 != 0)
            eax_23 = esi_1
    
    sub_48a670(result, eax_23)
    int32_t var_18_3 = 1
    int32_t var_8_7 = 8
    
    if (data_aca1f4 != 0 && esi_1 != 0 && *esi_1 != 0)
        char* eax_24 = sub_48a080(&arg_4)
        int32_t temp4_1 = *(eax_24 + 4)
        *(eax_24 + 4) -= 1
        
        if (temp4_1 == 1)
            sub_4984f0(eax_24, *(eax_24 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
