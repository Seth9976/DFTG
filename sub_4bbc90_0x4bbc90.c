// 函数名称: sub_4bbc90
// 虚拟地址: 0x4bbc90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __fastcallsub_4bbc90(int32_t arg1)
{
    // 第一条实际指令: char const* const var_44
    char const* const var_44
    int32_t var_40
    char const* const var_3c
    uint32_t eax
    char* ecx
    
    if (arg1 != 0)
        eax = zx.d(arg1.w)
        void* ecx_2
        
        if (eax u< data_63e5ac)
            ecx_2 = eax * 0x1418 + data_63e5a8
        
        if (eax u>= data_63e5ac || *(ecx_2 + 0x1410) != arg1)
            var_3c = "DataArray<struct UI2>::DataArrayGet"
            var_40 = 0x6d
            ecx = "DataArrayTryToGet(id) != NULL"
            var_44 = "d:\ax\trunk\ax2017\engine\dataarray.h"
        else
            void* eax_1 = sub_49e970(ecx_2, 0)
            int32_t* eax_2 = sub_498ef0(eax_1)
            eax = sub_4f0e70(eax_2, eax_2, &data_6218dc, data_126cc64, 0x6d)
            uint32_t ebx_1 = eax
            int32_t i = 0
            
            if (*(ebx_1 + 8) s> 0)
                int32_t* edi_1 = nullptr
                
                do
                    eax = __stricmp(*(edi_1 + *ebx_1), "notification")
                    
                    if (eax == 0)
                        int32_t ebx_2 = *ebx_1
                        int32_t edi_2 = i * 3
                        int32_t xmm0 = *(ebx_2 + (edi_2 << 3) + 0x10)
                        
                        if (*(eax_1 + 0x1128) == 0)
                            *(eax_1 + 0x1120) = sub_498490(0x60)
                            *(eax_1 + 0x1124) = 0
                            *(eax_1 + 0x1128) = 4
                        
                        int32_t var_1c = *(ebx_2 + (edi_2 << 3))
                        int32_t var_14 = *(ebx_2 + (edi_2 << 3) + 8)
                        int32_t var_20 = 0
                        int32_t var_18 = 0
                        int32_t var_10 = xmm0
                        int32_t var_c = 0
                        return sub_4bc6f0(eax_1 + 0x1120, &var_20)
                    
                    i += 1
                    edi_1 = &edi_1[6]
                while (i s< *(ebx_1 + 8))
            
            var_3c = "StateEffectDefLookup"
            var_40 = 0x41bf
            var_44 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
            ecx = "Halt"
    else
        var_3c = "DataArray<struct UI2>::DataArrayGet"
        var_40 = 0x6c
        ecx = "id != DATAID_NULL"
        var_44 = "d:\ax\trunk\ax2017\engine\dataarray.h"
    
    sub_489550(eax, &data_5b2591, ecx, var_44, var_40, var_3c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
