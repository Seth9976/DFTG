// 函数名称: sub_4448d0
// 虚拟地址: 0x4448d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4448d0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    bool cond:0 = *(arg3 + 0x10) != 0
    int32_t result = arg4
    int32_t result_1 = result
    
    if (not(cond:0))
        void* ebx_2 = arg2 * 0x1bc + arg3
        
        if (*(ebx_2 + 0x1ac) != 0 || *(ebx_2 + 0x1a8) != 0)
            int32_t var_824_1 = *(ebx_2 + 0x18)
            void var_810
            void* ecx
            void* edx
            ecx, edx = sub_41da20(&var_810, arg2, arg3, &var_810, "%s earns ")
            int32_t eax_3 = *(ebx_2 + 0x1ac)
            void var_410
            
            if (eax_3 != 0)
                int32_t var_824_2 = eax_3
                sub_41da20(&var_410, edx, 0xffffffff, &var_410, "%d credits")
                void* edx_1 = &var_410
                char i
                
                do
                    i = *edx_1
                    edx_1 += 1
                while (i != 0)
                
                edx = edx_1 - &var_410
                void* edi_1 = &result_1:3
                
                do
                    i = *(edi_1 + 1)
                    edi_1 += 1
                while (i != 0)
                
                int32_t esi_1
                int32_t edi_2
                edi_2, esi_1 = __builtin_memcpy(edi_1, &var_410, edx u>> 2 << 2)
                bool cond:1_1 = *(ebx_2 + 0x1a8) == 0
                ecx = __builtin_memcpy(edi_2, esi_1, edx & 3)
                
                if (not(cond:1_1))
                    ecx = &result_1:3
                    
                    do
                        i = *(ecx + 1)
                        ecx += 1
                    while (i != 0)
                    
                    __builtin_strcpy(ecx, " and ")
            
            int32_t eax_5 = *(ebx_2 + 0x1a8)
            
            if (eax_5 != 0)
                int32_t var_824_3 = eax_5
                sub_41da20(&var_410, edx, ecx, &var_410, "%d VP")
                void* edx_2 = &var_410
                char i_1
                
                do
                    i_1 = *edx_2
                    edx_2 += 1
                while (i_1 != 0)
                
                edx = edx_2 - &var_410
                void* edi_3 = &result_1:3
                
                do
                    i_1 = *(edi_3 + 1)
                    edi_3 += 1
                while (i_1 != 0)
                
                int32_t esi_2
                int32_t edi_4
                edi_4, esi_2 = __builtin_memcpy(edi_3, &var_410, edx u>> 2 << 2)
                ecx = __builtin_memcpy(edi_4, esi_2, edx & 3)
            
            int32_t var_824_4 = (&data_5b501c)[result_1]
            sub_41da20(&var_410, edx, ecx, &var_410, " from %s phase.\n")
            void* edx_3 = &var_410
            char i_2
            
            do
                i_2 = *edx_3
                edx_3 += 1
            while (i_2 != 0)
            
            int32_t edx_4 = edx_3 - &var_410
            void* edi_5 = &result_1:3
            
            do
                i_2 = *(edi_5 + 1)
                edi_5 += 1
            while (i_2 != 0)
            
            int32_t esi_3
            int32_t edi_6
            edi_6, esi_3 = __builtin_memcpy(edi_5, &var_410, edx_4 u>> 2 << 2)
            __builtin_memcpy(edi_6, esi_3, edx_4 & 3)
            result = sub_4892e0(&var_810)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
