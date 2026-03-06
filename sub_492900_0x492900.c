// 函数名称: sub_492900
// 虚拟地址: 0x492900
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t*sub_492900()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_2 = data_114ec70
    *(eax_2 + 0xe6) = 0
    char const* const var_dc
    int32_t var_d8
    char const* const var_d4_1
    char* ecx
    
    if (data_114e7d9 == 0)
        int128_t var_50
        int128_t var_40
        int128_t var_3c
        void* const ecx_2
        
        if (data_1150eb8 == 0)
            float xmm1_6 = data_aca1f8
            float xmm0_8 = xmm1_6 f/ data_aca1fc
            float var_44_1 = xmm1_6 + xmm1_6
            float var_48_1 = xmm0_8 + xmm0_8
            var_3c = *sub_4829a0(&var_3c:4, &var_50:8, &data_5d27f8, &var_3c:4)
            int32_t var_2c_1 = data_aca200
            int32_t var_28_1 = data_aca204
            sub_4924f0(&var_40:4)
            ecx_2 = 2
        label_492adf:
            void* eax_9 = ecx_2 * 7
            var_40 = *((eax_9 << 2) + &data_aca24c)
            int32_t var_28_2 = (&data_aca264)[eax_9]
            int64_t var_30_2 = *((eax_9 << 2) + &data_aca25c)
            void var_d0
            int128_t* result = sub_4dab70(&var_d0)
            int128_t var_90 = *result
            int128_t var_80 = result[1]
            int128_t var_70 = result[2]
            int128_t var_60 = result[3]
            sub_492410(&var_90)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return result
        
        int32_t eax_3 = data_1150e1c
        float xmm0_4
        float xmm1_4
        float xmm3_4
        float xmm5_4
        
        if (eax_3 != 0x3e8)
            var_50 = *((eax_3 << 4) + &data_1150dfc)
            float var_44
            xmm3_4 = var_44
            float var_48
            xmm1_4 = var_48
            xmm0_4 = var_50:4.d
            xmm5_4 = var_50.d
        else
            xmm5_4 = (data_1150e0c f- data_1150dfc) * 0.5f f+ data_1150dfc
            xmm0_4 = (data_1150e10 f- data_1150e00) * 0.5f f+ data_1150e00
            xmm1_4 = (data_1150e14 f- data_1150e04) * 0.5f f+ data_1150e04
            xmm3_4 = (data_1150e18 f- data_1150e08) * 0.5f f+ data_1150e08
        
        float var_38_1 = xmm1_4
        var_40.d = xmm5_4
        var_3c.d = xmm0_4
        float var_34_1 = xmm3_4
        int128_t xmm0_6 = var_40
        int64_t xmm2_2 = _mm_unpacklo_ps(data_aca200, data_aca204)
        var_40 = xmm0_6
        int64_t var_30_1 = xmm2_2
        sub_4924f0(&var_40)
        eax_2 = data_1150e1c
        
        if (eax_2 == 0)
            ecx_2 = nullptr
            goto label_492adf
        
        if (eax_2 == 1)
            ecx_2 = eax_2
            goto label_492adf
        
        if (eax_2 == 0x3e8)
            ecx_2 = 3
            goto label_492adf
        
        var_d4_1 = "RenderUseSubmittedCamera"
        var_d8 = 0x3b7
        var_dc = "d:\ax\trunk\ax2017\engine\draw3d.cpp"
        ecx = "Halt"
    else
        var_d4_1 = "VRIsDrawingEye"
        var_d8 = 0x1f5
        var_dc = "d:\ax\trunk\ax2017\engine\vr.cpp"
        ecx = "!gDraw3DData.submittingRenderItems"
    
    sub_489550(eax_2, &data_5b2591, ecx, var_dc, var_d8, var_d4_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
