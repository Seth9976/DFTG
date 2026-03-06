// 函数名称: sub_4e2480
// 虚拟地址: 0x4e2480
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4e2480(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a0921
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_2a0
    int32_t* eax_3 = sub_4e5700(&var_2a0, arg1)
    int32_t var_8_1 = 0
    sub_48a560(data_1150b90, eax_3)
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        char* eax_4 = var_2a0
        
        if (eax_4 != 0 && *eax_4 != 0)
            char* eax_5 = sub_48a080(&var_2a0)
            int32_t temp0_1 = *(eax_5 + 4)
            *(eax_5 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_5, *(eax_5 + 0xc) + 0x10)
    
    int32_t var_8_3 = 0xffffffff
    WIN32_FIND_DATAA findFileData
    
    if (sub_4897d0(arg1, &findFileData) != 0)
        HANDLE hFindFile
        BOOL i
        
        do
            if (((findFileData.dwFileAttributes u>> 4).b & 1) == 0)
                var_2a0 = &data_5b2591
                int32_t var_8_4 = 2
                var_270
                void* var_2b4_1 = &var_270
                char* var_2b8_1 = arg1
                sub_48a910(&var_2a0, "%s%s")
                char* esi_1 = var_2a0
                char* const ecx_5 = &data_5b2591
                
                if (esi_1 != 0)
                    ecx_5 = esi_1
                
                sub_4e2320(ecx_5)
                int32_t var_8_5 = 3
                
                if (data_aca1f4 != 0 && esi_1 != 0 && *esi_1 != 0)
                    char* eax_9 = sub_48a080(&var_2a0)
                    int32_t temp2_1 = *(eax_9 + 4)
                    *(eax_9 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_4984f0(eax_9, *(eax_9 + 0xc) + 0x10)
                
                int32_t var_8_6 = 0xffffffff
            
            i = FindNextFileA(hFindFile, &findFileData)
        while (i == 1)
        FindClose(hFindFile)
    
    int32_t* esi_2 = data_1150b90
    char* eax_10 = *esi_2
    
    if (eax_10 != 0 && eax_10 != &data_5b2591)
        if (data_aca1f4 != 0 && *eax_10 != 0)
            char* eax_11 = sub_48a080(esi_2)
            int32_t temp1_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_4984f0(eax_11, *(eax_11 + 0xc) + 0x10)
        
        *esi_2 = &data_5b2591
    
    WIN32_FIND_DATAA findFileData_1
    char result = sub_4897d0(arg1, &findFileData_1)
    
    if (result != 0)
        HANDLE hFindFile_1
        BOOL i_1
        
        do
            if (((findFileData_1.dwFileAttributes u>> 4).b & 1) != 0
                    && findFileData_1.cFileName[0] != 0x2e)
                var_2a0 = &data_5b2591
                int32_t var_8_7 = 4
                var_12c
                void* var_2b4_4 = &var_12c
                char* var_2b8_3 = arg1
                sub_48a910(&var_2a0, "%s%s/")
                char* esi_3 = var_2a0
                sub_4e2480(eax_2)
                int32_t var_8_8 = 5
                
                if (data_aca1f4 != 0 && esi_3 != 0 && *esi_3 != 0)
                    char* eax_14 = sub_48a080(&var_2a0)
                    int32_t temp3_1 = *(eax_14 + 4)
                    *(eax_14 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_4984f0(eax_14, *(eax_14 + 0xc) + 0x10)
                
                int32_t var_8_9 = 0xffffffff
            
            i_1 = FindNextFileA(hFindFile_1, &findFileData_1)
        while (i_1 == 1)
        result = FindClose(hFindFile_1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
