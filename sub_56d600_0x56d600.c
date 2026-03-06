// 函数名称: sub_56d600
// 虚拟地址: 0x56d600
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_56d600(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t eax = arg1[4]
    int32_t eax = arg1[4]
    int32_t var_34
    int32_t eax_3
    char const* const ecx
    
    if (eax == 1)
        uint128_t xmm0_1 = *arg1
        int32_t var_10_1 = 2
        uint128_t var_20 = xmm0_1
        void* xmm0_2 = _mm_bsrli_si128(xmm0_1, 4)
        int32_t eax_6 = sub_5234e0(xmm0_2, 2)
        var_20:0xc.d = eax_6
        var_20.d = sub_4c2e40(sub_5235a0(eax_6, var_20:8.d, xmm0_2, 2))
        char* eax_9 = sub_523b10(arg1, &var_20)
        int32_t esi_2 = var_20.d
        eax_3 = sub_560180(eax_9, xmm0_2, arg2, var_20:8.d, 4, esi_2, eax_6)
        
        if (eax_3 != 0)
            if (esi_2 != 0)
                _aligned_free_base(esi_2)
            
            eax_3.b = 1
            return eax_3
        
        char const* const var_30_4 = "PngWriteImageSpecToFile"
        var_34 = 0x5b
        ecx = "result"
    else
        char* eax_4
        int32_t eax_5
        
        if (eax == 2)
            eax_4 = 4
            eax_5.b = sub_560180(eax_4, arg1[1], arg2, arg1[2], eax_4, *arg1, arg1[3]) != 0
            return eax_5
        
        eax_3 = eax - 5
        
        if (eax == 5)
            eax_4 = 3
            eax_5.b = sub_560180(eax_4, arg1[1], arg2, arg1[2], eax_4, *arg1, arg1[3]) != 0
            return eax_5
        
        char const* const var_30 = "PngWriteImageSpecToFile"
        var_34 = 0x65
        ecx = "Halt"
    
    sub_489550(eax_3, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\stb_image_resize.cpp", var_34, 
        "PngWriteImageSpecToFile")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
