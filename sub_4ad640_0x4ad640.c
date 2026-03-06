// 函数名称: sub_4ad640
// 虚拟地址: 0x4ad640
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4ad640(int32_t arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    char const* const var_6c
    int32_t var_68
    char const* const var_64
    int32_t eax
    char* ecx
    
    if (arg1 != 0)
        uint32_t edx_1 = zx.d(arg1.w)
        int32_t edi_1
        
        if (edx_1 u< data_63e5ac)
            edi_1 = data_63e5a8
            eax = edx_1 * 0x1418
        
        if (edx_1 u>= data_63e5ac || *(eax + edi_1 + 0x1410) != arg1)
            var_64 = "DataArray<struct UI2>::DataArrayGet"
            var_68 = 0x6d
            ecx = "DataArrayTryToGet(id) != NULL"
            var_6c = "d:\ax\trunk\ax2017\engine\dataarray.h"
        else
            void* esi_2 = edx_1 * 0x1418 + edi_1
            bool cond:0_1 = *(esi_2 + 0x1190) == 0
            float xmm0_1[0x4] = *(esi_2 + 0x10a0)
            float xmm1_3 = _mm_shuffle_ps(xmm0_1, xmm0_1, 0xaa) f- xmm0_1
            float xmm1_6 = _mm_shuffle_ps(xmm0_1, xmm0_1, 0xff) - _mm_shuffle_ps(xmm0_1, xmm0_1, 0x55)
            
            if (cond:0_1 || *(esi_2 + 0x1194) == 0)
                return 0
            
            float eax_2
            float edx_2
            eax_2, edx_2 = sub_426dd0(sub_49e970(esi_2, 0) + 0x10a0)
            float eax_4
            float edx_3
            eax_4, edx_3 = sub_426dd0(sub_49e970(esi_2, 1) + 0x10a0)
            float xmm1_8 = eax_4 - eax_2
            int32_t eax_5 = *(esi_2 + 0xf50)
            float xmm2_2 = edx_3 - edx_2
            
            if (eax_5 == 1)
                float xmm0_26 = *(esi_2 + 0xe4c)
                float xmm1_14 = (xmm0_26 / xmm2_2) ^ (data_60cca0.o).d
                sub_4369e0((xmm1_6 - xmm0_26) / xmm2_2)
                float xmm0_31 = sub_4827e0(xmm1_14)
                
                if (0 f<= xmm0_31)
                    return int.d(xmm0_31 + 0.5f)
                
                return int.d(xmm0_31 - 0.5f)
            
            if (eax_5 == 2)
                float xmm0_16 =
                    sub_4827e0(((*(esi_2 + 0xe48) / xmm1_8) ^ (data_60cca0.o).d) - 9.99999975e-06f + 1f)
                float xmm0_17
                
                if (0 f<= xmm0_16)
                    xmm0_17 = xmm0_16 + 0.5f
                else
                    xmm0_17 = xmm0_16 - 0.5f
                
                sub_4369e0((xmm1_3 f- *(esi_2 + 0xe48)) / xmm1_8 + 9.99999975e-06f - 1f)
                return int.d(xmm0_17)
            
            eax = eax_5 - 3
            
            if (eax_5 == 3)
                float xmm0_3 = *(esi_2 + 0xe4c)
                int32_t esi_3 = *(esi_2 + 0xf28)
                sub_4827e0((xmm0_3 / xmm2_2) ^ (data_60cca0.o).d)
                float xmm0_9 = sub_4369e0((xmm1_6 - xmm0_3) / xmm2_2)
                float xmm0_10
                
                if (0 f<= xmm0_9)
                    xmm0_10 = xmm0_9 + 0.5f
                else
                    xmm0_10 = xmm0_9 - 0.5f
                
                return esi_3 - int.d(xmm0_10)
            
            var_64 = "UI2TableGetRange"
            var_68 = 0x294c
            var_6c = "d:\ax\trunk\ax2017\engine\ui2.cpp"
            ecx = "Halt"
    else
        var_64 = "DataArray<struct UI2>::DataArrayGet"
        var_68 = 0x6c
        ecx = "id != DATAID_NULL"
        var_6c = "d:\ax\trunk\ax2017\engine\dataarray.h"
    
    sub_489550(eax, &data_5b2591, ecx, var_6c, var_68, var_64)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
