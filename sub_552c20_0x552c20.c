// 函数名称: sub_552c20
// 虚拟地址: 0x552c20
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_552c20()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t result = data_11e705c
    
    if (result != 0)
        int32_t ecx_1 = data_11e605c
        int128_t var_40
        char* ecx_2
        float xmm1_3
        void* eax_4
        
        if (result != 1)
            eax_4, ecx_2 = sub_54e110(ecx_1, nullptr)
            xmm1_3 = *(eax_4 + 0x1c) f+ *(eax_4 + 0x14)
        else
            int32_t eax_2
            eax_2, ecx_2 = sub_54e090(ecx_1)
            
            if (eax_2 == 0)
                float xmm0_1[0x4] = *sub_552a80(&var_40)
                xmm1_3 = _mm_shuffle_ps(xmm0_1, xmm0_1, 0x55) + _mm_shuffle_ps(xmm0_1, xmm0_1, 0xff)
            else
                int32_t* eax_3
                eax_3, ecx_2 = sub_4c8c70(data_11e6050)
                eax_4 = *eax_3
                xmm1_3 = *(eax_4 + 0x1c) f+ *(eax_4 + 0x14)
        int32_t i = 0
        var_40 = xmm1_3 * 0.5f
        
        if (data_11e705c s> 0)
            do
                void* eax_6
                int32_t edx_1
                eax_6, edx_1 = sub_54e110((&data_11e605c)[i], nullptr)
                float xmm2_1 = *(eax_6 + 0x14)
                float xmm3_1 = *(eax_6 + 0x1c)
                float xmm1_7 = var_40.d - (xmm2_1 + xmm3_1) * 0.5f
                float var_24 = *(eax_6 + 0x10) + 0f
                float var_20_1 = xmm2_1 + xmm1_7
                float var_18_1 = xmm3_1 + xmm1_7
                float var_1c_1 = *(eax_6 + 0x18) + 0f
                void var_50
                int128_t* eax_8
                eax_8, ecx_2 = sub_4be600(&var_50, edx_1, &var_24, &var_50)
                i += 1
                *(eax_6 + 0x10) = *eax_8
            while (i s< data_11e705c)
        
        ecx_2.b = 1
        result = sub_54dee0(ecx_2)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
