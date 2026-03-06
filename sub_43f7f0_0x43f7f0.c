// 函数名称: sub_43f7f0
// 虚拟地址: 0x43f7f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_43f7f0(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t* arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_2 = arg2
    int32_t ebx = arg4
    int32_t edx = 0
    int32_t var_44 = ebx
    int32_t edi = *arg5
    int64_t var_58 = -0x4010000000000000
    int32_t var_48 = 0
    int32_t* var_4c = nullptr
    
    if (arg6 s< edi)
        int128_t var_38
        
        if (*(arg3 + 0x10) == 0 || eax_2 == *(arg3 + 0x14))
            int32_t ecx_1 = 0
            __builtin_memset(&var_38, 0, 0x2c)
            
            if (edi s> 0)
                do
                    int32_t eax_3 = *(var_44 + (ecx_1 << 2))
                    ecx_1 += 1
                    uint32_t eax_5 = zx.d(*(eax_2 * 0x1bc + (eax_3 << 3) + arg3 + 0x24))
                    *(&var_38 + (eax_5 << 2)) += 1
                while (ecx_1 s< edi)
                
                ebx = var_44
                edx = 0
            
            for (int32_t i = 0; i s< 0xb; )
                int32_t eax_6 = edx + 1
                
                if (*(&var_38 + (i << 2)) s<= 0)
                    eax_6 = edx
                
                i += 1
                edx = eax_6
        
        if ((*(arg3 + 0x10) != 0 && eax_2 != *(arg3 + 0x14)) || edx == 1)
            *arg5 = arg6
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return arg6
        
        int32_t* eax_8 = sub_43f210(arg3, eax_2)
        int32_t edx_3 = eax_2
        void* ecx_5 = arg3
        int32_t* var_74_1
        int32_t var_70_1
        int32_t* var_6c_1
        int32_t* eax_9
        
        if (eax_8[2] == 0)
            data_138a700 += 1
            int32_t** var_6c_2 = &var_4c
            sub_43f5d0(arg5, edx_3, ecx_5, ebx, *arg5, &var_38, 0, arg6, nullptr, &var_58, &var_48)
            int32_t ebx_2 = var_48
            void* ecx_6 = &eax_8[3]
            int32_t eax_11 = 1
            int32_t i_2 = 0xb
            int32_t i_1
            
            do
                if ((ebx_2 & eax_11) != 0)
                    *ecx_6 = 1
                
                ecx_6 += 4
                eax_11 = rol.d(eax_11, 1)
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
            eax_9 = var_4c
            ecx_5 = arg3
            ebx = var_44
            edx_3 = eax_2
            var_6c_1 = eax_8
            var_70_1 = arg6
            eax_8[0xe] = eax_9
            var_74_1 = arg5
            eax_8[2] = 1
        else
            eax_9 = arg5
            data_138a664 += 1
            var_6c_1 = eax_8
            var_70_1 = arg6
            var_74_1 = eax_9
        
        eax_2 = sub_43f6c0(eax_9, edx_3, ecx_5, ebx, var_74_1, var_70_1, var_6c_1)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_2
}
