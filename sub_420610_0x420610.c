// 函数名称: sub_420610
// 虚拟地址: 0x420610
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_420610(int32_t arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t result = *(arg2 + 0xc)
    int32_t result = *(arg2 + 0xc)
    char const* const var_1c
    int32_t var_18
    char const* const var_14
    char* ecx_4
    
    if (result != 3)
        if (result == 1)
            int32_t var_14_1 = arg3
            uint32_t ecx
            return sub_456f00(result, *(arg2 + 0x10), ecx)
        
        var_14 = "PressAction"
        var_18 = 0x24a
        var_1c = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameclient.cpp"
        ecx_4 = "Halt"
    else
        if (arg3 == 1)
            return sub_41e3c0(*(arg2 + 0x28), *(arg2 + 0x2c)) __tailcall
        
        result = sub_439440()
        
        if (result != 1)
            return result
        
        void* edi_1 = *(arg2 + 0x28)
        int32_t* ecx_3 = data_6cfe4c
        
        if (data_1511888 != edi_1)
        label_4206a0:
            result = *(arg2 + 0x2c)
            data_1511888 = edi_1
            data_61f9b0 = result
            
            if (ecx_3 != 0)
                data_1511880 = *ecx_3
                result = ecx_3[1]
                data_1511884 = result
                return result
        else
            int32_t edx_2 = *(arg2 + 0x2c)
            
            if (data_61f9b0 != edx_2)
                goto label_4206a0
            
            if (ecx_3 != 0)
                int32_t ebx_1 = data_1511880
                int32_t eax_2 = adc.d(data_1511884, 0, ebx_1 u>= 0xfffffe0c)
                int32_t temp1_1 = ecx_3[1]
                
                if (eax_2 s>= temp1_1 && (eax_2 s> temp1_1 || ebx_1 + 0x1f4 u> *ecx_3))
                    return sub_41e3c0(edi_1, edx_2) __tailcall
                
                goto label_4206a0
        
        var_14 = "GetClient"
        var_18 = 0x75
        var_1c = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_4 = "gClient"
    
    sub_489550(result, &data_5b2591, ecx_4, var_1c, var_18, var_14)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
