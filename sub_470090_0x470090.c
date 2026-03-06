// 函数名称: sub_470090
// 虚拟地址: 0x470090
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_470090(int32_t* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char result = sub_46b510(arg1)
    
    if (result != 0)
        TEB* fsbase
        void* ecx = *fsbase->ThreadLocalStoragePointer
        
        if (data_1514890 s> *(ecx + 4))
            __Init_thread_header(&data_1514890)
            
            if (data_1514890 == 0xffffffff)
                int32_t ecx_1 = data_126bd18
                data_1511920 = data_126bd10
                data_1511924 = data_126bcec
                data_1511928 = data_126bcf4
                data_151192c = data_126bcfc
                data_1511930 = data_126bd20
                int32_t eax_9 = data_126bd08
                data_151191c = ecx_1
                data_1511934 = eax_9
                data_1511938 = ecx_1
                data_151193c = ecx_1
                __Init_thread_footer(&data_1514890)
        
        int32_t eax_10 = arg1[2]
        int32_t* edi_1 = *((eax_10 << 2) + &data_1511918)
        
        if (edi_1[1] != 2)
            sub_489550(eax_10, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_STRUCTURE", 
                "d:\ax\trunk\ax2017\engine\structure.cpp", 0x559, "StructureGetDef")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        void* eax_11 = sub_4981f0(edi_1)
        void* edx_1 = ecx
        
        if (data_1514894 s> *(edx_1 + 4))
            edx_1 = __Init_thread_header(&data_1514894)
            
            if (data_1514894 == 0xffffffff)
                float xmm0_1 = sub_41f100(1.57079637f)
                float xmm0_2 = sub_41f120(1.57079637f)
                float xmm4_2 = xmm0_1 * 0f
                float xmm1_2 = xmm0_2 * 0f
                float xmm2_2 = xmm4_2 + xmm1_2
                float xmm5_2 = xmm1_2 * 0f
                float xmm2_4 = xmm2_2 + xmm1_2 - xmm5_2
                float xmm0_5 = xmm2_2 + xmm5_2 - xmm1_2
                data_15118a8 = xmm0_5
                float xmm3_4 = xmm0_1 - xmm5_2 - xmm5_2 - xmm1_2
                data_15118ac = xmm2_4
                data_15118b4 = xmm3_4
                data_15118b0 = xmm4_2 + xmm0_2 + xmm5_2 - xmm5_2
                float xmm0_10 = sub_41f100(-0.785398185f)
                float xmm0_11 = sub_41f120(-0.785398185f)
                float xmm0_12 = xmm0_11 * 0f
                float xmm5_4 = xmm1_2 * xmm0_11
                float xmm2_7 = xmm1_2 * xmm0_10
                float xmm6_3 = xmm1_2 * xmm0_12
                float xmm4_4 = xmm0_2 * xmm0_12
                float xmm3_6 = xmm0_1 * xmm0_12
                float var_5c_1 = xmm0_10 * xmm0_1 - xmm6_3 - xmm5_4 - xmm4_4
                float var_64_1 = xmm0_1 * xmm0_11 + xmm2_7 + xmm4_4 - xmm6_3
                float var_60_1 = xmm0_2 * xmm0_10 + xmm3_6 + xmm5_4 - xmm6_3
                data_15118b8 = (xmm3_6 + xmm2_7 + xmm6_3 - xmm0_2 * xmm0_11).o
                float xmm0_32 = sub_41f100((zx.o(0)).d)
                float xmm0_34 = sub_41f120((zx.o(0)).d)
                float xmm1_9 = xmm0_34 * 0f
                float xmm0_35 = sub_41f100(0.785398185f)
                float xmm0_36 = sub_41f120(0.785398185f)
                float xmm1_11 = xmm0_36 * 0f
                float xmm5_6 = xmm0_36 * xmm1_9
                float xmm6_5 = xmm1_11 * xmm1_9
                float xmm4_6 = xmm1_11 * xmm0_34
                float xmm3_8 = xmm0_32 * xmm1_11
                float xmm2_10 = xmm0_35 * xmm1_9
                float var_5c_2 = xmm0_35 * xmm0_32 - xmm6_5 - xmm5_6 - xmm4_6
                float xmm4_8 = xmm0_2 * xmm1_9
                float var_64_2 = xmm0_32 * xmm0_36 + xmm2_10 + xmm4_6 - xmm6_5
                float xmm3_10 = xmm1_2 * xmm1_9
                float xmm1_17 = xmm1_2 * xmm0_34
                float var_60_2 = xmm0_35 * xmm0_34 + xmm3_8 + xmm5_6 - xmm6_5
                data_15118c8 = (xmm3_8 + xmm2_10 + xmm6_5 - xmm0_36 * xmm0_34).o
                float xmm2_12 = xmm0_1 * xmm1_9
                float var_5c_3 = xmm0_1 * xmm0_32 - xmm4_8 - xmm3_10 - xmm1_17
                float xmm7_3 = xmm1_2 * xmm0_32
                float var_64_3 = xmm7_3 + xmm2_12 + xmm0_2 * xmm0_34 - xmm3_10
                float xmm3_12 = xmm0_12 * xmm0_11
                float xmm2_14 = xmm0_10 * xmm0_12
                float xmm4_10 = xmm0_12 * xmm0_12
                float var_60_3 = xmm0_1 * xmm0_34 + xmm7_3 + xmm3_10 - xmm4_8
                data_15118d8 = (xmm0_2 * xmm0_32 + xmm2_12 + xmm3_10 - xmm1_17).o
                float xmm1_26 = xmm0_10 * xmm0_11 + xmm2_14 + xmm4_10 - xmm3_12
                float var_5c_4 = xmm0_10 * xmm0_10 - xmm3_12 - xmm4_10 - xmm3_12
                float var_60_4 = xmm1_26
                float xmm3_14 = xmm1_11 * xmm0_12
                float xmm4_12 = xmm0_36 * xmm0_12
                float var_64_4 = xmm2_14 + xmm2_14 + xmm0_11 * xmm0_11 - xmm4_10
                float xmm2_19 = xmm1_11 * xmm0_11
                data_15118e8 = xmm1_26.o
                float xmm1_28 = xmm0_35 * xmm0_12
                float var_5c_5 = xmm0_35 * xmm0_10 - xmm4_12 - xmm3_14 - xmm2_19
                float xmm2_21 = xmm0_10 * xmm1_11
                float var_64_5 = xmm2_21 + xmm1_28 + xmm0_36 * xmm0_11 - xmm3_14
                float var_60_5 = xmm0_35 * xmm0_11 + xmm2_21 + xmm3_14 - xmm4_12
                data_15118f8 = (xmm0_10 * xmm0_36 + xmm1_28 + xmm3_14 - xmm2_19).o
                float var_5c_6 = xmm3_4
                float var_64_6 = xmm2_4
                float var_60_6 = xmm4_2 + xmm0_2 + xmm5_2 - xmm5_2
                data_1511908 = xmm0_5.o
                edx_1 = __Init_thread_footer(&data_1514894)
        
        float xmm2_22[0x4] = *(arg1 + 0x7b8)
        int128_t xmm0_104 = *(arg1 + 0x7c8)
        void* eax_14 = &(&data_15118a8)[arg1[3] * 4]
        float xmm3_16 = _mm_shuffle_ps(xmm2_22, xmm2_22, 0x55)
        int128_t var_28_1 = xmm0_104
        float xmm5_10 = *(eax_14 + 0xc)
        float xmm7_10 = *eax_14
        float xmm4_13 = *(eax_14 + 4)
        float xmm6_9 = *(eax_14 + 8)
        float xmm3_17[0x4] = *(arg1 + 0x7b8)
        float var_38[0x4] = xmm2_22
        float xmm3_18 = _mm_shuffle_ps(xmm3_17, xmm3_17, 0xff)
        float xmm2_23 = _mm_shuffle_ps(xmm2_22, *(arg1 + 0x7b8), 0xaa)
        float var_5c_7 = xmm0_104.d * xmm5_10 - xmm3_16 * xmm7_10 - xmm2_23 * xmm4_13 - xmm6_9 * xmm3_18
        float var_64_7 =
            arg1[0x1f2] f* xmm4_13 + xmm2_23 * xmm5_10 + xmm3_18 * xmm7_10 - xmm6_9 * xmm3_16
        float var_60_7 =
            xmm6_9 f* arg1[0x1f2] + xmm3_18 * xmm5_10 + xmm3_16 * xmm4_13 - xmm2_23 * xmm7_10
        var_38 = (arg1[0x1f2] f* xmm7_10 + xmm3_16 * xmm5_10 + xmm6_9 * xmm2_23 - xmm3_18 * xmm4_13).o
        var_38[0] = var_38[0] * 0.00100000005f
        void var_110
        int128_t* eax_16 = sub_482820(&var_110, edx_1, &var_38, &var_110)
        int128_t var_58 = *eax_16
        int128_t var_48_1 = eax_16[1]
        var_38 = eax_16[2]
        int128_t var_28_2 = eax_16[3]
        int32_t eax_19 = sub_492260(sub_46c0a0(arg1) << 0x10)
        sub_494fb0(eax_19, &var_58, edi_1, eax_11 + 0x40, nullptr, 0, 0)
        result = sub_492260(eax_19)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
