// 函数名称: sub_445bb0
// 虚拟地址: 0x445bb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_445bb0(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t* arg5, int32_t arg6, int32_t* arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_4 = arg2 * 0x1bc + arg3
    int32_t eax_6 = *(arg3 + 8) * 0x41c64e6d + 0x3039
    *(arg3 + 8) = eax_6
    uint32_t ecx_2 = *(arg3 + 0xc0c)
    int32_t* eax_10 = arg4 + (mods.dp.d(sx.q(eax_6 u>> 0x10 & 0x7fff), *arg5) << 2)
    int32_t edx_2 = *eax_10 * 0x68
    *(arg3 + 0xc0c) = ecx_2 + 1
    void* edx_3 = edx_2 + &data_6d00e8
    void* var_424 = edx_3
    void* ecx_4 = arg3 + (ecx_2 + 0xbb) * 0xc
    *ecx_4 = edx_3
    *(ecx_4 + 7) = (*(edx_3 + 0x1c) u>> 5).b & 1
    char* eax_15 = *(edx_3 + 8)
    char* var_430 = eax_15
    
    if (eax_15 != 0)
        int32_t edi_1 = 0
        void* esi_1 = &data_6d00ec
        
        while (true)
            char* ecx_5 = *(esi_1 - 4)
            int32_t eax_17
            
            while (true)
                edx_3.b = *eax_15
                char temp2_1 = *ecx_5
                bool c_1 = edx_3.b u< temp2_1
                
                if (edx_3.b == temp2_1)
                    if (edx_3.b == 0)
                        eax_17 = 0
                        break
                    
                    edx_3.b = eax_15[1]
                    char temp3_1 = ecx_5[1]
                    c_1 = edx_3.b u< temp3_1
                    
                    if (edx_3.b == temp3_1)
                        eax_15 = &eax_15[2]
                        ecx_5 = &ecx_5[2]
                        
                        if (edx_3.b != 0)
                            continue
                        
                        eax_17 = 0
                        break
                
                eax_17 = sbb.d(eax_15, eax_15, c_1) | 1
                break
            
            if (eax_17 != 0)
                char* eax_18 = *esi_1
                void* ecx_7 = *(var_424 + 8)
                int32_t eax_20
                
                while (true)
                    edx_3.b = *ecx_7
                    char temp4_1 = *eax_18
                    bool c_2 = edx_3.b u< temp4_1
                    
                    if (edx_3.b == temp4_1)
                        if (edx_3.b == 0)
                            eax_20 = 0
                            break
                        
                        edx_3.b = *(ecx_7 + 1)
                        char temp5_1 = eax_18[1]
                        c_2 = edx_3.b u< temp5_1
                        
                        if (edx_3.b == temp5_1)
                            ecx_7 += 2
                            eax_18 = &eax_18[2]
                            
                            if (edx_3.b != 0)
                                continue
                            
                            eax_20 = 0
                            break
                    
                    eax_20 = sbb.d(eax_18, eax_18, c_2) | 1
                    break
                
                if (eax_20 != 0)
                    eax_15 = var_430
                    esi_1 += 0x68
                    edi_1 += 1
                    
                    if (esi_1 s< &data_6d36f4)
                        continue
                    
                    edx_3 = var_424
                    break
            
            edx_3 = edi_1 * 0x68 + &data_6d00e8
            break
        
        if (edi_1 == 0x85)
            int32_t var_448_3 = *(edx_3 + 8)
            sub_444530("Couldn't find other side %s\n")
            noreturn
    
    uint32_t esi_2 = *(arg3 + 0xc0c)
    *(arg3 + 0xc0c) = esi_2 + 1
    void** ecx_8 = arg3 + (esi_2 + 0xbb) * 0xc
    *ecx_8 = edx_3
    uint32_t eax_24
    eax_24.b = not.b((*(edx_3 + 0x1c) u>> 4).b)
    eax_24.b &= 1
    *(ecx_8 + 7) = eax_24.b
    
    if (*(arg3 + 0x10) == 0)
        void* eax_26 = *(arg3 + ecx_2 * 0xc + 0x8c4)
        eax_24 = sub_444430(eax_26, 7, arg3, arg2, ecx_2, esi_2, *(eax_26 + 0xc), *(edx_3 + 0xc))
    
    sub_445590(sub_445590(eax_24, arg2, arg3, ecx_2, nullptr, 0), arg2, arg3, esi_2, nullptr, 0)
    *arg5 -= 1
    *eax_10 = *(arg4 + (*arg5 << 2))
    int32_t eax_32 = *(arg3 + 8) * 0x41c64e6d + 0x3039
    *(arg3 + 8) = eax_32
    uint32_t ebx_1 = *(arg3 + 0xc0c)
    int32_t temp1_1 = mods.dp.d(sx.q(eax_32 u>> 0x10 & 0x7fff), *arg7)
    int32_t esi_3 = *(arg6 + (temp1_1 << 2)) * 0x68
    *(arg3 + 0xc0c) = ebx_1 + 1
    uint32_t eax_39 = ebx_1 * 3
    *(arg3 + (eax_39 << 2) + 0x8c4) = esi_3 + &data_6d00e8
    *(arg3 + (eax_39 << 2) + 0x8cb) = 1
    void* edi_3
    
    if (*(arg3 + 0x10) != 0)
        edi_3 = arg3
    else
        sub_444430(eax_39, 6, arg3, arg2, ebx_1, *(esi_3 + 0x6d00f4), 0, 0)
        edi_3 = arg3
        int32_t var_448_2 = *(esi_3 + &data_6d00ec)
        int32_t var_44c_2 = *(*(edi_3 + (esi_2 + 0xbb) * 0xc) + 4)
        uint32_t ecx_17 = zx.d(*(edi_3 + ecx_2 * 0xc + 0x8cb))
        int32_t var_450_5 = *(*(edi_3 + ecx_2 * 0xc + 0x8c4) + (ecx_17 << 2))
        int32_t var_454_3 = *(eax_4 + 0x18)
        void var_40c
        sub_41da20(&var_40c, ecx_2, ecx_17, &var_40c, "%s starts with %s / %s and %s.\n")
        eax_39 = sub_4892e0(&var_40c)
    
    sub_445590(eax_39, arg2, edi_3, ebx_1, nullptr, 0)
    void* eax_47 = eax_4
    
    if ((*(esi_3 + &data_6d0104) & 8) != 0)
        *(eax_47 + 0x18c) = 8
        
        if (*(edi_3 + 0x10) == 0)
            sub_444430(eax_47, 8, edi_3, arg2, 8, 0, 0, 0)
            eax_47 = eax_4
    
    if ((*(esi_3 + &data_6d0104) & 4) != 0)
        *(eax_47 + 0x18c) = 2
        
        if (*(edi_3 + 0x10) == 0)
            sub_444430(eax_47, 8, edi_3, arg2, 2, 0, 0, 0)
    
    *arg7 -= 1
    int32_t result = *(arg6 + (*arg7 << 2))
    *(arg6 + (temp1_1 << 2)) = result
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
