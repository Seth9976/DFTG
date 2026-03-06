// 函数名称: sub_420280
// 虚拟地址: 0x420280
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct InputHitResult::HitResult::VTable** __fastcallsub_420280(struct InputHitResult::HitResult::VTable** arg1, int32_t* arg2)
{
    // 第一条实际指令: *arg1 = &HitResult::`vftable'{for `InputHitResult'}
    *arg1 = &HitResult::`vftable'{for `InputHitResult'}
    arg1[3] = &UI2HitResult::`vftable'{for `InputHitResult'}
    arg1[4] = 0
    arg1[1] = 0
    int32_t eax_1
    int32_t edx
    eax_1, edx = sub_4546a0(arg2)
    int32_t var_20 = eax_1
    int32_t edi = 5
    int32_t esi = 0xc8
    int32_t var_5c
    int32_t var_18_1
    int32_t var_14
    int32_t var_10
    int32_t var_c
    
    while (true)
        if (*(esi + &data_62b1ac) != 0)
            struct InputHitResult::UI2HitResult::VTable* var_64
            sub_49f910(eax_1, *(esi + &data_62b1b0), &var_64, arg2)
            int32_t var_54
            eax_1 = var_54
            var_18_1 = eax_1
            
            if (eax_1 != 0)
            label_420411:
                int32_t var_60
                var_c = var_60
                var_14 = var_5c
                int32_t var_58
                var_10 = var_58
                break
            
            if (edi != 5 && esi != 0x28)
                goto label_420411
        
        edi -= 1
        int32_t temp0_1 = esi
        esi -= 0x28
        
        if (temp0_1 - 0x28 s< 0)
            var_18_1 = edx
            var_10 = edx
            var_c = 0
            var_14 = edx
            break
    
    int32_t* var_2c = &data_62b090
    int32_t esi_1 = 0
    int32_t edi_1 = 0xffffffff
    int64_t var_3c = 0
    var_3c:4.d = 0xffffffff
    void* const i_1 = nullptr
    sub_41efb0(&data_62b090, &i_1)
    
    for (void* const i = i_1; i != 0xffffffff; i = i_1)
        if (*(i + 0xbf0) != 0)
            int64_t* eax_5 = sub_41ed90(i, arg2, i, &var_5c)
            
            if ((*eax_5):4.d != 0xffffffff && (edi_1 == 0xffffffff || eax_5[1].d u> esi_1))
                esi_1 = eax_5[1].d
                var_3c = *eax_5
                edi_1 = var_3c:4.d
        
        sub_41efb0(var_2c, &i_1)
    
    int32_t eax_6 = 0xffffffff
    
    if (var_20 != 0)
        eax_6 = edx
        arg1[1] = 1
        arg1[2] = var_20
    
    if (var_c != 0 && var_10 s> eax_6)
        arg1[1] = 2
        arg1[5] = var_14
        arg1[7] = var_18_1
        eax_6 = var_10
        arg1[4] = var_c
        arg1[6] = var_10
    
    if (edi_1 == 0xffffffff)
        return arg1
    
    if (esi_1 s<= eax_6)
        return arg1
    
    *(arg1 + 0x20) = var_3c
    arg1[1] = 3
    arg1[0xa] = esi_1
    return arg1
}
