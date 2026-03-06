// 函数名称: sub_4aec00
// 虚拟地址: 0x4aec00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_4aec00(int32_t arg1, char arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59f5a8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg1 != 0)
        result = zx.d(arg1.w)
        
        if (result u< data_63e5ac)
            int32_t edi_1 = data_63e5a8
            result *= 0x1418
            
            if (*(result + edi_1 + 0x1410) == arg1)
                int32_t ecx = data_63e5e0
                
                if (ecx != arg1)
                    sub_489550(result, &data_5b2591, "gUI2.focus == handle", 
                        "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x2bc4, "UI2ClearFocus")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                if (ecx == 0)
                    sub_489550(result, &data_5b2591, "id != DATAID_NULL", 
                        "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6c, 
                        "DataArray<struct UI2>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                uint32_t edx = zx.d(ecx.w)
                
                if (edx u< data_63e5ac)
                    result = edx * 0x1418
                
                if (edx u>= data_63e5ac || *(result + edi_1 + 0x1410) != ecx)
                    sub_489550(result, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                        "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, 
                        "DataArray<struct UI2>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                void* esi_2 = edx * 0x1418 + edi_1
                
                if (*(esi_2 + 0xfec) == 3 && *(esi_2 + 0xf8c) != 0)
                    char* const result_1 = &data_5b2591
                    int32_t var_8_1 = 0
                    int32_t var_28 = ecx
                    char* const ecx_1 = *(esi_2 + 0xfb0)
                    
                    if (ecx_1 == 0)
                        char* eax_3 = *(esi_2 + 0xfd8)
                        ecx_1 = &data_5b2591
                        
                        if (eax_3 != 0)
                            ecx_1 = eax_3
                    
                    char* const var_24_1 = ecx_1
                    sub_48a560(&result_1, esi_2 + 0x1134)
                    int32_t var_1c_1 = *(esi_2 + 0x109c)
                    int32_t eax_5
                    eax_5.b = arg2
                    char var_18_1 = eax_5.b
                    result = sub_4aebd0(esi_2, &var_28)
                    *(esi_2 + 0x1185) = 0
                    int32_t var_8_2 = 1
                    
                    if (data_aca1f4 != 0)
                        result = result_1
                        
                        if (result != 0 && *result != 0)
                            result = sub_48a080(&result_1)
                            int32_t temp0_1 = result[1]
                            result[1] -= 1
                            
                            if (temp0_1 == 1)
                                result = sub_4984f0(result, &result[3][2])
    
    data_63e5e0 = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
