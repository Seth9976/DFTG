// 函数名称: sub_52b5f0
// 虚拟地址: 0x52b5f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_52b5f0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    int32_t* edi = arg1
    char* eax = *edi
    int32_t ebx
    ebx.b = *eax
    int32_t esi_1 = zx.d(ebx.b) & 0x7f
    *edi = &eax[1]
    
    if (ebx.b s< 0)
        arg1.b = eax[1]
        *edi = &eax[2]
        esi_1 |= (zx.d(arg1.b) & 0x7f) << 7
        
        if (arg1.b s< 0)
            arg1.b = eax[2]
            *edi = &eax[3]
            esi_1 |= (zx.d(arg1.b) & 0x7f) << 0xe
            
            if (arg1.b s< 0)
                arg1.b = eax[3]
                *edi = &eax[4]
                esi_1 |= (zx.d(arg1.b) & 0x7f) << 0x15
                
                if (arg1.b s< 0)
                    arg1.b = eax[4]
                    *edi = &eax[5]
                    esi_1 |= zx.d(arg1.b) << 0x1c
    
    int32_t ecx = data_1151ae0
    int32_t eax_13 = esi_1 * 2
    int32_t result
    
    if (ecx == 0)
        int32_t var_18_1 = eax_13
        result = _malloc()
    else
        result = ecx(eax_13, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeletonbinary.c", 0x271)
    
    int32_t edx_4 = 0
    *arg2 = esi_1
    
    if (esi_1 s> 0)
        do
            char* eax_15 = *edi
            uint16_t ecx_1 = zx.w(*eax_15)
            *edi = &eax_15[1]
            void* eax_16
            eax_16.w = ecx_1
            eax_16.w <<= 8
            *(result + (edx_4 << 1)) = eax_16.w
            char* eax_17 = *edi
            uint16_t ecx_2 = zx.w(*eax_17)
            *edi = &eax_17[1]
            void* eax_18
            eax_18.w = ecx_2
            *(result + (edx_4 << 1)) |= eax_18.w
            edx_4 += 1
        while (edx_4 s< esi_1)
    
    return result
}
