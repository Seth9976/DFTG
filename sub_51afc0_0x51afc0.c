// 函数名称: sub_51afc0
// 虚拟地址: 0x51afc0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_51afc0()
{
    // 第一条实际指令: char* ecx
    char* ecx
    
    if (data_1151ac8 != data_1151acc && sub_510c70(ecx).b != 0)
        int32_t eax_1 = data_1151ac8
        int32_t* ecx_1 = data_aca1ec
        int32_t esi = *((eax_1 << 2) + &data_11518c8)
        data_1151ac8 = eax_1 + 1
        (*(*ecx_1 + 4))()
        sub_51ad40()
        void* eax_4 = data_aca1f0
        HWND hWnd = data_1150b8c
        *(eax_4 + 0x1c) = 1
        *(eax_4 + 0x28) = 0
        *(eax_4 + 0x20) = 0
        *(eax_4 + 0x24) = esi
        SetFocus(hWnd)
        HWND eax_5
        eax_5.b = 1
        return eax_5
    
    struct _EXCEPTION_REGISTRATION_RECORD** eax
    eax.b = 0
    return eax
}
