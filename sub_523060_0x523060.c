// 函数名称: sub_523060
// 虚拟地址: 0x523060
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOL __fastcallsub_523060(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    HWND hWnd = *(arg1 + 0xc)
    
    if (*(data_aca1ec + 0x22) == 0)
        SetWindowLongA(hWnd, 0xfffffff0, 0x10cf0000)
        enum DISP_CHANGE eax_8 = ChangeDisplaySettingsA(nullptr, 0)
        
        if (eax_8 != DISP_CHANGE_SUCCESSFUL)
            char const* const __saved_esi_2 = "Opengl failed to go back to windows mode"
            eax_8 = sub_4892e0(*(data_aca1ec + 0xc))
        
        int32_t edx = data_1511ad4
        int32_t X = data_1511acc
        
        if (edx != X)
            int32_t Y = data_1511ad0
            eax_8 =
                SetWindowPos(*(arg1 + 0xc), 0xfffffffe, X, Y, edx - X, data_1511ad8 - Y, SWP_SHOWWINDOW)
        
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return eax_8
    
    SetWindowLongA(hWnd, 0xfffffff0, 0x90080000)
    GetWindowRect(*(arg1 + 0xc), &data_1511acc)
    void devMode
    _memset(&devMode, 0, 0x9c)
    void* ecx = data_aca1ec
    int16_t var_80 = 0x9c
    int32_t var_38 = *(ecx + 0x14)
    int32_t var_34 = *(ecx + 0x18)
    int32_t var_3c = 0x20
    int32_t var_7c = 0x1c0000
    bool cond:1 = ChangeDisplaySettingsA(&devMode, CDS_FULLSCREEN) == DISP_CHANGE_SUCCESSFUL
    void* eax_6 = data_aca1ec
    
    if (not(cond:1))
        char const* const __saved_esi_1 = "Opengl failed to set full screen mode"
        sub_4892e0(*(eax_6 + 0xc))
        eax_6 = data_aca1ec
        *(eax_6 + 0x22) = 0
    
    BOOL eax_7 =
        SetWindowPos(*(arg1 + 0xc), 0xfffffffe, 0, 0, *(eax_6 + 0x14), *(eax_6 + 0x18), SWP_SHOWWINDOW)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_7
}
