// 函数名称: sub_4f9fc0
// 虚拟地址: 0x4f9fc0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint8_t __convention("regparm")sub_4f9fc0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_a8
    uint8_t result = sub_4fb930(&var_a8, arg2, arg3, &var_a8)
    int32_t* var_60
    int32_t* ecx = var_60
    
    if (ecx != 0)
        void* esi_2 = arg2 * 0x68 + arg3[0x1a]
        int32_t* eax_3 = *(esi_2 + 0x58)
        
        if (eax_3 != 0)
            ecx = eax_3
        
        void var_68
        char* var_ac = sub_4be900(&var_68, &arg3[0x18])
        char* eax_5 = sub_4be900(esi_2 + 0x60, &var_ac)
        char ebx_1 = -1
        char var_64
        uint32_t edx_3 = zx.d(var_64) + zx.d(arg3[0x19].b)
        char* var_b8 = eax_5
        char eax_6 = -1
        char edx_4 = -1
        
        if (edx_3 u< 0xff)
            eax_6 = edx_3.b
        
        var_ac.b = eax_6
        char var_63
        uint32_t ecx_6 = zx.d(*(arg3 + 0x65)) + zx.d(var_63)
        
        if (ecx_6 u< 0xff)
            edx_4 = ecx_6.b
        
        char var_62
        uint32_t ecx_8 = zx.d(*(arg3 + 0x66)) + zx.d(var_62)
        var_ac:1.b = edx_4
        char edx_5 = -1
        
        if (ecx_8 u< 0xff)
            edx_5 = ecx_8.b
        
        char var_61
        uint32_t ecx_10 = zx.d(*(arg3 + 0x67)) + zx.d(var_61)
        var_ac:2.b = edx_5
        
        if (ecx_10 u< 0xff)
            ebx_1 = ecx_10.b
        
        var_ac:3.b = ebx_1
        char* var_b4_1 = var_ac
        result = (eax_5 u>> 0x18).b
        
        if (result != 0)
            float var_a0
            float var_2c = var_a0
            float xmm3_1 = *arg4
            int32_t var_9c
            int32_t var_28_1 = var_9c
            void* ecx_11 = data_114e814
            int32_t var_90
            int32_t var_24_1 = var_90
            int32_t var_8c
            int32_t var_20_1 = var_8c
            int32_t var_80
            int32_t var_1c_1 = var_80
            int32_t var_7c
            int32_t var_18_1 = var_7c
            float xmm5_1 = *(ecx_11 + 0x20)
            float xmm4_1 = *(ecx_11 + 0x24)
            int32_t var_70
            int32_t var_14_1 = var_70
            int32_t var_6c
            int32_t var_10_1 = var_6c
            float var_78
            float var_74
            float xmm7_4 = xmm3_1 * var_78 + arg4[1] f* var_74 f+ arg4[3]
            float xmm6_4 = arg4[4] f* var_78 + arg4[5] f* var_74 f+ arg4[7]
            float var_a4
            float xmm0_16 = arg4[5] f* var_a4
            float var_4c = xmm3_1 * var_a8 + arg4[1] f* var_a4 f+ arg4[3] + xmm5_1
            float var_48_1 = arg4[4] f* var_a8 + xmm0_16 f+ arg4[7] + xmm4_1
            float var_98
            float var_94
            float var_44_1 = xmm3_1 * var_98 + arg4[1] f* var_94 f+ arg4[3] + xmm5_1
            float var_40_1 = arg4[4] f* var_98 + arg4[5] f* var_94 f+ arg4[7] + xmm4_1
            float var_88
            float var_84
            float var_3c_1 = xmm3_1 * var_88 + arg4[1] f* var_84 f+ arg4[3] + xmm5_1
            float var_38_1 = arg4[4] f* var_88 + arg4[5] f* var_84 f+ arg4[7] + xmm4_1
            float var_34_1 = xmm5_1 + xmm7_4
            float var_30_1 = xmm4_1 + xmm6_4
            result = sub_4bef10(&var_b8, &var_2c, &var_4c, &var_b8, 0, ecx, arg3[0x21])
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
