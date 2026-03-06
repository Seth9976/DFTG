// 函数名称: sub_4b56f0
// 虚拟地址: 0x4b56f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4b56f0()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    sub_4892e0("dragginf true")
    data_6c4470 = 1
    data_6c4474 = 0
    int32_t var_20
    sub_489e40(&var_20)
    int32_t xmm1 = var_20
    data_6c4478 = xmm1
    int32_t var_1c
    data_6c447c = var_1c
    data_6c4488 = 0
    data_6c4480 = xmm1
    data_6c4484 = var_1c
    sub_489e40(&var_20)
    int32_t eax_2
    int32_t edx
    eax_2, edx = sub_4abb60(var_20, var_1c)
    data_6c448c = eax_2
    float var_34
    int128_t* eax_4
    int32_t edx_1
    eax_4, edx_1 = sub_4b53e0(&var_34, edx, 0, &var_34)
    data_6c4494 = *eax_4
    int128_t xmm0_2 = *sub_4b53e0(&var_34, edx_1, 1, &var_34)
    void* eax_7 = data_114e818
    data_6c4490 = 0
    data_6c44a4 = xmm0_2
    float xmm0_3 = *(eax_7 + 0x2c)
    int32_t i = 0
    int32_t i_1 = 0
    
    if (data_643654 s> 0)
        int32_t* ebx_1 = &data_6c44b4
        
        do
            void* eax_8 = sub_4a7d60((&data_642654)[i])
            void var_18
            int128_t* eax_9 = sub_4bc3a0(eax_8 + 0x54c, xmm0_3, &var_18)
            void var_44
            int128_t* eax_10 = sub_498790(eax_8 + 0xc, xmm0_3, &var_44)
            float xmm4_1 = *eax_10
            float xmm3_1 = *(eax_10 + 4)
            float xmm2_4 = *(eax_10 + 8) - xmm4_1
            float xmm1_2 = *(eax_10 + 0xc) - xmm3_1
            i = i_1 + 1
            i_1 = i
            var_34 = *eax_9 * xmm2_4 + xmm4_1
            float var_30_1 = *(eax_9 + 4) * xmm1_2 + xmm3_1
            float var_2c_1 = *(eax_9 + 8) * xmm2_4 + xmm4_1
            float var_28_1 = *(eax_9 + 0xc) * xmm1_2 + xmm3_1
            *ebx_1 = var_34.o
            ebx_1 = &ebx_1[4]
        while (i s< data_643654)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return i
}
