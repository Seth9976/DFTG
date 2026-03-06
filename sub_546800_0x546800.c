// 函数名称: sub_546800
// 虚拟地址: 0x546800
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_546800()
{
    // 第一条实际指令: int32_t* ecx = data_1151b48
    int32_t* ecx = data_1151b48
    int32_t* eax = ecx[1]
    
    if (eax != 0x19)
        if (eax == 0x18)
            return sub_546ff0(0x42c80000, 0x42c80000)
        
        if (eax == 2)
            char** eax_3 = sub_4dcc00(ecx)
            data_1151b70 = eax_3[0x1a]
            eax = *sub_4d4460(eax_3[1])
            
            if (eax != 0 && eax[0x18] s> 0)
                data_1151b74 = 0
                return sub_4f2cc0(eax, eax_3[1], eax_3, 0)
            
            data_1151b74 = 0xffffffff
    else
        int128_t xmm0_1 = data_5d2b78
        int64_t var_3c_1 = _mm_unpacklo_ps(0x43480000, 0x43480000)
        int32_t var_34_1 = 0
        int128_t var_30 = 0x3f800000.o
        int128_t var_20_1 = xmm0_1
        eax = sub_4fcf40(ecx, &var_30)
        
        if (eax[0x1d].b != 0)
            *(eax + 0x76) = 1
            int128_t xmm0_4 = data_5d2b78
            int32_t* ecx_1 = data_1151b48
            int64_t var_3c_2 = 0
            int32_t var_34_2 = 0
            var_30 = 0x3f800000.o
            int128_t var_20_2 = xmm0_4
            sub_4fcf40(ecx_1, &var_30)
            int32_t eax_1
            int80_t st0
            st0, eax_1 = sub_546f00(data_1151b48)
            return eax_1
    
    return eax
}
