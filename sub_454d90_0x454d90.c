// 函数名称: sub_454d90
// 虚拟地址: 0x454d90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_454d90(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, char arg5)
{
    // 第一条实际指令: int32_t* result_3
    int32_t* result_3
    int32_t eax_1 = __security_cookie ^ &result_3
    int32_t edx = 0
    int32_t ecx = *(arg3 + (arg2 << 2) + 0x29c)
    int32_t var_1bc = 0
    int32_t* result_2
    
    if (ecx == 0)
        result_2 = nullptr
    else
        result_2 = sub_452cc0(ecx)
        edx = 0
    
    result_3 = result_2
    int32_t* result_4
    int32_t* var_1cc = &result_4
    result_4 = result_2
    int32_t* result = Unlock(var_1cc)
    int32_t* result_5 = result_4
    
    if (result_2 != result_5)
        while (true)
            int32_t var_1d0_3
            char const* const var_1cc_4
            char* ecx_7
            
            if (result_2 == 0)
                var_1cc_4 = "Tiles::TileIt::operator *"
                var_1d0_3 = 0x2ac
                ecx_7 = &data_5e3f90
            else if (result_2 == arg4)
            label_454ef4:
                int32_t ecx_4 = result_2[0x10]
                edx += 1
                var_1bc = edx
                
                if (ecx_4 != 0)
                    result = sub_452cc0(ecx_4)
                    edx = var_1bc
                    result_2 = result
                else
                    result_2 = nullptr
                
                result_3 = result_2
                
                if (result_2 == result_5)
                    break
                
                continue
            else
                result = sub_454d20(arg2)
                
                if (result_2[0x5d] == 0 || data_632810 != 1)
                    goto label_454e92
                
                if (result_2[0xd] != 3)
                    void var_110
                    int128_t* eax_5 = sub_458af0(&var_110, edx, &result_2[0x76], &var_110)
                    int128_t xmm0_1 = *eax_5
                    int128_t xmm1_1 = eax_5[1]
                    int128_t xmm2_1 = eax_5[2]
                    int128_t xmm3_1 = eax_5[3]
                    int128_t xmm4_1 = eax_5[4]
                    int128_t xmm5_1 = eax_5[5]
                    result_2[0x5d] = 0
                    *(result_2 + 0x178) = xmm0_1
                    *(result_2 + 0x188) = xmm1_1
                    *(result_2 + 0x198) = xmm2_1
                    *(result_2 + 0x1a8) = xmm3_1
                    *(result_2 + 0x1b8) = xmm4_1
                    *(result_2 + 0x1c8) = xmm5_1
                label_454e92:
                    int32_t var_1a4_1 = 0
                    uint32_t var_19c[0x4][0x4]
                    _memset(&var_19c, 0, 0x8c)
                    int32_t var_1b0 = result_2[0xf]
                    int32_t var_1a8_1 = var_1bc
                    int32_t eax_8 = result_2[0xe]
                    int32_t* result_1 = result
                    int32_t var_1a0_1 = eax_8
                    void var_b0
                    __builtin_memcpy(&var_b0, &var_1b0, 0xa0)
                    result_2 = result_3
                    result = sub_452ab0(eax_8, &var_b0, &result_2[0x1c], 1, arg5)
                    result_5 = result_4
                    edx = var_1bc
                    goto label_454ef4
                
                var_1cc_4 = "ReorgTiles"
                var_1d0_3 = 0xbcb
                ecx_7 = "gfx.tile.where != TW_ACTIVE"
            
            sub_489550(result, &data_5b2591, ecx_7, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
                var_1d0_3, var_1cc_4)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    
    @__security_check_cookie@4(eax_1 ^ &result_3)
    return result
}
