// 函数名称: sub_4335f0
// 虚拟地址: 0x4335f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*sub_4335f0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d840
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4b2440(arg1, sub_433510)
    void* esi = sub_437f10(*(data_6d00d8 + 0xbe4)) + 0x268
    int32_t eax_4 = sub_42a2b0()
    char* result
    char* result_2
    char** ecx_15
    
    if (eax_4 == 0)
        int32_t var_28_4 = 0xffffffff
        sub_4a8570(arg1)
        int32_t var_2c_4 = *(esi + 0x40) + *(esi + 0x50)
        int32_t var_30_1 = *(esi + 0x30)
        sub_48a9d0(&result_2, "%d-%d")
        int32_t var_8_12 = 0
        sub_4a8930(&result_2, &data_62c720, arg1, &result_2, 0xffffffff)
        int32_t var_8_13 = 1
        
        if (data_aca1f4 != 0)
            char* result_6 = result_2
            
            if (result_6 != 0 && *result_6 != 0)
                char* eax_23 = sub_48a080(&result_2)
                int32_t temp0_1 = *(eax_23 + 4)
                *(eax_23 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_4984f0(eax_23, *(eax_23 + 0xc) + 0x10)
        
        int32_t var_8_14 = 0xffffffff
        int32_t var_28_5 = *(esi + 0x44) + *(esi + 0x54)
        int32_t var_2c_5 = *(esi + 0x34)
        sub_48a9d0(&result_2, "%d-%d")
        int32_t var_8_15 = 2
        sub_4a8930(&result_2, &data_62c73c, arg1, &result_2, 0xffffffff)
        int32_t var_8_16 = 3
        
        if (data_aca1f4 != 0)
            char* result_7 = result_2
            
            if (result_7 != 0 && *result_7 != 0)
                char* eax_27 = sub_48a080(&result_2)
                int32_t temp1_1 = *(eax_27 + 4)
                *(eax_27 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_4984f0(eax_27, *(eax_27 + 0xc) + 0x10)
        
        int32_t var_8_17 = 0xffffffff
        int32_t var_28_6 = *(esi + 0x48) + *(esi + 0x58)
        int32_t var_2c_6 = *(esi + 0x38)
        sub_48a9d0(&result_2, "%d-%d")
        int32_t var_8_18 = 4
        sub_4a8930(&result_2, &data_62c758, arg1, &result_2, 0xffffffff)
        int32_t var_8_19 = 5
        
        if (data_aca1f4 != 0)
            char* result_8 = result_2
            
            if (result_8 != 0 && *result_8 != 0)
                char* eax_31 = sub_48a080(&result_2)
                int32_t temp3_1 = *(eax_31 + 4)
                *(eax_31 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_4984f0(eax_31, *(eax_31 + 0xc) + 0x10)
        
        int32_t var_8_20 = 0xffffffff
        int32_t var_28_7 = *(esi + 0x4c) + *(esi + 0x5c)
        int32_t var_2c_7 = *(esi + 0x3c)
        sub_48a9d0(&result_2, "%d-%d")
        int32_t var_8_21 = 6
        sub_4a8930(&result_2, &data_62c774, arg1, &result_2, 0xffffffff)
        int32_t var_8_22 = 7
        
        if (data_aca1f4 != 0)
            char* result_9 = result_2
            
            if (result_9 != 0 && *result_9 != 0)
                char* eax_35 = sub_48a080(&result_2)
                int32_t temp5_1 = *(eax_35 + 4)
                *(eax_35 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_4984f0(eax_35, *(eax_35 + 0xc) + 0x10)
        
        int32_t var_8_23 = 0xffffffff
        int32_t var_28_8 = *(esi + 0x10) + *(esi + 0x20)
        int32_t var_2c_8 = *esi
        sub_48a9d0(&result_2, "%d-%d")
        int32_t var_8_24 = 8
        sub_4a8930(&result_2, &data_62c790, arg1, &result_2, 0xffffffff)
        int32_t var_8_25 = 9
        
        if (data_aca1f4 != 0)
            char* result_10 = result_2
            
            if (result_10 != 0 && *result_10 != 0)
                char* eax_39 = sub_48a080(&result_2)
                int32_t temp7_1 = *(eax_39 + 4)
                *(eax_39 + 4) -= 1
                
                if (temp7_1 == 1)
                    sub_4984f0(eax_39, *(eax_39 + 0xc) + 0x10)
        
        int32_t var_8_26 = 0xffffffff
        int32_t var_28_9 = *(esi + 0x14) + *(esi + 0x24)
        int32_t var_2c_9 = *(esi + 4)
        sub_48a9d0(&result_2, "%d-%d")
        int32_t var_8_27 = 0xa
        sub_4a8930(&result_2, &data_62c7ac, arg1, &result_2, 0xffffffff)
        int32_t var_8_28 = 0xb
        
        if (data_aca1f4 != 0)
            char* result_11 = result_2
            
            if (result_11 != 0 && *result_11 != 0)
                char* eax_43 = sub_48a080(&result_2)
                int32_t temp8_1 = *(eax_43 + 4)
                *(eax_43 + 4) -= 1
                
                if (temp8_1 == 1)
                    sub_4984f0(eax_43, *(eax_43 + 0xc) + 0x10)
        
        int32_t var_8_29 = 0xffffffff
        int32_t var_28_10 = *(esi + 0x18) + *(esi + 0x28)
        int32_t var_2c_10 = *(esi + 8)
        sub_48a9d0(&result_2, "%d-%d")
        int32_t var_8_30 = 0xc
        sub_4a8930(&result_2, &data_62c7c8, arg1, &result_2, 0xffffffff)
        int32_t var_8_31 = 0xd
        
        if (data_aca1f4 != 0)
            char* result_12 = result_2
            
            if (result_12 != 0 && *result_12 != 0)
                char* eax_47 = sub_48a080(&result_2)
                int32_t temp10_1 = *(eax_47 + 4)
                *(eax_47 + 4) -= 1
                
                if (temp10_1 == 1)
                    sub_4984f0(eax_47, *(eax_47 + 0xc) + 0x10)
        
        int32_t var_8_32 = 0xffffffff
        int32_t var_28_11 = *(esi + 0x1c) + *(esi + 0x2c)
        int32_t var_2c_11 = *(esi + 0xc)
        sub_48a9d0(&result_2, "%d-%d")
        int32_t var_8_33 = 0xe
        result = sub_4a8930(&result_2, &data_62c7e4, arg1, &result_2, 0xffffffff)
        int32_t var_8_34 = 0xf
        
        if (data_aca1f4 != 0)
            result = result_2
            
            if (result != 0 && *result != 0)
                ecx_15 = &result_2
                goto label_433ba8
    else
        if (eax_4 - 1 u> 2)
            sub_489550(eax_4, &data_5b2591, "Halt", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0x15af, "StatsUpdate")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t var_28 = 0xffffffff
        sub_4a8570(arg1)
        int32_t var_2c = *(esi + 0x70) + *(esi + 0x80)
        int32_t var_30 = *(esi + 0x60)
        sub_48a9d0(&result_2, "%d-%d")
        int32_t var_8_1 = 0x10
        sub_4a8930(&result_2, &data_62c720, arg1, &result_2, 0xffffffff)
        int32_t var_8_2 = 0x11
        
        if (data_aca1f4 != 0)
            char* result_3 = result_2
            
            if (result_3 != 0 && *result_3 != 0)
                char* eax_8 = sub_48a080(&result_2)
                int32_t temp2_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_4984f0(eax_8, *(eax_8 + 0xc) + 0x10)
        
        int32_t var_8_3 = 0xffffffff
        int32_t var_28_1 = *(esi + 0x74) + *(esi + 0x84)
        int32_t var_2c_1 = *(esi + 0x64)
        sub_48a9d0(&result_2, "%d-%d")
        int32_t var_8_4 = 0x12
        sub_4a8930(&result_2, &data_62c73c, arg1, &result_2, 0xffffffff)
        int32_t var_8_5 = 0x13
        
        if (data_aca1f4 != 0)
            char* result_4 = result_2
            
            if (result_4 != 0 && *result_4 != 0)
                char* eax_12 = sub_48a080(&result_2)
                int32_t temp4_1 = *(eax_12 + 4)
                *(eax_12 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_4984f0(eax_12, *(eax_12 + 0xc) + 0x10)
        
        int32_t var_8_6 = 0xffffffff
        int32_t var_28_2 = *(esi + 0x78) + *(esi + 0x88)
        int32_t var_2c_2 = *(esi + 0x68)
        sub_48a9d0(&result_2, "%d-%d")
        int32_t var_8_7 = 0x14
        sub_4a8930(&result_2, &data_62c758, arg1, &result_2, 0xffffffff)
        int32_t var_8_8 = 0x15
        
        if (data_aca1f4 != 0)
            char* result_5 = result_2
            
            if (result_5 != 0 && *result_5 != 0)
                char* eax_16 = sub_48a080(&result_2)
                int32_t temp6_1 = *(eax_16 + 4)
                *(eax_16 + 4) -= 1
                
                if (temp6_1 == 1)
                    sub_4984f0(eax_16, *(eax_16 + 0xc) + 0x10)
        
        int32_t var_8_9 = 0xffffffff
        int32_t var_28_3 = *(esi + 0x7c) + *(esi + 0x8c)
        int32_t var_2c_3 = *(esi + 0x6c)
        char* result_1
        sub_48a9d0(&result_1, "%d-%d")
        int32_t var_8_10 = 0x16
        result = sub_4a8930(&result_1, &data_62c774, arg1, &result_1, 0xffffffff)
        int32_t var_8_11 = 0x17
        
        if (data_aca1f4 != 0)
            result = result_1
            
            if (result != 0 && *result != 0)
                ecx_15 = &result_1
            label_433ba8:
                result = sub_48a080(ecx_15)
                int32_t temp9_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp9_1 == 1)
                    result = sub_4984f0(result, *(result + 0xc) + 0x10)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
