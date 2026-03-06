// 函数名称: sub_47df40
// 虚拟地址: 0x47df40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t*sub_47df40()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int128_t* result = __security_cookie ^ &__saved_ebp
    int128_t* result_1 = result
    
    while (data_6fadf0 != 0)
        void var_78
        int32_t edx
        result = sub_477120(&var_78, edx, 0x6d36f0, &var_78)
        int32_t* esi_1 = data_6cfe4c
        int32_t i = 0
        int128_t var_40 = *result
        int64_t var_30_1 = result[1].q
        
        do
            if (esi_1 == 0)
                sub_489550(result, &data_5b2591, "gClient", 
                    "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            result = *(&var_40 + (i << 3))
            
            if (result != 0)
                result <<= 4
                int32_t ecx_1 = *(result + &data_709178:4)
                int32_t temp0_1 = esi_1[1]
                
                if (ecx_1 s> temp0_1)
                    goto label_47e079
                
                if (ecx_1 s>= temp0_1)
                    result = *(result + &data_709178)
                    
                    if (result u>= *esi_1)
                        goto label_47e079
            
            i += 1
        while (i s< 3)
        
        int128_t* eax_3 = sub_477120(&var_78, i, 0x6d36f0, &var_78)
        int128_t var_60
        int128_t* esi_2 = &var_60
        int32_t i_2 = 3
        var_60 = *eax_3
        int64_t var_50_1 = eax_3[1].q
        uint32_t eax_4
        int32_t i_1
        
        do
            eax_4 = sub_477300(esi_2)
            esi_2 += 8
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        sub_47dd90(eax_4, data_6d36f8, data_6d36f4, data_6d36fc, data_6d3700, data_6d3704, data_6d3708, 
            i_2.b)
        int32_t eax_6 = data_6fadf0 - 1
        data_6fadf0 = eax_6
        result, edx = sub_579a90(0x6d36f0, 0x6d3710, eax_6 << 5)
    
    label_47e079:
    @__security_check_cookie@4(result_1 ^ &__saved_ebp)
    return result
}
