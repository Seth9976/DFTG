// 函数名称: sub_4e9370
// 虚拟地址: 0x4e9370
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4e9370(int32_t arg1, int32_t* arg2, char* arg3, float* arg4, int32_t* arg5, int32_t* arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: float eax
    float eax
    float edx
    eax, edx = sub_4eaaa0(arg8)
    int32_t var_38 = arg7
    int32_t var_2c = 0
    int32_t var_20 = 0
    int32_t var_34 = 0
    int32_t var_28 = arg7
    int32_t var_1c = 0
    int32_t var_18 = 0x3f800000
    float var_30 = (arg4[2] - *arg4) * eax + *arg4
    float var_24 = (arg4[3] - arg4[1]) * edx + arg4[1]
    void var_5c
    void* var_6c = &var_5c
    return sub_4e8fc0(sub_41da40(&var_38, &data_5d3570, &var_5c, &var_38), &var_5c, arg3, arg2, *arg5, 
        *arg6, 0, arg8)
}
