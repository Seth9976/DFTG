// 函数名称: sub_424930
// 虚拟地址: 0x424930
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_424930()
{
    // 第一条实际指令: int32_t edx = __alloca_probe(0x1078)
    int32_t edx = __alloca_probe(0x1078)
    void var_10
    int32_t eax_1 = __security_cookie ^ &var_10
    int128_t xmm0 = data_60cb10
    data_aca230 = 0xff000000
    int128_t arg_38 = xmm0
    int32_t arg_34 = 0xc0400000
    int64_t arg_2c = _mm_unpacklo_ps(zx.o(0), 0xbf800000)
    void var_8
    int64_t* eax_3 = sub_482720(&var_8, edx, &arg_2c, &var_8)
    int128_t* edx_1 = &arg_38
    int32_t eax_4 = eax_3[1].d
    arg_2c = *eax_3
    arg_34 = eax_4
    sub_492310(eax_4, edx_1, &arg_2c, 0)
    arg_34 = 0xbdcccccd
    int64_t xmm2 = _mm_unpacklo_ps(0x3f000000, 0xbf000000)
    __builtin_strncpy(&arg_38, "fff?fff?33s?ff&?", 0x10)
    arg_2c = xmm2
    int64_t* eax_6 = sub_482720(&var_8, edx_1, &arg_2c, &var_8)
    int128_t* edx_2 = &arg_38
    int32_t eax_7 = eax_6[1].d
    arg_2c = *eax_6
    arg_34 = eax_7
    sub_492310(eax_7, edx_2, &arg_2c, 1)
    arg_38 = data_60ca80
    arg_34 = 0xbdcccccd
    arg_2c = _mm_unpacklo_ps(0xc0200000, 0xbf800000)
    int64_t* eax_9 = sub_482720(&var_8, edx_2, &arg_2c, &var_8)
    int32_t eax_10 = eax_9[1].d
    arg_2c = *eax_9
    arg_34 = eax_10
    int32_t eax_11 = sub_492310(eax_10, &arg_38, &arg_2c, 2)
    
    if (data_114e7d9 == 0)
        sub_489550(eax_11, &data_5b2591, "gDraw3DData.submittingRenderItems", 
            "d:\ax\trunk\ax2017\engine\draw3d.cpp", 0x331, "Draw3DAmbientLight")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    __builtin_memcpy(&data_aca6c8, 
        "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x3f", 0x14)
    void arg_8
    int128_t* eax_12 = sub_4c1010(&arg_8)
    arg_38 = *eax_12
    int128_t arg_48 = eax_12[1]
    sub_4c0be0(&arg_38)
    
    if (data_151188c == 0)
        int32_t eax_13 = data_126b8dc
        
        if (eax_13 == 2)
            eax_13 = 1
        
        int32_t i = 0
        data_126b8dc = eax_13
        
        do
            int32_t ecx_7 = *(i + &data_62b1c0)
            
            if (ecx_7 != 0)
                sub_4a7800(ecx_7)
                int32_t eax_15 = *(sub_435c50(*(i + &data_62b1bc)) + 0x10)
                
                if (eax_15 != 0)
                    eax_15(*(i + &data_62b1c0))
            
            int32_t ecx_9 = *(i + &data_62b1b0)
            
            if (ecx_9 != 0)
                sub_4a7800(ecx_9)
                int32_t eax_17 = *(sub_435c50(*(i + &data_62b1ac)) + 0x10)
                
                if (eax_17 != 0)
                    eax_17(*(i + &data_62b1b0))
            
            i += 0x28
        while (i s< 0xf0)
    
    sub_4729f0()
    void* eax_18 = data_114ec70
    __builtin_memcpy(eax_18 + 0xa4, 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00"
    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00", 
        0x41)
    *(eax_18 + 0x25c) = 0
    sub_496580()
    arg_2c.d = &data_62d6c4
    int32_t esi_1 = 0
    arg_2c:4.d = 0
    sub_481430(&data_62d6c4, &arg_2c:4)
    int32_t arg_60[0x401]
    int32_t i_1
    
    for (i_1 = arg_2c:4.d; i_1 != 0xffffffff; i_1 = arg_2c:4.d)
        int32_t* ecx_11 = arg_2c.d
        arg_60[esi_1] = i_1
        esi_1 += 1
        sub_481430(ecx_11, &arg_2c:4)
    
    int32_t result = sub_436380(i_1, &arg_60[esi_1], &arg_60, esi_1, sub_4722b0)
    int32_t edi = 0
    
    if (esi_1 s> 0)
        do
            int32_t* ecx_13 = arg_60[edi]
            int32_t eax_19 = *ecx_13
            
            if (eax_19 == 0)
                result = sub_46fc50(ecx_13)
            else
                result = eax_19 - 1
                
                if (eax_19 == 1)
                    result = sub_470090(ecx_13)
            
            edi += 1
        while (edi s< esi_1)
    
    @__security_check_cookie@4(eax_1 ^ &var_10)
    return result
}
