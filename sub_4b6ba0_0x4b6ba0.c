// 函数名称: sub_4b6ba0
// 虚拟地址: 0x4b6ba0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_4b6ba0(char** arg1, char* arg2)
{
    // 第一条实际指令: *arg2 = 0
    *arg2 = 0
    int32_t ecx = data_63e5e0
    char* eax
    
    if (ecx != 0)
        void* edx = data_63e5ac
        uint32_t esi_1 = zx.d(ecx.w)
        
        if (esi_1 u< edx)
            eax = *(esi_1 * 0x1418 + data_63e5a8 + 0x1410)
            char* var_8_1 = eax
            
            if (eax == ecx)
                int32_t var_24
                char const* const ecx_1
                
                if (ecx == 0)
                    char const* const var_20 = "DataArray<struct UI2>::DataArrayGet"
                    var_24 = 0x6c
                    ecx_1 = "id != DATAID_NULL"
                label_4b6cc2:
                    sub_489550(eax, &data_5b2591, ecx_1, "d:\ax\trunk\ax2017\engine\dataarray.h", 
                        var_24, "DataArray<struct UI2>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                uint32_t ebx_1 = zx.d(ecx.w)
                
                if (ebx_1 u< edx)
                    eax = ebx_1 * 0x1418 + data_63e5a8
                
                if (ebx_1 u>= edx || *(eax + 0x1410) != ecx)
                    char const* const var_20_1 = "DataArray<struct UI2>::DataArrayGet"
                    var_24 = 0x6d
                    ecx_1 = "DataArrayTryToGet(id) != NULL"
                    goto label_4b6cc2
                
                int32_t ebx_2 = data_63e5a8
                
                if (*(ebx_1 * 0x1418 + ebx_2 + 0xfec) == 3)
                    eax = *arg1
                    
                    if (eax == 1)
                        eax = arg1[1]
                        
                        if (eax != 0x1b && eax != 9 && eax != 0xd)
                            eax.b = 1
                            return eax
                        
                        if (esi_1 u< edx && var_8_1 == ecx)
                            sub_4aee00(esi_1 * 0x1418 + ebx_2)
                            eax = arg1[1]
                            ecx = data_63e5e0
                        
                        edx.b = eax == 0xd
                        sub_4aec00(ecx, edx.b)
                        *arg2 = 1
                        char* eax_4
                        eax_4.b = 1
                        return eax_4
                    
                    if (eax == 2 || eax == 0)
                        eax.b = 1
                        return eax
    
    eax.b = 0
    return eax
}
