// 函数名称: sub_571010
// 虚拟地址: 0x571010
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*sub_571010(void* arg1, void* arg2, int32_t arg3, void* arg4, int32_t arg5)
{
    // 第一条实际指令: if (arg5 == 1 && arg4 == 0)
    if (arg5 == 1 && arg4 == 0)
        return sub_579300(*(arg2 + 0x18), *(arg2 + 0x14), *(arg1 + 0x14) << 2)
    
    void* edi = arg1
    int32_t* ecx = *(edi + 0xc)
    
    if (*ecx f<= arg3)
        int32_t edx_1 = *(edi + 8)
        int32_t eax_10 = edx_1 << 2
        
        if (not(arg3 f>= *(eax_10 + ecx - 4)))
            eax_10 = sub_56dac0(ecx, edx_1, arg3) << 2
        
        void* eax = *(*(edi + 0x10) + eax_10 - 4)
        arg1 = eax
        
        if (eax != 0)
            int32_t i = 0
            
            if (*(edi + 0x14) s> 0)
                do
                    *(*(arg2 + 0x18) + (i << 2)) = *(*(arg2 + 0x14) + (*(eax + (i << 2)) << 2))
                    i += 1
                    eax = arg1
                while (i s< *(edi + 0x14))
            
            return eax
    else if (arg4 != 0 && arg4 != 1)
        return arg4
    
    return sub_579300(*(arg2 + 0x18), *(arg2 + 0x14), *(edi + 0x14) << 2)
}
