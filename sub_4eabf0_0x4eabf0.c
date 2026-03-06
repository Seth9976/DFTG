// 函数名称: sub_4eabf0
// 虚拟地址: 0x4eabf0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4eabf0(int32_t arg1, int128_t* arg2, struct _EXCEPTION_REGISTRATION_RECORD** arg3, int128_t* arg4, struct _EXCEPTION_REGISTRATION_RECORD** arg5, float arg6, int32_t* arg7)
{
    // 第一条实际指令: int32_t* eax = arg5
    int32_t* eax = arg5
    
    if (arg7 != 0)
        eax = arg7
    
    struct _EXCEPTION_REGISTRATION_RECORD** var_3c = eax
    
    if (eax[2] != 0)
        sub_489550(eax, &data_5b2591, "defaultFancy->mImage == NULL", 
            "d:\ax\trunk\ax2017\engine\font.cpp", 0x4ee, "DrawParentedStringFancy")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t esi = eax[4]
    
    if (esi == 0)
        esi = arg7[4]
    
    int128_t var_20 = *arg4
    float xmm0_10
    
    if (esi != 4 && esi != 5)
        if (esi == 6 && not(9.99999975e-06f > *(arg4 + 8) f- *arg4))
            goto label_4eac61
        
        xmm0_10 = var_20:4.d
    else if (9.99999975e-06f > *(arg4 + 8) f- *arg4)
        xmm0_10 = var_20:4.d
    else
    label_4eac61:
        float xmm0_2 = *(arg4 + 0xc) f- *(arg4 + 4)
        
        if (9.99999975e-06f > xmm0_2)
            xmm0_10 = var_20:4.d
        else
            int32_t* var_54_1 = eax
            int32_t mxcsr_1
            int16_t x87control_1
            float xmm0_3
            eax, mxcsr_1, x87control_1, xmm0_3 = sub_4ea920(eax, arg5, arg3)
            
            if (xmm0_2 <= xmm0_3)
                xmm0_10 = var_20:4.d
            else
                int32_t var_58
                var_58.q = fconvert.d(fconvert.t(_mm_cvtps_pd((xmm0_2 - xmm0_3) * 0.5f)))
                long double st0_1
                st0_1, eax = sub_59aa00(mxcsr_1, x87control_1, var_58)
                xmm0_10 = _mm_cvtpd_ps(zx.o(fconvert.d(st0_1))) f+ var_20:4.d
                var_20:4.d = xmm0_10
    
    struct _EXCEPTION_REGISTRATION_RECORD** esi_1
    struct _EXCEPTION_REGISTRATION_RECORD** edi_2
    
    if (esi == 7 || esi == 8 || esi == 9)
        esi_1 = var_3c
        
        if (9.99999975e-06f > *(arg4 + 8) f- *arg4)
            edi_2 = arg5
        else
            float xmm0_12 = *(arg4 + 0xc) f- *(arg4 + 4)
            edi_2 = arg5
            double var_30
            var_30.d = xmm0_12
            
            if (not(9.99999975e-06f > xmm0_12))
                struct _EXCEPTION_REGISTRATION_RECORD** var_54_2 = esi_1
                float xmm0_13 = sub_4ea920(eax, edi_2, arg3)
                float xmm0_14 = var_30.d
                
                if (not(xmm0_14 <= xmm0_13))
                    var_20:4.d = xmm0_14 - xmm0_13 + xmm0_10
    else
        esi_1 = var_3c
        edi_2 = arg5
    
    return sub_4ea450(&var_20, arg2, arg3, &var_20, edi_2, 1, arg6, esi_1)
}
