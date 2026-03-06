// 函数名称: sub_4bcdb0
// 虚拟地址: 0x4bcdb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4bcdb0(int32_t arg1, int32_t* arg2, int128_t* arg3, float arg4 @ xmm3, int64_t* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* esi = arg2
    int32_t* edi = arg3 + 0x84
    int32_t ecx = 0x80
    
    while (true)
        int32_t eax_2 = *esi
        
        if (eax_2 != *edi)
            break
        
        esi = &esi[1]
        edi = &edi[1]
        int32_t temp0_1 = ecx
        ecx -= 4
        
        if (temp0_1 u< 4)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_2
    
    float xmm1 = *(arg3 + 0x11c)
    void* eax_6
    int128_t* esi_3
    
    if (*(arg3 + 0x10c) + xmm1 f+ *(arg3 + 0x108) <= arg4)
        eax_6 = arg3 + 0x84
        esi_3 = eax_6
    else
        int32_t* ecx_3 = arg2
        int32_t esi_1 = 0x80
        void* edx = arg3
        
        while (*ecx_3 == *edx)
            ecx_3 = &ecx_3[1]
            edx += 4
            int32_t temp1_1 = esi_1
            esi_1 -= 4
            
            if (temp1_1 u< 4)
                int32_t eax_4 = arg3[0x11].d
                
                if (eax_4 == 4 || eax_4 == 2 || eax_4 == 3 || eax_4 == 0 || eax_4 == 0x17
                        || eax_4 == 0x14 || eax_4 == 0x19)
                    break
                
                sub_489550(eax_4, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x710, 
                    "PropDynamicSet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
        
        void var_24
        int128_t* eax_5 = sub_4bc3a0(arg3, arg4, &var_24)
        uint32_t var_a0[0x6][0x4]
        _memset(&var_a0, 0, 0x68)
        int128_t var_b0
        esi_3 = &var_b0
        eax_6 = arg3 + 0x84
        int32_t var_30_1 = 0
        int32_t var_34_1 = 0xffffffff
        xmm1 = arg4
        int32_t var_38_1 = 1
        var_b0 = *eax_5
    
    __builtin_memcpy(arg3, esi_3, 0x84)
    *(arg3 + 0x118) = xmm1
    __builtin_memcpy(eax_6, arg2, 0x84)
    *(arg3 + 0x108) = *arg5
    int32_t eax_7 = arg5[1].d
    arg3[0x11].d = eax_7
    *(arg3 + 0x114) = arg4
    *(arg3 + 0x11c) = arg4
    *(arg5 + 4)
    *arg5
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_7
}
