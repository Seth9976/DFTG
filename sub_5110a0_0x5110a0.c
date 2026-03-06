// 函数名称: sub_5110a0
// 虚拟地址: 0x5110a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_5110a0(char arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a2088
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ecx = data_1151ad8
    
    if (ecx != 0 && ecx[1] == 0x19)
        result = sub_4981f0(ecx)
        
        if (result != 0)
            LRESULT eax_4
            int32_t ecx_1
            eax_4, ecx_1 = SendMessageA(GetDlgItem(data_1151080, 0x76), 0x188, 0, 0)
            int32_t esi_2
            LRESULT edi_1
            
            if (eax_4 != 0xffffffff)
                int32_t eax_5
                eax_5, ecx_1 = sub_50d180(eax_4)
                
                if (arg1 == 0)
                    int32_t eax_7
                    eax_7, ecx_1 = sub_50d280(eax_4)
                    esi_2 = eax_5
                    edi_1 = eax_4 + 1 + eax_7
                else
                    edi_1 = eax_4 + 1
                    esi_2 = eax_5 + 1
            else
                edi_1 = result[2]
                esi_2 = 0
            
            int32_t var_34_2 = ecx_1
            int32_t* eax_8 = sub_4cf8e0(data_12bad08, 0)
            sub_518870(eax_8, eax_8, result, edi_1)
            sub_510770(edi_1)
            int32_t eax_9 = sub_50d200(edi_1, esi_2)
            
            if (edi_1 s< 0 || edi_1 s>= result[2])
                sub_489550(eax_9, &data_5b2591, 
                    "insertIndex >= 0 && insertIndex < pParticleDef->mEmitterCount", 
                    "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 0xb2f, "EmitterAdd")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            struct _EXCEPTION_REGISTRATION_RECORD** result_1
            sub_510e80(&result_1)
            int32_t var_8_1 = 0
            char* const result_3 = &data_5b2591
            char* result_2 = result_1
            
            if (result_2 != 0)
                result_3 = result_2
            
            char* const result_4 = result_3
            char* ecx_9 = sub_4f0a90(result_2, &(*result)[edi_1 * 0x2d], &data_626728, 1)
            void* eax_10 = data_1151ad8
            
            if (eax_10 != 0)
                int32_t eax_11 = *(eax_10 + 4)
                
                if (eax_11 == 0x19)
                    ecx_9 = sub_50e390(edi_1, 0xffffffff)
                else if (eax_11 == 0x1b)
                    ecx_9 = sub_50e950(edi_1)
            
            sub_50c600(ecx_9)
            sub_546950()
            result = sub_546800()
            int32_t var_8_2 = 1
            
            if (data_aca1f4 != 0)
                result = result_1
                
                if (result != 0 && *result != 0)
                    result = sub_48a080(&result_1)
                    int32_t temp0_1 = result[1]
                    result[1] -= 1
                    
                    if (temp0_1 == 1)
                        result = sub_4984f0(result, &result[3][2])
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
