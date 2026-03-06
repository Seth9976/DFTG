// 函数名称: sub_46e300
// 虚拟地址: 0x46e300
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_46e300(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59e079
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ebx
    int32_t var_1c = ebx
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_18 = 0
    
    if (data_6326b0 s> 1)
        int32_t edx = 0
        char* var_14
        char* ecx_2
        
        if (*(arg1 + 4) != 2)
            ecx_2 = var_14
            ebx.b = 0
        else
            sub_48a2c0(&var_14, "btn_zoom_dismiss")
            int32_t var_8_1 = 0
            int32_t var_18_1 = 1
            char* eax_4 = sub_4bbad0(*(arg1 + 0x10))
            ecx_2 = var_14
            char* const edx_1 = &data_5b2591
            
            if (ecx_2 != 0)
                edx_1 = ecx_2
            
            int32_t eax_6
            
            while (true)
                ebx.b = *edx_1
                char temp0_1 = *eax_4
                bool c_1 = ebx.b u< temp0_1
                
                if (ebx.b == temp0_1)
                    if (ebx.b == 0)
                        eax_6 = 0
                        break
                    
                    ebx.b = edx_1[1]
                    char temp1_1 = eax_4[1]
                    c_1 = ebx.b u< temp1_1
                    
                    if (ebx.b == temp1_1)
                        edx_1 = &edx_1[2]
                        eax_4 = &eax_4[2]
                        
                        if (ebx.b != 0)
                            continue
                        
                        eax_6 = 0
                        break
                
                eax_6 = sbb.d(eax_4, eax_4, c_1) | 1
                break
            
            edx = 1
            
            if (eax_6 == 0)
                ebx.b = 0
            else
                ebx.b = 1
        
        int32_t var_8_2 = 0xffffffff
        
        if (edx != 0)
            int32_t var_8_3 = 1
            
            if (data_aca1f4 != 0 && ecx_2 != 0 && *ecx_2 != 0)
                char* eax_7 = sub_48a080(&var_14)
                int32_t temp2_1 = *(eax_7 + 4)
                *(eax_7 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
        
        int32_t result = 0x40
        
        if (ebx.b != 0)
            result = 0
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    if (*(arg1 + 4) != 1)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    int32_t ecx_9 = *(arg1 + 8)
    
    if (ecx_9 == 0)
        sub_489550(eax_3, &data_5b2591, "id != DATAID_NULL", "d:\ax\trunk\ax2017\engine\dataarray.h", 
            0x6c, "DataArray<struct RollGfx>::DataArrayGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    uint32_t edx_4 = zx.d(ecx_9.w)
    
    if (edx_4 u< data_62d6c8)
        eax_3 = edx_4 * 0x8ac + data_62d6c4
        
        if (eax_3[0x22a] == ecx_9)
            int32_t* esi_2 = edx_4 * 0x8ac + data_62d6c4
            int32_t eax_10 = *esi_2
            char eax_14
            
            if (eax_10 != 0)
                if (eax_10 == 1)
                    if (sub_454210(esi_2) != 0)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return 0x10c
                else if (eax_10 == 2)
                    eax_14 = sub_453610(esi_2)
                label_46e4da:
                    
                    if (eax_14 != 0)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return 0x108
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return 4
            
            void* ecx_10
            
            if (esi_2[0xd] != 4)
                ecx_10 = data_6cfe4c
            else
                ecx_10 = data_6cfe4c
                
                if (ecx_10 == 0)
                    sub_489550(eax_10, &data_5b2591, "gClient", 
                        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                eax_10 = esi_2[0xf]
                
                if (eax_10 == *(ecx_10 + 0xa68))
                    eax_10 = sub_46bc50(esi_2)
                    
                    if (eax_10.b != 0)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return 0x12
                    
                    ecx_10 = data_6cfe4c
            
            if (esi_2[0xd] == 5)
                if (ecx_10 == 0)
                    sub_489550(eax_10, &data_5b2591, "gClient", 
                        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                if (esi_2[0xf] == *(ecx_10 + 0xa68) && sub_46bc50(esi_2) != 0)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return 0x12
            
            eax_14 = sub_453780(esi_2)
            goto label_46e4da
    
    sub_489550(eax_3, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
        "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct RollGfx>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
