// 函数名称: sub_4b05d0
// 虚拟地址: 0x4b05d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_4b05d0(char* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_59f648
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t var_4c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = sub_4a9c40(arg1)
    char* result_1
    void* edi
    
    if (eax_3 == 0)
        if (sub_4a9b60(arg1, &result_1) != 1)
            eax_3 = sub_498ef0(arg1)
            edi = eax_3
        else
            sub_48a320(&result_1, result_1)
            int32_t var_14_1 = 0
            eax_3 = sub_4a9a50(arg1, &result_1)
            void* edi_1 = eax_3
            int32_t var_14_2 = 1
            
            if (data_aca1f4 != 0)
                char* result_3 = result_1
                
                if (result_3 != 0 && *result_3 != 0)
                    eax_3 = sub_48a080(&result_1)
                    int32_t temp0_1 = *(eax_3 + 4)
                    *(eax_3 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        eax_3 = sub_4984f0(eax_3, *(eax_3 + 0xc) + 0x10)
            
            int32_t var_14_3 = 0xffffffff
            edi = edi_1 + 8
    else
        edi = eax_3 + 8
    
    int32_t var_54 = data_126cc94
    *(arg1 + 0xe20) = 0
    char* result = sub_4f0e70(eax_3, edi, &data_6218dc, var_54, 0x70)
    result_1 = result
    char* result_2
    
    if (result != 0)
        result_2 = result_1
    else
        int128_t var_40
        char* eax_5
        int32_t edx_6
        edx_6:eax_5 = &var_40
        __builtin_memset(&var_40, 0, 0x18)
        result = sub_4f0e70(sub_4f0910(eax_5, edi, &data_6218dc, 0x70, eax_5, edx_6), edi, 
            &data_6218dc, data_126cc94, 0x70)
        result_2 = result
    
    if (*(result_2 + 0x10) != 3)
        int32_t eax_7
        int32_t ecx_7
        eax_7, ecx_7 = sub_4b0410(arg1)
        int32_t var_50_3 = *(result_2 + 0x10)
        int32_t var_54_3 = ecx_7
        int32_t* eax_8 = sub_4cf8e0(data_126cc94, 8)
        sub_518870(eax_8, eax_8, result_2, var_50_3)
        *(*(result_2 + 8) + *(result_2 + 0x10) * 0x10 - 0x10) = eax_7
        int32_t ecx_11
        ecx_11.b = 1
        result = sub_4a7e20(ecx_11.b)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
