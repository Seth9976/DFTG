// 函数名称: sub_4ad320
// 虚拟地址: 0x4ad320
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4ad320(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    char const* const var_20
    int32_t var_1c
    char const* const var_18
    void* eax
    char* ecx
    
    if (arg1 != 0)
        uint32_t edx = zx.d(arg1.w)
        int32_t edi_1
        
        if (edx u< data_63e5ac)
            edi_1 = data_63e5a8
            eax = edx * 0x1418
        
        if (edx u>= data_63e5ac || *(eax + edi_1 + 0x1410) != arg1)
            var_18 = "DataArray<struct UI2>::DataArrayGet"
            var_1c = 0x6d
            ecx = "DataArrayTryToGet(id) != NULL"
            var_20 = "d:\ax\trunk\ax2017\engine\dataarray.h"
        else
            void* esi_2 = edx * 0x1418 + edi_1
            void* eax_1 = sub_49e970(esi_2, 0)
            float xmm0_2 = *(eax_1 + 0x10ac) f- *(eax_1 + 0x10a4)
            eax = sub_49e970(esi_2, 1)
            float xmm2_1 = *(eax_1 + 0x10a0)
            float xmm1_1
            
            if (not(*(eax_1 + 0x10a8) f< xmm2_1) && not(*(eax_1 + 0x10ac) f< *(eax_1 + 0x10a4)))
                xmm1_1 = *(eax + 0x10a0)
            
            if (*(eax_1 + 0x10a8) f< xmm2_1 || *(eax_1 + 0x10ac) f< *(eax_1 + 0x10a4)
                    || *(eax + 0x10a8) f< xmm1_1 || *(eax + 0x10ac) f< *(eax + 0x10a4))
                var_18 = "RectTopLeft"
                var_1c = 0x127
                var_20 = "d:\ax\trunk\ax2017\engine\rect.cpp"
                ecx = "RectIsNormalized(r)"
            else
                int32_t eax_2 = *(esi_2 + 0xf50)
                
                if (eax_2 == 1)
                    *(esi_2 + 0xe4c) = _mm_cvtepi32_ps(zx.o(neg.d(*arg2))) * xmm0_2
                    return sub_4a3580(esi_2)
                
                eax = eax_2 - 2
                
                if (eax_2 == 2)
                    *(esi_2 + 0xe48) = _mm_cvtepi32_ps(zx.o(neg.d(*arg2))) * (xmm1_1 - xmm2_1)
                    return sub_4a3580(esi_2)
                
                var_18 = "UI2TableSetRange"
                var_1c = 0x28ed
                var_20 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                ecx = "Halt"
    else
        var_18 = "DataArray<struct UI2>::DataArrayGet"
        var_1c = 0x6c
        ecx = "id != DATAID_NULL"
        var_20 = "d:\ax\trunk\ax2017\engine\dataarray.h"
    
    sub_489550(eax, &data_5b2591, ecx, var_20, var_1c, var_18)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
