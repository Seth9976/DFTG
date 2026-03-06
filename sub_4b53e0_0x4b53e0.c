// 函数名称: sub_4b53e0
// 虚拟地址: 0x4b53e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __convention("regparm")sub_4b53e0(int32_t arg1, int32_t arg2, char arg3, int128_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float xmm0 = *(data_114e818 + 0x2c)
    int128_t* eax_3 = data_6c4474
    char const* const var_7c
    int32_t var_78
    char const* const var_74_4
    char* ecx_6
    void var_30
    
    if (eax_3 != 0)
        if (eax_3 == 2)
            *arg4 = *sub_49abe0(&var_30, arg2, data_642620, &var_30)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return arg4
        
        var_74_4 = "UI2DragSelectionRect"
        var_78 = 0x3492
        var_7c = "d:\ax\trunk\ax2017\engine\ui2.cpp"
        ecx_6 = "Halt"
    else
        void* eax_4 = sub_4a7d60(data_642654)
        float var_48
        int128_t var_20
        int128_t xmm0_1
        
        if (arg3 == 0)
            sub_498790(eax_4 + 0xc, *(data_114e818 + 0x2c), &var_48)
            float* eax_7 = sub_4bc3a0(eax_4 + 0x54c, xmm0, &var_20)
            float xmm1_1 = var_48
            float var_40
            float xmm2_5 = var_40 - xmm1_1
            float var_44
            float var_3c
            float xmm4_2 = var_3c - var_44
            var_48 = *eax_7 * xmm2_5 + xmm1_1
            float var_44_1 = eax_7[1] * xmm4_2 + var_44
            float var_40_1 = eax_7[2] * xmm2_5 + xmm1_1
            float var_3c_1 = eax_7[3] * xmm4_2 + var_44
            xmm0_1 = var_48.o
        else
            sub_498790(eax_4 + 0xc, *(data_114e818 + 0x2c), &var_20)
            xmm0_1 = var_20
        
        int32_t edi_1 = 1
        *arg4 = xmm0_1
        
        if (data_643654 s<= 1)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return arg4
        
        while (true)
            void* eax_8 = sub_4a7d60((&data_642654)[edi_1])
            
            if (arg3 == 0)
                sub_498790(eax_4 + 0xc, *(data_114e818 + 0x2c), &var_20)
                int128_t* eax_11 = sub_4bc3a0(eax_8 + 0x54c, xmm0, &var_30)
                float xmm2_9 = var_20:4.d
                float xmm0_16 = var_20.d
                float xmm3_3 = var_20:0xc.d - xmm2_9
                float xmm1_3 = var_20:8.d - xmm0_16
                float xmm7_3 = *(eax_11 + 4) * xmm3_3 + xmm2_9
                float xmm3_4 = *(arg4 + 8)
                float xmm5_3 = *(eax_11 + 0xc) * xmm3_3 + xmm2_9
                float xmm2_10 = *arg4
                float xmm4_5 = xmm1_3 f* *eax_11 + xmm0_16
                float xmm6_3 = *(eax_11 + 8) * xmm1_3 + xmm0_16
                int32_t xmm0_17
                int32_t xmm1_4
                
                if (not(xmm3_4 < xmm2_10))
                    xmm1_4 = *(arg4 + 4)
                    xmm0_17 = *(arg4 + 0xc)
                
                if (xmm3_4 < xmm2_10 || xmm0_17 f< xmm1_4)
                    sub_489550(eax_11, &data_5b2591, "RectIsNormalized(r0)", 
                        "d:\ax\trunk\ax2017\engine\rect.cpp", 0xdb, "RectUnion")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                var_48 = xmm4_5 <= xmm2_10 ? xmm4_5 : xmm2_10
                
                if (xmm3_4 <= xmm6_3)
                    float var_40_3 = xmm6_3
                else
                    float var_40_2 = xmm3_4
                
                if (xmm7_3 f<= xmm1_4)
                    float var_44_3 = xmm7_3
                else
                    int32_t var_44_2 = xmm1_4
                
                if (xmm0_17 f<= xmm5_3)
                    float var_3c_3 = xmm5_3
                else
                    int32_t var_3c_2 = xmm0_17
                
                *arg4 = var_48.o
            else
                void var_60
                eax_3 = sub_498790(eax_4 + 0xc, *(data_114e818 + 0x2c), &var_60)
                
                if (*(arg4 + 8) f< *arg4 || not(*(arg4 + 0xc) f>= *(arg4 + 4)))
                    var_74_4 = "RectUnion"
                    var_78 = 0xdb
                    var_7c = "d:\ax\trunk\ax2017\engine\rect.cpp"
                    ecx_6 = "RectIsNormalized(r0)"
                    break
            
            edi_1 += 1
            
            if (edi_1 s>= data_643654)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return arg4
    sub_489550(eax_3, &data_5b2591, ecx_6, var_7c, var_78, var_74_4)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
