// 函数名称: sub_492310
// 虚拟地址: 0x492310
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_492310(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: if (data_114e7d9 == 0)
    if (data_114e7d9 == 0)
        sub_489550(arg1, &data_5b2591, "gDraw3DData.submittingRenderItems", 
            "d:\ax\trunk\ax2017\engine\draw3d.cpp", 0x34f, "Draw3DDirectionalLight")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t ebx = arg4 * 3
    float xmm0 = *((ebx << 2) + &data_aca71c)
    float temp0 = *arg3
    xmm0 - temp0
    arg1:1.b = (xmm0 == temp0 ? 1 : 0) << 6 | (is_unordered.d(xmm0, temp0) ? 1 : 0) << 2
        | (xmm0 < temp0 ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
    label_4923ac:
        *((ebx << 2) + &data_aca71c) = *arg3
        arg1 = arg3[2]
        *((ebx << 2) + &data_aca71c:8) = arg1
        (&data_aca6dc)[arg4] = *arg2
    else
        float xmm0_1 = *((ebx << 2) + &data_aca71c:4)
        float temp1_1 = arg3[1]
        xmm0_1 - temp1_1
        arg1:1.b = (xmm0_1 == temp1_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, temp1_1) ? 1 : 0) << 2
            | (xmm0_1 < temp1_1 ? 1 : 0)
        bool p_3 = unimplemented  {test ah, 0x44}
        
        if (p_3)
            goto label_4923ac
        
        float xmm0_2 = *((ebx << 2) + &data_aca71c:8)
        float temp2_1 = arg3[2]
        xmm0_2 - temp2_1
        arg1:1.b = (xmm0_2 == temp2_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, temp2_1) ? 1 : 0) << 2
            | (xmm0_2 < temp2_1 ? 1 : 0)
        bool p_5 = unimplemented  {test ah, 0x44}
        
        if (p_5)
            goto label_4923ac
        
        float xmm0_3 = (&data_aca6dc)[arg4].d
        float temp3_1 = *arg2
        xmm0_3 - temp3_1
        arg1:1.b = (xmm0_3 == temp3_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, temp3_1) ? 1 : 0) << 2
            | (xmm0_3 < temp3_1 ? 1 : 0)
        bool p_7 = unimplemented  {test ah, 0x44}
        
        if (p_7)
            goto label_4923ac
        
        float xmm0_4 = (&data_aca6dc)[arg4]:4
        float temp4_1 = arg2[1]
        xmm0_4 - temp4_1
        arg1:1.b = (xmm0_4 == temp4_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_4, temp4_1) ? 1 : 0) << 2
            | (xmm0_4 < temp4_1 ? 1 : 0)
        bool p_9 = unimplemented  {test ah, 0x44}
        
        if (p_9)
            goto label_4923ac
        
        float xmm0_5 = (&data_aca6dc)[arg4]:8
        float temp5_1 = arg2[2]
        xmm0_5 - temp5_1
        arg1:1.b = (xmm0_5 == temp5_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_5, temp5_1) ? 1 : 0) << 2
            | (xmm0_5 < temp5_1 ? 1 : 0)
        bool p_11 = unimplemented  {test ah, 0x44}
        
        if (p_11)
            goto label_4923ac
        
        float xmm0_6 = (&data_aca6dc)[arg4]:0xc
        float temp6_1 = arg2[3]
        xmm0_6 - temp6_1
        arg1:1.b = (xmm0_6 == temp6_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_6, temp6_1) ? 1 : 0) << 2
            | (xmm0_6 < temp6_1 ? 1 : 0)
        bool p_13 = unimplemented  {test ah, 0x44}
        
        if (p_13)
            goto label_4923ac
    
    return arg1
}
