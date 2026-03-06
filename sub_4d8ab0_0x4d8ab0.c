// 函数名称: sub_4d8ab0
// 虚拟地址: 0x4d8ab0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (** __convention("regparm")sub_4d8ab0(int32_t arg1, int32_t arg2, char* arg3, int32_t* arg4))[0x4]
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a04e8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* result_1
    int32_t* result_3 = result_1
    char* esi = arg4
    char* var_30 = arg3
    result_3[8] = 0
    
    if (esi == 0)
        sub_489550(&ExceptionList, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x94, 
            "XString::XString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    sub_48a2c0(&var_30, esi)
    sub_4d8570(&result_1)
    int32_t var_8_1 = 0
    char* ecx_2 = *result_3
    int32_t* eax_12
    
    if (ecx_2 == 0 || *ecx_2 == 0)
        int32_t eax_13 = data_1151ae0
        int32_t var_20 = 0
        int32_t var_1c_1 = 0
        char* var_14_1 = esi
        int128_t* eax_14
        
        if (eax_13 == 0)
            var_30 = 0x10
            eax_14 = _malloc()
        else
            var_30 = 0x30
            eax_14 = eax_13(0x10, 
                "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\attachmentloader.c", var_30, 
                eax_2)
        
        if (eax_14 != 0)
            *eax_14 = zx.o(0)
        
        *(eax_14 + 0xc) = sub_48dc40
        *eax_14 = sub_4d88e0
        *(eax_14 + 4) = sub_4d8a30
        *(eax_14 + 8) = sub_4d8a70
        
        if (result_3[4] == 0)
            var_30 = "SpineLoad"
            sub_489550(eax_14, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\spine.cpp", 0x136, 
                var_30)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        eax_12 = sub_527bb0(&var_20)
    else
        char* edx_1 = ecx_2
        char i
        
        do
            i = *edx_1
            edx_1 = &edx_1[1]
        while (i != 0)
        char* result_2 = result_1
        char* const result_4 = &data_5b2591
        var_30 = ecx_2
        
        if (result_2 != 0)
            result_4 = result_2
        
        int32_t* eax_4 = sub_527190(result_2, edx_1 - &edx_1[1], ecx_2, result_4)
        result_3[8] = eax_4
        
        if (result_3[4] == 0)
            var_30 = "SpineLoad"
            sub_489550(eax_4, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\spine.cpp", 0x123, 
                var_30)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t ecx_3 = data_1151ae0
        int128_t* eax_5
        
        if (ecx_3 == 0)
            var_30 = 0x10
            eax_5 = _malloc()
        else
            var_30 = 0x60
            eax_5 = ecx_3(0x10, 
                "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\atlasattachmentloader.c", 
                var_30, eax_2)
        
        if (eax_5 != 0)
            *eax_5 = zx.o(0)
        
        int32_t eax_6 = data_1151ae0
        int128_t* eax_7
        
        if (eax_6 == 0)
            var_30 = 0x10
            eax_7 = _malloc()
        else
            var_30 = 0x30
            eax_7 = eax_6(0x10, 
                "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\attachmentloader.c", var_30, 
                eax_2)
        
        if (eax_7 != 0)
            *eax_7 = zx.o(0)
        
        *(eax_5 + 8) = eax_7
        *(eax_7 + 0xc) = sub_526f40
        **(eax_5 + 8) = sub_571f60
        *(*(eax_5 + 8) + 4) = 0
        *(*(eax_5 + 8) + 8) = 0
        *(eax_5 + 0xc) = eax_4
        eax_12 = sub_527bb0(eax_5)
        eax_12[3] = 1
    
    var_30 = result_3[6]
    uint32_t (* eax_18)[0x4] = sub_52d120(eax_12, result_3[4], eax_12, var_30)
    int32_t eax_19 = data_1151ae0
    result_3[0xa] = eax_18
    uint32_t (** result)[0x4]
    
    if (eax_19 == 0)
        var_30 = 0xc
        result = _malloc()
    else
        var_30 = 0x49
        result = eax_19(0xc, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\animationstatedata.c", var_30, 
            eax_2)
    
    if (result != 0)
        result[2] = 0
    
    *result = eax_18
    result_3[0xc] = result
    result[1] = 0x3dcccccd
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp0_1 = result[1]
            result[1] -= 1
            
            if (temp0_1 == 1)
                result = sub_4984f0(result, &result[3][1])
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
