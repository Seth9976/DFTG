// 函数名称: sub_4d8eb0
// 虚拟地址: 0x4d8eb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*sub_4d8eb0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a0540
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    char* const result_1 = &data_5b2591
    char* const var_20 = &data_5b2591
    var_8_1.b = 2
    char* const result_11 = &data_5b2591
    char* result_3
    char* result_4 = result_3
    char* const result_10 = &data_5b2591
    
    if (result_4 != 0)
        result_10 = result_4
    
    void* eax_3 = _strchr(result_10, 0x2e)
    
    if (result_10 == 0)
        sub_489550(eax_3, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x9a, 
            "XString::XString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    char* const var_14 = &data_5b2591
    sub_48a6e0(&var_14, result_10, eax_3 - result_10)
    var_8_1.b = 3
    sub_48a560(&result_1, &var_14)
    var_8_1.b = 4
    
    if (data_aca1f4 != 0)
        char* const eax_5 = var_14
        
        if (eax_5 != 0 && *eax_5 != 0)
            char* eax_6 = sub_48a080(&var_14)
            int32_t temp0_1 = *(eax_6 + 4)
            *(eax_6 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_6, *(eax_6 + 0xc) + 0x10)
                var_14 = &data_5b2591
    
    var_8_1.b = 2
    sub_48a5e0(&var_20, eax_3 + 1)
    sub_48a2c0(&var_14, ".atlas")
    var_8_1.b = 5
    char* result_2
    sub_48a860(&result_1, &result_2, &var_14)
    var_8_1.b = 8
    
    if (data_aca1f4 != 0)
        char* const eax_8 = var_14
        
        if (eax_8 != 0 && *eax_8 != 0)
            char* eax_9 = sub_48a080(&var_14)
            int32_t temp1_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_4984f0(eax_9, *(eax_9 + 0xc) + 0x10)
                var_14 = &data_5b2591
    
    char* const lpFileName = &data_5b2591
    var_8_1.b = 7
    int32_t* ebx_1 = *arg1
    ebx_1[8] = 0
    *ebx_1 = 0x1511ab8
    ebx_1[6] = 0
    char* lpFileName_1 = result_2
    
    if (lpFileName_1 != 0)
        lpFileName = lpFileName_1
    
    if (GetFileAttributesA(lpFileName) != 0xffffffff)
        char* result_5 = result_2
        char* const result_9 = &data_5b2591
        
        if (result_5 != 0)
            result_9 = result_5
        
        sub_4d8e00(ebx_1, result_9)
    
    char* const esi = var_20
    char* const eax_12 = &data_5b2591
    char const* const ecx_10 = "spine.json"
    
    if (esi != 0)
        eax_12 = esi
    
    int32_t eax_14
    char edx_5
    
    while (true)
        edx_5 = *eax_12
        char const temp2_1 = *ecx_10
        bool c_1 = edx_5 u< temp2_1
        
        if (edx_5 == temp2_1)
            if (edx_5 == 0)
                eax_14 = 0
                break
            
            edx_5 = eax_12[1]
            char temp3_1 = ecx_10[1]
            c_1 = edx_5 u< temp3_1
            
            if (edx_5 == temp3_1)
                eax_12 = &eax_12[2]
                ecx_10 = &ecx_10[2]
                
                if (edx_5 != 0)
                    continue
                
                eax_14 = 0
                break
        
        eax_14 = sbb.d(eax_12, eax_12, c_1) | 1
        break
    
    char* result
    
    if (eax_14 != 0)
        char* const eax_15 = &data_5b2591
        char const* const ecx_12 = "skel"
        
        if (esi != 0)
            eax_15 = esi
        
        while (true)
            edx_5 = *eax_15
            char const temp4_1 = *ecx_12
            bool c_2 = edx_5 u< temp4_1
            
            if (edx_5 == temp4_1)
                if (edx_5 == 0)
                    result = nullptr
                    break
                
                edx_5 = eax_15[1]
                char temp5_1 = ecx_12[1]
                c_2 = edx_5 u< temp5_1
                
                if (edx_5 == temp5_1)
                    eax_15 = &eax_15[2]
                    ecx_12 = &ecx_12[2]
                    
                    if (edx_5 != 0)
                        continue
                    
                    result = nullptr
                    break
            
            result = sbb.d(eax_15, eax_15, c_2) | 1
            break
        
        if (result == 0)
            char* result_7 = result_3
            char* result_8 = &data_5b2591
            
            if (result_7 != 0)
                result_8 = result_7
            
            if (ebx_1[4] != 0)
                sub_489550(result_7, &data_5b2591, "*ptr == NULL", 
                    "d:\ax\trunk\ax2017\engine\spine.cpp", 0x162, "DefinitionReadFile")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            int32_t* eax_17 = _fopen(result_8, "rb")
            
            if (eax_17 == 0)
                sub_489550(eax_17, &data_5b2591, "file", "d:\ax\trunk\ax2017\engine\spine.cpp", 0x166, 
                    "DefinitionReadFile")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            _fseek(eax_17, 0, 2)
            int32_t* var_44_1 = eax_17
            var_14 = sub_587c01()
            _fseek(eax_17, 0, 0)
            uint32_t (* eax_19)[0x4] = sub_4c2e40(var_14)
            char* const var_58_1 = var_14
            ebx_1[4] = eax_19
            uint32_t eax_20 = _fread(eax_19, 1, var_58_1, eax_17)
            
            if (eax_20 != var_14)
                sub_489550(eax_20, &data_5b2591, "result == fileSize", 
                    "d:\ax\trunk\ax2017\engine\spine.cpp", 0x16e, "DefinitionReadFile")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            _fclose(eax_17)
            ebx_1[6] = var_14
    else
        char* result_6 = result_3
        
        if (result_6 != 0)
            result_11 = result_6
        
        sub_4d8e00(&ebx_1[2], result_11)
    
    var_8_1.b = 9
    
    if (data_aca1f4 != 0)
        result = result_2
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_2)
            int32_t temp6_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp6_1 == 1)
                sub_4984f0(result, *(result + 0xc) + 0x10)
                result_2 = &data_5b2591
    
    var_8_1.b = 0xa
    
    if (data_aca1f4 != 0 && esi != 0 && *esi != 0)
        result = sub_48a080(&var_20)
        int32_t temp7_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp7_1 == 1)
            sub_4984f0(result, *(result + 0xc) + 0x10)
    
    var_8_1.b = 0xb
    
    if (data_aca1f4 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp8_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp8_1 == 1)
                sub_4984f0(result, *(result + 0xc) + 0x10)
    
    int32_t var_8_2 = 0xc
    
    if (data_aca1f4 != 0)
        result = result_3
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_3)
            int32_t temp9_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp9_1 == 1)
                sub_4984f0(result, *(result + 0xc) + 0x10)
    
    result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
