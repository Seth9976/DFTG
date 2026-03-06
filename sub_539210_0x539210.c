// 函数名称: sub_539210
// 虚拟地址: 0x539210
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __thiscallsub_539210(int32_t* arg1, int32_t* arg2, void* arg3)
{
    // 第一条实际指令: int32_t* edi = arg2
    int32_t* edi = arg2
    int32_t* eax
    
    if (arg1[1] == 0)
        eax = (*(*arg1 + 8))()
    
    if (arg1[1] != 0 || arg1[1] != 0)
        int32_t* ecx = *edi
        arg2 = nullptr
        char const* const var_24_1
        int32_t var_20_1
        char const* const var_1c_1
        char* ecx_1
        
        if (ecx[1] != 0x15)
            var_1c_1 = "SoundGetDef"
            var_20_1 = 0x33a
            var_24_1 = "d:\ax\trunk\ax2017\engine\sound.cpp"
            ecx_1 = "assetPtr->assetType == ASSET_TYPE_SOUND"
        label_53942d:
            sub_489550(eax, &data_5b2591, ecx_1, var_24_1, var_20_1, var_1c_1)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        void* eax_2
        int32_t mxcsr_1
        int16_t x87control_1
        eax_2, mxcsr_1, x87control_1 = sub_4981f0(ecx)
        int32_t eax_3 = *(eax_2 + 0x28)
        void* eax_4
        int32_t* ebx_1
        
        if (eax_3 == 0)
            eax, mxcsr_1, x87control_1 = sub_538ed0(edi, *(arg3 + 0xc))
            ebx_1 = eax
            arg2 = ebx_1
            
            if (ebx_1 != 0)
                if (*(edi + 0x59) != 0)
                    goto label_53927f
                
                eax_4 = eax_2
                *(eax_4 + 0x28) = ebx_1
                ebx_1 = arg2
            label_53928d:
                edi[2] = ebx_1
                float xmm0_3 = _mm_cvtepi32_ps(zx.o(**(eax_4 + 0x38))) f* edi[0x13]
                float xmm0_4
                
                if (0 f<= xmm0_3)
                    xmm0_4 = xmm0_3 + 0.5f
                else
                    xmm0_4 = xmm0_3 - 0.5f
                
                float xmm0_6 = edi[0x14] f* 20000f
                float xmm0_7
                
                if (0 f<= xmm0_6)
                    xmm0_7 = xmm0_6 + 0.5f
                else
                    xmm0_7 = xmm0_6 - 0.5f
                
                float xmm1_1 = edi[0x12]
                int32_t esi_1
                
                if (not(0f < xmm1_1))
                    esi_1 = 0xffffd8f0
                else if (xmm1_1 < 1f)
                    float xmm0_12 = fconvert.s(__libm_sse2_log10_precise(mxcsr_1, x87control_1, 
                        _mm_cvtps_pd(1f / xmm1_1))) * -2000f
                    float xmm0_13
                    
                    if (0 f<= xmm0_12)
                        xmm0_13 = xmm0_12 + 0.5f
                    else
                        xmm0_13 = xmm0_12 - 0.5f
                    
                    esi_1 = int.d(xmm0_13)
                    
                    if (esi_1 s< 0xffffd8f0)
                        esi_1 = 0xffffd8f0
                    else if (esi_1 s> 0)
                        esi_1 = 0
                else
                    esi_1 = 0
                
                char edx_2 = *(edi + 0x59)
                int32_t edi_1
                
                if (edi[0x16].b != 0 || edx_2 != 0)
                    edi_1 = 1
                else
                    edi_1 = 0
                
                int32_t eax_10 = 0
                
                if (edx_2 == 0)
                    eax_10 = *(arg3 + 0xc)
                
                eax = (*(*ebx_1 + 0x34))(ebx_1, eax_10)
                
                if (eax == 0)
                    int32_t* eax_11 = arg2
                    eax = (*(*eax_11 + 0x44))(eax_11, int.d(xmm0_4))
                    
                    if (eax == 0)
                        int32_t* eax_12 = arg2
                        eax = (*(*eax_12 + 0x40))(eax_12, int.d(xmm0_7) - 0x2710)
                        
                        if (eax == 0)
                            int32_t* eax_13 = arg2
                            eax = (*(*eax_13 + 0x3c))(eax_13, esi_1)
                            
                            if (eax == 0)
                                int32_t* eax_14 = arg2
                                (*(*eax_14 + 0x30))(eax_14, 0, 0, edi_1)
                                int32_t eax_15
                                eax_15.b = 1
                                return eax_15
                            
                            var_1c_1 = "WindowsSoundInterface::SoundInterfacePlay"
                            var_20_1 = 0x1ca
                        else
                            var_1c_1 = "WindowsSoundInterface::SoundInterfacePlay"
                            var_20_1 = 0x1c7
                    else
                        var_1c_1 = "WindowsSoundInterface::SoundInterfacePlay"
                        var_20_1 = 0x1c4
                else
                    var_1c_1 = "WindowsSoundInterface::SoundInterfacePlay"
                    var_20_1 = 0x1c1
                
                ecx_1 = "hr == S_OK"
                var_24_1 = "d:\ax\trunk\ax2017\engine\windows\windowssound.cpp"
                goto label_53942d
        else
            int32_t* ecx_2 = arg1[1]
            
            if ((*(*ecx_2 + 0x14))(ecx_2, eax_3, &arg2) == 0)
                ebx_1 = arg2
            label_53927f:
                eax_4 = eax_2
                goto label_53928d
    
    eax.b = 0
    return eax
}
