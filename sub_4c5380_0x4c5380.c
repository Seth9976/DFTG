// 函数名称: sub_4c5380
// 虚拟地址: 0x4c5380
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4c5380(int32_t arg1, void* arg2, int32_t arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t eax_1 = *arg4
    int32_t ecx
    
    if (eax_1 s>= 0x23)
        eax_1 -= 0x23
        ecx = 0x6f10
        
        if (*(arg2 + 8) != 0)
            ecx = 0x8544
    else
        ecx = 0xc
    
    int32_t edx = 0
    __builtin_memcpy(arg3, eax_1 * 0x32c + arg2 + ecx, 0x32c)
    
    if (arg5 s> 0)
        do
            int32_t eax_3 = arg4[edx]
            int32_t ecx_1
            
            if (eax_3 s>= 0x23)
                eax_3 -= 0x23
                ecx_1 = 0x6f10
                
                if (*(arg2 + 8) != 0)
                    ecx_1 = 0x8544
            else
                ecx_1 = 0xc
            
            void* esi_6 = eax_3 * 0x32c + arg2 + ecx_1
            
            if (*(esi_6 + 4) != 0 || *(esi_6 + 0x327) != 0 || *(esi_6 + 0x326) != 0
                    || *(esi_6 + 0x325) != 0)
                __builtin_memcpy(arg3, esi_6, 0x32c)
            
            edx += 1
        while (edx s< arg5)
    
    return arg3
}
