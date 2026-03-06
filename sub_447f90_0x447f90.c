// 函数名称: sub_447f90
// 虚拟地址: 0x447f90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_447f90(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t result_1 = 0
    int32_t edi = 0
    void* ecx_1 = arg2 * 0x1bc + arg3
    void* var_644 = ecx_1
    int32_t var_524[0x46]
    
    if (arg4 s> 0)
        do
            int32_t eax_2 = sub_4450a0(arg3, arg2)
            var_524[edi] = eax_2
            
            if (eax_2 == 0xffffffff)
                break
            
            result_1 += 1
            
            if (*(arg3 + 0x10) == 0)
                void* eax_4 = *(arg3 + eax_2 * 0xc + 0x8c4)
                sub_444430(eax_4, 0x19, arg3, arg2, eax_2, *(eax_4 + 0xc), 0, 0)
            
            edi += 1
        while (edi s< arg4)
        
        ecx_1 = var_644
    
    int32_t result_2 = result_1
    int32_t result_3 = result_2
    int32_t var_63c[0x46]
    
    if (result_2 s> 0)
        if (*(ecx_1 + 0x1c4) s< *(ecx_1 + 0x1c0))
            sub_444560(&var_524, arg2, arg3, 8, &var_524, &result_1, &var_63c, &result_3)
        else
            (*(*(ecx_1 + 0x1c) + 4))(arg3, arg2, 8, &var_524, &result_1, &var_63c, &result_3, arg5, 0, 
                0)
            
            if (*(arg3 + 0xc3c) == 0)
                int32_t eax_10 = *(*(var_644 + 0x1c) + 0xc)
                
                if (eax_10 != 0)
                    eax_10(arg3, arg2)
                
                sub_444560(&var_524, arg2, arg3, 8, &var_524, &result_1, &var_63c, &result_3)
    
    int32_t ebx_1 = 0
    
    if (result_1 s> 0)
        do
            int32_t edi_1 = var_63c[ebx_1]
            int32_t edx_3 = edi_1 & 0xffffff7f
            int32_t edi_2 = edi_1 & 0x80
            int32_t ecx_6
            ecx_6.b = edi_2 == 0
            *(arg3 + var_524[ebx_1] * 0xc + 0x8cb) = edx_3.b
            int32_t eax_14
            eax_14.b = edx_3 != 0
            int32_t eax_16 = sub_445280(eax_14 + 3, var_524[ebx_1], arg3, arg2, (eax_14 + 3).b, ecx_6)
            
            if (*(arg3 + 0x10) == 0)
                sub_444430(eax_16, 0x1a, arg3, arg2, var_524[ebx_1], edx_3, edi_2, 0)
                int32_t ecx_9 = var_524[ebx_1]
                void* const eax_17 = &data_5d577c
                
                if (edi_2 == 0)
                    eax_17 = "bottom"
                
                void* const var_660_4 = eax_17
                int32_t var_664_5 = *(*(arg3 + ecx_9 * 0xc + 0x8c4) + (edx_3 << 2))
                int32_t var_668_6 = ecx_9
                int32_t var_66c_5 = *(var_644 + 0x18)
                void var_40c
                sub_41da20(&var_40c, edx_3, ecx_9, &var_40c, "%s takes tile %d %s on %s.\n")
                sub_4892e0(&var_40c)
            
            ebx_1 += 1
        while (ebx_1 s< result_1)
    
    if (result_1 s< arg4)
        sub_447d40(arg3)
        int32_t i_1 = *(arg3 + 0xc0c)
        int32_t ecx_11 = 0
        
        if (i_1 s<= 0)
            sub_444530("Couldn't find tile to return to bag!\n")
            noreturn
        
        void* esi_1 = arg3 + 0x8c9
        int32_t i
        
        do
            bool cond:3_1 = *esi_1 != 0
            int32_t eax_23 = ecx_11 + 1
            esi_1 += 0xc
            
            if (cond:3_1)
                eax_23 = ecx_11
            
            ecx_11 = eax_23
            i = i_1
            i_1 -= 1
        while (i != 1)
        
        if (ecx_11 == 0)
            sub_444530("Couldn't find tile to return to bag!\n")
            noreturn
    
    int32_t result = result_1
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
