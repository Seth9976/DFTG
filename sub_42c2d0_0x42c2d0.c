// 函数名称: sub_42c2d0
// 虚拟地址: 0x42c2d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_42c2d0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d500
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* result = *arg1
    
    if (result u> 4)
        sub_489550(result, &data_5b2591, "Halt", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0xc10, 
            "GameDialogAddFriendResponse")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    char* result_2
    char* result_3
    char* result_4
    char* result_5
    char** ecx_11
    
    switch (result)
        case 1
            void* eax_8 = data_62b2b8
            void* ecx_36 = &data_5b2591
            
            if (eax_8 != 0)
                ecx_36 = eax_8
            
            void* var_2c_3 = ecx_36
            char* result_1
            sub_48a9d0(&result_1, "%s was not found.")
            int32_t var_8_7 = 0x18
            sub_48a2c0(&result_4, &data_5b2591)
            var_8_7.b = 0x19
            sub_48a2c0(&result_3, &data_5b2591)
            var_8_7.b = 0x1a
            sub_48a2c0(&result_2, "Add Friend")
            var_8_7.b = 0x1b
            result = sub_436200(&result_3, &result_1, &result_2, 0x1c, &result_3, &result_4, 0)
            var_8_7.b = 0x1c
            
            if (data_aca1f4 != 0)
                result = result_2
                
                if (result != 0 && *result != 0)
                    result = sub_48a080(&result_2)
                    int32_t temp4_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp4_1 == 1)
                        result = sub_4984f0(result, *(result + 0xc) + 0x10)
            
            var_8_7.b = 0x1d
            
            if (data_aca1f4 != 0)
                result = result_3
                
                if (result != 0 && *result != 0)
                    result = sub_48a080(&result_3)
                    int32_t temp8_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp8_1 == 1)
                        result = sub_4984f0(result, *(result + 0xc) + 0x10)
            
            var_8_7.b = 0x1e
            
            if (data_aca1f4 != 0)
                result = result_4
                
                if (result != 0 && *result != 0)
                    result = sub_48a080(&result_4)
                    int32_t temp11_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp11_1 == 1)
                        result = sub_4984f0(result, *(result + 0xc) + 0x10)
            
            int32_t var_8_8 = 0x1f
            
            if (data_aca1f4 != 0)
                result = result_1
                
                if (result != 0 && *result != 0)
                    ecx_11 = &result_1
                    goto label_42c437
        case 2
            sub_48a9d0(&result_5, "You cannot add yourself as a friend.")
            int32_t var_8_5 = 0x10
            sub_48a2c0(&result_4, &data_5b2591)
            var_8_5.b = 0x11
            sub_48a2c0(&result_3, &data_5b2591)
            var_8_5.b = 0x12
            sub_48a2c0(&result_2, "Add Friend")
            var_8_5.b = 0x13
            result = sub_436200(&result_3, &result_5, &result_2, 0x1c, &result_3, &result_4, 0)
            var_8_5.b = 0x14
            
            if (data_aca1f4 != 0)
                result = result_2
                
                if (result != 0 && *result != 0)
                    result = sub_48a080(&result_2)
                    int32_t temp0_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp0_1 == 1)
                        result = sub_4984f0(result, *(result + 0xc) + 0x10)
            
            var_8_5.b = 0x15
            
            if (data_aca1f4 != 0)
                result = result_3
                
                if (result != 0 && *result != 0)
                    result = sub_48a080(&result_3)
                    int32_t temp3_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp3_1 == 1)
                        result = sub_4984f0(result, *(result + 0xc) + 0x10)
            
            var_8_5.b = 0x16
            
            if (data_aca1f4 != 0)
                result = result_4
                
                if (result != 0 && *result != 0)
                    result = sub_48a080(&result_4)
                    int32_t temp7_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp7_1 == 1)
                        result = sub_4984f0(result, *(result + 0xc) + 0x10)
            
            int32_t var_8_6 = 0x17
            goto label_42c576
        case 3
            void* eax_3 = data_62b2b8
            void* ecx = &data_5b2591
            
            if (eax_3 != 0)
                ecx = eax_3
            
            void* var_2c_1 = ecx
            sub_48a9d0(&result_2, 
                "%s could not be added because they have removed you from their friend list.  Have them "
            "re-add you as a friend.")
            int32_t var_8_1 = 0
            sub_48a2c0(&result_3, &data_5b2591)
            var_8_1.b = 1
            sub_48a2c0(&result_4, &data_5b2591)
            var_8_1.b = 2
            sub_48a2c0(&result_5, "Add Friend")
            var_8_1.b = 3
            result = sub_436200(&result_4, &result_2, &result_5, 0x1c, &result_4, &result_3, 0)
            var_8_1.b = 4
            
            if (data_aca1f4 != 0)
                result = result_5
                
                if (result != 0 && *result != 0)
                    result = sub_48a080(&result_5)
                    int32_t temp1_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp1_1 == 1)
                        result = sub_4984f0(result, *(result + 0xc) + 0x10)
            
            var_8_1.b = 5
            
            if (data_aca1f4 != 0)
                result = result_4
                
                if (result != 0 && *result != 0)
                    result = sub_48a080(&result_4)
                    int32_t temp5_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp5_1 == 1)
                        result = sub_4984f0(result, *(result + 0xc) + 0x10)
            
            var_8_1.b = 6
            
            if (data_aca1f4 != 0)
                result = result_3
                
                if (result != 0 && *result != 0)
                    result = sub_48a080(&result_3)
                    int32_t temp9_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp9_1 == 1)
                        result = sub_4984f0(result, *(result + 0xc) + 0x10)
            
            int32_t var_8_2 = 7
            
            if (data_aca1f4 != 0)
                result = result_2
                
                if (result != 0 && *result != 0)
                    ecx_11 = &result_2
                    goto label_42c437
        case 4
            void* eax_5 = data_62b2b8
            void* ecx_15 = &data_5b2591
            
            if (eax_5 != 0)
                ecx_15 = eax_5
            
            void* var_2c_2 = ecx_15
            sub_48a9d0(&result_5, "You are already friends with %s.")
            int32_t var_8_3 = 8
            sub_48a2c0(&result_4, &data_5b2591)
            var_8_3.b = 9
            sub_48a2c0(&result_3, &data_5b2591)
            var_8_3.b = 0xa
            sub_48a2c0(&result_2, "Add Friend")
            var_8_3.b = 0xb
            result = sub_436200(&result_3, &result_5, &result_2, 0x1c, &result_3, &result_4, 0)
            var_8_3.b = 0xc
            
            if (data_aca1f4 != 0)
                result = result_2
                
                if (result != 0 && *result != 0)
                    result = sub_48a080(&result_2)
                    int32_t temp2_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp2_1 == 1)
                        result = sub_4984f0(result, *(result + 0xc) + 0x10)
            
            var_8_3.b = 0xd
            
            if (data_aca1f4 != 0)
                result = result_3
                
                if (result != 0 && *result != 0)
                    result = sub_48a080(&result_3)
                    int32_t temp6_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp6_1 == 1)
                        result = sub_4984f0(result, *(result + 0xc) + 0x10)
            
            var_8_3.b = 0xe
            
            if (data_aca1f4 != 0)
                result = result_4
                
                if (result != 0 && *result != 0)
                    result = sub_48a080(&result_4)
                    int32_t temp10_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp10_1 == 1)
                        result = sub_4984f0(result, *(result + 0xc) + 0x10)
            
            int32_t var_8_4 = 0xf
        label_42c576:
            
            if (data_aca1f4 != 0)
                result = result_5
                
                if (result != 0 && *result != 0)
                    ecx_11 = &result_5
                label_42c437:
                    result = sub_48a080(ecx_11)
                    int32_t temp12_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp12_1 == 1)
                        result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
