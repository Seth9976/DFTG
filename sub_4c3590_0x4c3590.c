// 函数名称: sub_4c3590
// 虚拟地址: 0x4c3590
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4c3590(int32_t arg1)
{
    // 第一条实际指令: int32_t edi = arg1
    int32_t edi = arg1
    int32_t var_8 = arg1
    char const* const var_28
    int32_t var_24
    char const* const var_20_1
    void* eax
    char* ecx
    
    if (edi s<= 0)
        var_20_1 = "GameUpdateSimulation"
        var_24 = 0x70
        var_28 = "d:\ax\trunk\ax2017\engine\game.cpp"
        ecx = "updateTicks > 0"
    label_4c3842:
        sub_489550(eax, &data_5b2591, ecx, var_28, var_24, var_20_1)
        
        if (IsDebuggerPresent() != 1)
            sub_489700()
            noreturn
        
        breakpoint
    
    int32_t var_c_1 = 1
    sub_48d300()
    void* eax_1 = data_114e840
    
    if (*(eax_1 + 0x10) == 1)
        float xmm0_2 = data_620d84 f+ *(eax_1 + 0x14)
        *(eax_1 + 0x14) = xmm0_2
        
        if (not(xmm0_2 < 0.75f))
            *(eax_1 + 0x10) = 0
    
    int32_t* esi_1 = nullptr
    
    while (true)
        int32_t* eax_3
        
        if (esi_1 != 0)
            eax_3 = esi_1[8]
        else
            eax_3 = *data_114e840
        
        if (eax_3 == 0)
            break
        
        while (true)
            esi_1 = eax_3
            eax_3 = eax_3[8]
            
            if (esi_1[7].b == 0)
                if (sub_4cfed0(esi_1) == 0)
                    break
                
                esi_1[7].b = 1
                break
            
            if (eax_3 == 0)
                goto label_4c3613
    
    label_4c3613:
    int32_t* ecx_1 = data_aca1ec
    float xmm1_1 = data_620b24
    int32_t esi_2
    
    if (*(ecx_1 + 0x25) == 0)
        esi_2 = 1
    else
        esi_2 = edi
        float xmm0_4 = _mm_cvtepi32_ps(zx.o(edi))
        edi = 1
        var_c_1 = esi_2
        var_8 = 1
        data_620d84 = xmm0_4 * xmm1_1
    
    int32_t ebx_1 = 0
    
    if (edi s> 0)
        while (true)
            void* eax_5 = data_114e818
            *(eax_5 + 0x28) = *(eax_5 + 0x28) f+ data_620d84
            (*(*ecx_1 + 0x1c))()
            void* eax_7 = data_114e818
            
            if (*(eax_7 + 0x21) == 0)
                int32_t* ecx_4 = data_aca1ec
                *(eax_7 + 0x2c) = *(eax_7 + 0x2c) f+ data_620d84
                eax = (*(*ecx_4 + 0x20))(esi_2)
                void* edi_1 = data_114e818
                
                if (edi_1 == 0)
                label_4c382c:
                    var_20_1 = "GetGameData"
                    var_24 = 0x45
                    ecx = "gpGameData"
                    var_28 = "d:\ax\trunk\ax2017\engine\game.h"
                    goto label_4c3842
                
                int32_t* edi_2 = *(edi_1 + 0xc)
                void* esi_3 = nullptr
                
                while (true)
                    void* ecx_5
                    
                    if (esi_3 != 0)
                        ecx_5 = *edi_2
                        esi_3 += 0x94
                    else
                        esi_3 = *edi_2
                        ecx_5 = esi_3
                    
                    void* eax_10 = edi_2[1] * 0x94 + ecx_5
                    
                    if (esi_3 u>= eax_10)
                        break
                    
                    while (true)
                        if ((*(esi_3 + 0x90) & 0xffff0000) != 0)
                            if (*(esi_3 + 0x7c) == 0)
                                break
                            
                            sub_4f97b0(esi_3)
                            break
                        
                        esi_3 += 0x94
                        
                        if (esi_3 u>= eax_10)
                            goto label_4c3716
                
            label_4c3716:
                eax = data_114e818
                
                if (eax == 0)
                    goto label_4c382c
                
                int32_t* edi_3 = *(eax + 0x10)
                void* esi_4 = nullptr
                
                while (true)
                    void* ecx_6
                    
                    if (esi_4 != 0)
                        ecx_6 = *edi_3
                        esi_4 += 0x7c
                    else
                        esi_4 = *edi_3
                        ecx_6 = esi_4
                    
                    void* eax_12 = edi_3[1] * 0x7c + ecx_6
                    
                    if (esi_4 u>= eax_12)
                        break
                    
                    while (true)
                        if ((*(esi_4 + 0x78) & 0xffff0000) != 0)
                            if (*(esi_4 + 0x76) == 0)
                                break
                            
                            sub_4fd2f0(esi_4)
                            break
                        
                        esi_4 += 0x7c
                        
                        if (esi_4 u>= eax_12)
                            goto label_4c3760
                
            label_4c3760:
                int32_t* ecx_8 = data_1150edc
                
                if (ecx_8 != 0)
                    (*(*ecx_8 + 8))()
                
                int32_t* ecx_9 = data_aca0dc
                
                if (ecx_9 != 0)
                    void* esi_5 = nullptr
                    
                    while (true)
                        void* edx_1
                        
                        if (esi_5 != 0)
                            edx_1 = *ecx_9
                            esi_5 += 0x4c
                        else
                            esi_5 = *ecx_9
                            edx_1 = esi_5
                        
                        void* eax_15 = ecx_9[1] * 0x4c + edx_1
                        
                        if (esi_5 u>= eax_15)
                            break
                        
                        while (true)
                            if ((*(esi_5 + 0x48) & 0xffff0000) != 0)
                                if (*(esi_5 + 0x24) != 4)
                                    break
                                
                                sub_48cf80(esi_5)
                                ecx_9 = data_aca0dc
                                break
                            
                            esi_5 += 0x4c
                            
                            if (esi_5 u>= eax_15)
                                goto label_4c37c6
                
            label_4c37c6:
                sub_4d0500(data_114e840)
                edi = var_8
            else
                sub_4d0500(data_114e840)
            
            ecx_1 = data_aca1ec
            ebx_1 += 1
            
            if (ebx_1 s>= edi)
                xmm1_1 = data_620b24
                break
            
            esi_2 = var_c_1
    
    if (*(ecx_1 + 0x25) != 0)
        data_620d84 = xmm1_1
    
    int32_t* result = sub_4d0500(data_114e840)
    
    if (data_114e834 == 0)
        return result
    
    return sub_4c5e90()
}
