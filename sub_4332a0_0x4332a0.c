// 函数名称: sub_4332a0
// 虚拟地址: 0x4332a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_4332a0(int32_t arg1)
{
    // 第一条实际指令: int32_t eax = data_126b8dc
    int32_t eax = data_126b8dc
    int32_t ecx_12
    
    if (eax != 0)
        if (eax == 1)
            int32_t performanceCount
            QueryPerformanceCounter(&performanceCount)
            
            if (data_126b8d4 != 0)
                while (sub_4d28a0() s< 0xa)
                    int32_t* ecx_3 = data_126b8cc
                    void* eax_9 = ecx_3[1]
                    data_126b8cc = eax_9
                    
                    if (eax_9 == 0)
                        data_126b8d0 = 0
                    else
                        *(eax_9 + 8) = 0
                    
                    int32_t* esi_3 = *ecx_3
                    data_126b8d4 -= 1
                    sub_4984f0(ecx_3, 0xc)
                    
                    if (*esi_3 == 0)
                        sub_4e6fe0(esi_3, 0)
                    
                    if (*esi_3 != 0 || *esi_3 != 0)
                        int32_t eax_10 = esi_3[1]
                        
                        if (eax_10 == 3)
                            sub_4d2a30(esi_3)
                        else if (eax_10 == 2)
                            sub_4dc140(esi_3)
                        else if (eax_10 == 4)
                            xcf5fba64::_Boost_call<class <lambda_340b4df2df88abd581e8b57743ba43b7> >::operator[]::_Boost_call<class <lambda_340b4df2df88abd581e8b57743ba43b7> >(
                                esi_3, 0)
                            xcf5fba64::_Boost_call<class <lambda_340b4df2df88abd581e8b57743ba43b7> >::operator[]::_Boost_call<class <lambda_340b4df2df88abd581e8b57743ba43b7> >(
                                esi_3, 1)
                        else if (eax_10 == 0x15)
                            (*(*data_114e834 + 0x38))(esi_3)
                        else if (eax_10 == 0x1d)
                            sub_50c290(esi_3)
                    
                    int32_t performanceCount_1
                    QueryPerformanceCounter(&performanceCount_1)
                    int32_t performanceCount_2 = performanceCount_1
                    int32_t var_14
                    int32_t var_c
                    
                    if (sub_489b30(performanceCount_2 - performanceCount, 
                            sbb.d(var_c, var_14, performanceCount_2 u< performanceCount)) s> 0xa)
                        break
                    
                    if (data_126b8d4 == 0)
                        goto label_433484
            
            if (data_126b8d4 == 0 || data_126b8d4 == 0)
            label_433484:
                
                if (sub_4d28a0() == 0)
                    data_126b8dc = 3
                    sub_4361a0(0)
                    data_62b1a8 = 2
                    data_62b220 = 3
            
            eax = 2
            data_126b8dc = 2
        
        ecx_12 = data_126b8d8
    else
        int32_t* eax_1 = data_114e844
        int32_t i = 0
        int32_t* eax_2 = *eax_1
        int32_t i_2
        
        do
            i_2 = *eax_2
            
            if (i_2 != 0)
                break
            
            i += 1
            eax_2 = &eax_2[1]
        while (i u<= eax_1[1])
        
        int32_t i_1 = i_2
        
        if (i_2 != 0)
            do
                void* edi_1 = sub_4d1e40(&i_1)[1]
                
                if (*(edi_1 + 4) != 4)
                    void*** eax_4 = sub_498440(0xc)
                    eax_4[3] += 1
                    void** ecx_1 = *eax_4
                    
                    if (ecx_1 == 0)
                        sub_4982d0(eax_4)
                        ecx_1 = *eax_4
                    
                    *eax_4 = *ecx_1
                    ecx_1[2] = 0
                    *ecx_1 = edi_1
                    ecx_1[1] = 0
                    ecx_1[2] = data_126b8d0
                    void* eax_7 = data_126b8d0
                    
                    if (eax_7 == 0)
                        data_126b8cc = ecx_1
                    else
                        *(eax_7 + 4) = ecx_1
                    
                    data_126b8d4 += 1
                    data_126b8d0 = ecx_1
            while (i_1 != 0)
        
        ecx_12 = data_126b8d4
        eax = 1
        data_126b8d8 = ecx_12
        data_126b8dc = 1
    
    int32_t xmm2
    
    if (ecx_12 != 0)
        xmm2 = 1f - _mm_cvtepi32_ps(zx.o(data_126b8d4)) / _mm_cvtepi32_ps(zx.o(ecx_12))
    else
        xmm2 = (zx.o(0)).d
    
    if (eax == 3)
        xmm2 = 0x3f800000
    
    int32_t var_2c_6 = ecx_12
    return sub_4a84f0(arg1, xmm2)
}
