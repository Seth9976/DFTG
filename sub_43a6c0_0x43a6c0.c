// 函数名称: sub_43a6c0
// 虚拟地址: 0x43a6c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_43a6c0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: __builtin_memcpy(arg3, arg2, 0xc4c)
    __builtin_memcpy(arg3, arg2, 0xc4c)
    int32_t i = 0
    
    if (*(*arg3 + 4) s> 0)
        void* edx = &arg3[0x71]
        
        do
            int32_t ecx_1 = *(edx - 4)
            edx += 0x1bc
            *(edx - 0x1bc) = ecx_1
            i += 1
        while (i s< *(*arg3 + 4))
    
    if (arg3[4] == 0)
        int32_t i_1 = 0
        arg3[5] = arg4
        void* ecx_4 = *arg3
        arg3[4] = 1
        arg3[2] = 1
        
        if (*(ecx_4 + 4) s> 0)
            int32_t esi_1 = 0x12bae10
            void* edx_1 = &arg3[0x6f]
            
            do
                *edx_1 = esi_1
                edx_1 += 0x1bc
                *(edx_1 - 0x35c) = &data_621478
                i_1 += 1
                esi_1 += 0xea60
            while (i_1 s< *(*arg3 + 4))
        
        arg3[0x312] = 0
    
    return arg3
}
