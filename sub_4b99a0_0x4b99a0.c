// 函数名称: sub_4b99a0
// 虚拟地址: 0x4b99a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_4b99a0(void* arg1)
{
    // 第一条实际指令: int32_t edi = *(arg1 + 0xf50)
    int32_t edi = *(arg1 + 0xf50)
    
    if (edi == 0)
        return 
    
    int32_t* eax = *(arg1 + 0xfec)
    int32_t var_38_2
    char const* const var_34_3
    int32_t var_18
    
    if (eax != 2)
        if (eax == 3)
            float xmm1_1[0x4] = *(arg1 + 0x10a0)
            float xmm2_3 = _mm_shuffle_ps(xmm1_1, xmm1_1, 0xaa) f- xmm1_1
            float xmm0_3 = _mm_shuffle_ps(xmm1_1, xmm1_1, 0xff) - _mm_shuffle_ps(xmm1_1, xmm1_1, 0x55)
            float var_20 = xmm2_3
            float var_1c_1 = xmm0_3
            float eax_2
            int32_t edx_1
            eax_2, edx_1 = sub_4a0ae0(arg1)
            float var_28 = eax_2
            int32_t var_24_1 = edx_1
            eax = sub_4b9660(&var_28, &var_20, arg1, &var_28, &var_18)
            goto label_4b9a30
        
        var_34_3 = "UI2GetScrollExtents"
        var_38_2 = 0x3d8a
    label_4b9ad0:
        sub_489550(eax, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\ui2.cpp", var_38_2, var_34_3)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t* edx
    eax = sub_4b97a0(&var_18, edx, arg1, &var_18)
    label_4b9a30:
    
    if (eax.b != 0)
        int32_t var_14
        int32_t var_c
        
        if (edi == 1)
            *(arg1 + 0xe4c) = sub_41f780(*(arg1 + 0xe4c), var_14, var_c)
            return 
        
        if (edi == 2)
            int32_t var_10
            *(arg1 + 0xe48) = sub_41f780(*(arg1 + 0xe48), var_18, var_10)
            return 
        
        if (edi == 3)
            *(arg1 + 0xe4c) = sub_41f780(*(arg1 + 0xe4c), var_14, var_c)
            return 
        
        var_34_3 = "UI2ClampScrollDelta"
        var_38_2 = 0x3dbb
        goto label_4b9ad0
    
    *(arg1 + 0xe48) = 0
    *(arg1 + 0xe4c) = 0
}
