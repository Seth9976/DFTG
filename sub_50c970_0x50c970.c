// 函数名称: sub_50c970
// 虚拟地址: 0x50c970
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

LRESULTsub_50c970()
{
    // 第一条实际指令: int32_t* ecx = data_1151ad8
    int32_t* ecx = data_1151ad8
    LRESULT wParam
    
    if (ecx != 0 && ecx[1] == 0x19 && sub_4981f0(ecx) != 0)
        HWND hWnd = GetDlgItem(data_1151080, 0x7b)
        wParam = SendMessageA(hWnd, 0x188, 0, 0)
        
        if (wParam != 0xffffffff)
            wParam = SendMessageA(hWnd, 0x199, wParam, 0)
            
            if (wParam != 0)
                void* eax
                eax.b = *(sub_4f0fd0(&data_626728, wParam) + 0x10) == 1
                return eax
    
    wParam.b = 0
    return wParam
}
