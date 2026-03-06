// 函数名称: sub_445280
// 虚拟地址: 0x445280
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_445280(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, char arg5, int32_t arg6)
{
    // 第一条实际指令: void* esi = arg3 + (arg2 + 0xbb) * 0xc
    void* esi = arg3 + (arg2 + 0xbb) * 0xc
    int32_t eax_1
    eax_1.b = *(esi + 4)
    
    if (eax_1.b != 0xff)
        int32_t* edx = arg3 + ((sx.d(eax_1.b) * 0x6f + zx.d(*(esi + 5)) + 0x5a) << 2)
        int32_t ecx_2 = *edx
        
        if (ecx_2 != arg2)
            edx.b = *(arg3 + ecx_2 * 0xc + 0x8ca)
            
            while (sx.d(edx.b) != arg2)
                ecx_2 = sx.d(edx.b)
                edx.b = *(arg3 + ecx_2 * 0xc + 0x8ca)
            
            eax_1.b = *(esi + 6)
            *(arg3 + ecx_2 * 0xc + 0x8ca) = eax_1.b
        else
            *edx = sx.d(*(esi + 6))
        
        *(esi + 6) = 0xff
    
    int32_t edx_1 = arg4
    
    if (edx_1 == 0xffffffff)
        eax_1.b = arg5
        *(esi + 5) = eax_1.b
        *(esi + 4) = edx_1.b
        return eax_1
    
    int32_t eax_9 = edx_1 * 0x1bc + 0x18 + arg3
    arg4 = eax_9
    
    if (arg6 != 0)
        int32_t ecx_5 = *(eax_9 + (arg5.d << 2) + 0x150)
        
        if (ecx_5 != 0xffffffff)
            int32_t eax_10
            eax_10.b = *(arg3 + ecx_5 * 0xc + 0x8ca)
            
            while (eax_10.b != 0xff)
                ecx_5 = sx.d(eax_10.b)
                eax_10.b = *(arg3 + ecx_5 * 0xc + 0x8ca)
            
            *(arg3 + ecx_5 * 0xc + 0x8ca) = arg2.b
            *(esi + 6) = 0xff
            *(esi + 5) = arg5
            *(esi + 4) = edx_1.b
            return arg5
    
    int32_t ecx_6 = arg5.d
    eax_9.b = *(eax_9 + (ecx_6 << 2) + 0x150)
    *(esi + 6) = eax_9.b
    *(arg4 + (ecx_6 << 2) + 0x150) = arg2
    *(esi + 5) = ecx_6.b
    *(esi + 4) = edx_1.b
    return arg4
}
