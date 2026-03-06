// 函数名称: sub_4ad4b0
// 虚拟地址: 0x4ad4b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

float __fastcallsub_4ad4b0(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: char const* const var_28
    char const* const var_28
    int32_t var_24
    char const* const var_20
    void* eax
    char* ecx
    
    if (arg1 != 0)
        uint32_t edx = zx.d(arg1.w)
        int32_t edi_1
        
        if (edx u< data_63e5ac)
            edi_1 = data_63e5a8
            eax = edx * 0x1418
        
        if (edx u>= data_63e5ac || *(eax + edi_1 + 0x1410) != arg1)
            var_20 = "DataArray<struct UI2>::DataArrayGet"
            var_24 = 0x6d
            ecx = "DataArrayTryToGet(id) != NULL"
            var_28 = "d:\ax\trunk\ax2017\engine\dataarray.h"
        else
            void* esi_2 = edx * 0x1418 + edi_1
            void* eax_1 = sub_49e970(esi_2, 0)
            float xmm0_2 = *(eax_1 + 0x10ac) f- *(eax_1 + 0x10a4)
            eax = sub_49e970(esi_2, 1)
            float xmm1_1 = *(eax_1 + 0x10a0)
            float xmm2_1
            
            if (not(*(eax_1 + 0x10a8) f< xmm1_1) && not(*(eax_1 + 0x10ac) f< *(eax_1 + 0x10a4)))
                xmm2_1 = *(eax + 0x10a0)
            
            if (*(eax_1 + 0x10a8) f< xmm1_1 || *(eax_1 + 0x10ac) f< *(eax_1 + 0x10a4)
                    || *(eax + 0x10a8) f< xmm2_1 || *(eax + 0x10ac) f< *(eax + 0x10a4))
                var_20 = "RectTopLeft"
                var_24 = 0x127
                var_28 = "d:\ax\trunk\ax2017\engine\rect.cpp"
                ecx = "RectIsNormalized(r)"
            else
                int32_t eax_2 = *(esi_2 + 0xf50)
                float var_8_2
                
                if (eax_2 == 1)
                    float result = *(esi_2 + 0xe48)
                    var_8_2 = _mm_cvtepi32_ps(zx.o(neg.d(*arg2))) * xmm0_2
                    return result
                
                eax = eax_2 - 2
                
                if (eax_2 == 2)
                    var_8_2 = *(esi_2 + 0xe4c)
                    return _mm_cvtepi32_ps(zx.o(neg.d(*arg2))) * (xmm2_1 - xmm1_1)
                
                var_20 = "UI2TableGetRangeTarget"
                var_24 = 0x2904
                var_28 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                ecx = "Halt"
    else
        var_20 = "DataArray<struct UI2>::DataArrayGet"
        var_24 = 0x6c
        ecx = "id != DATAID_NULL"
        var_28 = "d:\ax\trunk\ax2017\engine\dataarray.h"
    
    sub_489550(eax, &data_5b2591, ecx, var_28, var_24, var_20)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
