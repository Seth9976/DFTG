// 函数名称: sub_50c600
// 虚拟地址: 0x50c600
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_50c600(char* arg1)
{
    // 第一条实际指令: char* var_1c
    char* var_1c
    
    if (data_11510ac == 0)
        var_1c = 0x8e
        HWND hDlg = data_1151080
        data_11510ac = 1
        HWND hWnd = GetDlgItem(hDlg, var_1c)
        var_1c = zx.d(data_11510ac)
        BOOL eax
        eax, arg1 = EnableWindow(hWnd, var_1c)
    
    int32_t* edi = data_1151ad8
    
    if (edi == 0 || edi[1] != 0x19)
        return 
    
    var_1c = arg1
    int32_t* esi_1 = &data_5b2591
    sub_48a2c0(&var_1c, &data_5b2591)
    char* eax_1 = edi[8]
    char* const ecx_2 = &data_5b2591
    int32_t var_20_2 = *edi
    
    if (eax_1 != 0)
        ecx_2 = eax_1
    
    sub_506bd0(ecx_2)
    int32_t* eax_2 = edi[8]
    
    if (eax_2 != 0)
        esi_1 = eax_2
    
    var_1c = **edi
    sub_507570(esi_1)
}
