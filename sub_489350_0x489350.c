// 函数名称: sub_489350
// 虚拟地址: 0x489350
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_489350(char* arg1)
{
    // 第一条实际指令: void* esi = data_a7561c
    void* esi = data_a7561c
    
    if (esi == 0)
        sub_4cf720(&data_aca0e0)
        esi = _fopen(&data_aca0e0, U"a")
        
        if (esi == 0)
            return OutputDebugStringA("Failed to open log file\n")
    
    char* ecx = arg1
    data_a7561c = esi
    void* eax
    
    do
        eax.b = *ecx
        ecx = &ecx[1]
    while (eax.b != 0)
    void* var_c = esi
    
    if (_fwrite(arg1, ecx - &ecx[1], 1) != 1)
        OutputDebugStringA("Failed to write to log file\n")
    
    return _fflush(esi)
}
