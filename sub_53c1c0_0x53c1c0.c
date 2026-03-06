// 函数名称: sub_53c1c0
// 虚拟地址: 0x53c1c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_53c1c0(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a2088
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* arg_4
    int32_t* ebx = arg_4
    *(data_1151ae8 + 0x24) = ebx
    HRESULT eax_5 = D3D11CreateDevice(0, D3D_DRIVER_TYPE_HARDWARE, nullptr, 
        D3D11_CREATE_DEVICE_BGRA_SUPPORT, nullptr, 0, 7, arg1 + 4, nullptr, arg1 + 8)
    
    if (eax_5 s< 0)
        HRESULT var_30_8 = eax_5
        char* var_1c
        sub_48a9d0(&var_1c, "Failed to Create DX11 Device hr=%x")
        int32_t var_8_1 = 0
        char* const edx_1 = &data_5b2591
        char* eax_17 = var_1c
        
        if (eax_17 != 0)
            edx_1 = eax_17
        
        sub_489550(eax_17, edx_1, "HaltMsg", "d:\ax\trunk\ax2017\engine\windows\windowsdx11.cpp", 
            0x60c, "Dx11GraphicsInterface::GraphicsInterfaceAttach")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t* eax_6 = *(arg1 + 4)
    int32_t* var_18
    int32_t eax_7 = (**eax_6)(eax_6, 0x60a270, &var_18)
    
    if (eax_7 s< 0)
        sub_489550(eax_7, &data_5b2591, "SUCCEEDED(hr)", 
            "d:\ax\trunk\ax2017\engine\windows\windowsdx11.cpp", 0x612, 
            "Dx11GraphicsInterface::GraphicsInterfaceAttach")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t* eax_8 = var_18
    int32_t* var_14
    int32_t eax_9 = (*(*eax_8 + 0x18))(eax_8, 0x60a260, &var_14)
    
    if (eax_9 s< 0)
        sub_489550(eax_9, &data_5b2591, "SUCCEEDED(hr)", 
            "d:\ax\trunk\ax2017\engine\windows\windowsdx11.cpp", 0x616, 
            "Dx11GraphicsInterface::GraphicsInterfaceAttach")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t* eax_10 = var_14
    int32_t eax_11 = (*(*eax_10 + 0x18))(eax_10, 0x60a250, &arg_4)
    
    if (eax_11 s< 0)
        sub_489550(eax_11, &data_5b2591, "SUCCEEDED(hr)", 
            "d:\ax\trunk\ax2017\engine\windows\windowsdx11.cpp", 0x61a, 
            "Dx11GraphicsInterface::GraphicsInterfaceAttach")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    sub_53db30(arg1, ebx, arg_4)
    int32_t* ecx_4 = arg_4
    int32_t eax_13 = (*(*ecx_4 + 0x20))(ecx_4, *(data_1151ae8 + 0x24), 2)
    
    if (eax_13 s< 0)
        sub_489550(eax_13, &data_5b2591, "SUCCEEDED(hr)", 
            "d:\ax\trunk\ax2017\engine\windows\windowsdx11.cpp", 0x61f, 
            "Dx11GraphicsInterface::GraphicsInterfaceAttach")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t* eax_14 = arg_4
    (*(*eax_14 + 8))(eax_14)
    int32_t* eax_15 = var_14
    (*(*eax_15 + 8))(eax_15)
    int32_t* eax_16 = var_18
    int32_t result = (*(*eax_16 + 8))(eax_16)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
