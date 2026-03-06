// 函数名称: sub_444ec0
// 虚拟地址: 0x444ec0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_444ec0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t esi = 0
    int32_t ecx = 0
    void* eax_2 = *arg1
    int128_t var_1c
    __builtin_memset(&var_1c, 0, 0x14)
    int32_t edx = *(eax_2 + 4)
    
    if (edx s> 0)
        void* ebx_1 = &arg1[0x5c]
        
        do
            int32_t eax_3
            
            for (int32_t i = *ebx_1; i != 0xffffffff; i = sx.d(*(&arg1[eax_3] + 0x8ca)))
                eax_3 = i * 3
                
                if (*(&arg1[eax_3] + 0x8cb) != 1)
                    *(&var_1c + (ecx << 2)) += 1
            
            int32_t eax_4 = *(&var_1c + (ecx << 2))
            
            if (eax_4 s<= esi)
                eax_4 = esi
            
            ecx += 1
            ebx_1 += 0x1bc
            esi = eax_4
        while (ecx s< edx)
    
    if (*(&var_1c + (arg2 << 2)) != esi)
    label_444f72:
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return 0
    
    int32_t eax_5 = 0
    
    if (edx s> 0)
        do
            if (eax_5 != arg2 && *(&var_1c + (eax_5 << 2)) == esi)
                goto label_444f72
            
            eax_5 += 1
        while (eax_5 s< edx)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return 1
}
