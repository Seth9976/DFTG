// 函数名称: sub_4bb1d0
// 虚拟地址: 0x4bb1d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_4bb1d0(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx_2 = data_63e5e0
    int32_t ecx_2 = data_63e5e0
    uint32_t eax
    
    if (ecx_2 != 0)
        eax = zx.d(ecx_2.w)
        
        if (eax u< data_63e5ac)
            int32_t esi_1 = data_63e5a8
            eax = eax * 0x1418 + esi_1
            
            if (*(eax + 0x1410) == ecx_2)
                int32_t var_10
                char* ecx
                
                if (ecx_2 == 0)
                    char const* const var_c = "DataArray<struct UI2>::DataArrayGet"
                    var_10 = 0x6c
                    ecx = "id != DATAID_NULL"
                label_4bb269:
                    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\dataarray.h", var_10, 
                        "DataArray<struct UI2>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                uint32_t edx = zx.d(ecx_2.w)
                
                if (edx u< data_63e5ac)
                    eax = edx * 0x1418
                
                if (edx u>= data_63e5ac || *(eax + esi_1 + 0x1410) != ecx_2)
                    char const* const var_c_2 = "DataArray<struct UI2>::DataArrayGet"
                    var_10 = 0x6d
                    ecx = "DataArrayTryToGet(id) != NULL"
                    goto label_4bb269
                
                eax = edx * 0x1418 + esi_1
                
                if (*(eax + 0xfec) == 3)
                    sub_48a560(arg2, eax + 0x1134)
                    int32_t* eax_4
                    eax_4.b = 1
                    return eax_4
    
    eax.b = 0
    return eax
}
