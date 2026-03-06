// 函数名称: sub_4bbb50
// 虚拟地址: 0x4bbb50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4bbb50(int32_t arg1)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        uint32_t edx_1 = zx.d(arg1.w)
        int32_t eax
        int32_t esi_1
        
        if (edx_1 u< data_63e5ac)
            esi_1 = data_63e5a8
            eax = edx_1 * 0x1418
        
        if (edx_1 u>= data_63e5ac || *(eax + esi_1 + 0x1410) != arg1)
            sub_489550(eax, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        void* eax_2 = *(edx_1 * 0x1418 + esi_1 + 0x112c)
        
        if (eax_2 != 0)
            return *(eax_2 + 0x1410)
    
    return 0
}
