// 函数名称: sub_501600
// 虚拟地址: 0x501600
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_501600(float* arg1)
{
    // 第一条实际指令: float* var_c = arg1
    float* var_c = arg1
    void* eax = arg1[0xb9]
    *(eax + 0x14) += 1
    sub_500320(arg1, arg1)
    int32_t eax_2 = sub_4981f0(*arg1[0xb9])
    int32_t* ebx_1 = arg1[0xb7] i* 0x168 + *eax_2
    int128_t* i_2 = sub_4f0c50(eax_2, ebx_1, &data_626728, 3)
    int128_t* i_1 = i_2
    
    if (i_1 s> 0)
        int128_t* i
        
        do
            i_2 = sub_501ec0(arg1)
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t result = sub_4f0c50(i_2, ebx_1, &data_626728, 4)
    arg1[0xbe] = _mm_cvtepi32_ps(zx.o(result)) / 100f
    return result
}
