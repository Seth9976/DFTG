// 函数名称: ___std_atomic_wait_indirect@24
// 虚拟地址: 0x41f8f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcall___std_atomic_wait_indirect@24(char arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$??_U@YAPAXIW4align_val_t@std@@ABUnothrow_t@1@@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ebx
    ebx.b = arg1
    void* esi = data_6cfe4c
    
    if (esi == 0)
        sub_489550(&ExceptionList, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t* var_20
    int32_t* var_1c
    int32_t* var_18
    int32_t* var_14
    
    if (*(esi + 0x834) == 2)
        sub_4361a0(4)
        int32_t* eax_4 = sub_4361a0(3)
        
        if (ebx.b != 0)
            sub_48a2c0(&var_20, &data_5b2591)
            int32_t var_8_1 = 0
            sub_48a2c0(&var_1c, &data_5b2591)
            var_8_1.b = 1
            sub_48a2c0(&var_18, "You have been disconnected from the server")
            var_8_1.b = 2
            sub_48a2c0(&var_14, "DISCONNECTED")
            var_8_1.b = 3
            data_62b248 = 0x1c
            sub_48a560(&data_62b298, &var_14)
            sub_48a560(&data_62b29c, &var_18)
            sub_48a560(&data_62b2a0, &var_1c)
            eax_4 = sub_48a560(&data_62b2a4, &var_20)
            data_62b2a8 = 0
            data_62b2ac = 0
            var_8_1.b = 4
            
            if (data_aca1f4 != 0)
                eax_4 = var_14
                
                if (eax_4 != 0 && *eax_4 != 0)
                    eax_4 = sub_48a080(&var_14)
                    int32_t temp0_1 = eax_4[1]
                    eax_4[1] -= 1
                    
                    if (temp0_1 == 1)
                        eax_4 = sub_4984f0(eax_4, eax_4[3] + 0x10)
            
            var_8_1.b = 5
            
            if (data_aca1f4 != 0)
                eax_4 = var_18
                
                if (eax_4 != 0 && *eax_4 != 0)
                    eax_4 = sub_48a080(&var_18)
                    int32_t temp2_1 = eax_4[1]
                    eax_4[1] -= 1
                    
                    if (temp2_1 == 1)
                        eax_4 = sub_4984f0(eax_4, eax_4[3] + 0x10)
            
            var_8_1.b = 6
            
            if (data_aca1f4 != 0)
                eax_4 = var_1c
                
                if (eax_4 != 0 && *eax_4 != 0)
                    eax_4 = sub_48a080(&var_1c)
                    int32_t temp4_1 = eax_4[1]
                    eax_4[1] -= 1
                    
                    if (temp4_1 == 1)
                        eax_4 = sub_4984f0(eax_4, eax_4[3] + 0x10)
            
            int32_t var_8_2 = 7
            
            if (data_aca1f4 != 0)
                eax_4 = var_20
                
                if (eax_4 != 0 && *eax_4 != 0)
                    eax_4 = sub_48a080(&var_20)
                    int32_t temp6_1 = eax_4[1]
                    eax_4[1] -= 1
                    
                    if (temp6_1 == 1)
                        eax_4 = sub_4984f0(eax_4, eax_4[3] + 0x10)
        
        *(esi + 0x82c) = 6
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_4
    
    char* eax_5 = data_62b224
    
    if (eax_5 == 8 || eax_5 == 6 || eax_5 == 0x11 || eax_5 == 0x1b)
    label_41fb0f:
        sub_4361a0(4)
        sub_4361a0(3)
        eax_5 = sub_4361a0(0)
        data_62b1a8 = 2
        data_62b220 = 3
        
        if (ebx.b != 0)
            sub_48a2c0(&var_14, &data_5b2591)
            int32_t var_8_3 = 8
            sub_48a2c0(&var_18, &data_5b2591)
            var_8_3.b = 9
            sub_48a2c0(&var_1c, "You have been disconnected from the server")
            var_8_3.b = 0xa
            sub_48a2c0(&var_20, "DISCONNECTED")
            var_8_3.b = 0xb
            data_62b248 = 0x1c
            sub_48a560(&data_62b298, &var_20)
            sub_48a560(&data_62b29c, &var_1c)
            sub_48a560(&data_62b2a0, &var_18)
            eax_5 = sub_48a560(&data_62b2a4, &var_14)
            data_62b2a8 = 0
            data_62b2ac = 0
            var_8_3.b = 0xc
            
            if (data_aca1f4 != 0)
                eax_5 = var_20
                
                if (eax_5 != 0 && *eax_5 != 0)
                    eax_5 = sub_48a080(&var_20)
                    int32_t temp1_1 = *(eax_5 + 4)
                    *(eax_5 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        eax_5 = sub_4984f0(eax_5, *(eax_5 + 0xc) + 0x10)
            
            var_8_3.b = 0xd
            
            if (data_aca1f4 != 0)
                eax_5 = var_1c
                
                if (eax_5 != 0 && *eax_5 != 0)
                    eax_5 = sub_48a080(&var_1c)
                    int32_t temp3_1 = *(eax_5 + 4)
                    *(eax_5 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        eax_5 = sub_4984f0(eax_5, *(eax_5 + 0xc) + 0x10)
            
            var_8_3.b = 0xe
            
            if (data_aca1f4 != 0)
                eax_5 = var_18
                
                if (eax_5 != 0 && *eax_5 != 0)
                    eax_5 = sub_48a080(&var_18)
                    int32_t temp5_1 = *(eax_5 + 4)
                    *(eax_5 + 4) -= 1
                    
                    if (temp5_1 == 1)
                        eax_5 = sub_4984f0(eax_5, *(eax_5 + 0xc) + 0x10)
            
            int32_t var_8_4 = 0xf
            
            if (data_aca1f4 != 0)
                eax_5 = var_14
                
                if (eax_5 != 0 && *eax_5 != 0)
                    eax_5 = sub_48a080(&var_14)
                    int32_t temp7_1 = *(eax_5 + 4)
                    *(eax_5 + 4) -= 1
                    
                    if (temp7_1 == 1)
                        eax_5 = sub_4984f0(eax_5, *(eax_5 + 0xc) + 0x10)
    else if (eax_5 == 0xe && data_6d00ac != 0)
        goto label_41fb0f
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_5
}
