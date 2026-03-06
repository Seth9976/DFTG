// 函数名称: sub_4dc4e0
// 虚拟地址: 0x4dc4e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __convention("regparm")sub_4dc4e0(int32_t arg1, int32_t arg2, void* arg3, int128_t* arg4)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_5a05c8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_11c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t*** var_8c
    int32_t* var_120 = &var_8c
    int32_t* var_90
    int32_t** eax_3 = sub_4889e0(&var_90, *(arg3 + 4), 2)
    int32_t var_14_1 = 0
    
    if (arg2 s>= 0)
        eax_3 = *var_8c
        
        if (arg2 s< eax_3[8])
            int128_t* esi_2 = &eax_3[0xa][arg2 * 0x10]
            int32_t edx
            
            if (*(arg3 + 0x2c) != 0)
                edx = *(esi_2 + 0x38)
            
            float var_b0
            int128_t var_68
            int128_t var_44
            int128_t xmm0_13
            
            if (*(arg3 + 0x2c) == 0 || edx s< 0 || edx s>= eax_3[4])
                int64_t var_9c_1 = esi_2[1].q
                int128_t xmm0_24 = *esi_2
                int32_t var_94_1 = *(esi_2 + 0x18)
                var_b0 = (esi_2[2].d f+ *(esi_2 + 0x1c) f+ *(esi_2 + 0x24)) * 0.333333343f
                var_44 = var_b0.o
                xmm0_13 = xmm0_24
            else
                float xmm1_1 = esi_2[2].d
                float xmm2_1 = *(esi_2 + 0x1c)
                float xmm0 = *(esi_2 + 0x24)
                void var_110
                int128_t var_d0
                int128_t var_ac
                int128_t var_88
                
                if (9.99999944e-11f <= xmm2_1 * xmm2_1 + xmm1_1 * xmm1_1 + xmm0 * xmm0)
                    int128_t* eax_13 = sub_4ddd60(&var_110, edx, esi_2, &var_110)
                    void* ecx_8 = *(arg3 + 0x2c) + 0x10
                    var_88 = *eax_13
                    int128_t var_78_2 = eax_13[1]
                    var_68 = eax_13[2]
                    int128_t var_58_2 = eax_13[3]
                    sub_4dda70(ecx_8, edx)
                    int128_t* eax_15 = sub_497aa0(&var_110)
                    var_d0 = *eax_15
                    int128_t var_c0_2 = eax_15[1]
                    var_b0.o = eax_15[2]
                    var_ac = eax_15[3]
                    float* eax_17 = sub_4ddef0(&var_68, &var_88, &var_d0, &var_68)
                    var_44 = *eax_17
                    xmm0_13 = *(eax_17 + 0x10)
                else
                    int128_t var_34
                    var_34:0xc.d = *(esi_2 + 0x18)
                    var_44 = *esi_2
                    var_34:4.q = esi_2[1].q
                    var_44.d = 0x3f800000
                    int128_t* eax_7 = sub_482820(&var_d0, edx, &var_44, &var_d0)
                    void* ecx_3 = *(arg3 + 0x2c) + 0x10
                    var_88 = *eax_7
                    int128_t var_78_1 = eax_7[1]
                    var_68 = eax_7[2]
                    int128_t var_58_1 = eax_7[3]
                    sub_4dda70(ecx_3, edx)
                    int128_t* eax_9 = sub_497aa0(&var_110)
                    var_d0 = *eax_9
                    int128_t var_c0_1 = eax_9[1]
                    var_b0.o = eax_9[2]
                    var_ac = eax_9[3]
                    float* eax_11 = sub_4ddef0(&var_68, &var_88, &var_d0, &var_68)
                    var_44 = *eax_11
                    var_44.d = 0
                    xmm0_13 = *(eax_11 + 0x10)
            
            int128_t var_34_1 = xmm0_13
            int32_t var_94_2 = *(arg3 + 0x10)
            int64_t var_9c_2 = *(arg3 + 8)
            int128_t xmm0_31 = *(arg3 + 0x14)
            var_b0 = *(arg3 + 0x24)
            var_68 = var_b0.o
            int128_t var_58_3 = xmm0_31
            sub_4ddac0(&var_68, &var_44, &var_b0, &var_68)
            int32_t* ecx_12 = var_90
            *arg4 = var_b0.o
            arg4[1] = xmm0_31
            
            if (ecx_12 != 0)
                ecx_12[7] -= 1
            
            fsbase->NtTib.ExceptionList = ExceptionList
            @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
            return arg4
    
    sub_489550(eax_3, &data_5b2591, 
        "hardpointIndex >= 0 && hardpointIndex < pDefStructure->pStructureImportData->hardpointCount", 
        "d:\ax\trunk\ax2017\engine\structure.cpp", 0x269, "StructureGetHardpointTransform")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
