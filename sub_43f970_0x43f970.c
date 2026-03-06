// 函数名称: sub_43f970
// 虚拟地址: 0x43f970
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_43f970(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ebx = 0
    void* ecx_1 = arg2 * 0x1bc + arg1
    char var_40c = *(arg1 + 0xc1c)
    int32_t i_5 = *(ecx_1 + 0x164)
    char var_40b = *(arg1 + 0xc20)
    char var_40a = *(arg1 + 0xc24)
    char var_409 = *(arg1 + 0xc28)
    char var_408 = *(arg1 + 0xc2c)
    char var_407 = *(arg1 + 0xc30)
    int128_t var_42c
    __builtin_memset(&var_42c, 0, 0x19)
    
    if (i_5 s> 0)
        void* edx = ecx_1 + 0x29
        int32_t i
        
        do
            if (*(edx - 4) == 4)
                uint32_t eax_8 = zx.d(*edx)
                *(&var_42c + (eax_8 << 2)) += 1
                
                if (*edx == 1 && *(edx - 5) == 6)
                    ebx += 1
            
            edx += 8
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    int32_t edx_1 = 0xd
    int32_t i_1 = *(ecx_1 + 0x170)
    char var_406 = var_42c:4.b
    char var_405 = var_42c:8.b
    char var_404 = var_42c:0xc.b
    int72_t var_41c
    char var_403 = var_41c.b
    char var_402 = var_41c:4.b
    char var_401 = var_41c:8.b
    char var_400 = ebx.b
    
    while (i_1 != 0xffffffff)
        (&var_40c)[edx_1] = i_1.b
        i_1 = sx.d(*(arg1 + i_1 * 0xc + 0x8ca))
        edx_1 += 1
    
    int32_t i_2 = *(ecx_1 + 0x174)
    
    while (i_2 != 0xffffffff)
        (&var_40c)[edx_1] = i_2.b
        i_2 = sx.d(*(arg1 + i_2 * 0xc + 0x8ca))
        edx_1 += 1
    
    int32_t i_3 = *(ecx_1 + 0x178)
    (&var_40c)[edx_1] = 0xff
    int32_t edx_2 = edx_1 + 1
    
    while (i_3 != 0xffffffff)
        (&var_40c)[edx_2] = i_3.b
        i_3 = sx.d(*(arg1 + i_3 * 0xc + 0x8ca))
        edx_2 += 1
    
    int64_t var_43c = 0
    int64_t var_434 = 0
    sub_4517a0(&var_434, edx_2, &var_40c, &var_434, &var_43c)
    int32_t esi_1 = var_434.d
    uint32_t ebx_1 = zx.d(esi_1.w)
    int32_t* i_4
    
    for (i_4 = *((ebx_1 << 2) + &data_130a660); i_4 != 0; i_4 = i_4[0x4d])
        if (*i_4 == esi_1 && i_4[1] == ecx_1)
            goto label_43fb99
    
    int32_t var_450_1 = 0x138
    i_4 = _malloc()
    int32_t ecx_3 = *((ebx_1 << 2) + &data_130a660)
    *((ebx_1 << 2) + &data_130a660) = i_4
    *i_4 = esi_1
    i_4[1] = ecx_1
    i_4[0x4d] = ecx_3
    i_4[2] = 0
    label_43fb99:
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return i_4
}
