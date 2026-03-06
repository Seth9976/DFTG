// 函数名称: sub_551620
// 虚拟地址: 0x551620
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

LRESULTsub_551620()
{
    // 第一条实际指令: __alloca_probe(0x1014)
    __alloca_probe(0x1014)
    int32_t __saved_ebp
    int32_t i = __security_cookie ^ &__saved_ebp
    int32_t i_2 = i
    int32_t i_1 = 0
    char var_100c[0xff0]
    
    if (data_11e705c s> 0)
        do
            int32_t* ecx_1 = data_11e6050
            
            if (ecx_1[1] != 0x1e)
                sub_489550(i, &data_5b2591, "ptr->assetType == ASSET_TYPE_UI", 
                    "d:\ax\trunk\ax2017\engine\uidef.cpp", 0x126, "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            void* eax_1
            int32_t ecx_2
            eax_1, ecx_2 = sub_4981f0(ecx_1)
            int32_t esi_1 = *(eax_1 + 8)
            int32_t var_18_1 = ecx_2
            int32_t* eax_2 = sub_4cf8e0(data_12baaec, 0)
            sub_518870(eax_2, eax_2, eax_1, esi_1)
            int32_t* ebx_1 = esi_1 * 0x178 + *eax_1
            void* eax_3 = sub_54e110((&data_11e605c)[i_1], nullptr)
            int32_t ebx_2 = ebx_1[2]
            int32_t edx_2 = ebx_1[0x38]
            int32_t eax_4 = ebx_1[0x48]
            __builtin_memcpy(ebx_1, eax_3, 0x178)
            ebx_1[2] = ebx_2
            ebx_1[0x48] = eax_4
            ebx_1[0x38] = edx_2
            sub_4ceb40(&ebx_1[2], *(eax_3 + 8))
            sub_4ceb40(&ebx_1[0x48], *(eax_3 + 0x120))
            sub_4ceb40(&ebx_1[0x38], *(eax_3 + 0xe0))
            int32_t ecx_11 = data_11e6058
            data_11e6058 = ecx_11 + 1
            *ebx_1 = ecx_11
            *(&var_100c + (i_1 << 2)) = ecx_11
            i = i_1 + 1
            i_1 = i
        while (i s< data_11e705c)
    
    int32_t eax_7 = sub_551590()
    sub_579300(&data_11e605c, &var_100c, data_11e705c << 2)
    sub_553be0(eax_7 + 1)
    sub_5151c0(data_11e6050)
    LRESULT result = sub_5539f0()
    int32_t entry_ebx
    @__security_check_cookie@4(entry_ebx ^ &__saved_ebp)
    return result
}
