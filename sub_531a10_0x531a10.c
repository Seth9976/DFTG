// 函数名称: sub_531a10
// 虚拟地址: 0x531a10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_531a10(int32_t arg1, int32_t arg2, void** arg3, void* arg4, int32_t arg5)
{
    // 第一条实际指令: void** var_8 = arg3
    void** var_8 = arg3
    int32_t edi = 1
    int32_t* eax
    int32_t edx
    eax, edx = sub_531b00(arg3, 0)
    int32_t* esi = eax
    
    if (esi != 0)
        float xmm0_1 = esi[0x12]
        xmm0_1 - -1f
        eax:1.b = (xmm0_1 == -1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, -1f) ? 1 : 0) << 2
            | (xmm0_1 < -1f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            eax, edx = sub_531d20(arg3, esi)
        else
            *arg3[2] = esi[2]
            void* esi_1 = arg3[9]
            sub_5304d0(esi_1)
            *(*(esi_1 + 4) + (*(esi_1 + 8) << 2)) = 1
            *(esi_1 + 8) += 1
            sub_5304d0(esi_1)
            *(*(esi_1 + 4) + (*(esi_1 + 8) << 2)) = esi
            *(esi_1 + 8) += 1
            int32_t* esi_2 = arg3[9]
            sub_5304d0(esi_2)
            *(esi_2[1] + (esi_2[2] << 2)) = 2
            esi_2[2] += 1
            sub_5304d0(esi_2)
            *(esi_2[1] + (esi_2[2] << 2)) = esi
            void* eax_6 = *esi_2
            esi_2[2] += 1
            *(eax_6 + 0x34) = 1
            eax, edx = sub_531d20(arg3, esi)
            esi = esi[2]
            edi = 0
    
    int32_t* result = sub_531b90(eax, edx, arg3, arg4, arg5, esi)
    sub_531920(result, 0, arg3, result, edi)
    sub_530590(arg3[9])
    return result
}
