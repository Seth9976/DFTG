// 函数名称: sub_49ec40
// 虚拟地址: 0x49ec40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_49ec40(int32_t arg1, int32_t* arg2, int32_t arg3, int32_t* arg4, int128_t* arg5, int32_t* arg6, int32_t arg7, uint32_t (* arg8)[0x4], char arg9)
{
    // 第一条实际指令: void var_118
    void var_118
    int32_t eax_1 = __security_cookie ^ &var_118
    uint32_t ecx = *arg2
    int32_t* var_f8 = arg2
    char var_109 = 0
    void* var_f4_1
    uint32_t (* eax_5)[0x4]
    int32_t esi_1
    void* edi_1
    
    if (ecx == 0)
    label_49eca5:
        eax_5 = sub_49a520(0)
        arg2 = var_f8
        var_109 = 1
        *eax_5 = arg3
        ecx = eax_5[0x141][0]
        *arg2 = ecx
        edi_1 = data_63e5a8
        esi_1 = data_63e5ac
        var_f4_1 = edi_1
    else
        esi_1 = data_63e5ac
        uint32_t eax_4 = zx.d(ecx.w)
        
        if (eax_4 u>= esi_1)
            goto label_49eca5
        
        edi_1 = data_63e5a8
        eax_5 = eax_4 * 0x1418
        var_f4_1 = edi_1
        
        if (*(eax_5 + edi_1 + 0x1410) != ecx)
            goto label_49eca5
    
    char const* const var_12c_2
    int32_t var_128
    char const* const var_124
    char* ecx_2
    
    if (ecx != 0)
        eax_5 = zx.d(ecx.w)
        void* esi_2
        
        if (eax_5 u< esi_1)
            esi_2 = eax_5 * 0x1418
        
        if (eax_5 u>= esi_1 || *(esi_2 + edi_1 + 0x1410) != ecx)
            var_124 = "DataArray<struct UI2>::DataArrayGet"
            var_128 = 0x6d
            ecx_2 = "DataArrayTryToGet(id) != NULL"
            var_12c_2 = "d:\ax\trunk\ax2017\engine\dataarray.h"
        else
            int32_t eax_6 = *(esi_2 + edi_1 + 0xff4)
            
            if (eax_6 != 0 && eax_6 != arg4)
                sub_49a5a0(arg2)
                uint32_t (* eax_7)[0x4]
                eax_7, arg2 = sub_49a520(0)
                var_109 = 1
                *eax_7 = arg3
                *var_f8 = eax_7[0x141][0]
            
            int128_t var_f0
            int128_t* var_124_1 = &var_f0
            *(esi_2 + edi_1 + 0xff4) = arg4
            *(esi_2 + edi_1 + 0xff8) = 0xffffffff
            float xmm5_1[0x4] = *sub_49abe0(arg4, arg2, arg4, var_124_1)
            int128_t var_c8
            int32_t* eax_11 = sub_4bcae0(xmm5_1[0], &var_c8)
            float xmm4_2 = _mm_shuffle_ps(xmm5_1, xmm5_1, 0x55)
            int128_t xmm1_2 = *(eax_11 + 0x10)
            int128_t xmm2_1 = *(eax_11 + 0x20)
            int64_t xmm3_1 = *(eax_11 + 0x30)
            int32_t eax_12 = eax_11[0xe]
            *(esi_2 + edi_1 + 0x48) = *eax_11
            *(esi_2 + edi_1 + 0x58) = xmm1_2
            *(esi_2 + edi_1 + 0x68) = xmm2_1
            *(esi_2 + edi_1 + 0x78) = xmm3_1
            *(esi_2 + edi_1 + 0x80) = eax_12
            int32_t* eax_13 = sub_4bcae0(xmm4_2, &var_c8)
            int128_t xmm1_4 = *(eax_13 + 0x10)
            int128_t xmm2_2 = *(eax_13 + 0x20)
            int64_t xmm3_2 = *(eax_13 + 0x30)
            int32_t eax_14 = eax_13[0xe]
            *(esi_2 + edi_1 + 0xd8) = *eax_13
            *(esi_2 + edi_1 + 0xe8) = xmm1_4
            *(esi_2 + edi_1 + 0xf8) = xmm2_2
            float xmm1_6 = _mm_shuffle_ps(xmm5_1, xmm5_1, 0xaa)
            *(esi_2 + edi_1 + 0x108) = xmm3_2
            *(esi_2 + edi_1 + 0x110) = eax_14
            int32_t* eax_15 = sub_4bcae0(xmm1_6 f- xmm5_1, &var_c8)
            float xmm5_3 = _mm_shuffle_ps(xmm5_1, xmm5_1, 0xff) - xmm4_2
            int128_t xmm1_8 = *(eax_15 + 0x10)
            int128_t xmm2_3 = *(eax_15 + 0x20)
            int64_t xmm3_3 = *(eax_15 + 0x30)
            int32_t eax_16 = eax_15[0xe]
            *(esi_2 + edi_1 + 0x168) = *eax_15
            *(esi_2 + edi_1 + 0x178) = xmm1_8
            *(esi_2 + edi_1 + 0x188) = xmm2_3
            *(esi_2 + edi_1 + 0x198) = xmm3_3
            *(esi_2 + edi_1 + 0x1a0) = eax_16
            int32_t* eax_17 = sub_4bcae0(xmm5_3, &var_c8)
            void* var_124_6 = 0xd4
            int128_t xmm1_10 = *(eax_17 + 0x10)
            char var_128_1 = 0
            int128_t xmm2_4 = *(eax_17 + 0x20)
            int64_t xmm3_4 = *(eax_17 + 0x30)
            int32_t eax_18 = eax_17[0xe]
            *(esi_2 + edi_1 + 0x1f8) = *eax_17
            *(esi_2 + edi_1 + 0x208) = xmm1_10
            *(esi_2 + edi_1 + 0x218) = xmm2_4
            *(esi_2 + edi_1 + 0x228) = xmm3_4
            *(esi_2 + edi_1 + 0x230) = eax_18
            int128_t* esi_4 = esi_2 + 0x1014 + edi_1
            int32_t edx = _memset(esi_4, var_128_1, var_124_6)
            *(esi_4 + 0xc) = 0x3f800000
            esi_4[6] = data_5d2464
            __builtin_memcpy(esi_4 + 0x9c, 
                "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                0x24)
            esi_4[8].d = 0
            *(esi_2 + edi_1 + 0x10a0) = *arg5
            void var_40
            int128_t* eax_22
            int32_t edx_1
            eax_22, edx_1 = sub_49ac60(&var_40, edx, arg4, &var_40)
            void var_d8
            int128_t* var_124_8 = &var_d8
            int128_t var_30 = *eax_22
            float* var_124_9 = &var_30
            int128_t* var_128_2 = &var_f0
            float* var_12c_1 = &var_c8
            var_f0 = *sub_49abe0(&var_d8, edx_1, arg4, var_124_8)
            float* eax_26
            int32_t edx_3
            eax_26, edx_3 = sub_4cd850(&var_c8, arg6, arg5, var_12c_1, var_128_2, var_124_9)
            int128_t xmm1_11 = *(eax_26 + 0x10)
            int128_t xmm2_5 = *(eax_26 + 0x20)
            int128_t xmm3_5 = *(eax_26 + 0x30)
            int128_t xmm4_3 = *(eax_26 + 0x40)
            int128_t xmm5_4 = *(eax_26 + 0x50)
            *esi_4 = *eax_26
            int128_t* var_124_10 = &var_d8
            esi_4[1] = xmm1_11
            esi_4[2] = xmm2_5
            esi_4[3] = xmm3_5
            esi_4[4] = xmm4_3
            esi_4[5] = xmm5_4
            char* const ecx_11 = &data_5b2591
            int128_t xmm0_10 = *sub_49abe0(&var_d8, edx_3, arg4, var_124_10)
            int128_t xmm1_12 = *arg5
            *(esi_2 + edi_1 + 0x10e8) = xmm0_10
            *(esi_2 + edi_1 + 0x10f8) = xmm1_12
            char* eax_31 = *(esi_2 + edi_1 + 0xfd8)
            
            if (eax_31 != 0)
                ecx_11 = eax_31
            
            if (ecx_11 != "<root>")
                sub_48a180(eax_31, 6, esi_2 + 0xfd8 + edi_1, 0)
                __builtin_strncpy(*(esi_2 + edi_1 + 0xfd8), "<root>", 7)
            
            *(esi_2 + edi_1 + 0x1094) = arg7
            eax_5 = arg8
            *(esi_2 + edi_1 + 0x1098) = eax_5
            *(esi_2 + edi_1 + 0x10e4) = 0
            
            if (eax_5 != 0xffffffff)
                void* var_124_12 = 0x68
                *(esi_2 + edi_1 + 0xe94) = zx.d(arg9)
                uint32_t var_b8[0x6][0x4]
                _memset(&var_b8, 0, var_124_12)
                int32_t var_48 = 0
                void* edx_5 = esi_2 + 0xa68 + edi_1
                int32_t var_4c = 0xffffffff
                var_c8 = data_5d2760
                int32_t var_50 = 1
                var_30:8.d = 0
                __builtin_memcpy(edx_5, &var_c8, 0x84)
                var_30.q = 0
                sub_4bcdb0(&var_30, edx_5, var_f4_1 + 0x54c + esi_2, (zx.o(0)).d, &var_30)
                int32_t result
                result.b = var_109
                *(esi_2 + var_f4_1 + 4) = 0
                @__security_check_cookie@4(eax_1 ^ &var_118)
                return result
            
            var_124 = "UI2Begin"
            var_128 = 0x1232
            var_12c_2 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
            ecx_2 = "root.worldInfo.sublayer != -1"
    else
        var_124 = "DataArray<struct UI2>::DataArrayGet"
        var_128 = 0x6c
        ecx_2 = "id != DATAID_NULL"
        var_12c_2 = "d:\ax\trunk\ax2017\engine\dataarray.h"
    
    sub_489550(eax_5, &data_5b2591, ecx_2, var_12c_2, var_128, var_124)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
