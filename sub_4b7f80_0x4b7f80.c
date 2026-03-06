// 函数名称: sub_4b7f80
// 虚拟地址: 0x4b7f80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_4b7f80()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t* result = __security_cookie ^ &__saved_ebp
    int32_t* result_1 = result
    
    if (data_643654 != 0)
        uint32_t eax_1 = sub_4b6950()
        float xmm0_1 = *(data_114e818 + 0x2c)
        float var_30
        sub_498790(sub_4a7d60(data_642654) + 0xc, xmm0_1, &var_30)
        int32_t esi_1 = 1
        int32_t var_2c
        float var_28
        int32_t var_24
        
        if (data_643654 s> 1)
            while (true)
                void var_40
                int128_t* eax_4 = sub_498790(sub_4a7d60((&data_642654)[esi_1]) + 0xc, xmm0_1, &var_40)
                float xmm3_1 = var_30
                
                if (var_28 < xmm3_1 || var_24 f< var_2c)
                    sub_489550(eax_4, &data_5b2591, "RectIsNormalized(r0)", 
                        "d:\ax\trunk\ax2017\engine\rect.cpp", 0xdb, "RectUnion")
                    
                    if (IsDebuggerPresent() != 1)
                        sub_489700()
                        noreturn
                    
                    breakpoint
                
                float xmm2_3 = *eax_4
                float var_60_1
                
                var_60_1 = xmm2_3 <= xmm3_1 ? xmm2_3 : xmm3_1
                
                int32_t xmm2_4 = *(eax_4 + 8)
                
                if (var_28 f<= xmm2_4)
                    int32_t var_58_2 = xmm2_4
                else
                    float var_58_1 = var_28
                
                int32_t xmm2_5 = *(eax_4 + 4)
                
                if (xmm2_5 f<= var_2c)
                    int32_t var_5c_2 = xmm2_5
                else
                    int32_t var_5c_1 = var_2c
                
                int32_t xmm1_2 = *(eax_4 + 0xc)
                
                if (var_24 f<= xmm1_2)
                    int32_t var_54_2 = xmm1_2
                else
                    int32_t var_54_1 = var_24
                
                esi_1 += 1
                var_30.o = var_60_1.o
                
                if (esi_1 s>= data_643654)
                    break
                
                continue
        
        uint32_t (* eax_5)[0x4] = sub_4b7d80(&var_30, *(eax_1 + 0xff8))
        float xmm2_6 = var_30
        uint32_t esi_2 = (*eax_5)[0x3fe]
        
        if (var_28 < xmm2_6 || var_24 f< var_2c)
            sub_489550(eax_5, &data_5b2591, "RectIsNormalized(r)", 
                "d:\ax\trunk\ax2017\engine\rect.cpp", 0x127, "RectTopLeft")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t xmm1_4 = var_2c ^ (data_60cca0.o).d
        int32_t var_48 = xmm2_6 ^ (data_60cca0.o).d
        int32_t var_44_2 = xmm1_4
        sub_4b5ca0(esi_2, &var_48)
        data_642654 = esi_2
        data_643654 = 1
        sub_4a7e20(1)
        result = sub_49a5a0(&data_642624)
    
    @__security_check_cookie@4(result_1 ^ &__saved_ebp)
    return result
}
