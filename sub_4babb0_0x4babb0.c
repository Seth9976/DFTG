// 函数名称: sub_4babb0
// 虚拟地址: 0x4babb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __convention("regparm")sub_4babb0(int32_t arg1, int32_t arg2, int32_t arg3, int128_t* arg4)
{
    // 第一条实际指令: if (arg3 != 0)
    if (arg3 != 0)
        uint32_t edx = zx.d(arg3.w)
        
        if (edx u< data_63e5ac)
            void* edi_1 = data_63e5a8
            int32_t eax_1 = *(edx * 0x1418 + edi_1 + 0x1410)
            
            if (eax_1 == arg3)
                if (edx u< data_63e5ac && eax_1 == arg3)
                    int128_t* ecx_1 = edi_1 + 0x1014 + edx * 0x1418
                    *arg4 = *ecx_1
                    arg4[1] = ecx_1[1]
                    arg4[2] = ecx_1[2]
                    arg4[3] = ecx_1[3]
                    arg4[4] = ecx_1[4]
                    arg4[5] = ecx_1[5]
                    return arg4
                
                sub_489550(eax_1, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                    "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, 
                    "DataArray<struct UI2>::DataArrayGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
    
    uint32_t var_68[0x4]
    _memset(&var_68, 0, 0x60)
    *arg4 = var_68
    int128_t var_58
    arg4[1] = var_58
    int128_t var_48
    arg4[2] = var_48
    int128_t var_38
    arg4[3] = var_38
    int128_t var_28
    arg4[4] = var_28
    int128_t var_18
    arg4[5] = var_18
    return arg4
}
