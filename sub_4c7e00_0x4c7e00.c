// 函数名称: sub_4c7e00
// 虚拟地址: 0x4c7e00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_4c7e00(void** arg1, void* arg2)
{
    // 第一条实际指令: int32_t* var_10
    int32_t* var_10
    char* eax = sub_4c6150(arg2, &var_10)
    
    if (eax.b == 0)
        return eax
    
    int32_t ebx
    ebx.b = sub_4c7c10(eax, &var_10, arg1, arg2)
    _fclose(var_10)
    int32_t eax_2
    eax_2.b = ebx.b
    return eax_2
}
