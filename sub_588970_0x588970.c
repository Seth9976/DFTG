// 函数名称: sub_588970
// 虚拟地址: 0x588970
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_588970(wchar16* arg1, void* arg2, uint32_t arg3)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_8 = edi
    int32_t eax = ___acrt_WideCharToMultiByte(arg3, 0, arg1, 0xffffffff, nullptr, 0, 0, 0)
    
    if (eax == 0)
        ___acrt_errno_map_os_error(GetLastError())
        return *__errno()
    
    if (eax u> *(arg2 + 0xc))
        int32_t result = sub_588dfd(arg2, eax)
        
        if (result != 0)
            return result
    
    int32_t eax_3 =
        ___acrt_WideCharToMultiByte(arg3, 0, arg1, 0xffffffff, *(arg2 + 8), *(arg2 + 0xc), 0, 0)
    
    if (eax_3 != 0)
        *(arg2 + 0x10) = eax_3
        return 0
    
    ___acrt_errno_map_os_error(GetLastError())
    return *__errno()
}
