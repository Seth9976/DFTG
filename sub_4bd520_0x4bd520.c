// 函数名称: sub_4bd520
// 虚拟地址: 0x4bd520
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4bd520(int32_t arg1, int32_t* arg2, int128_t* arg3, float arg4 @ xmm3, int64_t* arg5)
{
    // 第一条实际指令: int32_t* ecx = arg2
    int32_t* ecx = arg2
    int32_t* edi = arg3 + 0x3c
    int32_t edx = 0x38
    
    while (true)
        int32_t eax_1 = *ecx
        
        if (eax_1 != *edi)
            break
        
        ecx = &ecx[1]
        edi = &edi[1]
        int32_t temp0_1 = edx
        edx -= 4
        
        if (temp0_1 u< 4)
            return eax_1
    
    float xmm1 = *(arg3 + 0x8c)
    int32_t eax_6
    
    if (*(arg3 + 0x7c) + xmm1 f+ *(arg3 + 0x78) <= arg4)
        eax_6 = *(arg3 + 0x74)
        *arg3 = *(arg3 + 0x3c)
        arg3[1] = *(arg3 + 0x4c)
        arg3[2] = *(arg3 + 0x5c)
        arg3[3].q = *(arg3 + 0x6c)
    else
        int32_t* ecx_1 = arg2
        int128_t* edx_1 = arg3
        int32_t edi_1 = 0x38
        
        while (*ecx_1 == *edx_1)
            ecx_1 = &ecx_1[1]
            edx_1 += 4
            int32_t temp1_1 = edi_1
            edi_1 -= 4
            
            if (temp1_1 u< 4)
                int32_t eax_3 = arg3[8].d
                
                if (eax_3 == 4 || eax_3 == 2 || eax_3 == 3 || eax_3 == 0 || eax_3 == 0x17
                        || eax_3 == 0x14 || eax_3 == 0x19)
                    break
                
                sub_489550(eax_3, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x710, 
                    "PropDynamicSet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
        
        int32_t eax_4
        int32_t edx_2
        eax_4, edx_2 = sub_4bc210(arg3, arg4)
        void var_4c
        int32_t* eax_5 = sub_4bcd40(eax_4, edx_2, eax_4, &var_4c)
        int128_t xmm1_2 = *(eax_5 + 0x10)
        int128_t xmm2_1 = *(eax_5 + 0x20)
        int64_t xmm3 = *(eax_5 + 0x30)
        eax_6 = eax_5[0xe]
        *arg3 = *eax_5
        arg3[1] = xmm1_2
        arg3[2] = xmm2_1
        arg3[3].q = xmm3
        xmm1 = arg4
    
    *(arg3 + 0x38) = eax_6
    *(arg3 + 0x88) = xmm1
    *(arg3 + 0x3c) = *arg2
    *(arg3 + 0x4c) = *(arg2 + 0x10)
    *(arg3 + 0x5c) = *(arg2 + 0x20)
    *(arg3 + 0x6c) = *(arg2 + 0x30)
    int32_t eax_8 = arg2[0xe]
    *(arg3 + 0x78) = *arg5
    *(arg5 + 4)
    *arg5
    *(arg3 + 0x74) = eax_8
    int32_t eax_9 = arg5[1].d
    arg3[8].d = eax_9
    *(arg3 + 0x84) = arg4
    *(arg3 + 0x8c) = arg4
    return eax_9
}
