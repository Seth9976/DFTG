// 函数名称: sub_4725d0
// 虚拟地址: 0x4725d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_tsub_4725d0()
{
    // 第一条实际指令: void var_c8
    void var_c8
    int32_t eax_1 = __security_cookie ^ &var_c8
    int32_t performanceCount_1
    QueryPerformanceCounter(&performanceCount_1)
    int32_t* performanceCount = &data_62d6c4
    int32_t* i_1 = nullptr
    int32_t edx = sub_481430(&data_62d6c4, &i_1)
    
    for (int32_t* i = i_1; i != 0xffffffff; i = i_1)
        if (*i == 0)
            int128_t var_90
            *(i + 0x898) = *sub_4723a0(&var_90, edx, i, &var_90)
            uint32_t eax_4 = sub_46b510(i)
            
            if (eax_4.b != 0)
                int32_t var_d8_1
                char const* const var_d4_10
                char* ecx_22
                
                if (*i != 0)
                    var_d4_10 = "GetOrAllocTileTexture"
                    var_d8_1 = 0x64f2
                    ecx_22 = "gfx.type == ROLLGFX_TILE"
                label_4729d3:
                    sub_489550(eax_4, &data_5b2591, ecx_22, 
                        "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_d8_1, var_d4_10)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                int32_t eax_5 = i[0xe]
                int32_t var_bc
                
                if (eax_5 != 3)
                    var_bc = 0
                
                if (eax_5 == 3 || eax_5 == 1)
                    var_bc = 1
                
                int32_t eax_6
                int32_t edx_1
                edx_1:eax_6 = muls.dp.d(0x4ec4ec4f, i[0xc] - &data_5b6ba8)
                int32_t edx_2 = edx_1 s>> 4
                int32_t eax_9 = (edx_2 u>> 0x1f) + edx_2
                int32_t ecx_6 = *(((var_bc + (eax_9 << 1)) << 2) + &data_62ce60)
                
                if (ecx_6 == 0)
                    goto label_472745
                
                uint32_t eax_11 = zx.d(ecx_6.w)
                
                if (eax_11 u>= data_632a14)
                    goto label_472745
                
                int32_t esi_1 = data_632a10
                uint32_t edx_3 = eax_11 * 9
                
                if (*(esi_1 + (edx_3 << 2) + 0x20) != ecx_6)
                    goto label_472745
                
                if (*(esi_1 + (edx_3 << 2) + 0xc) != i[0x226]
                    || *(esi_1 + (edx_3 << 2) + 0x10) != i[0x227]
                    || *(esi_1 + (edx_3 << 2) + 0x14) != i[0x228])
                label_472715:
                    *(*(esi_1 + (edx_3 << 2) + 0x1c) + &data_632a40) = 0
                    int32_t ecx_7 = data_632a1c
                    data_632a1c = zx.d(*(esi_1 + (edx_3 << 2) + 0x20))
                    *(esi_1 + (edx_3 << 2) + 0x20) = ecx_7
                    data_632a20 -= 1
                label_472745:
                    eax_4 = sub_46fa20(&i[0x226], var_bc, eax_9, &i[0x226])
                    int32_t ecx_9 = *i[0xc]
                    
                    if (ecx_9 == 0)
                        var_d4_10 = "DrawTileRT"
                        var_d8_1 = 0x6461
                        ecx_22 = "Halt"
                        goto label_4729d3
                    
                    if (ecx_9 == 1)
                        var_d4_10 = "DrawTileRT"
                        var_d8_1 = 0x6466
                        ecx_22 = "Halt"
                        goto label_4729d3
                    
                    int32_t* edx_5
                    edx_5.b = 0
                    int32_t eax_19
                    int32_t mxcsr_1
                    eax_19, mxcsr_1 = sub_46e9d0(i, edx_5.b)
                    var_bc = eax_19
                    float xmm0_4 =
                        fconvert.s(__libm_sse2_tan_precise(mxcsr_1, sub_4962c0(), 0x3fd0c15240000000))
                    int32_t var_44_1 = 0xbf800000
                    data_1514858 = 0x3dcccccd
                    data_1514850 = xmm0_4
                    int128_t xmm0_5 = data_63c264
                    data_151485c = 0x41200000
                    data_1514880 = 0
                    data_1514860 = xmm0_5
                    data_1514884 = 0x40400000
                    int128_t xmm0_6 = data_63c274
                    data_1514854 = 0x3f800000
                    data_1514870 = xmm0_6
                    data_1514870:0xc = 0x40400000
                    int64_t var_4c = _mm_unpacklo_ps(0x80000000, 0x80000000)
                    void var_80
                    data_1514860:4.o = *sub_41e000(&var_80, &data_5d2300, &var_4c, &var_80)
                    int32_t edx_6 = sub_492b90(&data_1514850)
                    data_aca230 = 0xff000000
                    void var_70
                    int128_t* eax_23 = sub_4c0c50(&var_70, edx_6, &data_126cc24, &var_70)
                    int128_t var_40 = *eax_23
                    int128_t var_30_1 = eax_23[1]
                    sub_4c0be0(&var_40)
                    sub_4a7800(eax_19)
                    void* eax_24 = data_114ec70
                    __builtin_memcpy(eax_24 + 0xa4, 
                        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                    "00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                    "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                    "80\x3f\x00", 
                        0x41)
                    *(eax_24 + 0x25c) = 0
                    sub_496580()
                    sub_496440()
                    sub_4df2c0(eax_4, data_632a3c)
                    (*(*data_114ec78 + 0x8c))(data_aca230)
                    sub_492900()
                    sub_495c90()
                    sub_495f10(2)
                    sub_4964a0()
                    sub_4df310()
                    sub_4d2ff0(eax_4)
                    sub_49a5a0(&var_bc)
                else
                    int32_t eax_14
                    eax_14.b = *(esi_1 + (edx_3 << 2) + 0x18)
                    
                    if (eax_14.b != i[0x229].b)
                        goto label_472715
                    
                    eax_14.b = *(esi_1 + (edx_3 << 2) + 0x19)
                    
                    if (eax_14.b != *(i + 0x8a5))
                        goto label_472715
                    
                    *(esi_1 + (edx_3 << 2)) = data_632a04
        
        edx = sub_481430(performanceCount, &i_1)
    
    QueryPerformanceCounter(&performanceCount)
    int32_t* performanceCount_2 = performanceCount
    int32_t var_a4
    uint32_t result = sub_489b30(performanceCount_2 - performanceCount_1, 
        sbb.d(i_1, var_a4, performanceCount_2 u< performanceCount_1))
    
    if (result s> 0x64)
        uint32_t result_1 = result
        result = sub_4892e0("predraw time %d")
    
    @__security_check_cookie@4(eax_1 ^ &var_c8)
    return result
}
