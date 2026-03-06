// 函数名称: sub_56d490
// 虚拟地址: 0x56d490
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_56d490(int32_t* arg1, int32_t** arg2)
{
    // 第一条实际指令: int32_t eax = arg1[4]
    int32_t eax = arg1[4]
    int32_t* var_8 = arg1
    int32_t var_34
    char* eax_3
    char const* const ecx
    
    if (eax == 1)
        uint128_t xmm0_1 = *arg1
        int32_t var_10_1 = 2
        uint128_t var_20 = xmm0_1
        void* xmm0_2 = _mm_bsrli_si128(xmm0_1, 4)
        int32_t eax_6 = sub_5234e0(xmm0_2, 2)
        int32_t esi_2 = var_20:8.d
        var_20:0xc.d = eax_6
        var_20.d = sub_4c2e40(sub_5235a0(eax_6, esi_2, xmm0_2, 2))
        sub_523b10(var_8, &var_20)
        int32_t edi_3 = var_20.d
        eax_3 = sub_55fdd0(&var_8, eax_6, edi_3, xmm0_2, esi_2, 4, &var_8)
        
        if (eax_3 != 0)
            int32_t* esi_3 = var_8
            arg2[2] = sub_4c2e40(esi_3)
            char* var_38_3 = arg2[2]
            *arg2 = esi_3
            sub_579300(var_38_3, eax_3, esi_3)
            int32_t result = _free(eax_3)
            
            if (edi_3 == 0)
                return result
            
            return _aligned_free_base(edi_3)
        
        char const* const var_30_6 = "PngWriteImageSpecToBits"
        var_34 = 0x34
        ecx = "result"
    else
        char* eax_4
        
        if (eax == 2)
            eax_4 = 4
        label_56d4e0:
            eax_3 = sub_55fdd0(eax_4, arg1[3], *arg1, arg1[1], arg1[2], eax_4, &var_8)
            
            if (eax_3 != 0)
                int32_t* esi_1 = var_8
                arg2[2] = sub_4c2e40(esi_1)
                char* var_38_2 = arg2[2]
                *arg2 = esi_1
                sub_579300(var_38_2, eax_3, esi_1)
                return _free(eax_3)
            
            char const* const var_30_3 = "PngWriteImageSpecToBits"
            var_34 = 0x42
            ecx = "result"
        else
            eax_3 = eax - 5
            
            if (eax == 5)
                eax_4 = 3
                goto label_56d4e0
            
            char const* const var_30 = "PngWriteImageSpecToBits"
            var_34 = 0x3e
            ecx = "Halt"
    
    sub_489550(eax_3, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\stb_image_resize.cpp", var_34, 
        "PngWriteImageSpecToBits")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
