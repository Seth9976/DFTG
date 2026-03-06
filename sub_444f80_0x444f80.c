// 函数名称: sub_444f80
// 虚拟地址: 0x444f80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_444f80(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edi = 0
    void* eax_2 = *arg1
    int32_t edx = 0
    int128_t var_1c
    __builtin_memset(&var_1c, 0, 0x14)
    int32_t ecx = *(eax_2 + 4)
    int32_t var_20 = ecx
    
    if (ecx s> 0)
        void* ebx_1 = &arg1[0x5c]
        
        do
            int32_t i = *ebx_1
            
            if (i != 0xffffffff)
                do
                    int32_t ecx_1 = i * 3
                    
                    if (*(&arg1[ecx_1] + 0x8cb) != 0 && *(arg1[ecx_1 + 0x231] + 0x18) == 3)
                        *(&var_1c + (edx << 2)) += 1
                    
                    i = sx.d(*(&arg1[i * 3] + 0x8ca))
                while (i != 0xffffffff)
                
                ecx = var_20
            
            int32_t eax_3 = *(&var_1c + (edx << 2))
            
            if (eax_3 s<= edi)
                eax_3 = edi
            
            edx += 1
            ebx_1 += 0x1bc
            edi = eax_3
        while (edx s< ecx)
    
    int32_t result = 0
    
    if (*(&var_1c + (arg2 << 2)) s>= edi)
        if (ecx s> 0)
            do
                if (result != arg2 && *(&var_1c + (result << 2)) == edi)
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return 1
                
                result += 1
            while (result s< ecx)
        
        result = 2
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
