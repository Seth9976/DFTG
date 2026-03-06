// 函数名称: ?try_get_first_available_module@@YAPAUHINSTANCE__@@QBW4module_id@?A0x5c520fe1@@0@Z
// 虚拟地址: 0x57b112
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

HMODULE?try_get_first_available_module@@YAPAUHINSTANCE__@@QBW4module_id@?A0x5c520fe1@@0@Z(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    
    for (int32_t* i = arg1; i != arg2; i = &i[1])
        int32_t ebx_1 = *i
        HMODULE result = *((ebx_1 << 2) + &data_6cf6ec)
        
        if (result == 0)
            PWSTR lpLibFileName = (&data_5a92c0)[ebx_1]
            result = LoadLibraryExW(lpLibFileName, nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32)
            
            if (result != 0)
            label_57b1ae:
                int32_t temp0_2 = *((ebx_1 << 2) + &data_6cf6ec)
                *((ebx_1 << 2) + &data_6cf6ec) = result
                
                if (temp0_2 != 0)
                    FreeLibrary(result)
                
                goto label_57b1bb
            
            if (GetLastError() != ERROR_INVALID_PARAMETER)
                result = nullptr
            else if (_wcsncmp(lpLibFileName, u"api-ms-", 7) == 0)
                result = nullptr
            else if (_wcsncmp(lpLibFileName, u"ext-ms-", 7) == 0)
                result = nullptr
            else
                result = LoadLibraryExW(lpLibFileName, result, result)
            
            if (result != 0)
                goto label_57b1ae
            
            *((ebx_1 << 2) + &data_6cf6ec)
            *((ebx_1 << 2) + &data_6cf6ec) = 0xffffffff
        else if (result != 0xffffffff)
        label_57b1bb:
            
            if (result != 0)
                return result
    
    return nullptr
}
