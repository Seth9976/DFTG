// 函数名称: sub_4efe70
// 虚拟地址: 0x4efe70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4efe70(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, char arg8)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_5a11e8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_5c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int128_t* eax_3 = sub_4cf110(data_12bac28)
    int32_t* result = sub_4d11f0(5, eax_3)
    sub_4efcd0(eax_3)
    void* var_28
    int32_t* var_60 = &var_28
    int32_t* var_3c
    sub_4889e0(&var_3c, result, 5)
    int32_t var_14_1 = 0
    int32_t ecx
    int32_t var_60_1 = ecx
    void* eax_5 = *(var_28 + 8)
    int32_t* esi_2 = *(eax_5 + 8) + 8
    int32_t* var_30 = esi_2
    int32_t var_68_1 = ecx
    char* eax_7 = sub_4f0a90(sub_4f0a90(eax_5, esi_2, &data_624734, 0x5b), esi_2, &data_624734, 0x5c)
    
    if (arg3 s> 8)
        sub_489550(eax_7, &data_5b2591, "numTextures <= NUM_DIFFUSE", 
            "d:\ax\trunk\ax2017\engine\material.cpp", 0x3b5, "MaterialCreateMemory")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t eax_8 = 0
    int32_t var_2c = 0
    
    if (arg3 s> 0)
        int32_t edi_1 = 0x1d
        
        do
            int32_t var_60_2 = *(arg2 + (eax_8 << 2))
            sub_4f0a90(eax_8 + 0x53, esi_2, &data_624734, eax_8 + 0x53)
            int32_t var_68_2 = 1
            int32_t var_70_1 = 1
            sub_4f0a90(sub_4f0a90(edi_1 - 1, esi_2, &data_624734, edi_1 - 1), esi_2, &data_624734, 
                edi_1)
            int32_t var_78_1 = 2
            sub_4f0a90(edi_1 + 2, esi_2, &data_624734, edi_1 + 2)
            int32_t var_80_1 = 2
            sub_4f0a90(edi_1 + 3, esi_2, &data_624734, edi_1 + 3)
            int32_t var_88_1 = 2
            sub_4f0a90(edi_1 + 4, esi_2, &data_624734, edi_1 + 4)
            eax_8 = var_2c + 1
            edi_1 += 6
            var_2c = eax_8
        while (eax_8 s< arg3)
    
    int32_t i_1 = arg5
    
    if (i_1 s> 0)
        int32_t ecx_6 = 0
        void* esi_3 = var_28
        int32_t i
        
        do
            ecx_6 += 0x20
            eax_8 = *(*(esi_3 + 8) + 8)
            *(eax_8 + ecx_6 - 8) = *(ecx_6 + arg4 - 0x20)
            *(eax_8 + ecx_6 + 8) = *(ecx_6 + arg4 - 0x10)
            i = i_1
            i_1 -= 1
        while (i != 1)
        esi_2 = var_30
    
    int32_t edx_9 = 0
    
    if (arg7 s> 0)
        int32_t edi_3 = 0
        void* esi_4 = var_28
        
        do
            edi_3 += 0x10
            int32_t ecx_7 = *(arg6 + (edx_9 << 2))
            edx_9 += 1
            float xmm0_5 = _mm_cvtepi32_ps(zx.o(ecx_7.b)) / 255f
            float var_48_1 = _mm_cvtepi32_ps(zx.o((ecx_7 u>> 8).b)) / 255f
            float xmm0_10 = _mm_cvtepi32_ps(zx.o((ecx_7 u>> 0x10).b))
            eax_8 = *(*(esi_4 + 8) + 8)
            float var_44_1 = xmm0_10 / 255f
            float var_40_1 = _mm_cvtepi32_ps(zx.o(ecx_7 u>> 0x18)) / 255f
            *(eax_8 + edi_3 + 0x88) = xmm0_5.o
        while (edx_9 s< arg7)
        
        esi_2 = var_30
    
    if (arg8 != 0)
        int32_t var_60_3 = 5
        int32_t var_68_3 = 2
        sub_4f0a90(sub_4f0a90(eax_8, esi_2, &data_624734, 3), esi_2, &data_624734, 4)
    
    sub_4f0ac0(0, 1)
    sub_4f0ac0(1, 0)
    int32_t* eax_27 = var_3c
    
    if (eax_27 != 0)
        eax_27[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
