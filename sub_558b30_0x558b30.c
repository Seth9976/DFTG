// 函数名称: sub_558b30
// 虚拟地址: 0x558b30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

LRESULTsub_558b30()
{
    // 第一条实际指令: void* ecx = data_1511868
    void* ecx = data_1511868
    LRESULT result = *(ecx + 4)
    
    if (result != 0)
        result = *(result + 0x14)
        
        if (result != 0x63 && result != 3)
            HWND hWnd = GetParent(*(ecx + 0x14))
            data_15169bc = hWnd
            data_15169c0 = GetDlgCtrlID(hWnd)
            void* eax_1 = data_1511868
            data_15169c4 = 0x42a
            LRESULT eax_2 = SendMessageA(*(eax_1 + 0x18), 0x18f, 0, *(eax_1 + 4))
            WPARAM wParam = data_15169c0
            
            if (eax_2 == 0xffffffff)
                eax_2 = 0xffffffff
            
            data_15169c8 = eax_2
            return SendMessageA(*(data_1511868 + 8), 0x4e, wParam, &data_15169bc)
    
    return result
}
