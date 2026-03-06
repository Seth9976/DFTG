// 函数名称: sub_465bc0
// 虚拟地址: 0x465bc0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_465bc0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59de70
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = data_6cfe4c
    
    if (eax_3 == 0)
        sub_489550(eax_3, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    char* eax_4 = *(eax_3 + 0xa68)
    char* var_14 = eax_4
    void* eax_5 = sub_452b90(eax_4)
    int32_t eax_6 = sub_453010(eax_5, 4)
    int32_t* edi
    
    if (eax_6 != 0)
        edi = sub_452cc0(eax_6)
    else
        edi = nullptr
    
    int32_t* eax_8 = sub_453010(eax_5, 5)
    int32_t* esi_1
    
    if (eax_8 != 0)
        eax_8 = sub_452cc0(eax_8)
        esi_1 = eax_8
    else
        esi_1 = nullptr
    
    char* edi_1
    
    if (edi == 0)
        edi_1 = var_14
    else
        edi_1 = var_14
        eax_8 = sub_44ac90(eax_8, edi_1, data_632804, edi[0x11], 0, 1)
    
    if (esi_1 != 0)
        sub_44bae0(eax_8, edi_1, data_632804, esi_1[0x11], 0, 1)
    
    int32_t esi_2 = 0
    int32_t i = *(eax_5 + 0x2ac)
    
    if (i == 0)
    label_465caf:
        int32_t var_30_1 = 0xffffffff
        sub_4a8570(arg1)
        esi_2 = data_1511984
    else
        do
            esi_2 += 1
            i = *(sub_452de0(i) + 0x10)
        while (i != 0)
        
        if (esi_2 s<= 1)
            goto label_465caf
        
        data_1511984 = esi_2
    
    int32_t var_30_2 = esi_2
    sub_48a9d0(&var_14, &data_5efc90)
    int32_t var_8_1 = 0
    sub_4a8930(&var_14, &data_6387d8, arg1, &var_14, 0xffffffff)
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        char* eax_11 = var_14
        
        if (eax_11 != 0 && *eax_11 != 0)
            char* eax_12 = sub_48a080(&var_14)
            int32_t temp0_1 = *(eax_12 + 4)
            *(eax_12 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_12, *(eax_12 + 0xc) + 0x10)
    
    int32_t var_8_3 = 0xffffffff
    int32_t esi_3 = 0
    int32_t i_1 = *(eax_5 + 0x2b0)
    
    if (i_1 == 0)
    label_465d5c:
        int32_t var_30_3 = 0xffffffff
        sub_4a8570(arg1)
        esi_3 = data_1511980
    else
        do
            esi_3 += 1
            i_1 = *(sub_452de0(i_1) + 0x10)
        while (i_1 != 0)
        
        if (esi_3 s<= 1)
            goto label_465d5c
        
        data_1511980 = esi_3
    
    int32_t var_30_4 = esi_3
    int32_t result_1
    sub_48a9d0(&result_1, &data_5efc90)
    int32_t var_8_4 = 2
    int32_t result = sub_4a8930(&result_1, &data_638810, arg1, &result_1, 0xffffffff)
    int32_t var_8_5 = 3
    
    if (data_aca1f4 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp1_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp1_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
