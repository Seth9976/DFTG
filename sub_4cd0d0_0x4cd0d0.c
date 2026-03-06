// 函数名称: sub_4cd0d0
// 虚拟地址: 0x4cd0d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (*sub_4cd0d0(void* arg1 @ xmm2, int32_t arg2))[0x4]
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4_1 = ebp
    int32_t ecx
    int128_t* edx
    ecx, edx = __alloca_probe(0x1a48)
    void var_10
    uint32_t (* i)[0x4] = __security_cookie ^ &var_10
    uint32_t (* i_2)[0x4] = i
    char const* const var_24_2
    int32_t var_20_1
    char const* const var_1c_1
    char* ecx_1
    
    if (ecx != 0)
        uint32_t ecx_2 = zx.d(ecx.w)
        
        if (ecx_2 u< data_6c9d94)
            i = ecx_2 * 0x438 + data_6c9d90
        
        if (ecx_2 u>= data_6c9d94 || (*i)[0x10d] != ecx)
            var_1c_1 = "DataArray<struct UIState>::DataArrayGet"
            var_20_1 = 0x6d
            ecx_1 = "DataArrayTryToGet(id) != NULL"
            var_24_2 = "d:\ax\trunk\ax2017\engine\dataarray.h"
        else
            void* esi_2 = ecx_2 * 0x438 + data_6c9d90
            void* var_4 = esi_2
            
            if (*(esi_2 + 8) != 0)
                @__security_check_cookie@4(i_2 ^ &var_10)
                return i
            
            uint32_t arg_128[0x4]
            _memset(&arg_128, 0, 0x1904)
            i = arg2 * 0x64
            int32_t* ecx_3 = *(esi_2 + 4)
            arg2 = 1
            bool cond:0_1 = ecx_3[1] == 0x1e
            *(&arg_128 + i) = *edx
            int32_t arg_188[0x628]
            *(&arg_188 + i) = 0xffffffff
            void arg_138
            *(&arg_138 + i) = edx[1]
            void arg_148
            *(&arg_148 + i) = edx[2]
            void arg_158
            *(&arg_158 + i) = edx[3]
            void arg_168
            *(&arg_168 + i) = edx[4]
            void arg_178
            *(&arg_178 + i) = edx[5]
            
            if (cond:0_1)
                int32_t* edx_2 = sub_4981f0(ecx_3)
                i = nullptr
                int32_t* arg_4 = edx_2
                uint32_t (* i_1)[0x4] = nullptr
                
                if (edx_2[2] s> 0)
                    int32_t ecx_4 = 0
                    int32_t var_8_1 = 0
                    
                    do
                        void* edi_2 = *edx_2 + ecx_4
                        uint32_t (* eax_3)[0x4]
                        int32_t edx_4
                        eax_3, edx_4 = sub_4ca090(i, i, esi_2, *(edi_2 + 8))
                        int32_t* esi_3 = eax_3
                        void arg_8
                        float arg_68[0x4]
                        
                        if (*(edi_2 + 4) != 6)
                            int32_t ecx_10 = *esi_3
                            
                            if (esi_3[2] s<= ecx_10)
                                eax_3.b = *(edi_2 + 0x44)
                            else
                                eax_3.b = esi_3[3].b
                            
                            if (eax_3.b == 0)
                                if (esi_3[0x51] s<= ecx_10)
                                    eax_3.b = 0
                                else
                                    eax_3.b = esi_3[0x52].b
                                
                                if (eax_3.b == 0)
                                    int128_t* eax_10 = sub_4ca9f0(&arg_8, edx_4, &arg_128, &arg_8)
                                    float xmm1_1[0x4] = *eax_10
                                    arg_68 = xmm1_1
                                    int128_t xmm0_19 = eax_10[1]
                                    float xmm1_2 = _mm_shuffle_ps(xmm1_1, xmm1_1, 0xaa)
                                    int128_t arg_78 = xmm0_19
                                    xmm1_2 f- 0
                                    int128_t arg_88 = eax_10[2]
                                    int128_t arg_98 = eax_10[3]
                                    int128_t arg_a8 = eax_10[4]
                                    int128_t xmm0_23 = eax_10[5]
                                    eax_10:1.b = (xmm1_2 == 0f ? 1 : 0) << 6
                                        | (is_unordered.d(xmm1_2, 0f) ? 1 : 0) << 2
                                        | (xmm1_2 < 0f ? 1 : 0)
                                    int128_t arg_b8 = xmm0_23
                                    bool p_2 = unimplemented  {test ah, 0x44}
                                    
                                    if (p_2)
                                        float xmm0_24 = arg_68[3]
                                        xmm0_24 f- 0
                                        eax_10:1.b = (xmm0_24 == 0f ? 1 : 0) << 6
                                            | (is_unordered.d(xmm0_24, 0f) ? 1 : 0) << 2
                                            | (xmm0_24 < 0f ? 1 : 0)
                                        bool p_4 = unimplemented  {test ah, 0x44}
                                        
                                        if (p_4)
                                            int32_t eax_12
                                            
                                            if (esi_3[0x4f] s> *esi_3)
                                                eax_12 = esi_3[0x50]
                                            
                                            if (esi_3[0x4f] s<= *esi_3 || eax_12 == 0)
                                                sub_4cca30(&arg_68, i_1, var_4, edi_2, arg1, &arg_68)
                                            else
                                                eax_12(&arg_68, edi_2, esi_3)
                            
                            sub_4caa70(&arg_128)
                        else
                            int128_t* eax_5 = sub_4ca9f0(&arg_68, edx_4, &arg_128, &arg_68)
                            int128_t arg_c8 = *eax_5
                            int128_t arg_d8 = eax_5[1]
                            int128_t arg_e8 = eax_5[2]
                            int128_t arg_f8 = eax_5[3]
                            int128_t arg_108 = eax_5[4]
                            int128_t arg_118 = eax_5[5]
                            int128_t* eax_7 = sub_4cb150(&arg_8, esi_3, edi_2, &arg_8, &arg_c8)
                            int32_t edx_6 = arg2 * 0x64
                            arg2 += 1
                            *(&arg_128 + edx_6) = *eax_7
                            *(&arg_138 + edx_6) = eax_7[1]
                            *(&arg_148 + edx_6) = eax_7[2]
                            *(&arg_158 + edx_6) = eax_7[3]
                            *(&arg_168 + edx_6) = eax_7[4]
                            int128_t xmm0_18 = eax_7[5]
                            arg_188[arg2 * 0x19] = *(edi_2 + 0x68)
                            *(&arg_178 + edx_6) = xmm0_18
                        edx_2 = arg_4
                        i = i_1 + 1
                        esi_2 = var_4
                        ecx_4 = var_8_1 + 0x178
                        i_1 = i
                        var_8_1 = ecx_4
                    while (i s< edx_2[2])
                
                @__security_check_cookie@4(i_2 ^ &var_10)
                return i
            
            var_1c_1 = "UIDefGet"
            var_20_1 = 0x126
            var_24_2 = "d:\ax\trunk\ax2017\engine\uidef.cpp"
            ecx_1 = "ptr->assetType == ASSET_TYPE_UI"
    else
        var_1c_1 = "DataArray<struct UIState>::DataArrayGet"
        var_20_1 = 0x6c
        ecx_1 = "id != DATAID_NULL"
        var_24_2 = "d:\ax\trunk\ax2017\engine\dataarray.h"
    
    sub_489550(i, &data_5b2591, ecx_1, var_24_2, var_20_1, var_1c_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
