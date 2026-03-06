// 函数名称: sub_488d70
// 虚拟地址: 0x488d70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_488d70(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59eb78
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_18
    int32_t* var_30 = &var_18
    int32_t* result_1
    int32_t** eax_3 = sub_4889e0(&result_1, arg2, 0x1c)
    int32_t var_8_1 = 0
    
    if (arg2[2] == 4)
        sub_489550(eax_3, "no nn", "HaltMsg", 
            "d:\ax\trunk\ax2017\jams\roll\code\rtfgneuralnetimport.cpp", 0x17f, "NeuralNetLoadWeights")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t* esi_1 = var_18
    int32_t eax_4 = *esi_1
    
    if (eax_4 != *(arg1 + 0x28))
        sub_489550(eax_4, &data_5b2591, "pNetImportData->num_inputs == learn->num_inputs", 
            "d:\ax\trunk\ax2017\jams\roll\code\rtfgneuralnetimport.cpp", 0x185, "NeuralNetLoadWeights")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t eax_5 = esi_1[1]
    
    if (eax_5 != *(arg1 + 0x2c))
        sub_489550(eax_5, &data_5b2591, "pNetImportData->num_hidden == learn->num_hidden", 
            "d:\ax\trunk\ax2017\jams\roll\code\rtfgneuralnetimport.cpp", 0x186, "NeuralNetLoadWeights")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t edx = esi_1[2]
    
    if (edx != *(arg1 + 0x30))
        sub_489550(eax_5, &data_5b2591, "pNetImportData->num_outputs == learn->num_output", 
            "d:\ax\trunk\ax2017\jams\roll\code\rtfgneuralnetimport.cpp", 0x187, "NeuralNetLoadWeights")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t ecx_1 = esi_1[0xb]
    int32_t i = 0
    
    if (esi_1[0xc] s> 0)
        void* ecx_2 = nullptr
        var_18 = nullptr
        int32_t eax_7 = ecx_1 << 3
        
        do
            sub_579300(*(*(arg1 + 0x4c) + (i << 2)), esi_1[4] + ecx_2, eax_7)
            i += 1
            eax_7 = ecx_1 << 3
            ecx_2 = var_18 + eax_7
            var_18 = ecx_2
        while (i s< esi_1[0xc])
        
        edx = esi_1[2]
        eax_5 = esi_1[1]
    
    int32_t edi = 0
    
    if (eax_5 + 1 s> 0)
        void* ecx_4 = nullptr
        void* eax_12 = edx << 3
        var_18 = nullptr
        void* var_14_1 = eax_12
        bool cond:0_1
        
        do
            sub_579300(*(*(arg1 + 0x54) + (edi << 2)), esi_1[8] + ecx_4, eax_12)
            edi += 1
            ecx_4 = var_18 + var_14_1
            cond:0_1 = edi s< esi_1[1] + 1
            var_18 = ecx_4
            eax_12 = var_14_1
        while (cond:0_1)
    
    int32_t* result = result_1
    *(arg1 + 0x8c) = 1
    
    if (result != 0)
        result[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
