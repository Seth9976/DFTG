// 函数名称: sub_549bd0
// 虚拟地址: 0x549bd0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_549bd0()
{
    // 第一条实际指令: __alloca_probe(0x1014)
    __alloca_probe(0x1014)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t eax_2 = data_1152b94
    int32_t ebx = 0
    int32_t var_1010 = 0
    char var_100c[0xff0]
    
    if (eax_2 s> 0)
        while (true)
            int32_t* ecx_1 = data_1151b90
            
            if (ecx_1[1] == 0x20)
                void* eax_3
                int32_t ecx_2
                eax_3, ecx_2 = sub_4981f0(ecx_1)
                int32_t edi_1 = *(eax_3 + 8)
                int32_t var_18_1 = ecx_2
                int32_t* eax_4 = sub_4cf8e0(data_12bac14, 0)
                sub_518870(eax_4, eax_4, eax_3, edi_1)
                int32_t* ecx_5 = data_1151b90
                eax_2 = ebx << 2
                void* edi_3 = edi_1 * 0xe0 + *eax_3
                
                if (ecx_5[1] == 0x20)
                    void* edx_3 = *(eax_2 + &data_1151b94) * 0xe0 + *sub_4981f0(ecx_5)
                    int32_t eax_6 = *(edi_3 + 8)
                    __builtin_memcpy(edi_3, edx_3, 0xe0)
                    *(edi_3 + 8) = eax_6
                    sub_4ceb40(edi_3 + 8, *(edx_3 + 8))
                    ebx = var_1010 + 1
                    var_1010 = ebx
                    *(&var_100c + eax_2) = edi_1
                    eax_2 = data_1152b94
                    
                    if (ebx s>= eax_2)
                        break
                    
                    continue
            
            sub_489550(eax_2, &data_5b2591, "ptr->assetType == ASSET_TYPE_FAB", 
                "d:\ax\trunk\ax2017\engine\fabdef.cpp", 0xea, "FabDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    
    sub_579300(&data_1151b94, &var_100c, eax_2 << 2)
    sub_514e80(data_1151b90)
    int32_t result = sub_5475f0()
    int32_t entry_ebx
    @__security_check_cookie@4(entry_ebx ^ &__saved_ebp)
    return result
}
