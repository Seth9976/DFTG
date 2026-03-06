// 函数名称: sub_51b030
// 虚拟地址: 0x51b030
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_51b030(char* arg1, char arg2)
{
    // 第一条实际指令: char* var_4 = arg1
    char* var_4 = arg1
    int32_t ebx
    ebx.b = arg2
    char eax = sub_510c70(arg1)
    
    if (eax == 0)
        return eax
    
    if (ebx.b != 0)
        data_1150eec = arg1
        sub_518610()
    
    int32_t* ecx_1 = data_aca1ec
    *((data_1151ac8 << 2) + &data_11518c8) = arg1
    int32_t eax_3 = data_1151ac8 + 1
    data_1151ac8 = eax_3
    data_1151acc = eax_3
    (*(*ecx_1 + 4))()
    sub_51ad40()
    void* eax_5 = data_aca1f0
    HWND hWnd = data_1150b8c
    *(eax_5 + 0x1c) = 1
    *(eax_5 + 0x28) = 0
    *(eax_5 + 0x20) = 0
    *(eax_5 + 0x24) = arg1
    SetFocus(hWnd)
    HWND eax_6
    eax_6.b = 1
    return eax_6
}
