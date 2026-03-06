// 函数名称: sub_49ad10
// 虚拟地址: 0x49ad10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __convention("regparm")sub_49ad10(int32_t arg1, int32_t* arg2, int32_t* arg3, int128_t* arg4, int32_t arg5)
{
    // 第一条实际指令: if (arg3[1] != 0x22)
    if (arg3[1] != 0x22)
        sub_489550(arg1, &data_5b2591, "ptr->assetType == ASSET_TYPE_UI2", 
            "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x8ae, "UI2DefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t* eax = sub_4981f0(arg3)
    
    if (eax[2] == 0)
        *arg4 = data_5d2760
        return arg4
    
    int32_t* eax_2 = *eax
    int32_t* eax_3 = sub_4f0e70(eax_2, eax_2, &data_6218dc, data_126cc78, 0x68)
    int32_t* var_8 = eax_3
    void* edx_2
    
    if (eax_3 != 0)
        int32_t edi_1 = eax_3[2]
        int32_t i = edi_1 - 1
        int32_t i_1 = i
        
        if (edi_1 - 1 s>= 0)
            int32_t ecx_1 = i << 5
            int32_t var_10_1 = ecx_1
            
            do
                int32_t* ebx_2 = *eax_3 + ecx_1
                int32_t ecx_2 = 0
                int32_t edx_1 = ebx_2[2]
                
                if (edx_1 s> 0)
                    int32_t* eax_4 = ebx_2[4]
                    
                    do
                        if (*eax_4 == 0x75)
                            int32_t esi_1 = 0
                            
                            if (arg5 s> 0)
                                int32_t* edi_2 = arg2
                                
                                do
                                    eax_3 = (*(**edi_2 + 4))(*ebx_2)
                                    
                                    if (eax_3.b != 0)
                                        edx_2 = &ebx_2[2]
                                        goto label_49ae00
                                    
                                    esi_1 += 1
                                    edi_2 = &edi_2[7]
                                while (esi_1 s< arg5)
                                
                                i = i_1
                            
                            break
                        
                        ecx_2 += 1
                        eax_4 = &eax_4[4]
                    while (ecx_2 s< edx_1)
                    
                    eax_3 = var_8
                
                i -= 1
                ecx_1 = var_10_1 - 0x20
                i_1 = i
                var_10_1 = ecx_1
            while (i s>= 0)
    
    edx_2 = eax_2
    label_49ae00:
    *arg4 = *sub_4f0e70(eax_3, edx_2, &data_6218dc, data_12baca4, 0x75)
    return arg4
}
