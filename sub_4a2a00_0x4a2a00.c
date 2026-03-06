// 函数名称: sub_4a2a00
// 虚拟地址: 0x4a2a00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4a2a00(int32_t arg1, int32_t** arg2, uint32_t arg3, float arg4 @ xmm2, char arg5)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float xmm1 = *(data_114e818 + 0x2c)
    int32_t eax_3 = *(arg3 + 0xfec)
    
    if (eax_3 != 2)
        float var_100
        char* var_fc
        
        if (eax_3 == 3 && *(arg3 + 0xf8c) != 0)
            *(arg3 + 0x1164) = *(arg3 + 0xf68)
            *(arg3 + 0x1188) = *(arg3 + 0xe88)
            *(arg3 + 0x117c) = *(arg3 + 0xf9c)
            float eax_7
            char* edx
            eax_7, edx = sub_426dd0(arg3 + 0x10a0)
            var_100 = eax_7
            *(arg3 + 0x1144) = var_100
            var_fc = edx
            *(arg3 + 0x1148) = var_fc
            float xmm0_4 = *(arg3 + 0x10ac) f- *(arg3 + 0x10a4)
            *(arg3 + 0x114c) = *(arg3 + 0x10a8) f- *(arg3 + 0x10a0)
            *(arg3 + 0x1150) = xmm0_4
            float xmm0_5 = *(arg3 + 0x1020)
            float xmm1_4 = *(arg3 + 0xf70) * xmm0_5
            var_fc = *(arg3 + 0xf74) * xmm0_5
            float xmm0_6 = sub_4bc5c0(arg3 + 0x2dc, xmm1)
            float xmm0_7 = xmm0_6 f* var_fc
            *(arg3 + 0x1154) = xmm0_6 * xmm1_4
            *(arg3 + 0x1158) = xmm0_7
            *(arg3 + 0x116c) = sub_4bc5c0(arg3 + 0x2dc, xmm1) f* *(arg3 + 0x1020)
            *(arg3 + 0x1168) = *sub_4bc2f0(arg3 + 0x78c, xmm1, &var_fc)
            int32_t var_f4_1 = 0xff000000
            *(arg3 + 0x1170) = *sub_4bc2f0(arg3 + 0x81c, xmm1, &var_fc)
            *(arg3 + 0x1178) = var_f4_1
            *(arg3 + 0x1174) = 0xffffffff
            sub_508c90(arg3 + 0x1134, 0, &data_5d27f8)
        
        int32_t i = 0
        
        if (*(arg3 + 0x1190) s> 0)
            do
                char* eax_13 = sub_49e970(arg3, i)
                var_fc = eax_13
                void var_f0
                int128_t* eax_14 = sub_4a25a0(eax_13, eax_13, arg3, &var_f0)
                uint32_t ecx_8 = var_fc
                
                if (*(ecx_8 + 0x112c) != arg3)
                    sub_489550(eax_14, &data_5b2591, "child.parent == &ui", 
                        "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x18dd, "UI2UpdateChildren")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                int32_t var_144_5 = 0
                sub_4a4280(&var_f0, arg3, ecx_8, arg4, &var_f0)
                i += 1
            while (i s< *(arg3 + 0x1190))
        
        if (*(arg3 + 0xf50) != 0 && *(arg3 + 0xf58) != 0)
            float xmm0_10[0x4] = *(arg3 + 0x10a0)
            float xmm1_13 = _mm_shuffle_ps(xmm0_10, xmm0_10, 0xaa) f- xmm0_10
            float xmm2_4 =
                _mm_shuffle_ps(xmm0_10, xmm0_10, 0xff) - _mm_shuffle_ps(xmm0_10, xmm0_10, 0x55)
            var_100 = xmm1_13
            var_fc = xmm2_4
            float eax_16
            float edx_4
            eax_16, edx_4 = sub_4a0ae0(arg3)
            int32_t eax_17 = *(arg3 + 0xf50)
            float var_f8 = eax_16
            float var_f4_2 = edx_4
            
            if (eax_17 != 1)
                sub_489550(eax_17 - 1, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\ui2.cpp", 
                    0x16b0, "UI2TextUpdateScrollbar")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            if (not(edx_4 <= xmm2_4))
                var_100 = xmm1_13 - 0f
            
            sub_4a0c80(&var_f8, &var_100, arg3, arg4, &var_f8)
    else
        sub_4a1710(eax_3, arg2, arg3, arg4, arg5)
    
    int32_t result = sub_49e910(arg3)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
