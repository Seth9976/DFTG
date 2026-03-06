// 函数名称: sub_551410
// 虚拟地址: 0x551410
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __fastcallsub_551410(char arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ebx
    ebx.b = arg1
    data_1267878 = 1
    data_126787c = 0
    float var_14
    sub_489e40(&var_14)
    float xmm1 = var_14
    data_1267880 = xmm1
    int32_t var_10
    data_1267884 = var_10
    data_1267890 = 0
    data_1267888 = xmm1
    data_126788c = var_10
    sub_489e40(&var_14)
    int32_t eax_2
    int32_t edx
    eax_2, edx = sub_550430(var_14, var_10)
    data_1267894 = eax_2
    float var_1c
    int128_t* eax_4
    int32_t edx_1
    eax_4, edx_1 = sub_5511b0(&var_1c, edx, 0, &var_1c)
    data_126789c = *eax_4
    int128_t* result = sub_5511b0(&var_1c, edx_1, 1, &var_1c)
    int32_t i = 0
    int128_t xmm0_2 = *result
    data_1267898 = ebx.b
    data_12678ac = xmm0_2
    
    if (data_11e705c s> 0)
        int32_t* esi_1 = &data_12678bc
        
        do
            result = sub_54e110((&data_11e605c)[i], nullptr)
            i += 1
            float xmm4_1 = result[1].d
            float xmm3_1 = *(result + 0x14)
            float xmm2_2 = *(result + 0x18) - xmm4_1
            float xmm1_2 = *(result + 0x1c) - xmm3_1
            var_1c = xmm2_2 f* *(result + 0x98) + xmm4_1
            float var_18_1 = *(result + 0x9c) * xmm1_2 + xmm3_1
            var_14 = result[0xa].d f* xmm2_2 + xmm4_1
            float var_10_1 = *(result + 0xa4) * xmm1_2 + xmm3_1
            *esi_1 = var_1c.o
            esi_1 = &esi_1[4]
        while (i s< data_11e705c)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
