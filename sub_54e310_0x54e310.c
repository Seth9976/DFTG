// 函数名称: sub_54e310
// 虚拟地址: 0x54e310
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_54e310()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_5a34bc
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    float var_1a0[0x18]
    float* eax_3 = sub_54e220(&var_1a0)
    bool cond:0 = data_11e7062 == 0
    int128_t var_d0 = *eax_3
    int128_t var_c0 = *(eax_3 + 0x10)
    int128_t var_b0 = *(eax_3 + 0x20)
    int128_t var_a0 = *(eax_3 + 0x30)
    int128_t var_90 = *(eax_3 + 0x40)
    int128_t var_80 = *(eax_3 + 0x50)
    
    if (cond:0)
        uint32_t (* edx_2)[0x4] = data_6cee70
        
        if (edx_2 != 0xffffffff)
            sub_4cc1f0(data_11e6054, edx_2)
            data_6cee70 = 0xffffffff
    else
        if (data_11e705c != 1)
            sub_489550(eax_3, &data_5b2591, "gUI.s.activeSetCount == 1", 
                "d:\ax\trunk\ax2017\engine\editor\uieditor.cpp", 0x174, "UIEditorDraw")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        uint32_t (* eax_4)[0x4] = sub_54e090(data_11e605c)
        uint32_t (* edx)[0x4] = data_6cee70
        uint32_t (* esi_1)[0x4] = eax_4
        
        if (esi_1 != edx && edx != 0xffffffff)
            eax_4 = sub_4cc1f0(data_11e6054, edx)
            data_6cee70 = 0xffffffff
        
        sub_4cd5a0(eax_4, esi_1, data_11e6054, sub_54e2b0)
        data_6cee70 = esi_1
    
    data_11e6054
    uint32_t (* eax_5)[0x4] = sub_4cd0d0(0x3f800000, eax_2)
    int32_t* ecx_6 = data_11e6050
    
    if (ecx_6[1] != 0x1e)
        sub_489550(eax_5, &data_5b2591, "ptr->assetType == ASSET_TYPE_UI", 
            "d:\ax\trunk\ax2017\engine\uidef.cpp", 0x126, "UIDefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t* eax_6
    int32_t edx_3
    eax_6, edx_3 = sub_4981f0(ecx_6)
    int32_t i = 0
    int32_t* var_3c = eax_6
    float var_100[0x4]
    float var_e0
    int128_t var_70
    int128_t var_38
    
    if (eax_6[2] s> 0)
        int32_t ecx_7 = data_11e705c
        void* esi_2 = nullptr
        var_70:0xc.d = 0
        
        do
            int32_t* esi_3 = esi_2 + *eax_6
            int32_t eax_8 = 0
            
            if (ecx_7 s> 0)
                edx_3 = *esi_3
                
                do
                    if ((&data_11e605c)[eax_8] == edx_3)
                        var_e0.o = *sub_4c8fe0(&var_100, &var_d0, esi_3, &var_100, 0)
                        int32_t* edx_5
                        
                        if (data_11e605c != *esi_3)
                            edx_5 = &data_5d233c
                        else
                            edx_5 = &var_38:0xc
                            var_38:0xc.d = 0xff62cbf6
                        
                        edx_3 = sub_4c0650(&var_e0, edx_5, 1f)
                        ecx_7 = data_11e705c
                        break
                    
                    eax_8 += 1
                while (eax_8 s< ecx_7)
            
            eax_6 = var_3c
            i += 1
            esi_2 = var_70:0xc.d + 0x178
            var_70:0xc.d = esi_2
        while (i s< eax_6[2])
    
    var_e0 = -10000f
    int32_t var_d8 = 0x461c4000
    int32_t xmm2 = var_3c[4]
    int32_t xmm1 = var_3c[6]
    int32_t var_d4 = xmm2
    int128_t xmm0_7 = var_e0.o
    var_e0 = -10000f
    int32_t var_dc = xmm1
    var_38 = xmm0_7
    int32_t var_d8_1 = 0x461c4000
    int32_t var_dc_1 = xmm2
    float var_58[0x4] = var_e0.o
    int32_t var_d8_2 = var_3c[3]
    int32_t var_d4_1 = xmm1
    int128_t xmm0_10 = var_e0.o
    int32_t var_e4_1
    __builtin_memcpy(&var_e4_1, 
        "\x00\x00\x00\x7f\x00\x40\x1c\xc6\x00\x40\x1c\xc6\x00\x40\x1c\x46\x00\x40\x1c\x46", 0x14)
    int32_t var_dc_2 = xmm2
    int128_t var_48 = xmm0_10
    var_e0 = var_3c[5]
    int32_t var_d4_2 = xmm1
    var_70 = var_e0.o
    var_e0.o = *sub_54de10(&var_100, edx_3, &var_38, &var_100)
    float var_f0[0x4]
    var_e0.o = *sub_54de10(&var_100, sub_4c0580(&var_e0, &var_f0[3]), &var_48, &var_100)
    var_e0.o = *sub_54de10(&var_100, sub_4c0580(&var_e0, &var_f0[3]), &var_70, &var_100)
    var_58 = *sub_54de10(&var_100, sub_4c0580(&var_e0, &var_f0[3]), &var_58, &var_100)
    int32_t edx_13 = sub_4c0580(&var_58, &var_f0[3])
    float xmm1_1 = -1f f/ data_126786c
    var_e0 = -1000f
    int32_t var_d8_3 = 0x457a0000
    int32_t var_d4_3 = 0
    float var_dc_3 = xmm1_1
    var_58 = var_e0.o
    var_58 = *sub_54de10(&var_100, edx_13, &var_58, &var_100)
    int32_t edx_14 = sub_4c0580(&var_58, &data_5d2460)
    float var_dc_4 = -1000f
    float var_d8_4 = 0f
    float var_d4_4 = 4000f
    var_e0 = -1f f/ data_126786c
    var_58 = var_e0.o
    void var_140
    var_58 = *sub_54de10(&var_140, edx_14, &var_58, &var_140)
    int32_t eax_24 = sub_4c0580(&var_58, &data_5d2460)
    void var_110
    
    if (data_11e7062 == 0)
    label_54ea04:
        void var_130
        
        if (data_11e7060.b != 0)
            if (data_11e705c s<= 0)
                sub_489550(eax_24, &data_5b2591, "gUI.s.activeSetCount > 0", 
                    "d:\ax\trunk\ax2017\engine\editor\uieditor.cpp", 0x1e4, "UIEditorDraw")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            void* eax_33 = sub_54e110(data_11e605c, nullptr)
            int32_t esi_6 = 1
            var_e0.o = *sub_4c8fe0(eax_33, &var_d0, eax_33, &var_58, 0)
            
            if (data_11e705c s> 1)
                while (true)
                    void* eax_35 = sub_54e110((&data_11e605c)[esi_6], nullptr)
                    int128_t* eax_36 = sub_4c8fe0(eax_35, &var_d0, eax_35, &var_130, 0)
                    float xmm2_3 = var_e0
                    var_48 = *eax_36
                    
                    if (var_d8_4 < xmm2_3 || var_d4_4 < var_dc_4)
                        sub_489550(eax_36, &data_5b2591, "RectIsNormalized(r0)", 
                            "d:\ax\trunk\ax2017\engine\rect.cpp", 0xdb, "RectUnion")
                        
                        if (IsDebuggerPresent() != 1)
                            sub_489700()
                            noreturn
                        
                        breakpoint
                    
                    int32_t xmm4_7 = var_48.d
                    
                    if (xmm4_7 f<= xmm2_3)
                        var_38.d = xmm4_7
                    else
                        var_38.d = xmm2_3
                    
                    int32_t xmm2_4 = var_48:8.d
                    
                    if (var_d8_4 f<= xmm2_4)
                        var_38:8.d = xmm2_4
                    else
                        var_38:8.d = var_d8_4
                    
                    int32_t xmm2_5 = var_48:4.d
                    
                    if (xmm2_5 f<= var_dc_4)
                        var_38:4.d = xmm2_5
                    else
                        var_38:4.d = var_dc_4
                    
                    if (var_d4_4 f<= var_3c)
                        var_38:0xc.d = var_3c
                    else
                        var_38:0xc.d = var_d4_4
                    
                    esi_6 += 1
                    var_e0.o = var_38
                    
                    if (esi_6 s>= data_11e705c)
                        break
                    
                    continue
            
            int32_t i_1 = 0
            float xmm4_8 = var_e0
            float xmm2_7 = var_d8_4 - xmm4_8
            float xmm5_5 = var_dc_4
            __builtin_memcpy(&var_b0, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x"
            "80\x3f\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00"
            "00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
                0x40)
            float xmm3_9 = var_d4_4 - xmm5_5
            var_38:0xc.d = xmm2_7
            float var_3c_3 = xmm3_9
            var_70:8.d = 0x41000000
            var_70:0xc.d = 0x41000000
            
            do
                float xmm0_36 = *(&var_b0:4 + (i_1 << 3)) * xmm3_9 + xmm5_5
                var_f0[2] = *(&var_b0 + (i_1 << 3)) * xmm2_7 + xmm4_8
                float var_e4_2 = xmm0_36
                var_100 = *sub_4829a0(&var_110, &var_70:8, &var_f0[2], &var_110)
                sub_4c0650(&var_100, &data_5d2474, 2f)
                xmm2_7 = var_38:0xc.d
                i_1 += 1
                xmm3_9 = var_3c_3
                xmm4_8 = var_e0
                xmm5_5 = var_dc_4
            while (i_1 s< 8)
        else if (data_11e7060:1.b != 0)
            float xmm1_13[0x4] = *(var_3c + 0xc)
            int32_t i_2 = 0
            __builtin_memcpy(&var_b0, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x"
            "80\x3f\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00"
            "00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
                0x40)
            float xmm3_11 = _mm_shuffle_ps(xmm1_13, xmm1_13, 0xaa)
            float xmm4_10 = _mm_shuffle_ps(xmm1_13, xmm1_13, 0xff)
            int128_t xmm3_12 = xmm3_11 f- xmm1_13
            float xmm5_7[0x4] = _mm_shuffle_ps(xmm1_13, xmm1_13, 0x55)
            int128_t xmm4_11 = xmm4_10 f- xmm5_7
            var_58 = xmm1_13
            var_e0.o = xmm3_12
            var_f0 = xmm5_7
            var_70 = xmm4_11
            var_38:8.d = 0x41000000
            var_38:0xc.d = 0x41000000
            
            do
                var_48:8.d =
                    (*(&var_b0 + (i_2 << 3)) f* xmm3_12 f+ xmm1_13 f- data_1267870) f* data_126786c
                float var_3c_4 =
                    (*(&var_b0:4 + (i_2 << 3)) f* xmm4_11 f+ xmm5_7 f- data_1267874) f* data_126786c
                var_100 = *sub_4829a0(&var_130, &var_38:8, &var_48:8, &var_130)
                sub_4c0650(&var_100, &data_5d2474, 2f)
                xmm1_13 = var_58
                i_2 += 1
                xmm3_12 = var_e0.o
                xmm4_11 = var_70
                xmm5_7 = var_f0
            while (i_2 s< 8)
    else
        eax_24 = GetKeyState(0x11)
        void var_120
        
        if ((0x8000 & eax_24.w) != 0)
            if (data_11e7062 == 0)
                goto label_54ea04
            
            eax_24 = GetKeyState(0x11)
            
            if ((0x8000 & eax_24.w) == 0)
                goto label_54ea04
            
            if (data_11e705c != 1)
                sub_489550(eax_24, &data_5b2591, "gUI.s.activeSetCount == 1", 
                    "d:\ax\trunk\ax2017\engine\editor\uieditor.cpp", 0x1ca, "UIEditorDraw")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            void* eax_29 = sub_54e110(data_11e605c, nullptr)
            int128_t* eax_30 = sub_4c8fe0(eax_29, &var_d0, eax_29, &var_110, 1)
            __builtin_memcpy(&var_b0, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x"
            "80\x3f\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00"
            "00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
                0x40)
            int32_t i_3 = 0
            float xmm2_2[0x4] = *eax_30
            float xmm3_5 = _mm_shuffle_ps(xmm2_2, xmm2_2, 0xaa)
            float xmm4_5 = _mm_shuffle_ps(xmm2_2, xmm2_2, 0xff)
            float xmm5_4[0x4] = _mm_shuffle_ps(xmm2_2, xmm2_2, 0x55)
            int128_t xmm3_6 = xmm3_5 f- xmm2_2
            int128_t xmm4_6 = xmm4_5 f- xmm5_4
            var_58 = xmm2_2
            var_e0.o = xmm3_6
            var_f0 = xmm5_4
            var_70 = xmm4_6
            var_38:8.d = 0x41000000
            var_38:0xc.d = 0x41000000
            
            do
                var_48:8.d = *(&var_b0 + (i_3 << 3)) f* xmm3_6 f+ xmm2_2
                float var_3c_2 = *(&var_b0:4 + (i_3 << 3)) f* xmm4_6 f+ xmm5_4
                var_100 = *sub_4829a0(&var_120, &var_38:8, &var_48:8, &var_120)
                sub_4c0650(&var_100, &data_5d2474, 2f)
                xmm2_2 = var_58
                i_3 += 1
                xmm3_6 = var_e0.o
                xmm4_6 = var_70
                xmm5_4 = var_f0
            while (i_3 s< 8)
        else
            if (data_11e705c != 1)
                sub_489550(eax_24, &data_5b2591, "gUI.s.activeSetCount == 1", 
                    "d:\ax\trunk\ax2017\engine\editor\uieditor.cpp", 0x1b0, "UIEditorDraw")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            void* eax_25 = sub_54e110(data_11e605c, nullptr)
            int128_t* eax_26 = sub_4c8fe0(eax_25, &var_d0, eax_25, &var_120, 0)
            __builtin_memcpy(&var_b0, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x"
            "80\x3f\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00"
            "00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
                0x40)
            int32_t i_4 = 0
            float xmm2_1[0x4] = *eax_26
            float xmm3_2 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xaa)
            float xmm4_2 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xff)
            float xmm5_2[0x4] = _mm_shuffle_ps(xmm2_1, xmm2_1, 0x55)
            int128_t xmm3_3 = xmm3_2 f- xmm2_1
            float xmm4_3[0x4] = xmm4_2 f- xmm5_2
            var_e0.o = xmm2_1
            var_70 = xmm3_3
            var_100 = xmm5_2
            var_f0 = xmm4_3
            var_38:8.d = 0x41000000
            var_38:0xc.d = 0x41000000
            
            do
                var_48:8.d = *(&var_b0 + (i_4 << 3)) f* xmm3_3 f+ xmm2_1
                float var_3c_1 = *(&var_b0:4 + (i_4 << 3)) f* xmm4_3 f+ xmm5_2
                var_58 = *sub_4829a0(&var_110, &var_38:8, &var_48:8, &var_110)
                sub_4c0650(&var_58, &data_5d2474, 2f)
                xmm2_1 = var_e0.o
                i_4 += 1
                xmm3_3 = var_70
                xmm4_3 = var_f0
                xmm5_2 = var_100
            while (i_4 s< 8)
    char* esi_7 = &data_5b2591
    char* eax_42 = *(data_11e6050 + 0x20)
    
    if (eax_42 != 0)
        esi_7 = eax_42
    
    if (data_151689c s> *(*fsbase->ThreadLocalStoragePointer + 4))
        __Init_thread_header(&data_151689c)
        
        if (data_151689c == 0xffffffff)
            int32_t var_14_1 = 0
            data_15168a0 = sub_4d0b50("sys/debugfont.font", 0x12)
            int32_t var_14_2 = 0xffffffff
            __Init_thread_footer(&data_151689c)
    
    void* eax_46 = data_aca1ec
    int32_t* edx_23 = data_15168a0
    var_e0 = 0f
    int32_t var_dc_5 = 0
    int32_t var_1bc_7 = 0x3fc00000
    int32_t var_d8_5 = _mm_cvtepi32_ps(zx.o(*(eax_46 + 0x14)))
    int32_t var_d4_5 = _mm_cvtepi32_ps(zx.o(*(eax_46 + 0x18)))
    var_100 = var_e0.o
    int32_t* result = sub_4e92a0(&var_100, edx_23, esi_7, &var_100)
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
