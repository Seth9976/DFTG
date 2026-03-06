// 函数名称: sub_4a8930
// 虚拟地址: 0x4a8930
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_4a8930(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_38_1
    int32_t var_38_1
    char const* const ecx
    
    if (arg3 != 0)
        uint32_t edx = zx.d(arg3.w)
        
        if (edx u< data_63e5ac)
            int32_t esi_1 = data_63e5a8
            arg1 = edx * 0x1418
            
            if (*(arg1 + esi_1 + 0x1410) == arg3)
                int32_t eax = 0
                void* ecx_2 = edx * 0x1418 + esi_1
                int32_t* esi_2 = *(ecx_2 + 0x1108)
                int32_t ecx_3 = *(ecx_2 + 0x110c)
                
                if (ecx_3 s> 0)
                    while (esi_2[1] != arg5 || *esi_2 != arg2)
                        eax += 1
                        esi_2 = &esi_2[7]
                        
                        if (eax s>= ecx_3)
                            goto label_4a89bd
                
                if (ecx_3 s<= 0 || esi_2 == 0)
                label_4a89bd:
                    
                    if (*(ecx_2 + 0x1110) == 0)
                        *(ecx_2 + 0x1108) = sub_498490(0x3800)
                        *(ecx_2 + 0x110c) = 0
                        *(ecx_2 + 0x1110) = 0x200
                    
                    esi_2 = sub_4bc680(ecx_2 + 0x1108)
                
                *esi_2 = arg2
                char* const edi_1 = &data_5b2591
                esi_2[1] = arg5
                esi_2[2] = 3
                char* ecx_6 = *arg4
                
                if (ecx_6 != 0)
                    edi_1 = ecx_6
                
                void* edx_3 = ecx_2 + 0xfdc
                char* const ecx_7 = edi_1
                void* ebx_1 = &ecx_7[1]
                int32_t eax_4
                
                do
                    eax_4.b = *ecx_7
                    ecx_7 = &ecx_7[1]
                while (eax_4.b != 0)
                char* ebx_2 = *edx_3
                int32_t eax_6 = *(edx_3 + 4)
                void* ecx_10 = eax_6 - ebx_2
                int32_t ecx_11 = *(edx_3 + 8)
                void* var_1c_1 = ecx_11 - ebx_2
                
                if (ecx_7 - ebx_1 + 1 s> eax_6 - ecx_11)
                    void* ebx_3 = ecx_7 - ebx_1 + 1
                    
                    if (ebx_3 << 2 s<= ecx_10 << 2)
                        ebx_3 = ecx_10
                    
                    int32_t ebx_4 = ebx_3 << 2
                    int32_t* eax_9 = sub_498440(ebx_4)
                    eax_9[3] += 1
                    
                    if (ebx_4 s<= 0x400 || eax_9[4] != 0xffffffff)
                        ebx_2 = *eax_9
                        char** ecx_16
                        
                        if (ebx_2 != 0)
                            ecx_16 = eax_9
                        else
                            sub_4982d0(eax_9)
                            ecx_16 = eax_9
                            ebx_2 = *ecx_16
                        
                        *ecx_16 = *ebx_2
                    else
                        ebx_2 = sub_4c2e40(ebx_4)
                    
                    if (ecx_10 != 0)
                        sub_579300(ebx_2, *(ecx_2 + 0xfdc), var_1c_1)
                        sub_4984f0(*(ecx_2 + 0xfdc), ecx_10)
                    
                    edx_3 = ecx_2 + 0xfdc
                    ecx_11 = var_1c_1 + ebx_2
                    *edx_3 = ebx_2
                    *(edx_3 + 4) = &ebx_2[ebx_4]
                    *(edx_3 + 8) = ecx_11
                
                void* ecx_19 = ecx_11 - edi_1
                void* eax_17
                
                do
                    eax_17.b = *edi_1
                    edi_1 = &edi_1[1]
                    *(ecx_19 + edi_1 - 1) = eax_17.b
                while (eax_17.b != 0)
                *(edx_3 + 8) += ecx_7 - ebx_1 + 1
                esi_2[3] = edx_3
                esi_2[4] = ecx_11 - ebx_2
                return sub_4a3580(ecx_2)
        
        char const* const var_34_3 = "DataArray<struct UI2>::DataArrayGet"
        var_38_1 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_34_1 = "DataArray<struct UI2>::DataArrayGet"
        var_38_1 = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_489550(arg1, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\dataarray.h", var_38_1, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
