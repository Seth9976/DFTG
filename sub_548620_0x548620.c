// 函数名称: sub_548620
// 虚拟地址: 0x548620
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t*sub_548620(int128_t* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (data_1152b94 == 0)
        __builtin_memcpy(arg1, 
            "\x00\x00\x80\xbf\x00\x00\x80\xbf\x00\x00\x80\xbf\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
            0x18)
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return arg1
    
    int32_t* ecx_2 = data_1151b90
    
    if (ecx_2[1] != 0x20)
        sub_489550(eax_1, &data_5b2591, "ptr->assetType == ASSET_TYPE_FAB", 
            "d:\ax\trunk\ax2017\engine\fabdef.cpp", 0xea, "FabDefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t eax_3 = sub_4981f0(ecx_2)
    int128_t var_80
    int128_t* eax_5 = sub_4eb240(&var_80, 0x5f9570, data_1151b94 * 0xe0 + *eax_3, &var_80)
    int32_t i = 1
    int128_t var_50 = *eax_5
    int128_t var_40 = eax_5[1]
    int64_t var_30 = eax_5[2].q
    int128_t var_70
    
    if (data_1152b94 s> 1)
        do
            void var_a8
            int128_t* eax_7 = sub_4eb240(&var_a8, 0x5f9570, (&data_1151b94)[i] * 0xe0 + *eax_3, &var_a8)
            var_80 = *eax_7
            var_70 = eax_7[1]
            int64_t var_60_1 = eax_7[2].q
            int128_t* eax_9 = sub_548330(&var_a8, &var_80, &var_50, &var_a8)
            i += 1
            var_50 = *eax_9
            int128_t var_40_1 = eax_9[1]
            int64_t var_30_1 = eax_9[2].q
        while (i s< data_1152b94)
    
    int128_t* eax_10 = sub_4f0710(&var_70)
    *arg1 = *eax_10
    arg1[1].q = eax_10[1].q
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return arg1
}
