// 函数名称: sub_4bd120
// 虚拟地址: 0x4bd120
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4bd120(int32_t arg1, int32_t* arg2, int128_t* arg3, float arg4 @ xmm3, int64_t* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* ecx = arg2
    int32_t edx = 0x50
    int32_t* esi = arg3 + 0x54
    
    while (true)
        int32_t eax_3 = *ecx
        
        if (eax_3 != *esi)
            break
        
        ecx = &ecx[1]
        esi = &esi[1]
        int32_t temp0_1 = edx
        edx -= 4
        
        if (temp0_1 u< 4)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_3
    
    float xmm1 = *(arg3 + 0xbc)
    
    if (*(arg3 + 0xac) + xmm1 f+ *(arg3 + 0xa8) <= arg4)
        int32_t eax_7 = *(arg3 + 0xa4)
        *arg3 = *(arg3 + 0x54)
        arg3[1] = *(arg3 + 0x64)
        arg3[2] = *(arg3 + 0x74)
        arg3[3] = *(arg3 + 0x84)
        arg3[4] = *(arg3 + 0x94)
        arg3[5].d = eax_7
    else
        int32_t* ecx_3 = arg2
        int128_t* edx_1 = arg3
        int32_t esi_1 = 0x50
        
        while (*ecx_3 == *edx_1)
            ecx_3 = &ecx_3[1]
            edx_1 += 4
            int32_t temp1_1 = esi_1
            esi_1 -= 4
            
            if (temp1_1 u< 4)
                int32_t eax_5 = arg3[0xb].d
                
                if (eax_5 == 4 || eax_5 == 2 || eax_5 == 3 || eax_5 == 0 || eax_5 == 0x17
                        || eax_5 == 0x14 || eax_5 == 0x19)
                    break
                
                sub_489550(eax_5, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x710, 
                    "PropDynamicSet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
        
        void var_1c
        int32_t* eax_6 = sub_4bc4e0(arg3, arg4, &var_1c)
        void var_70
        _memset(&var_70, 0, 0x40)
        int32_t var_74_1 = eax_6[1]
        xmm1 = arg4
        int32_t var_2c_1 = 0xffffffff
        int32_t var_30_1 = 1
        *arg3 = (*eax_6).o
        int128_t var_68
        arg3[1] = var_68
        int128_t var_58
        arg3[2] = var_58
        int128_t var_48
        arg3[3] = var_48
        int128_t var_38
        arg3[4] = var_38
        arg3[5].d = 0
    
    *(arg3 + 0xb8) = xmm1
    *(arg3 + 0x54) = *arg2
    *(arg3 + 0x64) = *(arg2 + 0x10)
    *(arg3 + 0x74) = *(arg2 + 0x20)
    *(arg3 + 0x84) = *(arg2 + 0x30)
    *(arg3 + 0x94) = *(arg2 + 0x40)
    int32_t eax_9 = arg2[0x14]
    *(arg3 + 0xa8) = *arg5
    *(arg5 + 4)
    *arg5
    *(arg3 + 0xa4) = eax_9
    int32_t eax_10 = arg5[1].d
    arg3[0xb].d = eax_10
    *(arg3 + 0xb4) = arg4
    *(arg3 + 0xbc) = arg4
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_10
}
