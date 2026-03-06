// 函数名称: sub_51af60
// 虚拟地址: 0x51af60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_51af60()
{
    // 第一条实际指令: char* ecx
    char* ecx
    
    if (data_1151ac8 s> 1 && sub_510c70(ecx) != 0)
        int32_t* ecx_1 = data_aca1ec
        int32_t eax_2 = data_1151ac8 - 1
        data_1151ac8 = eax_2
        int32_t esi = (&data_11518c4)[eax_2]
        (*(*ecx_1 + 4))()
        sub_51ad40()
        void* eax_4 = data_aca1f0
        HWND hWnd = data_1150b8c
        *(eax_4 + 0x1c) = 1
        *(eax_4 + 0x28) = 0
        *(eax_4 + 0x20) = 0
        *(eax_4 + 0x24) = esi
        SetFocus(hWnd)
        HWND result
        result.b = 1
        return result
    
    return 0
}
