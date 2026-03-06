// 函数名称: sub_4bbc20
// 虚拟地址: 0x4bbc20
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_4bbc20(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8
    int32_t var_8
    uint32_t eax
    char const* const ecx
    
    if (arg1 != 0)
        eax = zx.d(arg1.w)
        
        if (eax u< data_63e5ac)
            int32_t ecx_1 = eax * 0x1418
            eax = data_63e5a8
            void* ecx_2 = ecx_1 + eax
            
            if (*(ecx_2 + 0x1410) == arg1)
                void* i = *(ecx_2 + 0x112c)
                void* esi = ecx_2 + 0x112c
                
                for (; i != 0; i = *esi)
                    char* eax_2 = *(i + 0xfd8)
                    char* const ecx_3 = &data_5b2591
                    
                    if (eax_2 != 0)
                        ecx_3 = eax_2
                    
                    if (__stricmp(ecx_3, "tblGamesYours") == 0)
                        uint32_t eax_3
                        eax_3.b = 1
                        return eax_3
                    
                    esi = *esi + 0x112c
                
                i.b = 0
                return i
        
        char const* const __saved_esi_1 = "DataArray<struct UI2>::DataArrayGet"
        var_8 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const __saved_esi = "DataArray<struct UI2>::DataArrayGet"
        var_8 = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\dataarray.h", var_8, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
