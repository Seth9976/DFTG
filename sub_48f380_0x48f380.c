// 函数名称: sub_48f380
// 虚拟地址: 0x48f380
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_48f380()
{
    // 第一条实际指令: int32_t performanceCount_1
    int32_t performanceCount_1
    QueryPerformanceCounter(&performanceCount_1)
    int32_t* ecx = data_aca1f0
    *ecx = performanceCount_1
    int32_t var_44
    ecx[1] = var_44
    float xmm0 = sub_489bc0(ecx[2], ecx[3], performanceCount_1, var_44)
    int32_t* edi = data_aca1f0
    void* ebx = data_114e818
    float xmm1_1 = edi[4] f+ xmm0 * 0.00100000005f
    float performanceCount_3 = data_620b24
    edi[2] = *edi
    edi[3] = edi[1]
    edi[4] = xmm1_1
    int32_t eax_3
    eax_3.b = *(ebx + 0x24)
    float performanceCount = performanceCount_3
    
    if (eax_3.b != 0)
        performanceCount_3 = *(ebx + 0x34)
        performanceCount = performanceCount_3
    
    float performanceCount_4[0x2] = xmm1_1 / performanceCount_3
    void* esi = data_aca1ec
    performanceCount_1 = performanceCount_4
    int32_t result
    int32_t result_1
    char edx
    
    if (esi == 0 || *(esi + 0x27) == 0 || eax_3.b != 0 || data_1150e20 == 0 || data_1150e5c == eax_3.b)
        float xmm0_5
        result, xmm0_5 = sub_4827e0(performanceCount_4[0])
        float xmm0_6
        
        if (0 f<= xmm0_5)
            xmm0_6 = xmm0_5 + 0.5f
        else
            xmm0_6 = xmm0_5 - 0.5f
        
        edx = 0
        result_1 = int.d(xmm0_6)
        goto label_48f4bd
    
    if (not(0.75f f<= performanceCount_4))
        int32_t var_88
        var_88.q = _mm_cvtps_pd(performanceCount_4)
        sub_4892e0("update loop called to soon from vsync %f")
        edi = data_aca1f0
        ebx = data_114e818
        esi = data_aca1ec
        performanceCount_4 = performanceCount_1
    
    edx = 1
    result = sub_41e140(performanceCount_4[0])
    result_1 = result
    
    if (result_1 == 0)
        result_1 = result + 1
    label_48f4bd:
        
        if (result_1 == 0)
            if (esi != 0 && *(esi + 0x27) != result_1.b)
                return result
            
            return Sleep(1)
    
    int32_t result_2 = 1
    
    if (*(edi + 0x1b) == 0)
        result_2 = 0x64
    
    char eax_5 = edx
    
    if (result_1 s> result_2)
        eax_5 = 1
    
    if (result_1 s<= result_2)
        result_2 = result_1
    
    if (eax_5 == 0)
        edi[4] = edi[4] f- _mm_cvtepi32_ps(zx.o(result_2)) * performanceCount
    else
        edi[4] = 0
    
    if (*(ebx + 0x22) != 0)
        if (*(ebx + 0x23) == 0)
            return sub_4c5e90()
        
        *(ebx + 0x23) = 0
        result_2 = 1
    
    QueryPerformanceCounter(&performanceCount)
    sub_4c3590(result_2)
    int32_t* ecx_2 = data_aca1ec
    *(data_aca1f0 + 0x14) = result_2
    (*(*ecx_2 + 0x2c))()
    sub_4df430()
    QueryPerformanceCounter(&performanceCount_1)
    int32_t performanceCount_2 = performanceCount_1
    int32_t var_4c
    uint32_t eax_10
    char* ecx_4
    int32_t edx_1
    eax_10, ecx_4, edx_1 = sub_489b30(performanceCount_2 i- performanceCount, 
        sbb.d(var_44, var_4c, performanceCount_2 u< performanceCount))
    
    if (eax_10 s> 0x50)
        uint32_t var_84_5 = eax_10
        eax_10, ecx_4, edx_1 = sub_4892e0("slow frame %d ms")
    
    return sub_4e37c0(eax_10, edx_1, ecx_4, "Non-Update Loop")
}
