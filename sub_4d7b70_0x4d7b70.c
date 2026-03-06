// 函数名称: sub_4d7b70
// 虚拟地址: 0x4d7b70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4d7b70(int32_t arg1, int32_t* arg2, void* arg3, char* arg4)
{
    // 第一条实际指令: int32_t var_c = 0
    int32_t var_c = 0
    int64_t var_14 = 0
    sub_4cf720(arg4)
    int32_t eax = _fopen(arg4, "wb")
    var_14.d = eax
    
    if (eax == 0)
        char* var_24_2 = arg4
        sub_4892e0("DefXML: failed to open file %s")
        int32_t eax_4
        eax_4.b = 0
        return eax_4
    
    char* esi_1 = *arg2
    var_14:4.d = 0
    int32_t var_c_1 = 0
    sub_526470(&var_14)
    int32_t var_24 = var_14.d
    uint32_t eax_1 = _fwrite(0x6081a8, 1, 1)
    
    if (eax_1 != 1)
        sub_489550(eax_1, &data_5b2591, "resultCount == len", 
            "d:\ax\trunk\ax2017\engine\xmlwriter.cpp", 0x29, "sXmlEmit")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    sub_5262e0(&var_14, esi_1)
    int32_t var_c_2 = var_c_1 + 1
    var_14:4.d = 1
    sub_526580(sub_4d7a60(arg3, &var_14), *arg2, &var_14, 1)
    sub_526470(&var_14)
    _fclose(var_14.d)
    int32_t eax_3
    eax_3.b = 1
    return eax_3
}
