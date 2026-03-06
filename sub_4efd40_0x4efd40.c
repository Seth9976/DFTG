// 函数名称: sub_4efd40
// 虚拟地址: 0x4efd40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*sub_4efd40(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a11b8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_18 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t* esi = *arg1
    
    if (*esi != 1)
        sub_489550(arg1, &data_5b2591, "pMaterial->passCount == 1", 
            "d:\ax\trunk\ax2017\engine\material.cpp", 0x398, "MaterialReimport")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t* edx = esi[2]
    
    if (*edx != 1)
        sub_489550(arg1, &data_5b2591, "pMaterial->pPassArray[0].variationCount == 1", 
            "d:\ax\trunk\ax2017\engine\material.cpp", 0x399, "MaterialReimport")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    esi[4].b = sub_4f0cd0(arg1, edx[2] + 8, &data_624734, 1)
    void* eax_5 = esi[2]
    *(esi + 0x11) = sub_4f0cd0(eax_5, *(eax_5 + 8) + 8, &data_624734, 0).b
    int32_t var_8_2 = 1
    char* result
    
    if (data_aca1f4 != 0)
        char* result_1
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(result, *(result + 0xc) + 0x10)
    
    result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
