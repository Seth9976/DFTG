// 函数名称: sub_4e7350
// 虚拟地址: 0x4e7350
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_4e7350(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a0ee0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ebx
    int32_t var_20 = ebx
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* result_8 = arg1[8]
    int32_t esi = arg1[1]
    char* result_7 = arg1
    result_7 = result_8
    
    if (result_8 != 0 && *result_8 != 0)
        char* eax_3 = sub_48a080(&result_7)
        *(eax_3 + 4) += 1
    
    char* result_1
    sub_4e6560(&result_1, esi)
    int32_t var_8_1 = 0
    char* const result_6 = &data_5b2591
    char* result_2 = result_1
    char* const result_4 = &data_5b2591
    char* const edx_1 = &data_5b2591
    
    if (result_2 != 0)
        result_4 = result_2
    
    char* result_10
    
    while (true)
        ebx.b = *result_4
        char temp0_1 = *edx_1
        bool c_1 = ebx.b u< temp0_1
        
        if (ebx.b == temp0_1)
            if (ebx.b == 0)
                result_10 = nullptr
                break
            
            ebx.b = result_4[1]
            char temp1_1 = edx_1[1]
            c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                result_4 = &result_4[2]
                edx_1 = &edx_1[2]
                
                if (ebx.b != 0)
                    continue
                
                result_10 = nullptr
                break
        
        result_10 = sbb.d(result_4, result_4, c_1) | 1
        break
    
    if (result_10 == 0)
        char* result_9 = arg1[8]
        int32_t ebx_1 = arg1[1]
        result_7 = result_10
        result_7 = result_9
        
        if (result_9 != 0 && *result_9 != 0)
            char* eax_4 = sub_48a080(&result_7)
            *(eax_4 + 4) += 1
        
        char* const var_18
        result_7 = sub_4e6020(&var_18, ebx_1)
        var_8_1.b = 1
        sub_48a560(&result_1, result_7)
        var_8_1.b = 2
        
        if (data_aca1f4 != 0)
            char* eax_6 = var_18
            
            if (eax_6 != 0 && *eax_6 != 0)
                char* eax_7 = sub_48a080(&var_18)
                int32_t temp2_1 = *(eax_7 + 4)
                *(eax_7 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
                    var_18 = &data_5b2591
        
        var_8_1.b = 0
        result_2 = result_1
    
    void* edx_5 = *arg1
    void* ecx_8 = *(edx_5 + 4)
    
    if (ecx_8 == 0)
        result_7 = "DefinitionSaveAsset"
        sub_489550(result_2, &data_5b2591, "pDefHeader->pParseTree", 
            "d:\ax\trunk\ax2017\engine\defload.cpp", 0x28e, result_7)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t* edx_6 = *(edx_5 + 0xc)
    
    if (result_2 != 0)
        result_6 = result_2
    
    result_7 = result_6
    char* result
    
    if (sub_4d7b70(result_2, edx_6, ecx_8, result_7) != 0)
        if (sub_4c7a40(arg1).b != 0)
            int32_t var_8_4 = 5
            
            if (data_aca1f4 != 0)
                result = result_1
                
                if (result != 0 && *result != 0)
                    result = sub_48a080(&result_1)
                    int32_t temp3_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_4984f0(result, *(result + 0xc) + 0x10)
            
            result.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        int32_t var_8_3 = 4
    else
        char* result_3 = result_1
        char* result_5 = &data_5b2591
        
        if (result_3 != 0)
            result_5 = result_3
        
        result_7 = result_5
        sub_4892e0("Failed to write xml file: '%s'")
        int32_t var_8_2 = 3
    
    if (data_aca1f4 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp4_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp4_1 == 1)
                sub_4984f0(result, *(result + 0xc) + 0x10)
    
    result.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
