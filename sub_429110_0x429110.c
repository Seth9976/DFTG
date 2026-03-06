// 函数名称: sub_429110
// 虚拟地址: 0x429110
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_429110(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d2b8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_38 = 3
    sub_4a8570(arg1)
    void* ebx = &data_639d80
    int32_t esi = 0
    int32_t* eax_9
    
    while (true)
        int32_t result_2
        
        if (data_63c468 == 1)
            int32_t eax_5 = SteamApps(eax_2)
            result_2 = (*(*eax_5 + 0x1c))(*(ebx + 8))
        
        int32_t result_1
        
        if (data_63c468 != 1 || result_2.b == 0)
            int32_t eax_7 = *ebx
            int32_t var_24 = 0
            int32_t var_20_1 = eax_7
            result_2 = sub_429080(&var_24)
            result_1 = result_2
        else
            result_1 = 0
        
        if (arg1 == 0)
            sub_489550(result_2, &data_5b2591, "id != DATAID_NULL", 
                "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6c, "DataArray<struct UI2>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        uint32_t eax_8 = zx.d(arg1.w)
        
        if (eax_8 u< data_63e5ac)
            void* ecx_3 = eax_8 * 0x1418 + data_63e5a8
            
            if (*(ecx_3 + 0x1410) == arg1)
                eax_9 = sub_4a8420(eax_8, ebx + 0x18, ecx_3, 0x3f800000, 0xffffffff)
                char* edx_3 = *(ebx + 0x38)
                
                if (edx_3 == 0)
                    break
                
                char* const var_14
                sub_48a2c0(&var_14, edx_3)
                int32_t var_8_1 = 0
                sub_4a8930(&var_14, &data_62bb64, arg1, &var_14, esi)
                int32_t var_8_2 = 1
                
                if (data_aca1f4 != 0)
                    char* eax_11 = var_14
                    
                    if (eax_11 != 0 && *eax_11 != 0)
                        char* eax_12 = sub_48a080(&var_14)
                        int32_t temp1_1 = *(eax_12 + 4)
                        *(eax_12 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            sub_4984f0(eax_12, *(eax_12 + 0xc) + 0x10)
                            var_14 = &data_5b2591
                
                int32_t result = result_1
                int32_t var_8_3 = 0xffffffff
                
                if (result == 0)
                    int32_t var_38_3 = esi
                    *(arg2 + 0xec)
                    result = sub_4a8570(arg1)
                else if (result == 1)
                    int32_t var_38_4 = esi
                    result = sub_4a8570(arg1)
                
                ebx += 0x50
                esi += 1
                
                if (ebx s< 0x639e70)
                    continue
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
        
        sub_489550(eax_8, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
            "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    sub_489550(eax_9, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x94, 
        "XString::XString")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
