// 函数名称: sub_44ada0
// 虚拟地址: 0x44ada0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_44ada0(int32_t arg1, int32_t arg2, void** arg3, uint32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edi = arg2
    void* var_870 = nullptr
    void* eax_2 = edi * 0x1bc
    int32_t var_884 = edi
    int32_t var_880 = 0
    void* ebx = eax_2 + arg3
    void* eax_4 = &arg3[(arg4 + 0xbb) * 3]
    int32_t var_86c[0xc8]
    void* eax_6 = sub_4453c0(&var_86c, arg2, arg3, &var_86c, 2)
    void* var_890 = eax_6
    int32_t i = 0
    char* edx = ebx + 0x25
    int32_t var_4ac[0x28]
    
    do
        if (*edx == 5)
            eax_6 = var_870
            var_870 += 1
            var_4ac[eax_6] = i
        
        i += 1
        edx = &edx[8]
    while (i s< 0x28)
    
    void* temp0 = var_870
    
    if (temp0 s< arg5)
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return 0
    
    if (temp0 s> arg5)
        if (*(ebx + 0x1c4) s< *(ebx + 0x1c0))
            eax_6 = sub_444560(&var_4ac, edi, arg3, 0xb, &var_4ac, &var_870, 0, nullptr)
        else
            eax_6 = (*(*(ebx + 0x1c) + 4))(arg3, edi, 0xb, &var_4ac, &var_870, 0, 0, arg5, 0, 0)
            
            if (arg3[0x30f] == 0)
                int32_t eax_12 = *(*(ebx + 0x1c) + 0xc)
                
                if (eax_12 != 0)
                    eax_12(arg3, edi)
                
                eax_6 = sub_444560(&var_4ac, edi, arg3, 0xb, &var_4ac, &var_870, 0, nullptr)
    
    int32_t ebx_1 = 0
    
    if (var_870 s> 0)
        do
            eax_6 = ebx
            int32_t edi_1 = var_4ac[ebx_1]
            void* ecx_8 = eax_6 + 0x18 + (edi_1 << 3)
            
            if (*(eax_6 + 0x18 + (edi_1 << 3) + 0x10) != 0x44)
            label_44af16:
                
                if (arg3[4] == 0)
                    sub_444430(eax_6, 0x1d, arg3, var_884, edi_1, 0, 0, 0)
                    eax_6 = eax_2 + (edi_1 << 3)
                    
                    if ((*(eax_6 + arg3 + 0x2b) & 2) != 0)
                        sub_444430(eax_6, 0x2d, arg3, var_884, edi_1, 0, 0, 0)
                
                eax_6.b = 2
            else
                eax_6 = *arg3
                
                if (*(eax_6 + 0x11) != 0 || *(eax_6 + 0x12) != 0)
                    goto label_44af16
                
                eax_6.b = 1
            
            ebx_1 += 1
            *(ecx_8 + 0xd) = eax_6.b
        while (ebx_1 s< var_870)
        
        edi = var_884
    
    if (arg3[4] == 0)
        sub_444430(sub_44ac90(eax_6, edi, arg3, arg4, 1, 0), 0x23, arg3, edi, arg4, 0, 0, 0)
    
    int32_t edx_3 = 0
    int32_t var_874 = 0
    
    if (var_890 s> 0)
        do
            var_868
            void* eax_25 = *(&var_868 + (edx_3 << 3))
            void* var_87c_2 = eax_25
            
            if ((*(eax_25 + 4) & 2) != 0)
                void* ebx_3 = ebx
                int32_t eax_16 = 0
                int32_t ecx_13 = 0
                var_880 = 0
                int32_t var_54c[0x28]
                
                if (var_870 s> 0)
                    do
                        int32_t edx_4 = var_4ac[ecx_13]
                        
                        if (*(ebx_3 + (edx_4 << 3) + 0x25) != 1)
                            var_54c[eax_16] = edx_4
                            eax_16 += 1
                            var_880 = eax_16
                        
                        ecx_13 += 1
                    while (ecx_13 s< var_870)
                    
                    edx_3 = var_874
                
                int32_t ecx_15 = *(var_87c_2 + 8)
                
                if (ecx_15 s< eax_16)
                    if (*(ebx_3 + 0x1c4) s< *(ebx_3 + 0x1c0))
                        sub_444560(&var_54c, edi, arg3, 0xc, &var_54c, &var_880, 0, nullptr)
                    else
                        (*(*(ebx_3 + 0x1c) + 4))(arg3, edi, 0xc, &var_54c, &var_880, 0, 0, ecx_15, 
                            var_86c[edx_3 * 2], 0)
                        
                        if (arg3[0x30f] == 0)
                            int32_t eax_21 = *(*(ebx_3 + 0x1c) + 0xc)
                            
                            if (eax_21 != 0)
                                eax_21(arg3, edi)
                            
                            sub_444560(&var_54c, edi, arg3, 0xc, &var_54c, &var_880, 0, nullptr)
                    
                    eax_16 = var_880
                
                int32_t edi_2 = 0
                
                if (eax_16 s> 0)
                    do
                        if (arg3[4] == 0)
                            int32_t ebx_4 = var_54c[edi_2]
                            sub_444430(eax_16, 0x32, arg3, var_884, ebx_4, 0, 0, 0)
                            void* eax_24 = eax_2 + (ebx_4 << 3)
                            
                            if ((*(eax_24 + arg3 + 0x2b) & 2) != 0)
                                sub_444430(eax_24, 0x2d, arg3, var_884, ebx_4, 0, 0, 0)
                            
                            ebx_3 = ebx
                        
                        eax_16 = var_54c[edi_2]
                        edi_2 += 1
                        *(ebx_3 + (eax_16 << 3) + 0x25) = 1
                    while (edi_2 s< var_880)
                
                eax_25 = var_87c_2
                edi = var_884
                
                if (arg3[4] == 0)
                    sub_444430(var_874, 0x12, arg3, edi, var_86c[var_874 * 2], 2, *(eax_25 + 8), arg4)
                    eax_25 = var_87c_2
                
                edx_3 = var_874
            
            if ((*(eax_25 + 4) & 1) != 0)
                int32_t ecx_20 = *(eax_25 + 8)
                int32_t ebx_5 = var_86c[edx_3 * 2]
                *(ebx + 0x18c) += ecx_20
                int32_t edx_6 = *(ebx + 0x18c)
                *(ebx + 0x1ac) += ecx_20
                
                if (edx_6 s> 0xa)
                    ecx_20 += 0xa - edx_6
                    *(ebx + 0x18c) = 0xa
                
                int32_t eax_30 = arg3[4]
                
                if (eax_30 == 0)
                    if (ecx_20 != 0)
                        sub_444430(eax_30, eax_30 + 0x25, arg3, edi, ebx_5, ecx_20, eax_30, eax_30)
                        eax_30 = arg3[4]
                    
                    if (eax_30 == 0)
                        sub_444430(var_87c_2, 0x12, arg3, edi, ebx_5, 1, *(var_87c_2 + 8), arg4)
                
                edx_3 = var_874
            
            edx_3 += 1
            var_874 = edx_3
        while (edx_3 s< var_890)
    
    int32_t edx_9 = sub_445590(&var_4ac, edi, arg3, arg4, &var_4ac, var_870)
    
    if (arg3[4] == 0)
        uint32_t ecx_24 = zx.d(*(eax_4 + 7))
        int32_t var_8a8_7 = *(*eax_4 + (ecx_24 << 2))
        int32_t var_8ac_8 = *(ebx + 0x18)
        void var_40c
        sub_41da20(&var_40c, edx_9, ecx_24, &var_40c, "%s develops %s.\n")
        sub_4892e0(&var_40c)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return 1
}
