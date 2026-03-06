// 函数名称: sub_4a9fc0
// 虚拟地址: 0x4a9fc0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_4a9fc0(int32_t arg1 @ esi)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t* ecx = __alloca_probe(0x1078)
    int32_t __saved_ebp
    int32_t var_14 = __security_cookie ^ &__saved_ebp
    bool cond:0 = data_64365e == 0
    void* eax_2 = data_114e818
    data_6c4471 = 1
    float xmm0 = *(eax_2 + 0x2c)
    float* var_106c = ecx
    int32_t* result
    char* var_1068
    int128_t var_1060
    void var_1050
    float var_1040
    int128_t var_1028
    
    if (cond:0)
    label_4aa571:
        int32_t var_1c_13 = data_643654
        int32_t ecx_16 = data_642624
        int32_t* var_20_1 = &data_642654
        char** var_24_1 = &var_1068
        var_1068 = nullptr
        int32_t var_1018[0x3fd]
        result = sub_4a9860(&var_1068, &var_1018, ecx_16, var_24_1, var_20_1, var_1c_13)
        int32_t esi_4 = 0
        
        if (var_1068 s> 0)
            BOOL eax_27
            
            while (true)
                int32_t edx_3 = var_1018[esi_4]
                int32_t var_20_2
                char const* const var_1c_17
                char* ecx_22
                
                if (edx_3 == 0)
                    var_1c_17 = "DataArray<struct UI2>::DataArrayGet"
                    var_20_2 = 0x6c
                    ecx_22 = "id != DATAID_NULL"
                else
                    result = zx.d(edx_3.w)
                    
                    if (result u< data_63e5ac)
                        char* edi_4 = result * 0x1418 + data_63e5a8
                        
                        if (*(edi_4 + 0x1410) == edx_3)
                            int32_t edx_4 = sub_498790(&edi_4[0xc], xmm0, &var_1040)
                            var_1028.d = var_1040 + *var_106c
                            float var_103c
                            var_1028:4.d = var_103c + var_106c[1]
                            float var_1038
                            var_1028:8.d = var_1038 + *var_106c
                            float var_1034
                            var_1028:0xc.d = var_1034 + var_106c[1]
                            int32_t* var_1c_16 = &var_1060
                            var_1060 = *sub_4be600(&var_1050, edx_4, &var_1028, &var_1050)
                            result = sub_4a9f50(&var_1060, 0x75, edi_4, var_1c_16)
                            esi_4 += 1
                            
                            if (esi_4 s< var_1068)
                                continue
                            
                            @__security_check_cookie@4(arg1 ^ &__saved_ebp)
                            return result
                    
                    var_1c_17 = "DataArray<struct UI2>::DataArrayGet"
                    var_20_2 = 0x6d
                    ecx_22 = "DataArrayTryToGet(id) != NULL"
                
                sub_489550(result, &data_5b2591, ecx_22, "d:\ax\trunk\ax2017\engine\dataarray.h", 
                    var_20_2, var_1c_17)
                eax_27 = IsDebuggerPresent()
                break
            
            if (eax_27 == 1)
                breakpoint
            
            sub_489700()
            noreturn
    else
        int16_t eax_3 = GetKeyState(0x11)
        HWND eax_5
        
        if ((0x8000 & eax_3) != 0 && *(data_aca1f0 + 0x18) != 0)
            eax_5 = GetFocus()
        
        if ((0x8000 & eax_3) != 0 && *(data_aca1f0 + 0x18) != 0
                && (eax_5 == data_1150b8c || eax_5 == 0))
            if (data_643654 != 1)
                sub_489550(eax_5, &data_5b2591, "gUI2Editor.s.activeSetCount == 1", 
                    "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x24b2, "UI2OffsetActiveSet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            char* eax_6 = sub_4a7d60(data_642654)
            var_1068 = eax_6
            int128_t* eax_7
            int32_t edx
            eax_7, edx = sub_498790(&eax_6[0xc], xmm0, &var_1060)
            var_1040 = *ecx f+ *eax_7
            float var_103c_1 = *(eax_7 + 4) f+ ecx[1]
            float var_1038_1 = *(eax_7 + 8) f+ *ecx
            float var_1034_1 = *(eax_7 + 0xc) f+ ecx[1]
            int128_t* var_1c_4 = &var_1050
            var_1028 = *sub_4be600(&var_1050, edx, &var_1040, &var_1050)
            int128_t* eax_10 = sub_4bc3a0(&var_1068[0x54c], xmm0, var_1c_4)
            int128_t* eax_11 = sub_498790(&eax_6[0xc], xmm0, &var_1060)
            float xmm2_4 = *(eax_11 + 4)
            float xmm3_1 = *eax_11
            float xmm1_2 = *(eax_11 + 8) - xmm3_1
            float xmm0_11 = *(eax_11 + 0xc) - xmm2_4
            float xmm5_3 = *(eax_10 + 8) * xmm1_2 + xmm3_1
            float xmm6_3 = xmm1_2 f* *eax_10 + xmm3_1
            float xmm0_12 = var_1028.d
            float xmm4_3 = *(eax_10 + 4) * xmm0_11 + xmm2_4
            float xmm3_2 = var_1028:8.d
            float xmm1_5 = *(eax_10 + 0xc) * xmm0_11 + xmm2_4
            float xmm2_5 = var_1028:4.d
            float xmm0_13 = var_1028:0xc.d
            float xmm5_4
            
            if (not(xmm0_12 <= xmm6_3))
                xmm5_4 = xmm6_3
                xmm3_2 = xmm3_2 - xmm0_12 + xmm6_3
            else if (xmm5_3 <= xmm3_2)
                xmm5_4 = xmm0_12
            else
                float xmm7_2 = xmm3_2 - xmm0_12
                xmm3_2 = xmm5_3
                xmm5_4 = xmm5_3 - xmm7_2
            
            if (not(xmm2_5 <= xmm4_3))
                float xmm0_14 = xmm0_13 - xmm2_5
                xmm2_5 = xmm4_3
                xmm0_13 = xmm0_14 + xmm4_3
            else if (not(xmm1_5 <= xmm0_13))
                float xmm6_5 = xmm0_13 - xmm2_5
                xmm0_13 = xmm1_5
                xmm2_5 = xmm1_5 - xmm6_5
            
            var_1028.d = xmm5_4
            var_1028:4.d = xmm2_5
            var_1028:8.d = xmm3_2
            var_1028:0xc.d = xmm0_13
            sub_4a9f50(&var_1028, 0x75, var_1068, &var_1028)
            float xmm0_15 = var_1028.d
            float xmm2_8 = var_1028:8.d - xmm0_15
            float xmm1_6 = var_1028:4.d
            float xmm3_5 = var_1028:0xc.d - xmm1_6
            char* ecx_8 = var_1068
            int32_t* var_1c_7 = &var_1040
            var_1040 = (xmm6_3 - xmm0_15) / xmm2_8
            float var_103c_2 = (xmm4_3 - xmm1_6) / xmm3_5
            float var_1038_2 = (xmm5_3 - xmm0_15) / xmm2_8
            float var_1034_2 = (xmm1_5 - xmm1_6) / xmm3_5
            result = sub_4a9f50(&var_1040, 0x7d, ecx_8, var_1c_7)
        else
            if (data_64365e == 0)
                goto label_4aa571
            
            HWND eax_14 = GetKeyState(0x11)
            
            if ((0x8000 & eax_14.w) != 0)
                eax_14 = data_aca1f0
                
                if (eax_14->__offset(0x18).b == 0)
                    goto label_4aa353
                
                eax_14 = GetFocus()
                
                if (eax_14 == data_1150b8c || eax_14 == 0)
                    goto label_4aa571
            
        label_4aa353:
            
            if (data_643654 != 1)
                sub_489550(eax_14, &data_5b2591, "gUI2Editor.s.activeSetCount == 1", 
                    "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x24be, "UI2OffsetActiveSet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            char* eax_15 = sub_4a7d60(data_642654)
            int128_t* eax_16 = sub_4bc3a0(&eax_15[0x54c], xmm0, &var_1050)
            int128_t* eax_17
            int32_t edx_1
            eax_17, edx_1 = sub_498790(&eax_15[0xc], xmm0, &var_1060)
            float xmm6_6 = *eax_17
            float xmm5_5 = *(eax_17 + 4)
            float xmm4_16 = *(eax_17 + 8) - xmm6_6
            float xmm3_7 = *(eax_17 + 0xc) - xmm5_5
            var_1040 = xmm4_16 f* *eax_16 + xmm6_6 + *var_106c
            float var_103c_3 = *(eax_16 + 4) * xmm3_7 + xmm5_5 + var_106c[1]
            float var_1038_3 = *(eax_16 + 8) * xmm4_16 + xmm6_6 + *var_106c
            float var_1034_3 = *(eax_16 + 0xc) * xmm3_7 + xmm5_5 + var_106c[1]
            void* var_1c_12 = &var_1050
            var_1040.o = *sub_4be600(&var_1050, edx_1, &var_1040, &var_1050)
            int128_t* eax_21 = sub_498790(&eax_15[0xc], xmm0, var_1c_12)
            float xmm3_8[0x4] = var_1040.o
            float xmm1_7 = *eax_21
            float xmm5_6 = xmm3_8[0]
            float xmm0_37 = *(eax_21 + 8) - xmm1_7
            float xmm4_19 = _mm_shuffle_ps(xmm3_8, xmm3_8, 0xaa) - xmm1_7
            float xmm2_13 = _mm_shuffle_ps(xmm3_8, xmm3_8, 0x55)
            float xmm1_8 = *(eax_21 + 4)
            float xmm3_10 = _mm_shuffle_ps(xmm3_8, xmm3_8, 0xff) - xmm1_8
            float xmm5_8 = (xmm5_6 - xmm1_7) / xmm0_37
            float xmm4_20 = xmm4_19 / xmm0_37
            float xmm7_4 = xmm5_8
            float xmm0_39 = *(eax_21 + 0xc) - xmm1_8
            float xmm1_9 = xmm4_20
            int128_t xmm2_15 = (xmm2_13 - xmm1_8) / xmm0_39
            float xmm3_11 = xmm3_10 / xmm0_39
            var_1040.o = xmm2_15
            int32_t xmm6_7 = xmm2_15.d
            float xmm0_40 = xmm3_11
            
            if (not(0 f<= xmm7_4))
                xmm7_4 = (zx.o(0)).d
                xmm1_9 = xmm1_9 - xmm5_8 + 0f
            else if (not(xmm4_20 <= 1f))
                xmm1_9 = 1f
                xmm7_4 = 1f - (xmm4_20 - xmm5_8)
            
            float xmm4_22 = (var_1040.o).d
            
            if (not(0 f<= xmm4_22))
                xmm6_7 = (zx.o(0)).d
                xmm0_40 = xmm3_11 - xmm4_22 + 0f
            else if (not(xmm3_11 <= 1f))
                xmm0_40 = 1f
                xmm6_7 = 1f - (xmm3_11 - xmm4_22)
            
            var_1028.d = xmm7_4
            var_1028:4.d = xmm6_7
            var_1028:8.d = xmm1_9
            var_1028:0xc.d = xmm0_40
            result = sub_4a9f50(&var_1028, 0x7d, eax_15, &var_1028)
    @__security_check_cookie@4(arg1 ^ &__saved_ebp)
    return result
}
