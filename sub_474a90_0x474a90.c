// 函数名称: sub_474a90
// 虚拟地址: 0x474a90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_474a90(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: void var_18c
    void var_18c
    int32_t eax_1 = __security_cookie ^ &var_18c
    int32_t ebx = arg4
    int32_t eax_2 = arg2
    int32_t edx = arg5
    int32_t var_188 = eax_2
    int32_t edi_1 = neg.d(ebx)
    
    if (edi_1 != 0)
        if (edx.b != 1)
            if (edi_1 s> 0)
                int32_t var_e0[0xc]
                sub_4c5670(data_126be7c, &var_e0)
                sub_4c5920(&var_e0)
            
            sub_452770(arg3, 0, edi_1, 0)
            
            if (edi_1 s<= 0)
                arg3[0xc6] += edi_1
            else
                arg3[0xc4] += edi_1
            
            int32_t* eax_3 = sub_481490(&data_62d6c4)
            int32_t var_174_1 = 0
            void* var_19c_3 = 0x8c
            char var_1a0_3 = 0
            *eax_3 = 3
            eax_3[0x16] = 0
            uint32_t var_16c[0x4]
            uint32_t (* var_1a4_3)[0x4] = &var_16c
            eax_3[0x17] = *arg3
            eax_3[0x18] = edi_1
            eax_3[0x19].b = 0
            eax_3[0x1a] = 0
            _memset(var_1a4_3, var_1a0_3, var_19c_3)
            int32_t var_180 = *arg3
            int32_t var_17c_1 = 0x26
            int32_t var_178_1 = 0xffffffff
            int32_t var_170_1 = 0xffffffff
            void var_b0
            __builtin_memcpy(&var_b0, &var_180, 0xa0)
            sub_452860(&eax_3[0x1c], &var_b0)
            ebx = arg4
        else
            sub_452770(arg3, 0, edi_1, 0)
        
        eax_2 = var_188
        edx = arg5
    
    int32_t edi_2 = 0
    
    if (ebx s> 0)
        do
            int32_t eax_6 = *(*(eax_2 + (edi_2 << 2)) + 0x8a8)
            char var_1a0_4 = 1
            int32_t var_1a4_4 = 5
            arg3[arg3[0x39a] + 0x372] = eax_6
            arg3[0x39a] += 1
            sub_45a830(eax_6, *(var_188 + (edi_2 << 2)), arg3, 7, false, 1, var_1a4_4, var_1a0_4, edx)
            edx = arg5
            edi_2 += 1
            eax_2 = var_188
        while (edi_2 s< ebx)
    
    void* result = data_6cfe4c
    
    if (result != 0)
        if (*(result + 0x834) != 0)
            void* eax_7 = sub_46a6a0()
            
            if (eax_7 != 0 && *(eax_7 + 0x1c) == 0x1d && sub_46a220(0x1d) != 0)
                sub_46a060()
            
            result = data_6cfe4c
        
        if (result != 0)
            if (*(result + 0x834) != 0)
                result = sub_46a6a0()
                
                if (result != 0 && *(result + 0x1c) == 0x1c)
                    result = sub_46a220(0x1c)
                    
                    if (result.b != 0)
                        result = sub_46a060()
            
            @__security_check_cookie@4(eax_1 ^ &var_18c)
            return result
    
    sub_489550(result, &data_5b2591, "gClient", 
        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
