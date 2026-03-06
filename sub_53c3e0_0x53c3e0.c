// 函数名称: sub_53c3e0
// 虚拟地址: 0x53c3e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

float* __convention("regparm")sub_53c3e0(int32_t arg1, float* arg2, int32_t* arg3, uint64_t (* arg4)[0x2])
{
    // 第一条实际指令: void* i_2
    void* i_2
    int32_t eax_1 = __security_cookie ^ &i_2
    float* i_3 = arg2
    i_2 = i_3
    int32_t ecx = *arg3
    int32_t edx = ecx - 0x5d
    int32_t var_f98
    char* i_5
    void* var_f94_6
    float i_6
    float var_f80
    float var_f50
    float var_f40
    int32_t var_f3c
    int32_t eax_25
    char* ecx_6
    int64_t xmm0_20
    
    switch (edx)
        case 0
            goto label_53c8df
        case 1
            i_3 = &i_3[0x10]
        label_53c8df:
            var_f94_6 = arg3[2]
            i_5 = i_3
            goto label_53c8e9
        case 2
            i_3 -= 0xffffff80
            goto label_53c8df
        case 3, 4, 5
            void var_f18
            int32_t eax_3 = sub_48fb90(ecx, &var_f18) << 6
            
            if (eax_3 s> arg3[2])
                sub_4892e0("dx11 not large enough instance buffer in shader to draw mesh")
                eax_3 = arg3[2]
            
            var_f94_6 = eax_3
            i_5 = &var_f18
            goto label_53c8e9
        case 6
            void* eax_4 = i_3[0xcf]
            void* ecx_1
            
            if (eax_4 != 0)
                ecx_1 = *(eax_4 + 0x2c)
            
            if (eax_4 == 0 || ecx_1 == 0)
                sub_4892e0("Can't use bones shader on non-animation structure\n")
                int32_t eax_5
                eax_5.b = 1
                @__security_check_cookie@4(eax_1 ^ &i_2)
                return eax_5
            
            i_3 = sub_4dda70(ecx_1 + 0x7c, 0)
            void* i_4 = i_2
            i_6 = i_3
            
            if (i_3 != 0)
                void* ecx_7 = *(*(*(i_4 + 0x33c) + 0x2c) + 0x80) << 6
                
                if (ecx_7 s> arg3[2])
                    sub_4892e0("dx11 not enough bones in shader to draw mesh")
                    ecx_7 = arg3[2]
                    i_3 = i_6
                
                var_f94_6 = ecx_7
                i_5 = i_3
                goto label_53c8e9
            
            char const* const var_f94_1 = "Dx11GraphicsSetSpecialRenderState"
            var_f98 = 0x683
            ecx_6 = "pBones"
        label_53c936:
            sub_489550(i_3, &data_5b2591, ecx_6, "d:\ax\trunk\ax2017\engine\windows\windowsdx11.cpp", 
                var_f98, "Dx11GraphicsSetSpecialRenderState")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        case 7, 8, 9, 0xa
            void* eax_6 = data_114e818
            float* edx_4 = i_3[0xd4] i+ 0x1c4 + (ecx << 5)
            i_6 = i_3[0xc3]
            sub_4eef20(eax_6, edx_4, &var_f50, arg4, *(eax_6 + 0x2c), &i_6)
            void* eax_7 = 0x2c
            var_f80 = var_f50
            int32_t var_f4c
            int32_t var_f7c_1 = var_f4c
            int32_t var_f48
            int32_t var_f78_1 = var_f48
            int32_t var_f44
            int32_t var_f70_1 = var_f44
            float var_f6c_1 = var_f40
            int32_t var_f68_1 = var_f3c
            int32_t var_f38
            int32_t var_f60_1 = var_f38
            int32_t var_f34
            int32_t var_f5c_1 = var_f34
            int32_t var_f74_1 = 0
            int32_t var_f64_1 = 0
            int32_t var_f30
            int32_t var_f58_1 = var_f30
            
            if (arg3[2] s< 0x2c)
                sub_4892e0("dx11 not enough texAnims in shader")
                eax_7 = arg3[2]
            
            var_f94_6 = eax_7
            i_5 = &var_f80
            goto label_53c8e9
        case 0xb
            i_3 = &i_3[0xd0]
            goto label_53c8df
        case 0xc
            i_3 = &i_3[0xbe]
            goto label_53c8df
        case 0xf
            int128_t* eax_24 = sub_4965f0(&var_f80)
            var_f50.o = *eax_24
            xmm0_20 = eax_24[1].q
            eax_25 = *(eax_24 + 0x18)
        label_53c811:
            var_f40.q = xmm0_20
            var_f80 = var_f40
            int32_t var_f7c_3 = var_f3c
            int32_t var_f78_5 = eax_25
            goto label_53c8d3
        case 0x10
            eax_25 = data_aca2b8
            var_f50.o = data_aca2a0
            xmm0_20 = data_aca2b0
            goto label_53c811
        case 0x11
            var_f94_6 = arg3[2]
            i_5 = &data_aca234
            goto label_53c8e9
        case 0x12
            i_3 = &i_3[0x30]
            goto label_53c8df
        case 0x13
            i_3 = &i_3[0x40]
            goto label_53c8df
        case 0x14
            var_f80.o = _mm_mul_ps(*sub_497770(&var_f80, edx, arg3[4], &var_f80), *(i_2 + 0x2e8))
            i_3 = &var_f80
            goto label_53c8df
        case 0x15
            var_f80 = i_3[0x9e]
            int32_t var_f7c_2 = i_3[0x9f]
            int32_t var_f78_4 = i_3[0xa0]
        label_53c8d3:
            int32_t var_f74_4 = 0
            i_3 = &var_f80
            goto label_53c8df
        case 0x16
            var_f80.o = _mm_mul_ps(*sub_497770(&var_f80, edx, arg3[4], &var_f80), *(i_2 + 0x2a8))
            i_3 = &var_f80
            goto label_53c8df
        case 0x17
            i_3 = &i_3[0x77]
            goto label_53c8df
        case 0x18
            i_3 = &i_3[0x67]
            goto label_53c8df
        case 0x19
            void* edx_5 = &i_3[0x94]
            int32_t var_f74_2 = 0
            i_2 = nullptr
            void* i
            
            for (i = nullptr; i s< 0x40; )
                edx_5 += 0xc
                void* ecx_16 = arg3[1] + i
                int32_t xmm0_12 = *(edx_5 - 0xc)
                *(ecx_16 + arg4) = _mm_unpacklo_ps(*(edx_5 - 0x14), *(edx_5 - 0x10))
                *(ecx_16 + arg4 + 8) = xmm0_12
                i = i_2 + 0x10
                i_2 = i
            
            i.b = 1
            @__security_check_cookie@4(eax_1 ^ &i_2)
            return i
        case 0x1a
            void* edx_6 = &i_3[0xa0]
            int32_t var_f74_3 = 0
            i_2 = nullptr
            void* i_1
            
            for (i_1 = nullptr; i_1 s< 0x40; )
                edx_6 += 0xc
                void* ecx_20 = arg3[1] + i_1
                int32_t xmm0_13 = *(edx_6 - 0xc)
                *(ecx_20 + arg4) = _mm_unpacklo_ps(*(edx_6 - 0x14), *(edx_6 - 0x10))
                *(ecx_20 + arg4 + 8) = xmm0_13
                i_1 = i_2 + 0x10
                i_2 = i_1
            
            i_1.b = 1
            @__security_check_cookie@4(eax_1 ^ &i_2)
            return i_1
        case 0x1b
            if (arg3[2] != 0x40)
                char const* const var_f94_8 = "Dx11GraphicsSetSpecialRenderState"
                var_f98 = 0x72a
                ecx_6 = "sizeof(float) * 4 * 4 == pRenderState->registerCount"
                goto label_53c936
            
            i_6 = 0f
            float (* eax_20)[0x4]
            float i_7
            
            do
                int128_t* eax_17
                eax_17, edx = sub_497770(&var_f80, edx, arg3[4], &var_f80)
                i_7 = i_6
                eax_20 = arg3[1] i+ i_7
                float xmm1_6[0x4] = _mm_mul_ps(*eax_17, *(i_7 i+ i_2 + 0x2a8))
                i_6 = i_7 i+ 0x10
                *(eax_20 + arg4) = xmm1_6
            while (i_7 i+ 0x10 s< 0x40)
            eax_20.b = 1
            @__security_check_cookie@4(eax_1 ^ &i_2)
            return eax_20
        case 0x1c
            void* eax_26 = data_114e818
            var_f80 = *(eax_26 + 0x2c)
            int32_t var_f7c_4 = *(eax_26 + 0x28)
            int32_t var_f78_6 = *(data_114ec70 + 0x94)
            goto label_53c8d3
        case 0x1d
            i_3 = &i_3[0xc3]
            goto label_53c8df
        case 0x1e
            i_3 = &i_3[0xc7]
            goto label_53c8df
        case 0x1f
            i_3 = &i_3[0xbf]
            goto label_53c8df
        case 0x20
            void* eax_28 = data_1151ae8
            int32_t var_f7c_5 = 0
            int32_t var_f78_7 = 0
            var_f80 = *(eax_28 + 0x1c) f/ *(eax_28 + 0x18)
            goto label_53c8d3
        case 0x21, 0x22, 0x23, 0x24
            i_3 = i_3[0xd4] i+ 0x6e4 + (ecx << 4)
            goto label_53c8df
        case 0x25
            var_f94_6 = arg3[2]
            i_5 = &data_aca68c
            goto label_53c8e9
        case 0x26
            var_f94_6 = arg3[2]
            i_5 = &data_aca678:4
        label_53c8e9:
            sub_579300(arg3[1] + arg4, i_5, var_f94_6)
            char* eax_31
            eax_31.b = 1
            @__security_check_cookie@4(eax_1 ^ &i_2)
            return eax_31
    
    i_3.b = 0
    @__security_check_cookie@4(eax_1 ^ &i_2)
    return i_3
}
