// 函数名称: sub_44d930
// 虚拟地址: 0x44d930
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_44d930(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: void var_33c
    void var_33c
    int32_t eax_1 = __security_cookie ^ &var_33c
    void* eax_2 = arg2 * 0x1bc
    void* ecx = eax_2 + arg1
    *(eax_2 + arg1 + 0x1a8) = 0
    *(eax_2 + arg1 + 0x1ac) = 0
    int32_t var_330[0xc9]
    int32_t eax_4 = sub_4453c0(&var_330, arg2, arg1, &var_330, 4)
    int32_t ebx = 0
    
    if (eax_4 s> 0)
        do
            var_32c
            
            if ((*(*(&var_32c + (ebx << 3)) + 4) & 0x20) != 0 && sub_444ec0(arg1, arg2) != 0)
                int32_t ecx_4 = *(*(&var_32c + (ebx << 3)) + 8)
                *(ecx + 0x18c) += ecx_4
                *(ecx + 0x1ac) += ecx_4
                
                if (*(ecx + 0x18c) s> 0xa)
                    ecx_4 += 0xa - *(ecx + 0x18c)
                    *(ecx + 0x18c) = 0xa
                
                int32_t eax_8 = arg1[4]
                
                if (eax_8 == 0)
                    if (ecx_4 != 0)
                        sub_444430(eax_8, eax_8 + 0x25, arg1, arg2, var_330[ebx * 2], ecx_4, eax_8, 
                            eax_8)
                        eax_8 = arg1[4]
                    
                    if (eax_8 == 0)
                        void* eax_9 = *(&var_32c + (ebx << 3))
                        sub_444430(eax_9, 0x15, arg1, arg2, var_330[ebx * 2], 0x20, *(eax_9 + 8), eax_8)
            
            ebx += 1
        while (ebx s< eax_4)
    
    int32_t i
    
    do
        i = sub_44d2d0(arg1, arg2)
    while (i != 0)
    int32_t result = sub_4448d0(sub_44d510(arg1, arg2), arg2, arg1, 4)
    @__security_check_cookie@4(eax_1 ^ &var_33c)
    return result
}
