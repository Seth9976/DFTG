// 函数名称: sub_4ea040
// 虚拟地址: 0x4ea040
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_4ea040(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (*(arg1 + 0x1c) == 0)
    if (*(arg1 + 0x1c) == 0)
        return 
    
    char* eax_1 = sub_4be900(arg1 + 0x34, arg1 + 0x44)
    char* eax_2 = sub_4be900(arg1 + 0x38, arg1 + 0x44)
    char* eax_3 = sub_4be900(arg1 + 0x3c, arg1 + 0x44)
    int32_t var_28_1 = 0
    char* const ebx_1 = &data_5b2591
    int32_t var_1c_1 = 0
    int32_t var_30_1 = 0
    char* eax_5 = *arg2
    int32_t var_18_1 = 0
    
    if (eax_5 != 0)
        ebx_1 = eax_5
    
    int32_t var_14_1 = 0x3f800000
    float xmm0_2 = *(arg1 + 0x20) f+ *(arg1 + 0xc)
    int32_t xmm1_1 = *(arg1 + 0x28)
    int32_t var_34 = xmm1_1
    int32_t var_24_1 = xmm1_1
    float var_2c_1 = xmm0_2
    float var_20_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x30))) f+ *(arg1 + 0x24)
    void var_58
    sub_41da40(arg1, arg1 + 0x50, &var_58, &var_34)
    void* var_6c_1 = &var_58
    sub_4e8fc0(arg1, &var_58, ebx_1, *(arg1 + 0x2c), eax_1, eax_2, eax_3, 1)
}
