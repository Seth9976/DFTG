// 函数名称: sub_4962c0
// 虚拟地址: 0x4962c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4962c0()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_2c
    char const* const ecx
    
    if (data_114e7d9 != 0)
        char const* const var_28 = "Draw3DRenderItemSubmissionBegin"
        var_2c = 0xab1
        ecx = "!gDraw3DData.submittingRenderItems"
    else if (data_c4a778 != 0)
        char const* const var_28_1 = "Draw3DRenderItemSubmissionBegin"
        var_2c = 0xab2
        ecx = "gDraw3DData.renderItemCount == 0"
    else if (data_114a77c == 0)
        if (data_114e7d8 == 0)
            int128_t xmm1 = data_5d2464
            data_aca6a8 = xmm1
            int32_t var_c = 0xbf800000
            data_aca6c8 = xmm1
            data_aca6b8 = zx.o(0)
            data_114e7d9 = 1
            int64_t xmm1_1 = _mm_unpacklo_ps(0x3f800000, 0xbf800000)
            data_aca6a4 = 0
            data_aca6d8 = 0
            int64_t var_14 = xmm1_1
            void var_24
            int32_t edx
            int64_t* eax_3 = sub_482720(&var_24, edx, &var_14, &var_24)
            data_aca534.q = *eax_3
            int32_t result = eax_3[1].d
            int128_t xmm0_1 = data_5d2464
            data_aca534:8 = result
            __builtin_memset(&data_aca74c, 0, 0x24)
            data_aca564 = xmm0_1
            data_aca770 = 7
            data_aca774 = 0x3f800000
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return result
        
        char const* const var_28_4 = "Draw3DRenderItemSubmissionBegin"
        var_2c = 0xab4
        ecx = "!gDraw3DData.quadGroupDrawing"
    else
        char const* const var_28_2 = "Draw3DRenderItemSubmissionBegin"
        var_2c = 0xab3
        ecx = "gDraw3DData.renderQuadCount == 0"
    
    sub_489550(eax_1, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\draw3d.cpp", var_2c, 
        "Draw3DRenderItemSubmissionBegin")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
