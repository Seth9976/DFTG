// 函数名称: sub_4d88e0
// 虚拟地址: 0x4d88e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_4d88e0(void* arg1, int32_t arg2, char* arg3, char* arg4)
{
    // 第一条实际指令: if (arg2 != 0)
    if (arg2 != 0)
        int32_t eax
        sub_489550(eax, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\spine.cpp", 0xeb, 
            "TggAttachmentLoader_createAttachment")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t ecx
    int32_t var_14 = ecx
    int32_t* eax_1 = sub_4d8670(*(arg1 + 0xc), arg4)
    int32_t* result = sub_526e30(arg3)
    result[0x11] = eax_1
    int32_t* eax_2 = *eax_1
    
    if (eax_2 == 0)
        sub_4e6fe0(eax_1, 0)
        eax_2 = *eax_1
        
        if (eax_2 == 0)
            sub_4d1060(eax_1)
            eax_2 = *eax_1
    
    int32_t* ecx_6 = **eax_2
    int32_t eax_4 = *ecx_6
    float xmm2_1 = ecx_6[3] f* ecx_6[2]
    double xmm0_2[0x2] = _mm_cvtepi32_pd(zx.q(eax_4)) f+ *((eax_4 u>> 0x1f << 3) + &data_60cbc0)
    int32_t eax_6 = ecx_6[1]
    result[0x22] = 0
    result[0x23] = 0x3f800000
    result[0x24] = 0
    float xmm3 = _mm_cvtpd_ps(xmm0_2)
    result[0x25] = 0
    result[0x26] = 0x3f800000
    result[0x27] = 0
    result[0x20] = 0x3f800000
    result[0x21] = 0x3f800000
    double xmm0_4 = _mm_cvtepi32_pd(zx.q(eax_6))
    result[0x12] = 0
    result[0x13] = 0
    int32_t ecx_7 = int.d(xmm3 * xmm2_1)
    float xmm1 = _mm_cvtpd_ps(xmm0_4 f+ *((eax_6 u>> 0x1f << 3) + &data_60cbc0))
    result[0x14] = ecx_7
    result[0x16] = ecx_7
    int32_t eax_8 = int.d(xmm1 * xmm2_1)
    result[0x15] = eax_8
    result[0x17] = eax_8
    return result
}
