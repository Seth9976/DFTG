// 函数名称: sub_493420
// 虚拟地址: 0x493420
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

float __convention("regparm")sub_493420(int32_t arg1, float* arg2, float* arg3, int32_t* arg4, char arg5, int64_t arg6, float arg7, int32_t* arg8, int32_t* arg9)
{
    // 第一条实际指令: float var_88
    float var_88
    int32_t eax_1 = __security_cookie ^ &var_88
    int32_t* edi = arg8
    int32_t* eax_3 = arg9
    float (* var_80)[0x8] = arg2
    int32_t* var_84 = eax_3
    
    if (edi == 0)
        goto label_49349e
    
    float* var_94_1 = arg3
    float var_34[0x8]
    
    if (sub_4d2e00(&var_34, arg2, edi, &var_34) != 0)
        var_80 = &var_34
        edi = *(*sub_48f5c0(edi) + 0x28)
    
    if (edi == 0)
        eax_3 = var_84
    label_49349e:
        void* eax_9 = *(sub_4981f0(eax_3) + 8)
        edi = sub_4f0ef0(eax_9, *(eax_9 + 8) + 8, &data_624734, 0x53)
        
        if (edi == 0)
            edi = data_126cc38
    
    void* eax_12 = *(sub_4981f0(var_84) + 8)
    uint32_t eax_13 = sub_4f0ef0(eax_12, *(eax_12 + 8) + 8, &data_624734, 0x54)
    char ecx_4 = data_114e7d8
    uint32_t var_78 = 0
    
    if (data_aca6a4 != 1)
        if (data_114e7f4 != 0)
            uint32_t eax_14 = data_114e7fc
            var_88 = data_114e7f8
            var_78 = eax_14
            goto label_493595
        
        float eax_15 = data_aca2b8
        int128_t var_70_1 = data_aca2a0
        int64_t xmm0_3 = data_aca2b0
        float xmm1_1 = xmm0_3.d
        float xmm2_1 = xmm0_3:4.d
        
        if (ecx_4 != 0)
            float xmm2_2 = xmm2_1 f- data_114e7e0
            float xmm1_2 = xmm1_1 f- data_114e7dc
            float xmm0_5 = eax_15 f- data_114e7e4
            var_88 = xmm2_2 * xmm2_2 + xmm1_2 * xmm1_2 + xmm0_5 * xmm0_5
            goto label_493595
        
        float xmm2_6 = xmm2_1 f- arg6:4.d
        float xmm1_4 = xmm1_1 f- arg6.d
        float xmm0_10 = eax_15 - arg7
        var_88 = xmm2_6 * xmm2_6 + xmm1_4 * xmm1_4 + xmm0_10 * xmm0_10
    label_493731:
        uint32_t (* eax_30)[0x4] = sub_490100()
        int128_t xmm0_12 = data_5d34d0
        *eax_30 = 1
        (*eax_30)[0x13] = edi
        eax_30[5][0] = eax_13
        *(eax_30 + 8) = xmm0_12
        (*eax_30)[0x12] = var_84
        __builtin_memcpy(&(*eax_30)[6], 
            "\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
        "00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
        "3f", 
            0x30)
        (*eax_30)[0x51] = data_114a77c
        (*eax_30)[0x52] = 1
        (*eax_30)[0x53] = sub_490290()
        uint32_t eax_34 = sub_490300()
        float xmm0_13 = var_88
        eax_30[0x15][0] = eax_34
        (*eax_30)[0x57] = 0
        (*eax_30)[0x55] = xmm0_13
        (*eax_30)[0x56] = var_78
    else
        var_88 = 0f
    label_493595:
        
        if (ecx_4 == 0)
            goto label_493731
        
        int32_t eax_16 = data_c4a778
        
        if (eax_16 == 0 || (&data_aca5f8)[eax_16 * 0x60] != 1 || data_114a77c s>= 0x7fff
                || *(eax_16 * 0x180 + 0xaca640) != var_84 || *(eax_16 * 0x180 + 0xaca644) != edi)
            goto label_493731
        
        if (sub_497800(&(&data_aca760)[eax_16 * 0x18]:4, &data_aca694) != 0)
            goto label_493731
        
        if (sub_497800(&(&data_aca678)[eax_16 * 0x18], &data_aca6b8) != 0)
            goto label_493731
        
        if (sub_497800(&(&data_aca688)[eax_16 * 0x60], &data_aca6a8) != 0)
            goto label_493731
        
        if (sub_497800(&(&data_aca694)[eax_16 * 0x18]:4, &data_aca6c8) != 0)
            goto label_493731
        
        (&data_aca70c)[eax_16 * 0x18]:0xc f- data_aca6d8
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            goto label_493731
        
        if (sub_4981b0(&(&data_aca71c)[eax_16 * 0x18], &data_aca750) != 0)
            goto label_493731
        
        if (sub_4981b0(&(&data_aca72c)[eax_16 * 0x18], &data_aca760) != 0
                || (&data_aca750)[eax_16 * 0x18]:0xc != data_aca770)
            goto label_493731
        
        float xmm0_8 = (&data_aca760)[eax_16 * 0x18].d
        float temp1_1 = data_aca774
        xmm0_8 - temp1_1
        int32_t eax_24
        eax_24:1.b = (xmm0_8 == temp1_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_8, temp1_1) ? 1 : 0) << 2
            | (xmm0_8 < temp1_1 ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            goto label_493731
        
        int32_t eax_25 = sub_490290()
        
        if ((&data_aca73c)[eax_16 * 0x18]:8 != eax_25)
            goto label_493731
        
        int32_t eax_26 = sub_490300()
        
        if ((&data_aca73c)[eax_16 * 0x18]:0xc != eax_26)
            goto label_493731
        
        float xmm0_9 = (&data_aca74c)[eax_16 * 0x60]
        float temp2_1 = var_88
        xmm0_9 - temp2_1
        eax_26:1.b = (xmm0_9 == temp2_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_9, temp2_1) ? 1 : 0) << 2
            | (xmm0_9 < temp2_1 ? 1 : 0)
        bool p_6 = unimplemented  {test ah, 0x44}
        
        if (p_6 || *(eax_16 * 0x180 + 0xaca644) != edi)
            goto label_493731
        
        data_c4a778
        (&data_aca73c)[data_c4a778 * 0x18]:4 += 1
    
    int32_t eax_36 = data_114a77c
    data_114a77c = eax_36 + 1
    float xmm1_7 = arg3[8] - arg3[2]
    float xmm2_11 = arg3[7] - arg3[1]
    float xmm4_1 = arg3[4] - arg3[1]
    float xmm3_1 = arg3[5] - arg3[2]
    float xmm7_1 = arg3[6] - *arg3
    float xmm6_1 = arg3[3] - *arg3
    int32_t esi_6 = eax_36 * 0xa0
    float xmm5_2 = xmm2_11 * xmm3_1 - xmm1_7 * xmm4_1
    float xmm7_3 = xmm7_1 * xmm4_1 - xmm2_11 * xmm6_1
    float xmm1_9 = xmm1_7 * xmm6_1 - xmm7_1 * xmm3_1
    var_88 = xmm7_3
    float xmm1_14 =
        1f / (sub_41dbe0(xmm1_9 * xmm1_9 + xmm5_2 * xmm5_2 + xmm7_3 * xmm7_3) + 9.99999975e-06f)
    float xmm1_15 = xmm1_14 * var_88
    int64_t xmm2_15 = _mm_unpacklo_ps(xmm1_14 * xmm5_2, xmm1_14 * xmm1_9)
    *(esi_6 + &data_c4a77c) = *arg3
    *(esi_6 + 0xc4a784) = arg3[2]
    *(esi_6 + 0xc4a788) = xmm2_15
    *(esi_6 + 0xc4a790) = xmm1_15
    int32_t edx_4 = *arg4
    var_88 = xmm1_15
    *(esi_6 + 0xc4a794) = (((((edx_4 u>> 0x18 << 8) + zx.d(edx_4.b)) << 8) + zx.d((edx_4 u>> 8).b))
        << 8) + zx.d((edx_4 u>> 0x10).b)
    int32_t ecx_24 = arg4[1]
    *(esi_6 + 0xc4a798) = (((((ecx_24 u>> 0x18 << 8) + zx.d(ecx_24.b)) << 8) + zx.d((ecx_24 u>> 8).b))
        << 8) + zx.d((ecx_24 u>> 0x10).b)
    *(esi_6 + 0xc4a79c) = *var_80
    *(esi_6 + 0xc4a7a0) = (*var_80)[1]
    *(esi_6 + 0xc4a7a4) = *(arg3 + 0xc)
    *(esi_6 + 0xc4a7ac) = arg3[5]
    float eax_52 = var_88
    *(esi_6 + 0xc4a7b0) = xmm2_15
    *(esi_6 + 0xc4a7b8) = eax_52
    int32_t ecx_30
    
    if (arg5 == 0)
        int32_t ecx_31 = *arg4
        *(esi_6 + 0xc4a7bc) = (((((ecx_31 u>> 0x18 << 8) + zx.d(ecx_31.b)) << 8)
            + zx.d((ecx_31 u>> 8).b)) << 8) + zx.d((ecx_31 u>> 0x10).b)
        ecx_30 = arg4[1]
    else
        int32_t ecx_28 = arg4[2]
        *(esi_6 + 0xc4a7bc) = (((((ecx_28 u>> 0x18 << 8) + zx.d(ecx_28.b)) << 8)
            + zx.d((ecx_28 u>> 8).b)) << 8) + zx.d((ecx_28 u>> 0x10).b)
        ecx_30 = arg4[3]
    
    *(esi_6 + 0xc4a7c0) = (((((ecx_30 u>> 0x18 << 8) + zx.d(ecx_30.b)) << 8) + zx.d((ecx_30 u>> 8).b))
        << 8) + zx.d((ecx_30 u>> 0x10).b)
    *(esi_6 + 0xc4a7c4) = (*var_80)[2]
    *(esi_6 + 0xc4a7c8) = (*var_80)[3]
    *(esi_6 + 0xc4a7cc) = *(arg3 + 0x18)
    *(esi_6 + 0xc4a7d4) = arg3[8]
    float eax_72 = var_88
    *(esi_6 + 0xc4a7d8) = xmm2_15
    *(esi_6 + 0xc4a7e0) = eax_72
    int32_t ecx_37
    
    if (arg5 == 0)
        int32_t ecx_38 = *arg4
        *(esi_6 + 0xc4a7e4) = (((((ecx_38 u>> 0x18 << 8) + zx.d(ecx_38.b)) << 8)
            + zx.d((ecx_38 u>> 8).b)) << 8) + zx.d((ecx_38 u>> 0x10).b)
        ecx_37 = arg4[1]
    else
        int32_t ecx_35 = arg4[4]
        *(esi_6 + 0xc4a7e4) = (((((ecx_35 u>> 0x18 << 8) + zx.d(ecx_35.b)) << 8)
            + zx.d((ecx_35 u>> 8).b)) << 8) + zx.d((ecx_35 u>> 0x10).b)
        ecx_37 = arg4[5]
    
    *(esi_6 + 0xc4a7e8) = (((((ecx_37 u>> 0x18 << 8) + zx.d(ecx_37.b)) << 8) + zx.d((ecx_37 u>> 8).b))
        << 8) + zx.d((ecx_37 u>> 0x10).b)
    *(esi_6 + 0xc4a7ec) = (*var_80)[4]
    *(esi_6 + 0xc4a7f0) = (*var_80)[5]
    *(esi_6 + 0xc4a7f4) = *(arg3 + 0x24)
    *(esi_6 + 0xc4a7fc) = arg3[0xb]
    float eax_92 = var_88
    *(esi_6 + 0xc4a800) = xmm2_15
    *(esi_6 + 0xc4a808) = eax_92
    int32_t ecx_44
    
    if (arg5 == 0)
        int32_t ecx_45 = *arg4
        *(esi_6 + 0xc4a80c) = (((((ecx_45 u>> 0x18 << 8) + zx.d(ecx_45.b)) << 8)
            + zx.d((ecx_45 u>> 8).b)) << 8) + zx.d((ecx_45 u>> 0x10).b)
        ecx_44 = arg4[1]
    else
        int32_t ecx_42 = arg4[6]
        *(esi_6 + 0xc4a80c) = (((((ecx_42 u>> 0x18 << 8) + zx.d(ecx_42.b)) << 8)
            + zx.d((ecx_42 u>> 8).b)) << 8) + zx.d((ecx_42 u>> 0x10).b)
        ecx_44 = arg4[7]
    
    *(esi_6 + 0xc4a810) = (((((ecx_44 u>> 0x18 << 8) + zx.d(ecx_44.b)) << 8) + zx.d((ecx_44 u>> 8).b))
        << 8) + zx.d((ecx_44 u>> 0x10).b)
    *(esi_6 + 0xc4a814) = (*var_80)[6]
    float result = (*var_80)[7]
    *(esi_6 + 0xc4a818) = result
    @__security_check_cookie@4(eax_1 ^ &var_88)
    return result
}
