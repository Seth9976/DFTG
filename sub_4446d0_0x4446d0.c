// 函数名称: sub_4446d0
// 虚拟地址: 0x4446d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4446d0(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (arg1[4] == 0)
        void* eax_2 = *arg1
        int32_t esi_1 = 0
        int32_t edx_1 = 0
        int128_t var_1c
        __builtin_memset(&var_1c, 0, 0x14)
        int32_t ebx_1 = *(eax_2 + 4)
        
        if (ebx_1 s> 0)
            void* ecx = &arg1[0x71]
            
            do
                if (*(ecx - 0x1a4) == 0)
                    eax_2 = *ecx
                    
                    if (eax_2 == *(ecx - 4))
                        *(&var_1c + (edx_1 << 2)) = 1
                        esi_1 += 1
                
                edx_1 += 1
                ecx += 0x1bc
            while (edx_1 s< ebx_1)
            
            if (esi_1 s> 0)
                int32_t i = 0
                
                if (ebx_1 s> 0)
                    void* ebx_2 = &arg1[0x70]
                    
                    do
                        if (*(ebx_2 - 0x1a0) == 0 && *(&var_1c + (i << 2)) == 0)
                            sub_444430(eax_2, 0x40, arg1, i, *(ebx_2 + 4), *ebx_2, 0, 0)
                        
                        eax_2 = *arg1
                        i += 1
                        ebx_2 += 0x1bc
                    while (i s< *(eax_2 + 4))
    
    void* result = *arg1
    int32_t i_1 = 0
    
    if (*(result + 4) s> 0)
        void* esi_2 = &arg1[0x71]
        
        do
            if (*(esi_2 - 0x1a4) == 0 && *esi_2 s>= *(esi_2 - 4))
                int32_t eax_5 = *(*(esi_2 - 0x1a8) + 0xc)
                
                if (eax_5 != 0)
                    eax_5(arg1, i_1)
            
            result = *arg1
            i_1 += 1
            esi_2 += 0x1bc
        while (i_1 s< *(result + 4))
    
    int32_t i_2 = 0
    
    if (*(result + 4) s> 0)
        void* esi_3 = &arg1[0x71]
        
        do
            if (*(esi_3 - 0x1a4) != 0 && *esi_3 s>= *(esi_3 - 4))
                int32_t eax_8 = *(*(esi_3 - 0x1a8) + 0xc)
                
                if (eax_8 != 0)
                    eax_8(arg1, i_2)
            
            result = *arg1
            i_2 += 1
            esi_3 += 0x1bc
        while (i_2 s< *(result + 4))
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
