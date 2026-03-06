// 函数名称: sub_50c830
// 虚拟地址: 0x50c830
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

LRESULTsub_50c830()
{
    // 第一条实际指令: int32_t* ecx = data_1151ad8
    int32_t* ecx = data_1151ad8
    
    if (ecx != 0 && ecx[1] == 0x19 && sub_4981f0(ecx) != 0)
        HWND hWnd = GetDlgItem(data_1151080, 0x7b)
        LRESULT wParam = SendMessageA(hWnd, 0x188, 0, 0)
        
        if (wParam != 0xffffffff)
            return SendMessageA(hWnd, 0x199, wParam, 0)
    
    return 0
}
