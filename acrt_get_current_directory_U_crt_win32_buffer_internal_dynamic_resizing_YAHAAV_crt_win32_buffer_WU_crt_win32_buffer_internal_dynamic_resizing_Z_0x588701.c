// 函数名称: ??$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAAV?$__crt_win32_buffer@_WU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z
// 虚拟地址: 0x588701
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t??$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAAV?$__crt_win32_buffer@_WU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z(void* arg1)
{
    // 第一条实际指令: uint32_t eax = GetCurrentDirectoryW(*(arg1 + 0xc), *(arg1 + 8))
    uint32_t eax = GetCurrentDirectoryW(*(arg1 + 0xc), *(arg1 + 8))
    
    if (eax != 0)
        if (eax u<= *(arg1 + 0xc))
            *(arg1 + 0x10) = eax
            return 0
        
        int32_t result =
            __crt_win32_buffer<wchar_t,struct __crt_win32_buffer_internal_dynamic_resizing>::allocate(
            arg1, eax)
        
        if (result != 0)
            return result
        
        eax = GetCurrentDirectoryW(*(arg1 + 0xc), *(arg1 + 8))
        
        if (eax != 0)
            *(arg1 + 0x10) = eax
            return 0
    
    ___acrt_errno_map_os_error(GetLastError())
    return *__errno()
}
