// 函数名称: sub_45a140
// 虚拟地址: 0x45a140
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_45a140(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, char arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ecx = *(arg3 + (arg2 << 2) + 0x2b4)
    uint32_t result = 0
    uint32_t result_2 = 0
    uint32_t result_1 = 0
    uint32_t result_4 = 0
    int32_t var_dc
    int32_t ecx_1
    int32_t* esi
    
    if (ecx == 0)
        ecx_1 = var_dc
        esi = nullptr
    else
        esi = sub_452c30(ecx)
        result_2 = 0
        ecx_1 = esi[0xa]
    
    int32_t var_b8 = ecx_1
    int32_t* var_b4 = esi
    int32_t var_d8
    sub_4538b0(&var_d8)
    int32_t ebx = var_d8
    
    if (esi != ebx)
        int32_t eax_4 = var_dc
        int32_t var_d0_1 = eax_4
        
        while (true)
            if (esi == 0)
            label_45a450:
                sub_489550(eax_4, &data_5b2591, "gfx", 
                    "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x5da, 
                    "Dice::DiceIt::operator *")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            void var_ac
            
            if (esi[4] == 4)
                int32_t ebx_1 = 0
                int32_t var_c0_1 = 0
                int32_t ecx_3 = *(arg3 + 0x2c4)
                int32_t* edx
                
                if (ecx_3 == 0)
                    edx = nullptr
                else
                    edx = sub_452c30(ecx_3)
                    eax_4 = edx[0xa]
                    var_d0_1 = eax_4
                
                int32_t edi = eax_4
                int32_t var_e0
                sub_4538b0(&var_e0)
                
                while (edx != var_e0)
                    eax_4 = ebx_1
                    
                    if (edx == 0)
                        goto label_45a450
                    
                    if (esi[7] == edx[7])
                        ebx_1 += 1
                        
                        if (esi != edx)
                            eax_4 = var_c0_1
                        
                        var_c0_1 = eax_4
                    
                    if (edi != 0)
                        edx = sub_452c30(edi)
                        edi = edx[0xa]
                    else
                        edx = nullptr
                
                int32_t* eax_7 = sub_452cc0(esi[7])
                uint32_t eax_8 = sub_459da0(arg2)
                uint32_t result_3 = ebx_1 - var_c0_1 - 1
                uint32_t var_224[0xa][0x4]
                uint32_t (* eax_9)[0x4] = sub_459e70(eax_8, eax_7, eax_8, &var_224, result_3)
                __builtin_memcpy(&var_ac, eax_9, 0xa0)
                sub_452ab0(eax_9, &var_ac, &var_b4[0x1c], 1, arg5)
                int32_t* var_c8_1 = &data_62d6c4
                int32_t* i_1 = nullptr
                
                if (arg4 != var_b4)
                    result_3 = result_1
                
                result = result_3
                result_1 = result
                sub_481430(&data_62d6c4, &i_1)
                int32_t* i = i_1
                
                if (i == 0xffffffff)
                    ecx_1 = var_b8
                    ebx = var_d8
                else
                    do
                        if (*i == 2 && i[0x12] == 0)
                            int32_t* eax_10 = sub_452c30(i[0x15])
                            
                            if (eax_10 != var_b4 && eax_10[7] == var_b4[7])
                                result += 1
                        
                        sub_481430(var_c8_1, &i_1)
                        i = i_1
                    while (i != 0xffffffff)
                    
                label_45a3df:
                    result_1 = result
                    ecx_1 = var_b8
                    ebx = var_d8
            else if (*(esi + 0x21) == 0)
                int32_t var_178_1 = 0
                uint32_t var_170[0x2][0x4]
                _memset(&var_170, 0, 0x8c)
                int32_t var_180_1 = sub_459da0(arg2)
                int32_t var_184 = esi[6]
                uint32_t result_5 = result_4
                int32_t var_174_1 = 0xffffffff
                __builtin_memcpy(&var_ac, &var_184, 0xa0)
                sub_452ab0(result_4, &var_ac, &var_b4[0x1c], 1, arg5)
                result_4 += 1
                result = result_1
                
                if (arg4 == var_b4)
                    result = result_2
                
                goto label_45a3df
            
            if (ecx_1 != 0)
                esi = sub_452c30(ecx_1)
                ecx_1 = esi[0xa]
                var_b8 = ecx_1
            else
                esi = nullptr
            
            var_b4 = esi
            
            if (esi == ebx)
                break
            
            result_2 = result_4
            eax_4 = var_d0_1
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
