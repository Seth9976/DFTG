// 函数名称: sub_5511b0
// 虚拟地址: 0x5511b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __convention("regparm")sub_5511b0(int32_t arg1, int32_t arg2, char arg3, int128_t* arg4)
{
    // 第一条实际指令: void* eax = data_126787c
    void* eax = data_126787c
    int32_t ebx
    ebx.b = arg3
    char const* const var_34
    int32_t var_30
    char const* const var_2c
    char* ecx_2
    
    if (eax != 0)
        if (eax == 2)
            *arg4 = *(sub_4c8c70(data_11e6050) + 0xc)
            return arg4
        
        var_2c = "DragSelectionRect"
        var_30 = 0x4b4
        var_34 = "d:\ax\trunk\ax2017\engine\editor\uieditor.cpp"
        ecx_2 = "Halt"
    else
        void* eax_1 = sub_54e110(data_11e605c, nullptr)
        int128_t* esi_1 = arg4
        int128_t xmm0_1
        
        if (ebx.b == 0)
            float xmm4_1 = *(eax_1 + 0x10)
            float xmm3_1 = *(eax_1 + 0x14)
            float xmm2_2 = *(eax_1 + 0x18) - xmm4_1
            float xmm1_2 = *(eax_1 + 0x1c) - xmm3_1
            float var_18_1 = *(eax_1 + 0x9c) * xmm1_2 + xmm3_1
            float var_14_1 = *(eax_1 + 0xa0) * xmm2_2 + xmm4_1
            float var_10_1 = *(eax_1 + 0xa4) * xmm1_2 + xmm3_1
            xmm0_1 = (xmm2_2 f* *(eax_1 + 0x98) + xmm4_1).o
        else
            xmm0_1 = *(eax_1 + 0x10)
        
        int32_t edi_1 = 1
        *esi_1 = xmm0_1
        
        if (data_11e705c s<= 1)
            return esi_1
        
        while (true)
            eax = sub_54e110((&data_11e605c)[edi_1], nullptr)
            float xmm4_2 = *esi_1
            float xmm5_1 = *(esi_1 + 8)
            
            if (ebx.b == 0)
                float xmm2_3 = *(eax + 0x14)
                float xmm0_16 = *(eax + 0x1c) - xmm2_3
                float xmm3_2 = *(eax + 0x10)
                float xmm1_4 = *(eax + 0x18) - xmm3_2
                float xmm6_3 = *(eax + 0x9c) * xmm0_16 + xmm2_3
                float xmm7_3 = xmm1_4 f* *(eax + 0x98) + xmm3_2
                float xmm6_5 = *(eax + 0xa0) * xmm1_4
                arg4 = xmm6_5
                int128_t* xmm1_6 = xmm6_5 + xmm3_2
                float xmm3_5 = *(eax + 0xa4) * xmm0_16 + xmm2_3
                
                if (xmm5_1 < xmm4_2)
                label_55129f:
                    var_2c = "RectUnion"
                    var_30 = 0xdb
                    var_34 = "d:\ax\trunk\ax2017\engine\rect.cpp"
                    ecx_2 = "RectIsNormalized(r0)"
                    break
                
                int32_t xmm1_7 = *(esi_1 + 4)
                int32_t xmm0_17 = *(esi_1 + 0xc)
                
                if (xmm0_17 f< xmm1_7)
                    goto label_55129f
                
                float var_1c_2
                
                var_1c_2 = xmm7_3 <= xmm4_2 ? xmm7_3 : xmm4_2
                
                if (xmm5_1 f<= xmm1_6)
                    int128_t* var_14_3 = xmm1_6
                else
                    float var_14_2 = xmm5_1
                
                if (xmm6_3 f<= xmm1_7)
                    float var_18_3 = xmm6_3
                else
                    int32_t var_18_2 = xmm1_7
                
                if (xmm0_17 f<= xmm3_5)
                    float var_10_3 = xmm3_5
                else
                    int32_t var_10_2 = xmm0_17
                
                *esi_1 = var_1c_2.o
            else if (xmm5_1 < xmm4_2 || not(*(esi_1 + 0xc) f>= *(esi_1 + 4)))
                goto label_55129f
            
            edi_1 += 1
            
            if (edi_1 s>= data_11e705c)
                return esi_1
    
    sub_489550(eax, &data_5b2591, ecx_2, var_34, var_30, var_2c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
