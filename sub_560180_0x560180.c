// 函数名称: sub_560180
// 虚拟地址: 0x560180
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_560180(int32_t arg1, void* arg2, char* arg3, int32_t arg4, char* arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    char* eax_1 = sub_55fdd0(&var_8, arg7, arg6, arg2, arg4, arg5, &var_8)
    
    if (eax_1 != 0)
        int32_t* eax_2 = _fopen(arg3, "wb")
        
        if (eax_2 != 0)
            int32_t* var_14_2 = eax_2
            _fwrite(eax_1, 1, var_8)
            _fclose(eax_2)
            _free(eax_1)
            return 1
        
        _free(eax_1)
    
    return 0
}
